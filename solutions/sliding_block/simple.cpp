#include "simple.h"
#include <iostream>

// Return a force to move the block to 0
Force SlidingBlockController::Update(Length position, Time dt) {
  return -position.to(m) * N;
}
