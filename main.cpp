#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
    if(argc != 3) {
    printf("ERROR: Necesito 3 argumentos\n");
    return 0;
  }

  FILE* file;
  file = fopen(argv[2], "r");

  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  char *texto = argv[1];

  char buffer[1024] = {0};

  while(fgets(buffer, sizeof(buffer), file) != NULL) {
    char *pos = strstr(buffer, texto);
    if(pos != NULL) {
      printf("%s", buffer);
    }
  }
  
  fclose(file);
  return 0;
}