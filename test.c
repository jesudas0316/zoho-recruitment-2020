#include <stdio.h>

int main() 
{
    int n=5;
    int len = 5;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int a = i < j ? i : j;
            a = a < len-i ? a : len-i-1;
            a= a < len-j-1 ? a : len-j-1;
            printf("%d ", n-a);
            
        }
        printf("\n");
    }
    return 0;
}
