//
//  main.c
//  homework_4
//
//  Created by Тищенко Виталий Викторович on 08/10/2018.
//  Copyright © 2018 Тищенко Виталий Викторович. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int lcs_length ( char * A , char * B)
{
    if (* A == '\0' || * B == '\0' ) return 0;
    else if (* A == * B ) return 1 + lcs_length ( A + 1 , B + 1 );
    else return MAX( lcs_length ( A + 1 , B ), lcs_length ( A , B + 1 ));
}

int checkStep(int x, int y, int a[8][8])
{
    int t=0;
    if(x>0 && y>1 && a[x-1][y-2]==0) t++;
    if(x>0 && y<6 && a[x-1][y+2]==0) t++;
    if(x>1 && y>0 && a[x-2][y-1]==0) t++;
    if(x>1 && y<7 && a[x-2][y+1]==0) t++;
    if(x<7 && y>1 && a[x+1][y-2]==0) t++;
    if(x<7 && y<6 && a[x+1][y+2]==0) t++;
    if(x<6 && y>0 && a[x+2][y-1]==0) t++;
    if(x<6 && y<7 && a[x+2][y+1]==0) t++;
    return t;
}

void Chess()
{
    
    int a[8][8]={0}, i, j, summ=0, x, y, tmp, tmp1;
    x=5; x--;
    y=5; y--;
    while(summ<64)
    {
        summ++;
        a[x][y]=summ;
        tmp=9;
        if(x>0 && y>1 && a[x-1][y-2]==0)
        {
            tmp1=checkStep(x-1, y-2, a);
            if(tmp1<tmp){i=x-1; j=y-2; tmp=tmp1;}
        }
        if(x>0 && y<6 && a[x-1][y+2]==0)
        {
            tmp1=checkStep(x-1, y+2, a);
            if(tmp1<tmp){i=x-1; j=y+2; tmp=tmp1;}
        }
        if(x>1 && y>0 && a[x-2][y-1]==0)
        {
            tmp1=checkStep(x-2, y-1, a);
            if(tmp1<tmp){i=x-2; j=y-1; tmp=tmp1;}
        }
        if(x>1 && y<7 && a[x-2][y+1]==0)
        {
            tmp1=checkStep(x-2, y+1, a);
            if(tmp1<tmp){i=x-2; j=y+1; tmp=tmp1;}
        }
        if(x<7 && y>1 && a[x+1][y-2]==0)
        {
            tmp1=checkStep(x+1, y-2, a);
            if(tmp1<tmp){i=x+1; j=y-2; tmp=tmp1;}
        }
        if(x<7 && y<6 && a[x+1][y+2]==0)
        {
            tmp1=checkStep(x+1, y+2, a);
            if(tmp1<tmp){i=x+1; j=y+2; tmp=tmp1;}
        }
        if(x<6 && y>0 && a[x+2][y-1]==0)
        {
            tmp1=checkStep(x+2, y-1, a);
            if(tmp1<tmp){i=x+2; j=y-1; tmp=tmp1;}
        }
        if(x<6 && y<7 && a[x+2][y+1]==0)
        {
            tmp1=checkStep(x+2, y+1, a);
            if(tmp1<tmp){i=x+2; j=y+1; tmp=tmp1;}
        }
        x=i; y=j;
    }
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    
}


int main(int argc, const char * argv[]) {

    char a[5] = {'a', 'c', 'r', 't', 'u'};
    char b[5] = {'a','t','f', 's','u'};

    int result = lcs_length(a, b);
    
    printf("Result = %d",result);
    
    printf("\n");
    
    system('pause');
    system('cls');
    
    Chess();
    
    
    return 0;
}
