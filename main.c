#include "stdio.h"
#include "my_mat.h"
#define INT_MAX 999999


void init(int mat[10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
          mat[i][j] = 0;
        }
    }
}


int main()
{
    int mat[10][10];
    init(mat);
    char ch;
    int x,y;
    while(ch!='D')
    {
    if(scanf(" %c",&ch)!=EOF)
    {
    if (ch == 'A')
    {
        insert(mat);
    }
    else if (ch == 'B'){

        if(scanf("%d",&x)!=EOF && scanf("%d",&y) !=EOF)
        {
        has_path(mat,x,y);
        printf("\n");
        }
    }
    else if (ch == 'C')
    {
        if(scanf("%d",&x)!=EOF && scanf("%d",&y) !=EOF)
        {
        printf("%d",shortest_path(mat,x,y));
        printf("\n");
        }
    }
    }
    }
    return 0;
}