#include <deepstate/DeepState.hpp>

using namespace deepstate;

#include <assert.h>

TEST(Buffer, ContainsBad) {
  uint32_t bufferSize = DeepState_UIntInRange(1, 100);
  printf("Buffer size is %u\n", bufferSize);
  char* buffer = (char*)DeepState_Malloc(bufferSize);
  for (int i = 0; i < bufferSize; i++) {
    if (buffer[i] == 42) {
      printf("Bad byte at %u\n", i);
    }
    assert(buffer[i] != 42);
  }
}
