#include "common.h"
#include <stdio.h>
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);
  freeChunk(&chunk);

  disassembleChunk(&chunk, "test chunk");
  printf("testing %s\n", argv[0]);
  return 0;
}
