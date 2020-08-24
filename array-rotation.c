#include<stdio.h>
int rotateArray(int arr[],int,int);
void display(int arr[],int);
void leftRotatebyOne(int arr[], int n); 
int main(){  int a,b,size;
             scanf("%d ",&a);
             int arr[5];
             size=sizeof(arr)/sizeof(arr[0]);
             int c=0;
             while(c<size){
                            scanf("%d",&arr[c]);
                            c+=1;
             }
             rotateArray(arr,size,a); 
}
int rotateArray(int arr[],int size,int a){
             int i;
             for(i=0;i<a;i++){
                               leftRotatebyOne(arr,size);
                               display(arr,size);
             }
             
             return 0;
}
void leftRotatebyOne(int arr[], int n) 
{ 
    int temp = arr[n-1], i; 
    for (i = n-1; i>0; i--) 
        arr[i] = arr[i-1]; 
    arr[0] = temp; 
} 
  
void display(int arr[],int size){
                    int i; 
                    for(i=0;i<size;i++){
                                 printf("%d",arr[i]);
                    
                    }
}
