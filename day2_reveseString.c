#include <stdio.h>
#include<string.h>
void reverseString(char *str){
    int length;
    length=strlen(str);
    for(int left = 0, right = length-1; left<right; left++, right--){
        char temp= str[left];
        str[left]=str[right];
        str[right]=temp;
    }
   
}

int main()
{
    char str[255];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("before reverse:%s\n",str);
    reverseString(str);
    printf("reversed string:%s\n",str);
    return 0;
}