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
      
        cout << temp << " " << tempLength << endl;
        if(tempLength > MAXCHAR){
            cout << "Input exceeds bounds.\n";
            loopState = true;
        } else if (tempLength == 0){
            cout << "Null input.\n";
            loopState = true;
            cin.clear();
            cin.ignore();
        } else {
            strcpy(courseNums[count], temp);
            readInt("Number of student enrolled: ", students[count]);
            count++;
        }

    }while(loopState);
}

void readInt(const char prompt[], int &num){
    bool loopState;
    char temp[MAXCAPACITY];
    int counter;


    cout << prompt;
    do{
        loopState = false;
        // cin.getline(temp, MAXCAPACITY);

        cin >> num;
        if (cin.fail()){
            cout << "Data-type mismatch. Please enter a number between 0 and 25: ";
            loopState = true;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (num < 0 || num > 25){
            cout << "Input is out of bounds. Please enter a number betewen 0 and 25: ";
            loopState = true;
        }
    }while(loopState);
}

void printList(char courseNums[][MAXCHAR], int students[], int count){

}

void cancelCourses(char courseNums[][MAXCHAR], int students[], int count){

}