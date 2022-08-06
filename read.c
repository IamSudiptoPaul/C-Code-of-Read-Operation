#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE *f;
    //fie name = data
    f = fopen ("data.txt","r");
    for (int s = 97; s<=100; s++)
    {
        fputc (s,f);
    }
    
    int d;
    d = fgetc (f);
    printf ("Character is: %c",d);
    
    fclose(f);
    return 0;
}

