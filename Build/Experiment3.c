#include <stdio.h>
#include <stdlib.h>
#define N 1000
int main() {
  
int *A = malloc(N*N*sizeof(*A));
if(A==NULL){perror("malloc");return (EXIT_FAILURE);}
   
for (int i=0;i<N*N;i++){

A[i]=i+1;


}


for (int i=N*N-1;i>=0;i--){
printf("%d ",A[i]);

}
printf("\n");
free(A);

    return 0;
}
