#include <stdio.h> //函示庫

#include <stdlib.h> //函示庫



int main() 

{

 int year,month,day; //定義年,月,日 

 printf("請輸入你的出生年分(西元)：");

 scanf("%d",&year);  //存年份 

 printf("請輸入你的出生月分：");

 scanf("%d",&month); //存月份 

 printf("請輸入你的出生日期：");

 scanf("%d",&day);  //存日期 

 printf("你的出生年月日為：%d,%d,%d\n",year,month,day);

 system("pause");   

 return 0;

}
