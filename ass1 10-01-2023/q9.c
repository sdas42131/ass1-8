// Write a program to double the second last digit
#include<stdio.h>
int main(){
	int num, del, new_num;
	printf("Enter the number: ");
	scanf("%d",&num);
	new_num = (num/100)*100 + ((num%100)/10)*2*10 + num%10;
	printf("Number after  doubling 2nd last digit: %d", new_num);
	
}