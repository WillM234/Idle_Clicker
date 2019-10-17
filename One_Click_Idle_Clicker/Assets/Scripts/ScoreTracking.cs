using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ScoreTracking : MonoBehaviour
{
//score tracking texts//
public Text payableScore;
public Text ClicksPerSecond;
public Text MClickPerClick;
//Floats for adding to score//
public float totalscore;
public float totalMClicks;
public float addMClicks;
public float addIClicks;
public float manualClicks;
public float idleClicksPerSec;
public float timer = 1;
//texts for cost of updrade//
public Text OnClick1Cost;
public Text OnClick5Cost;
public Text OnClick10Cost;
public Text OnClick100Cost;
public Text IClick1Cost;
public Text IClick5Cost;
public Text IClick10Cost;
public Text IClick100Cost;
public Text IClick500Cost;
public Text IClick1000Cost;
//floats for cost of upgrade//
public float onClick1Cost;
public float onClick5Cost;
public float onClick10Cost;
public float onClick100Cost;
public float iClick1Cost;
public float iClick5Cost;
public float iClick10Cost;
public float iClick100Cost;
public float iClick500Cost;
public float iClick1000Cost;
//Level floats of upgrades
public float oC1Level;
public float oC5Level;
public float oC10Level;
public float oC100Level;
public float iC1Level;
public float iC5Level;
public float iC10Level;
public float iC100Level;
public float iC500Level;
public float iC1000Level;
void Start()
{
addIClicks = 0f;
addMClicks = 1f;
//starting levels for 
    oC1Level = 1f;
    oC5Level = 0f;
    oC10Level = 0f;
    oC100Level = 0f;
    iC1Level = 0f;
    iC5Level = 0f;
    iC10Level = 0f;
    iC100Level = 0f;
    iC500Level = 0f;
    iC1000Level = 0f;
//starting costs for everything
onClick5Cost = 100f;
onClick10Cost = 500f;
onClick100Cost = 1000f;
iClick1Cost = 75f;
iClick5Cost = 250f;
iClick10Cost = 400f;
iClick100Cost = 1500f;
iClick500Cost = 4000f;
iClick1000Cost = 9000f;
}
public void MainButtonClick()
{
totalMClicks = manualClicks;
totalscore += totalMClicks;//adds score per manual click
}
public void OnClick1()//adds 1 point per manual click
{
if(totalscore >= onClick1Cost)
    {
    addMClicks += 1f;
    totalscore -= onClick1Cost;
    oC1Level += 1f;
    }
}
public void OnClick5()//adds 5 point per manual click
{
if(totalscore >= onClick5Cost)
    {
    addMClicks += 5f;
    totalscore -= onClick5Cost;
    oC5Level += 1f;
    }
}
public void OnClick10()//adds 10 point per manual click
{
if(totalscore >= onClick10Cost)
    {
    addMClicks += 10f;
    totalscore -= onClick10Cost;
    oC10Level += 1f;
    }
}
public void OnClick100()//adds 100 point per manual click
{
if(totalscore >= onClick100Cost)
    {
    addMClicks += 100f;
    totalscore -= onClick100Cost;
    oC100Level += 1f;
    }
}
public void IClick1()//adds 1 Click per sec on idle clicker
{
if(totalscore >= iClick1Cost)
    {
    addIClicks += 1f;
    totalscore -= iClick1Cost;
    iC1Level += 1f;
    }
}
public void IClick5()//adds 5 Click per sec on idle clicker
{
if(totalscore >= iClick5Cost)
    {
    addIClicks += 5f;
    totalscore -= iClick5Cost;
    iC5Level += 1f;
    }
}
public void IClicks10()//adds 10 Click per sec on idle clicker
{
if(totalscore >= iClick10Cost)
    {
    addIClicks += 10f;
    totalscore -= iClick10Cost;
    iC10Level += 1f;
    }
}
public void IClicks100()//adds 100 Click per sec on idle clicker
{
if(totalscore >= iClick100Cost)
    {
    addIClicks += 100f;
    totalscore -= iClick100Cost;
    iC100Level += 1f;
    }


}
public void IClicks500()//adds 500 Click per sec on idle clicker
{
if(totalscore >= iClick500Cost)
    {
    addIClicks += 500f;
    totalscore -= iClick500Cost;
    iC500Level += 1f;
    }
}
public void IClicks1000()//adds 1000 Click per sec on idle clicker
{
if(totalscore >= iClick1000Cost)
    {
    addIClicks += 1000f;
    totalscore -= iClick1000Cost;
    iC1000Level += 1f;
    }
}
public void ReSet()//resets whole game including costs and upgrade levels would be replaced with prestiege stuff if had time 
{
addIClicks = 0f;
addMClicks = 1f;
    oC1Level = 1f;
    oC5Level = 0f;
    oC10Level = 0f;
    oC100Level = 0f;
    iC1Level = 0f;
    iC5Level = 0f;
    iC10Level = 0f;
    iC100Level = 0f;
    iC500Level = 0f;
    iC1000Level = 0f;
totalscore = 0f;

}
void Update()
{
manualClicks = addMClicks;
    timer -= Time.deltaTime;//sets timer to degrodate per sec.
    idleClicksPerSec = addIClicks * 1f;
   
if(timer <= 0)
{
 totalscore += idleClicksPerSec;//adds idle increase per sec.
 timer = 1;
}

payableScore.text = ("Score: " + totalscore);//updates score 
ClicksPerSecond.text = ("Clicks Per Second: " + idleClicksPerSec);//updates C/s
MClickPerClick.text = ("Points Per Manual Click: " + totalMClicks);
//sets float for upgrade cost if levels are above 0.//
onClick1Cost = (oC1Level * 5f)*5f;

if(oC5Level > 0f)
    {
    onClick5Cost = (oC5Level* 25f)*5f;
    }
if(oC10Level > 0f)
    {
    onClick10Cost = (oC10Level * 50f)*10f;
    }
if(oC100Level > 0f)
    {
    onClick100Cost = (oC100Level*100f)*10f;
    }
if(iC1Level > 0f)
    {
    iClick1Cost = (iC1Level * 5f)*10f;
    }
if(iC5Level > 0f)
    {
    iClick5Cost = (iC5Level * 10f)*10f;
    }
if(iC10Level > 0f)
    {
    iClick10Cost = (iC10Level * 20f)*10f;
    }
if(iC100Level > 0f)
    {
    iClick100Cost = (iC100Level * 200f)*10f;
    }
if(iC500Level > 0f)
    {
    iClick500Cost = (iC500Level * 500f)*10f;
    }
if(iC1000Level > 0f)
    {
    iClick1000Cost = (iC1000Level * 1000f)*10f;
    }
//sets text for Cost of upgrade
OnClick1Cost.text = (" " + onClick1Cost);
OnClick5Cost.text = (" " + onClick5Cost);
OnClick10Cost.text = (" " + onClick10Cost);
OnClick100Cost.text = (" " + onClick100Cost);
IClick1Cost.text = (" " + iClick1Cost);
IClick5Cost.text = (" " + iClick5Cost);
IClick10Cost.text = (" " + iClick10Cost);
IClick100Cost.text = (" " + iClick100Cost);
IClick500Cost.text = (" " + iClick500Cost);
IClick1000Cost.text = (" " + iClick1000Cost);
}
}
