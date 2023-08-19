#include "helper.h"

// Name:   welcome()
// Desc:   This function displays the welcome prompt
// input:  None
// output: prompt
// return: void
void welcome()
{
    cout << "Welcome to my Course Rosters program!!\n";
}

// Name:   readInput()
/*Desc:   This function reads data from the user the first input is a
          cstring and stores the length in the tempLength variable
          if temp is == to 'quit' or 'Quit' loopstate is set to false, and
          the program exits.

          If tempLength > MAXCHAR user is notified and loopState is set to true
          If tempLength = 0 user is notified and loopState is set to true
          ELSE
          copy temp into the current index of courseNums[] then
          call readInt
          increment count, increment limit
          use limit to stop do/while loop when limit == MAXCOURSE
*/
// input:  char
// output: prompt
// return: void
void readInput(char courseNums[][MAXCHAR], int students[], int &count)
{
    char temp[REALLY_BIG_NUMBER];
    size_t tempLength;
    bool loopState, isEmpty;
    int limit{};

    cout << "Enter course number and students enrolled when prompted.\n"
         << "Enter 'Quit' or 'quit' for course number when you are done.\n";

    do
    {
        loopState = true;
        cout << "Enter course number: ";
        cin.get(temp, REALLY_BIG_NUMBER);
        tempLength = strlen(temp);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (!strcmp(temp, "quit") || !strcmp(temp, "Quit"))
        {
            loopState = false;
        }
        else if (tempLength > MAXCHAR)
        {
            cout << "Input exceeds bounds.\n";
            loopState = true;
        }
        else if (tempLength == 0)
        {
            cout << "Null input.\n";
            loopState = true;
            cin.clear();
            cin.ignore();
        }
        else
        {
            strcpy(courseNums[count], temp);
            readInt("Number of student enrolled: ", students[count]);
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count - i; j++)
                {
                    if (strcmp(courseNums[j], courseNums[j + 1]) > 0)
                    {
                        char tempCourse[REALLY_BIG_NUMBER];
                        strcpy(tempCourse, courseNums[j]);
                        int tempStudent = students[j];
                        strcpy(courseNums[j], courseNums[j + 1]);
                        students[j] = students[j + 1];
                        strcpy(courseNums[j + 1], tempCourse);
                        students[j] = tempStudent;
                    }
                }
            }
            count++;
        }
        limit++;
    } while (loopState && limit < MAXCOURSE);
}

// Name:   readInt()
/*Desc:   This function reads in integer from the user
          If cin.fail() user is notified and loopState is set to true
          input stream is cleared and remaining characters are ignored.
          If num < 0 or > 25 User is notified and loopState is set to true
*/
// input:  int
// output: prompt
// return: void
void readInt(const char prompt[], int &num)
{
    bool loopState;
    char temp[MAXCAPACITY];
    int counter;

    cout << prompt;
    do
    {
        loopState = false;

        cin >> num;
        if (cin.fail())
        {
            cout << "Data-type mismatch. Please enter a number between 0 and 25: ";
            loopState = true;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (num < 0 || num > 25)
        {
            cout << "Input is out of bounds. Please enter a number betewen 0 and 25: ";
            loopState = true;
        }
        cin.ignore();
    } while (loopState);
}

// Name:   printList()
// Desc:   This function displays the courseNums[] and students[] lists in parallel
// input:  None
// output: prompt
// return: void
void printList(char courseNums[][MAXCHAR], int students[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << courseNums[i] << '\t' << students[i] << endl;
    }
}

// Name:   cancelCourses()
/*Desc:   This function loops through the students[] list and if an index is < 10
          it removes it from the list as well as removing the corrisponding index
          from courseNums[].
          It then decrements count.
*/
// input:  None
// output: none
// return: void
void cancelCourses(char courseNums[][MAXCHAR], int students[], int &count)
{
    for (int i = 0; i < count; i++)
    {
        if (students[i] < 10)
        {
            for (int j = i; j < count; j++)
            {
                students[j] = students[j + 1];
                strcpy(courseNums[j], courseNums[j + 1]);
            }
            --count;
            i--;
        }
    }
}