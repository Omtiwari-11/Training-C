 //#include <stdio.h>
      
//   int Bsearch(int arr[5]){
//     int s=0;
//     int end=4;
//     int t=4;
//     while (s<=end)
//     {
//       int mid=(s+end)/2;
//       if(arr[mid]==t){
//         return mid;
//       }else if(arr[mid]<t){
//         s=mid+1;
//       }else
//       {
//         end=mid-1;
//       }
//     }
//     return -1;
//   }

// int main(){
//     int arr[5]={1,2,3,4,5};
//    int data=  Bsearch(arr);
//    printf("%d",data);

// }




// #include <stdio.h>

//  void BubbleSort(int arr[], int n){

//    for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-1-i;j++){
//         if(arr[j]>arr[j+1]){
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
//    }

//    for(int k=0; k<n; k++){
//     printf("%d ",arr[k]);
//    }
//       printf("\n");
//  }

// int main(){
//     int  arr[5]={3,1,2,4,5};
//     int n=   sizeof(arr)/sizeof(arr[0]);
//     BubbleSort(arr, n);

//     return 0;
// }





// #include <stdio.h>
// int sum(int *a,int *b){
//     *a=20;
//     *b=10;
//            int sum=(*a)+(*b);
//     return sum;

// }
// int main(){
//     int a=5;
//     int b=10;
//   int data=    sum(&a,&b);
//   printf("%d",data);
//   printf("%d",a+b);

//     //   int x=5;
//     //   int *a=&x;

//     //   printf("%d",x);
//     //   printf("%d",&x);
//     //   printf("%d",a);
//     //   printf("%d",*a);

// }




// #include <stdio.h>
// int sum(int *x,int *y){
//     *x=50;
//     *y=50;
//     int c=(*x)+(*y);
//     return c;
// }

// int swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
//     printf("%d %d" ,*x,*y);

// }
// int main(){

//     int n =-1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             printf("not prime");
//             break;
//         }
//         else{
//             printf("prime");
//             break;
//         }
//     }
// }




#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
 }
 int main(){
 int a[5]={1,-3,8,4,-11};
 int maxsum=0;

 for(int i=0;i<5;i++){
     int currentsum=0;
 for(int j=i;j<5;j++){
     currentsum=currentsum+a[j];
   if(currentsum>maxsum)
    maxsum=currentsum;
    }
 } 

 printf("%d",maxsum);
    int x=10;
    int y=20;
    swap(&x,&y);
printf("x=%d, y=%d\n", x,y);

    int arr[4]={1,2,3,4};
    int *p=arr;
     printf("%d",*(p+2));
    for(int i=0;i<4;i++){
        printf("%d",*(p+i));
    }
      printf("\n");

return 0;
        
    }

    