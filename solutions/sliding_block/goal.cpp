#include "goal.h"
#include <iostream>

// This time, move the block to goal_ instead of 0
Force GoalSlidingBlockController::Update(Length position, Time dt) {
  return (-position + goal_).to(m) * N;
}
