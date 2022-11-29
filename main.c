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
    int x,y,z;
    while(ch!='D')
    {
    scanf(" %c",&ch);
    if (ch == 'A')
    {
        insert(mat);
    }
    else if (ch == 'B'){

        scanf("%d",&x);
        scanf("%d",&y);
        has_path(mat,x,y);
        printf("\n");
        
    }
    else if (ch == 'C')
    {
        scanf("%d",&x);
        scanf("%d",&y);
        printf("%d",shortest_path(mat,x,y));
        printf("\n");
    }
    }
    return 0;
}
