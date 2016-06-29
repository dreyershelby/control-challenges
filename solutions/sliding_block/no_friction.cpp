#include "no_friction.h"
#include <iostream>

// Return a force to move the block to 0, but this time friction won't slow the
// block down
Force FrictionlessSlidingBlockController::Update(Length position, Time dt) {
  Velocity derivative = (position - last_position_) / dt;
  last_position_ = position;
  return (-position.to(m) - derivative.to(m / s)) * N;
}
