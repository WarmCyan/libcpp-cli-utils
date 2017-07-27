//*************************************************************
//  File: ProgressBarTest.cpp
//  Date created: 7/15/2017
//  Date edited: 7/15/2017
//  Author: Nathan Martindale
//  Copyright © 2017 Digital Warrior Labs
//  Description: 
//*************************************************************

#include "ProgressBar.h"

#include <chrono>
#include <thread>

using namespace std;
using namespace dwl;

int main()
{
	ProgressBar* pBar = new ProgressBar(20000000, 80);

	for (int i = 0; i <= 20000000; i++)
	{
		pBar->Update(i);
		//std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	pBar->Finish();
	
	return 0;
}
