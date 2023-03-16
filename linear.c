// Online C compiler to run C program online
#include <stdio.h>

int search(int array[],int n,int x){
    for(int i = 0; i<n;i++)
    if (array[i]==x)
    return i;
    return -1;
}
int main(){
    int array[] ={5,9,12,20,25};
    int x = 9;
    int n = sizeof(array)/ sizeof(array[0]);
    int result = search(array,n,x);
    (result == -1)? printf("Element not found"): printf("Element found at index:%d",result);
}
        
