#include <stdio.h>
#include <stdlib.h>
void mux8(int a , int b , int c){
    int i;
    if((!a)&(!b)&(!c)){
        printf("        abc (I0) %d\n",(!a)&(!b)&(!c));
    }
    if((!a)&(!b)&c){
        printf("        abC (I1) %d\n",(!a)&(!b)&c);
    }
    if((!a)&b&(!c)){
        printf("        aBc (I2) %d\n",(!a)&b&(!c));
    }
    if((!a)&b&c){
        printf("        aBC (I3) %d\n",(!a)&b&c);
    }
    if(a&(!b)&(!c)){
        printf("        Abc (I4) %d\n",a&(!b)&(!c));
    }
    if(a&(!b)&c){
        printf("        AbC (I5) %d\n",a&(!b)&c);
    }
    if(a&b&(!c)){
        printf("        ABc (I6) %d\n",a&b&(!c));
    }
    if(a&b&c){
        printf("        ABC (I7) %d\n",a&b&c);
    }

}

void mux4(int a , int b ){
    int i;
    if((!a)&(!b)){
        printf("        ab (I0) %d\n",(!a)&(!b));
    }
    if(a&(!b)){
        printf("        Ab (I2) %d\n",a&(!b));
    }
    if((!a)&b){
        printf("        aB (I1) %d\n",(!a)&b);
    }
    if(a&b){
        printf("        AB (I3) %d\n",a&b);
    }


}

int scan(char i){
    int c;
    printf("Enter the value of %c\n",i);
    scanf("%d",&c);
    if(c!=0&&c!=1){
        printf("Given input was not in the range of binary.\n");
        c = scan(i);
    }
    return c;
}

int main()
{
    printf("*********** MULTIPLEXERS ************\n");

    int a,b,c,choice;
    printf("\n1. 4-1 MUX\n2. 8-1 MUX\n");
    printf("Enable any one MUX:");
    scanf("%d",&choice);
    if(choice == 2){
        a = scan('A');
        b = scan('B');
        c = scan('C');
        mux8(a,b,c);
    }
    if(choice == 1){
        a = scan('A');
        b = scan('B');
        mux4(a,b);
    }
    return 0;
}
