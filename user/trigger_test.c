#include "kernel/types.h"
#include "user/user.h"

int main() {
  sys_trigger();
  exit(0);
}