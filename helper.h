// #pragma once
#include <iostream>
#include <iomanip>

using namespace std;

const int MAXCHAR = 20;
const int MAXCOURSE = 51;

void welcome();
void readInpu(char courseNums[MAXCHAR], int students[], int &count);
void readInt(const char prompt[], int &num);
void printList(char courseNums[][MAXCHAR], int students[], int count);
void cancelCourses(char courseNums[][MAXCHAR], int students[], int count);
