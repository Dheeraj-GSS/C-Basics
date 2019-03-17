/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
#include<iostream>
#include<string.h>
using namespace std;

int isOlder(char *dob1, char *dob2) 
{
	int i, bday1=0, bday2=0;
	if(strcmp(dob1, dob2) == 0){
		return 0;
	}
	for(i=0; dob1[i]!='\0'; i++)
	{
		if(dob1[i] == '-' || dob2[i] == '-')
		{
			continue;
		}
		if(dob1[i] == dob2[i])
		{
			continue;
		}
		if(dob1[i] > dob2[i]){
			bday1++;
		}
		else{
			bday2++;
		}
	}
	if(bday1 > bday2)
	{
		return 1;
	}
	else {
		return 2;
	}
	

}

int main()
{
	char dob1[11], dob2[11];
	cout << "Enter two dates in dd-mm-yy format: " << endl;
	cin >> dob1 >> dob2;
	cout << "1 means first date is greater." << endl << "2 means second date is greater." << endl << "3 means equal" << endl << "Answer is: " << isOlder(dob1, dob2) << endl; 
}
