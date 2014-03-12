#include <stdio.h>
#include <stdlib.h>
void test_input(int *ptr, int N, int credit){
  printf("%s\n", "In test");
  int i = 0;
  printf("%i\n", credit);
  printf("%i\n", N);
  for (; i < N; i++){
    printf("%i%s", ptr[i], " ");
  }
  printf("\n");
}
void read_input{
  char *filename = "Practice_Africa_A.in";
  FILE *ofp;
  int tests = 0, num_tests = 0, credit = 0, count_items =  0;
  int N, *P, prices = 0, i = 0;
  ofp = fopen(filename, "read");
  printf("%s\n", "File read");
  fscanf(ofp, "%i", &tests);
  printf("%s\n", "tests number");
 
  while(ofp != EOF){
     while(i < 4) {
       fscanf(ofp, "%i", &credit);
       fscanf(ofp, "%i", &N);
       P = malloc(sizeof(int) * N);
       while(count_items < N){
	 fscanf(ofp, "%i", &prices);
	 P[count_items] = prices;
	 count_items++;
       }
       count_items = 0;
       test_input(P, N, credit);
       free(P);
       i++;
     }
     break;
  }
  printf("\n");
}


int main(){
  read_input();
  return 0;
}
