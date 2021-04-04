#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  // int i;

  // for(i = 1; i < argc; i++)
  //   printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  char *ptr = sbrk(4096); // Allocate one page
  mencrypt(ptr, 1); // Encrypt the pages
  struct pt_entry pt_entry; 
  getpgtable(&pt_entry, 1); // Get the page table information for newly allocated page
  printf(1,"%d\n",pt_entry.ptx);
  // printf(1,"%d",getpgtable(entries,num));
  // printf(1,"%d",11*4096);
  exit();
}
