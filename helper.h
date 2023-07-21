// #pragma once
#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>
#include <cctype>
#include <stdio.h>
#include <string.h>

using namespace std;

const int MAXCHAR = 20;
const int MAXCOURSE = 51;
const int MAXCAPACITY = 5;
const int REALLY_BIG_NUMBER = 999999;

void welcome();
void readInput(char courseNums[][MAXCHAR], int students[], int &count);
void readInt(const char prompt[], int &num);
void printList(char courseNums[][MAXCHAR], int students[], int count);
void cancelCourses(char courseNums[][MAXCHAR], int students[], int &count);
