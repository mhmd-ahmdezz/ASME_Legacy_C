#include <stdio.h>
#include <stdlib.h>

#define pi 3.14159

typedef struct
{
    float raduis;
}circle;
typedef struct
{
    float length;
}square;
typedef struct
{
    float length;
    float width;
}rectangle;
typedef struct
{
    float base;
    float height;
}triangle;
double getAreaCircle(circle *ptr)
{
    return ptr->raduis*ptr->raduis*pi;
}
double getAreaSquare(square *ptr)
{
    return ptr->length*ptr->length;
}
double getAreaRectangle(rectangle *ptr)
{
    return ptr->length*ptr->width;
}
double getAreaTriangle(triangle *ptr)
{
    return ptr->base*ptr->height;
}
void main(void)
{
    circle r1;
    rectangle rec1;
    square sq1={10};
    triangle tr1;
    double area=getAreaSquare(&sq1);
    printf("Area : %lf",area);
}
