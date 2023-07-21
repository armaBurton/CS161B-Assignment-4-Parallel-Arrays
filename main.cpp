#include "helper.h"

int main()
{
    char courseNums[MAXCOURSE][MAXCHAR];
    int students[MAXCAPACITY];
    int count {};

    welcome();
    readInput(courseNums, students, count);

    cout << "\nList of courses and students:\n";
    printList(courseNums, students, count);

    cout << "\nList of courses after cancellations:\n";
    cancelCourses(courseNums, students, count);
    printList(courseNums, students, count);

    return 0;
}
