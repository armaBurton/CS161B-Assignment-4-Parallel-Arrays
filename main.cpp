#include "helper.h"

int main()
{
    char courseNums[MAXCOURSE][MAXCHAR];
    int students[MAXCAPACITY];
    int count {};

    welcome();
    readInput(courseNums, students, count);

    cout << "List of course and students:\n";
    printList(courseNums, students, count);

    return 0;
}
