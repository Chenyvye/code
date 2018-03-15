#include<stdio.h>

int main(void)
{
    int i,j,k,direction;
    int m,n,x,y;
    int p,q;
    char c;
    int a[101][101];
    scanf("%d %d",&m,&n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d %c %d",&x,&y,&c,&k);
    switch(c)
    {
    case('U'):
        direction=1;break;
    case('R'):
        direction=2;break;
    case('D'):
        direction=3;break;
    case('L'):
        direction=4;break;
    }
    for (i=0;i<k;i++)
    {
        if (a[x][y]==0)
        {
            a[x][y]=1;direction--;
            if (direction==0) direction=4;
            switch(direction)
            {
            case(1):
                if (x!=0) x--;break;
            case(2):
                if (y!=n-1) y++;break;
            case(3):
                if (x!=m-1) x++;break;
            case(4):
                if (y!=0) y--;break;
            }
        }
        else
        {
            a[x][y]=0;direction++;
            if (direction==5) direction=1;
            switch(direction)
            {
            case(1):
                if (x!=0) x--;break;
            case(2):
                if (y!=n-1) y++;break;
            case(3):
                if (x!=m-1) x++;break;
            case(4):
                if (y!=0) y--;break;
            }
        }
    }
    printf("%d %d",x,y);
    return 0;
}
