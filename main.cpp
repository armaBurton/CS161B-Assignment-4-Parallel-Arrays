#include "helper.h"

int main()
{
    char courseNums[MAXCOURSE][MAXCHAR];
    int students[MAXCAPACITY];
    int count {};

    welcome();
    readInput(courseNums, students, count);

    return 0;
}
