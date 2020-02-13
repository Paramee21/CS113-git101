#include<stdio.h>
int addTen(int x) //type+name=Declare variable
{
    x+=10;
    return x;
}
int addTwenty();
int x=2000;
int main()
{
    int x=90;
    int y=addTen(x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
}
int addTwenty()
{
    x += 20;
    return x;
}

//recursion
//int fac(int i){
// if(i==1){
//   return 1;} 
// return i*fac(i-1);
// }

//5=0101
//5>>2 => 01
//5<<2 => 010100
//5&1 => 0101 & 0001