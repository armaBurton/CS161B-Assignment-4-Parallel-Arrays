#include "helper.h"

void welcome(){
    cout << "Welcome to my Course Rosters program!!\n";
}

void readInput(char courseNums[][MAXCHAR], int students[], int &count){
    char temp[REALLY_BIG_NUMBER];
    size_t tempLength;
    bool loopState;

    cout << "Enter course number and students enrolled when prompted.\n"
         << "Enter 'Quit' or 'quit' for course number when you are done.\n";
        
    do{
        loopState = false;
        // memset(temp, '\0', sizeof(temp));
        cout << "Enter course number: ";
        // cin.get(temp, '\n');
        cin >> temp;
        cin.ignore('\n');
        tempLength = strlen(temp);

        if(tempLength > MAXCHAR){
            cout << "Input exceeds bounds.\n";
            loopState = true;
        }

        // if (tempLength > MAXCHAR){
        //     cout << "Input exceeds bounds.\n";
        // } else if (tempLength == 0){
        //     cout << "Null input.\n";
        //     cin.ignore();
        // } else {
        //     strcpy(courseNums[count], temp);
        //     cout << courseNums[count] << endl;
        //     readInt("Number of students enrolled: ", students[count]);
        //     count++;
        // }
        // memset(temp, 0, sizeof(temp));
        // cout << temp << endl;
    }while(loopState);
}

void readInt(const char prompt[], int &num){

}

void printList(char courseNums[][MAXCHAR], int students[], int count){

}

void cancelCourses(char courseNums[][MAXCHAR], int students[], int count){

}