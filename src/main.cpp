* Simple class vector which calculated length of specified vector 
*/ 

/*! 
* libraries 
*/ 
#include "stdafx.h" 
#include <iostream> 
/*! 
* namespace 
*/ 
using namespace std; 
/*! 
* advert class 
*/ 
class vector 
{ 
public: 
int n; 
/*!< advert of first coordinate of our vector */ 
int m; 
/*!< advert of second coordinate of our vector */ 
vector(int _n, int _m) :n(_n), m(_m) 
{} 
/*!< constructor of this class */ 
int length() 
{ 
return (n*n + m*m); 
} 
/*!< create method of count length */ 
void print() 
{ 
cout « length() « endl; 
} 

/*!< printing result */ 

/*! 
* destructor of class 
*/ 
~vector() 
{ 
} 

/*! 
* main function 
*/ 
}; 
int main() 
{ 
/*! 
* creating object 
*/ 
vector v1(5, 7); 
v1.print(); 
system("pause"); 
return 0; 
}