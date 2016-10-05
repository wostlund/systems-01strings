#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringlen(char *str){ //finds the length of a null terminating string
  int i = 0;
  while(*(str+i) != 0){
    i++;
  }
  return i;
}

char *stringcat(char *dest, char *source){//concatonates two strings
  char *a = dest;
  while(*a){
    a++;
  }
  while(*source){
    *a = *source;
    a++;
    source++;
  }
  *a = 0;
  return dest;
}

char *stringcpy(char *dest, char *source){ //copys the value to string to other
  int i;
  for(i=0; i < stringlen(source); i++){
    dest[i] = source[i];
  }
  dest[i] = 0;
  return dest;
}

int stringcmp(char *str1, char *str2){ //compares two strings
  int i = 0;
  while(1){
    if(str1[i] == 0 && str2[i] == 0){
      return 0;
    }else if(str1[i] == 0){
      return (int)str2[i];
    }else if(str2[i] == 0){
      return -1 * (int)str1[i];
    }else if(str1[i] != str2[i]){
      return -1 * (str2[i] - str1[i]);
    }
    i++;
  }
  return 0;
}

char *stringchr(char *str, int k){ //finds the index of a character
  while(*str){
    if (k == *str){
      return str;
    }
    str++;
  }
  return 0;
}

int main(){
  char string1[50] = "computer";
  char string2[50] = "science";
  char string3[50] = "Stuyvesant";
  
  printf("string1 = %s\n", string1);
  printf("string2 = %s\n", string2);
  printf("string3 = %s\n", string3);

  printf("\nstrlen\n");
  printf("strlen(string1) = %zu\n", strlen(string1));
  printf("myStrlen(string1) = %d\n", stringlen(string1));
  printf("strlen(string2) = %zu\n", strlen(string2));
  printf("myStrlen(string2) = %d\n", stringlen(string2));
  printf("strlen(string3) = %zu\n", strlen(string3));
  printf("myStrlen(string3) = %d\n", stringlen(string3));

  printf("\nstrcpy\n");
  strcpy(string1,string2);
  printf("After strcpy(string1, string2), string1 = %s and string2 = %s\n", string1, string2);
  stringcpy(string1, "computer");
  printf("After myStrcpy(string1, \"computer\"), string1 = %s, string2 = %s\n", string1, string2);

  printf("\nstrcmp\n");
  printf("strcmp(string1, string2) = %d\n", strcmp(string1, string2));
  printf("myStrcmp(string1, string2) = %d\n", stringcmp("computer", "science"));
  printf("strcmp(string2, string3) = %d\n", strcmp(string2, string3));
  printf("myStrcmp(string2, string3) = %d\n", strcmp(string2, string3));
  printf("strcmp(string3, string1) = %d\n", strcmp(string3, string1));
  printf("myStrcmp(string1, string3) = %d\n", strcmp(string1, string3));

  printf("\nstrchr\n");
  printf("strchr(string1, \'u\') = %c\n", *(strchr(string1, 'u')));
  printf("myStrchr(string1, \'u\') = %c\n", *(stringchr(string1, 'u')));
  printf("strchr(string1, \'e\') = %c\n", *(strchr(string2, 'e')));
  printf("myStrchr(string1, \'e\') = %c\n", *(stringchr(string2, 'e')));
  printf("strchr(string1, \'a\') = %c\n", *(strchr(string3, 'a')));
  printf("myStrchr(string1, \'a\') = %c\n", *(stringchr(string3, 'a')));

  printf("\nstrcat\n");
  printf("strcat(string1, string2) = %s\n", strcat(string1,string2));
  printf("myStrcat(string2, string1) = %s\n", stringcat(string1, string2));
  printf("strcat(string2, string3) = %s\n", strcat(string2, string3));
  printf("myStrcat(string2, string3) = %s\n", stringcat(string2, string3));
  printf("strcat(string3, string1) = %s\n", strcat(string3, string1));
  printf("mySstrcat(string1, string3) = %s\n", stringcat(string1,string3));
}
