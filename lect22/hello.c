// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="abcdjfbebf";
//     int ln = strlen(str);
//     int freq[256]={0};
// char result;
// int max = 0;
// for (int i=0; i<ln; i++){
//     freq[str[i]]++;

// }
// for(int i=0; i<ln; i++){
//     if(freq[str[i]]>max){
//     max=freq[str[i]];
//     result = str[i];
//     }
    
// }
// printf("%c ->%d",result,max);
// return 0;
// }




#include<stdio.h>
#include<string.h>
int main(){

    char str[]="aabcbacab";
   
int ln = strlen(str);
for (int i=0; i<ln; i++){
    for(int j=i+1; j<ln; j++){
        if(str[i]>str[j]){
            char temp = str[i];
            str[i]=str[j];
            str[j]=temp;

        }
    }
}
printf("%s\n",str);
return 0;
}



