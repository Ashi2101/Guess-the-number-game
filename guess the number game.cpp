#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//guess the number game
int main()
{
int number,guess,n=1;
srand(time(0));
//rand%100 so that remainder is upto 100 so number is between 1 to 100
number=rand()%100+1;
//printf("the number is %d\n",number);
//Keep running the loop until the number is guessed
do{
	printf("Guess the number 1 to 100\n");
	scanf("%d",&guess);
	if(guess>number)
	{
		printf("please enter lower number\n");
	}
	else if(guess<number)
	{
		printf("please enter higher number\n");
	}
	else
	{
		printf("you guessed in %d attempt",n);
	}
	n++;
}
while(guess!=number);
return 0;
}
