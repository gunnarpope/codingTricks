#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#include "hstoi.h"
#include "helloWorld.h"


int hstoi(char str[], int len);
// extern void helloWorld();

int main(){
	helloWorld();

	//testing function (works)
    char hex_string[] = "1af";
	printf("Testing hstoi() function\r\n");
    printf("Input String=%s\r\n", hex_string);
    printf("Hex: 0x%x\r\n", hstoi(hex_string, strlen(hex_string)));
    printf("Int: %i\r\n", hstoi(hex_string, strlen(hex_string)));

	//testing function (works)
    char hex_string1[] = "1af";
	printf("Testing hstoi() function\r\n");
    printf("Input String=%s\r\n", hex_string1);
    printf("Hex: 0x%x\r\n", hstoi(hex_string1, strlen(hex_string1)));
    printf("Int: %i\r\n", hstoi(hex_string1, strlen(hex_string1)));

	//testing function (works)
    char hex_string2[] = "0x1AF";
    printf("Input String=%s\r\n", hex_string2);
    printf("Hex: 0x%x\r\n", hstoi(hex_string2, strlen(hex_string2)));
    printf("Int: %i\r\n", hstoi(hex_string2, strlen(hex_string2)));

	// (error)
	char hex_string4[4] = {};
	hex_string4[0] = '1';
	hex_string4[1] = 'a';
	hex_string4[2] = 'f';
	hex_string4[3] = '\n';


    printf("Input String4=%s\r\n", hex_string4);
    printf("Hex: 0x%x\r\n", hstoi(hex_string4, strlen(hex_string4) & 0x0FFF));
    printf("Int: %i\r\n", hstoi(hex_string4, strlen(hex_string4)));


	//error! doesn't work
    char hex_string3[] = {'1','a','F'};
    printf("Input String=%s\r\n", hex_string3);
    printf("Hex: 0x%x\r\n", hstoi(hex_string3, strlen(hex_string3)));
    printf("Int: %i\r\n", hstoi(hex_string3, strlen(hex_string3)));


	return 0;
}
// Hello World
// x: 2
// Hello World
// x: 1
// Hello World
// x: 0
// Testing hstoi() function
// Input String=1af
// Hex: 0x1af
// Int: 431
// Testing hstoi() function
// Input String=1af
// Hex: 0x1af
// Int: 431
// Input String=0x1AF
// Hex: 0x1af
// Int: 431
// Input String4=1af
// 0x1AF
// Hex: 0xaf0001af
// Int: -1358954065
// Input String=1aF1af
// Hex: 0x1af1af
// Int: 1765807
// 
