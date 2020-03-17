/* Nome: Lukas Rosa
 * RA: 183167
 */

#include <stdio.h>
#include <string.h>
#define tam_buffer 100

char pilha[tam_buffer];
int n_pilha=0;

void push(char c) {
 //Insere caractere c na pilha
  if (n_pilha < tam_buffer) {
    pilha[n_pilha]=c;
    n_pilha++;
  }
}

char pop() {
 //Remove caractere do topo da pilha
  char c;
  if (n_pilha>0) {
    n_pilha--;
    c = pilha[n_pilha];

    return c;
  }

}

int main() {
  unsigned int i, j;
  char buffer[tam_buffer];

  fgets(buffer, tam_buffer, stdin);

  for ( i = 0 ; i < (strlen(buffer)) ; i++){
    if (!(buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '\0')) push(buffer[i]);

    else{
        for ( j = 0 ; j< (strlen(buffer)) ; j++) printf("%c", pop());

        if (i != strlen(buffer)-1) printf(" ");
    }
  }
  printf("\n");
  return 0;
}
