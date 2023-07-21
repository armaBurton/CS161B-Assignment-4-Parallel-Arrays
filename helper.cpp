#include "helper.h"

void welcome(){
    cout << "Welcome to my Course Rosters program!!\n";
}

void readInput(char courseNums[][MAXCHAR], int students[], int &count){
    char temp[REALLY_BIG_NUMBER];
    size_t tempLength;
    bool loopState, isEmpty;

    cout << "Enter course number and students enrolled when prompted.\n"
         << "Enter 'Quit' or 'quit' for course number when you are done.\n";

  
    do{
        loopState = false;
        cout << "Enter course number: ";
        cin.get(temp, REALLY_BIG_NUMBER);
        tempLength = strlen(temp);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (size_t i = 0; i < tempLength; ++i){
            if (!isspace(static_cast<unsigned char>(temp[i]))){
                isEmpty = true;
            }
        }
      
        cout << temp << " " << tempLength << endl;
        if(tempLength > MAXCHAR){
            cout << "Input exceeds bounds.\n";
            loopState = true;
        } else if (tempLength == 0){
            cout << "Null input.\n";
            loopState = true;
            cin.clear();
            cin.ignore();
        }

    }while(loopState);
}

void readInt(const char prompt[], int &num){

}

void printList(char courseNums[][MAXCHAR], int students[], int count){

}

void cancelCourses(char courseNums[][MAXCHAR], int students[], int count){

}