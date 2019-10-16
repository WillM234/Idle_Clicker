using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ScoreTracking : MonoBehaviour
{
//score tracking texts//
public Text payableScore;
public Text ClicksPerSecond;
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
public float OnClick1Cost;
public float OnClick5Cost;
public float OnClick10Cost;
public float OnClick100Cost;
public float IClick1Cost;
public float IClick5Cost;
public float IClick10Cost;
public float IClick100Cost;
public float IClick500Cost;
public float IClick1000Cost;

void Start()
{
    addIClicks = 0f;
    addMClicks = 1f;
}
public void MainButtonClick()
{
totalMClicks = manualClicks;
totalscore += totalMClicks;//adds score per manual click
}
public void OnClick1()//adds 1 point per manual click
{
addMClicks += 1f;
}
public void OnClick5()//adds 5 point per manual click
{
addMClicks += 5f;
}
public void OnClick10()//adds 10 point per manual click
{
addMClicks += 10f;
}
public void OnClick100()//adds 100 point per manual click
{
addMClicks += 100f;
}
public void IClick1()//adds 1 Click per sec on idle clicker
{
addIClicks += 1f;
}
public void IClick5()//adds 5 Click per sec on idle clicker
{
addIClicks += 5f;
}
public void IClicks10()//adds 10 Click per sec on idle clicker
{
addIClicks += 10f;
}
public void IClicks100()//adds 100 Click per sec on idle clicker
{
addIClicks += 100f;
}
public void IClicks500()//adds 500 Click per sec on idle clicker
{
addIClicks += 500f;
}
public void IClicks1000()//adds 1000 Click per sec on idle clicker
{
addIClicks += 1000f;
}
public void ReSet()
{
addIClicks = 0f;
addMClicks = 1f;
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

payableScore.text = ("Score: " + totalscore);
ClicksPerSecond.text = ("Clicks Per Second: " + idleClicksPerSec);
}
}
