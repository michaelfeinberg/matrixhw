#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges;

  edges = new_matrix(4, 4);
  
  printf("New matrix made\n");
  print_matrix(edges);
  printf("Making identity matrix\n");
  ident(edges);
  print_matrix(edges);
  struct matrix *mult = new_matrix(4,4);
  printf("Scaling by 5\n");
  scalar_mult(5, edges);
  print_matrix(edges);

  printf("Multiplying matrices\n");
  matrix_mult(mult, edges);
  print_matrix(edges);

  color c;
  c.red = 100;
  c.green = 100;
  c.blue = 0;
  int x0 = 0;
  int y0 = 0;
  int x1 = 250;
  int y1 = 0;
  while(y1 < 500){
    add_edge(edges,0,0,0,250,0,0);

    y1+=5;
  }
  draw_lines(edges,s,c);



  free_matrix( edges );
}  
