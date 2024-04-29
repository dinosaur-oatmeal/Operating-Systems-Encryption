#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int fd;

    if((fd = open(argv[1], 2)) < 0){
      fprintf(2, "test: cannot open %s\n", argv[1]);
      exit(1);
    }

    decrypt(fd, 255);

    close(fd);
  exit(0);
}