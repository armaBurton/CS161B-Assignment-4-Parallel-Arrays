// #pragma once
#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>
#include <cctype>
#include <stdio.h>
#include <string.h>

using namespace std;

const int MAXCHAR = 20;                 //character limit for courseNums
const int MAXCOURSE = 51;               //couse limit for courseNums
const int MAXCAPACITY = 5;              //oversized number for students per class
const int REALLY_BIG_NUMBER = 999999;   //A really big number to prevent crashing

void welcome(); //Hi
void readInput(char courseNums[][MAXCHAR], int students[], int &count); //read cstring input
void readInt(const char prompt[], int &num);    //read int input
void printList(char courseNums[][MAXCHAR], int students[], int count);  //prints lists in prallel
void cancelCourses(char courseNums[][MAXCHAR], int students[], int &count); //edits lists in parallel
