#include<stdio.h>
#include<stdio.h>
int printH[7][5];
int printM[7][8];
int printR[7][5];
int printA[7][5];
int printJ[7][5];
int printA1[7][5];

void gap()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<1;j++)
        {
            printf(" ");
        }
    }
}
void printconsole()
{
   for(int i=0;i<7;i++)
    {
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printH[i][j];
            printf("%c",ch);
        }
gap();
 for(int j=0;j<=7;j++)
    {
    char ch=printM[i][j];
    printf("%c",ch);
    }

        gap();
        for(int j=0;j<5;j++)
        {
         char ch=printR[i][j];
            printf("%c",ch);
    }
    gap();
        for(int j=0;j<5;j++)
        {
         char ch=printA[i][j];
            printf("%c",ch);
    }

 gap();
        for(int j=0;j<5;j++)
        {
         char ch=printJ[i][j];
            printf("%c",ch);
    }
    gap();
        for(int j=0;j<5;j++)
        {
         char ch=printA1[i][j];
            printf("%c",ch);
    }
   
    printf("\n");
    }
}

void A()
{
    //system("color \D");
 for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
 if(((j==0||j==4)&&(i!=0)||((i==0)||i==3)&&(j>0&&j<4)))
 {
     printA[i][j]=42;
 }
 else{
    printA[i][j]=32;
 }
}
}
}
void J()
{
 for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
 if(i==0||j==3||i==6&&j<3&&j!=0||i==5&&j==1||i==4&&j==1)
 {
     printJ[i][j]=42;
 }
 else{
 printJ[i][j]=32;
 }
}
}
}
void A1()
{
 for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
 if(((j==0||j==4)&&(i!=0)||((i==0)||i==3)&&(j>0&&j<4)))
 {
     printA1[i][j]=42;
 }
 else{
    printA1[i][j]=32;
 }
}
}
}
void R()
{
 for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
 if(j==0||i==0||j==4&&i<4||i==3||i==4&&j==1 || i==5 && j==2 || i==6 && j==3 )
 {
     printR[i][j]=42;
 }
 else{
    printR[i][j]=32;
 }
}
}
}

void H()
{
 for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
 if(j==0||j==4||i==3)
 {
     printH[i][j]=42;
 }
 else{
    printH[i][j]=32;
 }
}
}
}
void M()
{
for(int i=0;i<7;i++)
{
for(int j=0;j<5;j++)
{
if(j==0||j==4||j==1&&i==1||j==2&&i==2||j==3&&i==1)
{
printM[i][j]=42;
}
else
{
printM[i][j]=32;
}
}
}
}
//#include <stdio.h>
//#include <stdlib.h>

void main()
{
    A();
    J();
    A1();
    R();
    H();
    M();
printconsole();


}
