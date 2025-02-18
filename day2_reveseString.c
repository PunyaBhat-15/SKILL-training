#include <stdio.h>
#include<string.h>
void reverseString(char *str){
    int length;
    length=strlen(str);
    for(int left = 0, right = length-1; left<right; left++, right--){
        //swapping the letters
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
2. Using the pointers:
// str is the base address and p_ch holds it
//de-referencing means coming bace to value memory
#include <stdio.h>
int findLenght(char* str)//using it as a charecter pointer while passing the array
{
    int length = 0;
    for(char* p_ch = str; (*p_ch) !='\0'; p_ch++){
        
        length++;
        
    }
    return length;
}
void reverseString(char *str)
{
    int length;
    length=findLenght(str);
    for(int left = 0, right = length-1; left<right; left++, right--){
        char temp = *(str+ left);//use of pointer arthemetic same as str[left]
        *(str+ left) = *(str+right);
        *(str+right) = temp;
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
