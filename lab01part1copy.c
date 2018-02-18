/* Name: Seth John
   Pawprint: scjc68
   ECE 3220 Lab 1
   Date: 01/22/2018
   Monday Lab Section Part 1*/
   
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>       // needed to use pow
#include<ctype.h>

#define PI 3.14

int main (void) 
{
	float input=0;        // radius entered
	float result=0;      // integer result for case one 

	printf("\n Please enter a value you want as the radius for calculating the area of a circle: ");
	scanf("%f", &input);
	
	//result = PI*(long)pow(input, 2);                                  //First way of how I did it but was a little less accurate
	if(input>=0)
	{
		result = PI * input * input;
		printf("\n The area of your circle is %.3f \n\n", result);          //Displays answer to three decimal places
	}
	else
	{
		printf("\n The radius you have entered is in the wrong format.  Program Terminated. \n\n");
	}
	
	return 0;
}