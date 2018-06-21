#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int camelcase(char* s) {
    int i,word=1;
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {word++;}
    }
    return word;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = camelcase(s);
    printf("%d\n", result);
    return 0;
}
