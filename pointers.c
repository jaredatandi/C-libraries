#include <stdio.h>


typedef struct 
{
    int length;
    int width;
}rectangle;

typedef struct position
{
    int x;
    int y;
}position;

typedef struct building
{
    rectangle rectangle;
    char owner;
    position position;

}building;

int main()
{
    rectangle myRec = {6, 99};
    printf("Length: %d. Width: %d\n", myRec.length, myRec.width);

    
    return 0;
}