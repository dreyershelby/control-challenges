#pragma once

#include "third_party/unitscpp/unitscpp.h"

class FrictionlessSlidingBlockController {
 public:
  Force Update(Length position, Time dt);
 private:
  Length last_position_ = 0;
};
