#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  Node *node_init = init_list(0);

  insert_element(node_init, 1337);
  insert_element(node_init, 1220);

  print_list(node_init);

  printf("Hello world\n");
}
