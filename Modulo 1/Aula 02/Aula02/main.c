#include <stdio.h>
#include <stdlib.h>



int vec1a100(int* a, int* b){
    int i;
    for (i = 0; i<100; i++)
    {
        b[99-i] = i + 1;
        a[i] = i+1;
        printf("a[%d] = %d\n", i, a[i]);
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;

}



int main()
{
    int a[100];
    int b[100];
    int i;
    vec1a100(a, b);
    printf("--------------------A----------------\n");
    for(i = 0; i< 100; i++)
    {
        printf("|%d", a[i]);
    }
    printf("|\n");
    printf("--------------------B----------------\n");
    for(i = 0; i< 100; i++)
    {
        printf("|%d", b[i]);
    }
    printf("|\n");

    return 0;
}


