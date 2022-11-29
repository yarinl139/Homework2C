#include "stdio.h"
#include "my_mat.h"
#define INT_MAX 999999




int main()
{
    int mat[10][10];
    char ch;
    int x,y;
    while(ch!='D')
    {
    scanf("%c",&ch);
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
