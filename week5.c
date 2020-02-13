#include <stdio.h>
int main()
{
    int x =100;
    //int q = 0144; base8 %o
    //int w = 0x64; bade16 %s
    //printf("x = %d\n", x);
    //printf("reference of x = %lu\n", &x);
    //printf("reference of x = %p\n", &x);

    //int number[] = {1 , 2, 3, 4, 5, 6};
    //int number[100];
    //int number[100] = {1 , 2, 3, 4, 5, 6};
    //number[1000] = 200;
    //printf("index 1 = %d\n", number[1000]);
    //printf("reference of &number[1] = %p\n", &number[1000]);
    //printf("reference of &number[0] = %p\n", &number[0]);
    //printf("reference of number = %p\n", number+1); //name array call index[0] to show,if add (+1) = follow variable type ex.int = +4

    //int number[] = {1 , 2, 3, 4, 5, 6};
    //int *ptr = &x; //pointer , & is point to address
    //int *arrPtr;
    //arrPtr = number; //0x00  //call,assign variable not use *
    //arrPtr += 3; //address 
    //*arrPtr +=3; //* pull value in address to use
    //printf("arrPtr = %p, *arrPtr = %d\n", arrPtr, *arrPtr);
    //Do not change number in address memory ex. &x=200 , int *ptr=x;
    
    //int number[] = {1 , 2, 3, 4, 5, 6};
    //for(int *ptr = number; ptr<= &number[5]; ptr++){
    //   printf("[%p] = %d\n", ptr, *ptr);
    //}
    //int *ptr2 = number;
    //for(int i=0; i<5; i++){
    //   printf("[%p] = %d\n", ptr2+i, *(ptr2+i));
    //}

    //char input[100] = "kong";
    //int count = 0 ;
    //char c;
    //while ( (c= getchar()) != '\n' ){
    //    input[count] = c ;
    //    ++count;
    //}
    //input[count] = '\0';
    //for( char *cPtr = input ; *cPtr != '\0' ; cPtr++) {
    //   printf("%c\n",*cPtr);
    //} 

    char s[100];
    int i;
    char c; 
    scanf("%d=%c=%s" , &i, &c, s); //array put only name ex. s
    printf("%d--%c--%s", i, c , s);



    
}