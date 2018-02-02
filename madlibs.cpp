//Authors: Rashed Alnuaimi 
#include <iostream>
#include <string>

int main()
{

int x;
char y;
std::string z;
std::string a;

std::cout<<"Enter the number of minutes: ";
std::cin>> x;
std::cout<<"Enter the deserved grade: ";
std::cin>> y;
std::cout<<"Enter the name of the student: ";
std::cin>> z;
std::cout<<"Enter the name of the student's car: ";
std::cin>> a;

std::cout<<"One morning," << z << " entered the class and he was unfortuantly late by " << x << " minutes. The instructor was so mad that he graded " << z << "'s work with a " << y << " grade. He was pretty upset with it. " << z << " got out of the class and closed the door heavily that it made a really loud noise. he went to the parking lot and got into his car which was a " << a << ", It was a really cool car with a pink paint job. He drove out of the parking lot and immediantly crashed into a police car! Bad luck mate. He was taken to the police station for speeding in the parking lot and he was later released."<<std::endl;


  return 0;
}
