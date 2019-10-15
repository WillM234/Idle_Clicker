using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ScoreTracking : MonoBehaviour
{
public Text payableScore;
public Text ClicksPerSecond;

public float totalscore;
public float addMClicks;
public float addIClicks;
public float manualClicks;
public float idleClicksPerSec;
public float timer = 1;


void Start()
{
    addIClicks = 0f;
    addMClicks = 1f;
}
public void MainButtonClick()
{
manualClicks = addMClicks * 1f;
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

}
void Update()
{
    timer -= Time.deltaTime;
    idleClicksPerSec = addIClicks * 1f;

    totalscore = manualClicks;// + (idleClicksPerSec++);
   
if(timer <= 0)
{
 totalscore += idleClicksPerSec;
 timer = 1;
}

payableScore.text = ("Score: " + totalscore);
}
void FixedUpdate()
{

}
}
