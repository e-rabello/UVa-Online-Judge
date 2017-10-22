/* Elvis Rabello
 * 1062 - Containers
 */

#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


int main() {

  char containers[1001];
  int flag = -1,  i = 0, j = 0, k = 0, n = 0, tam = 0;

  while(scanf("%s", containers) != EOF) {
    if (containers[0] == 'e' && containers[1] == 'n' && containers[2] == 'd')
      break;
    tam = strlen(containers);
    vector<char> pilhas(26, 95);
  
    /* Percorre  containers, cria pilha e empilha */
    while(i < tam) {
      flag = -1; /* flag fora do intervalo do vetor, evitar conflitos */

      /* Passeia pelo topo das pilhas */
      for (j = 0; j < n; j++) {
	if (containers[i] <= pilhas[j])
	  if (flag == -1 || (pilhas[j] < pilhas[flag]))
	    flag = j;
      }
      /* "Cria pilha" */
      if(flag == -1) {
	flag = n;
	n++;
      }
      /* "Empilha" */
      pilhas[flag] = containers[i];
      i++;
    }
    cout << "Case " << k + 1 << ": " << n << '\n';
    k++;
    i = 0; n = 0;
    
  }

  return 0;
}/* main */
