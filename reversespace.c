#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void itoa(int n, char s[] ,int b);
void reverse(char s[]);


void main(){

	int n;
	char s[100];

	n = -32456;

	printf("orgin n : %d\n",n );
	itoa( n, s , 10);
	printf("after s : %s\n",s );



}

void itoa(int n, char s[], int w)
{

	int i, sign;

	void reverse(char s[]);

	sign = n;

	i = 0;

	do{
		s[i++] = abs(n % 10) + '0';

	}while((n /= 10) != 0);

	if (sign < 0)
	{
		s[i++] = '-';
	}
	while(i < w)
		s[i++] = ' ';
	s[i] = '\0';
	reverse(s);



}


void reverse(char s[]){

	int c , i, j;

	for (i = 0 , j = strlen(s) - 1; i < j; i++ , j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;


	}




}
