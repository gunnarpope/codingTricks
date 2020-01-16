// hstoi.c - Hex String To Integer
// by gunnarpope
// 1/16/20

#include <stdio.h>
#include <stdint.h>

#include "hstoi.h"

/*
 * INPUT: 	a string in the format "0xFF" or "FF"
 * OUTPUT: 	the integer representation of the string 
			
   returns -1 on error
*/
int hstoi(char str[], int len){

	char buf[len];
	int start = 0;
	int end = 0;
	int val = 0;
	
	if (str[0] == '0' & str[1] == 'x')
		start = 2;
	if (str[len-1] == '\n')
		end = 1;

	int i;
	for(i = start;i<len-end; i++){
		val = (val << 4) | ((charToHex(str[i])) & 0x00FF);
	}
    return val;
}

int charToHex(char val){
// Input is char, output is the int value 
	int hex;

	if (val >= '0' & val <='9')
		hex = val-'0';
	else if (val >= 'a' & val <= 'f')
		hex = val-'a'+10;	
	else if (val >= 'A' & val <= 'F')
		hex = val-'A'+10;
	else
		hex = 0;
	return hex ;
}

