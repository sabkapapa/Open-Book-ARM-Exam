#include "stm32f4xx.h"
#include <string.h>
#include<stdio.h>
void printMsg(const int a, int b, int c, int d)
{
	 char Msg[100];
	 char *ptr;
	 sprintf(Msg, "%f", *((float*)&a));
	 ptr = Msg ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
	 ITM_SendChar(',');
	 
	 sprintf(Msg, "%f", *((float*)&b));
	 ptr = Msg ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
	ITM_SendChar(',');
	 
	 
	 
	 sprintf(Msg, "%f", *((float*)&c));
	 ptr = Msg ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
	 }
	 ITM_SendChar(',');
	 
	 sprintf(Msg, "%f", *((float*)&d));
	 ptr = Msg ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
	 }
	 ITM_SendChar('\n');
}
