#include <stdio.h>
#include <stdlib.h>

int stringlen(char *str){
  int i = 0;
  while(1){
    if(str[i] == 0){
      return i;
    }
    i++;
  }
  return -1;
}

char *stringcat(char *dest, char *source){
  char *a = dest;
  char *b = source;
  int i;
  char ans[stringlen(a) + stringlen(b) + 1];
  for(i = 0; i < stringlen(a) + stringlen(b); i++){
    if(i >= stringlen(a)){
      ans[i] = a[i];
    }else{
      ans[i] = b[i-stringlen(a)];
    }
  }
  char *k = ans;
  return k;
}

char *strcpy(char *dest, char *source){
  *dest = *source;
  return dest;
}

int stringcmp(char *str1, char *str2){
  int i = 0;
  while(1){
    if(str1[i] == 0 && str2[i] == 0){
      return 0;
    }else if(str1[i] == 0){
      return (int)str2[i];
    }else if(str2[i] == 0){
      return -1 * (int)str1[i];
    }else if(str1[i] != str2[i]){
      return str2[i] - str1[i];
    }
  }
  return 0;
}

char stringchr(char *str, int k){
  if(k > 127){
    return 0;
  }
  int i;
  for(i = 0; i < stringlen(str); i++){
    if(str[i] == k){
      return str[i];
    }
  }
  return 0;
}

int main(){
  printf("%d\n", stringlen("mike"));
}