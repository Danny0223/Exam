#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 50

void promptSides(int arr1[SIZE]={0});
void promptNumRoll(int arr1[SIZE]);
void rollDie(int arr1[SIZE]);
void printer(int arr[SIZE]);

int main(void)
{
	int arr[SIZE]={0};
	promptSide(arr);
	promptNumRoll(arr);
	rollDie(arr);
	printer(arr);
}

void promptSides(int arr1[SIZE]={0})
{
	int i;
	printf("Enter the number of sides you would like the dice to have, no more than 20");
	scanf("%d",i);
}

void promptNumRoll(int arr1[SIZE])
{
	int y;
	printf("How many times would you like the roll the die?");
	scanf("%d",y);
}

void rollDie(int x,int y)
{
	int y=0;
	int i=0;
	for(i=0;i<SIZE;i++);
	{
		y=rand()%20+1;
		arr1[SIZE]=y;
	}
}

void printer(int arr[SIZE])
{
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		printf("%d=%d\n",i,arr[i]);
	}
}
