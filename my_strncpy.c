#include <stdio.h>
#include <string.h>

#define STANDARD_SIZE 100


void MY_strncpy(char *to, char from[], int length);

int main(){
    // this time, i'll recreate the c library string function "strncpy"
    
    //creating arrays and variables
    char phrase[] = "animenz is amazing :)";
    char MyFunc[STANDARD_SIZE];
    char funC[STANDARD_SIZE];
    
    int desiredSize = 13;
    
    // using my version of the function
    MY_strncpy(MyFunc, phrase, desiredSize);
    
    // using the original function
    strncpy(funC, phrase, desiredSize);
    funC[desiredSize] = '\0';
    
    // the outputs
    printf("using my function.: %s\n", MyFunc);
    printf("using the original: %s\n", funC);
    
    return 0;
}

void MY_strncpy(char *to, char from[], int length){
    
    int i;
    
    for(i = 0; i != length; i++){
        to[i] = from[i];
    }
    
    // in my version, you won't need to set it manually, it'll be set for you
    to[i] = '\0';
}

