#include <stdio.h>
int main()
{
    char ch;
    char *vowels=aeiouAEIOU*;
    scanf("%s",&ch);
    if ((ch>='a' &&ch <='z') ||(ch>='A' && ch<='Z') )
    {
        if(strchr(vowels,ch)!=NULL){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Speacial Character");
    }
    return 0;
    
}