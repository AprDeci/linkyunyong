#include<stdio.h>
#include<stdlib.h>
#include"creat.h"
#include"output.h"
#include"delint.h"
int main()
{
	struct Student *a;
	a = creat();
	print(a);
	del(a, 1);
	insert(a, 1,1,50);
}