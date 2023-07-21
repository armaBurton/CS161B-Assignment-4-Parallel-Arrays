#include "helper.h"

void welcome(){
    cout << "Welcome to my Course Rosters program!!\n";
}

void readInput(char courseNums[][MAXCHAR], int students[], int &count){
    char temp[MAXCHAR];
    size_t tempLength;

    cout << "Enter course number and students enrolled when prompted.\n"
         << "Enter 'Quit' or 'quit' for course number when you are done.\n";
        
    do{
        cin >> temp;
        cout << temp << endl;
    }while(strcmp(temp, "quit") != 0 && strcmp(temp, "Quit") != 0);
}

void readInt(const char prompt[], int &num){

}

void printList(char courseNums[][MAXCHAR], int students[], int count){

}

void cancelCourses(char courseNums[][MAXCHAR], int students[], int count){

}