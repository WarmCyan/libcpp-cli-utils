//*************************************************************
//  File: AsciiTest.cpp
//  Date created: 7/15/2017
//  Date edited: 7/15/2017
//  Author: Nathan Martindale
//  Copyright © 2017 Digital Warrior Labs
//  Description: make sure ascii symbols are working correctly
//*************************************************************

#include <iostream>

using namespace std;

int main()
{
	for (unsigned char i = 128; i < 255; i++)
	{
		cout << i << endl;
	}
	
	return 0;
}
