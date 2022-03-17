#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;
	
	month = 2;
	day = 29;
	year = 2000;
	
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	
	day = convert_day(month, day);
	print_remaining_days(month, day, year);
	
	month = 2;
	day = 29;
	year = 1991;
	
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	
	day = convert_day(month, day);
	
	print_remaining_days(month, day, year);
	
	month = 2;
	day = 29;
	year = 2047;
	
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	
	day = convert_day(month, day);
	
	print_remaining_days(month, day, year);
	
	month = 3;
	day = 01;
	year = 2000;
	
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	
	day = convert_day(month, day);
	
	print_remaining_days(month, day, year);
	
	month = 4;
	day = 01;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	
	day = convert_day(month, day);
	
	print_remaining_days(month, day, year);
	
	return (0);
}
