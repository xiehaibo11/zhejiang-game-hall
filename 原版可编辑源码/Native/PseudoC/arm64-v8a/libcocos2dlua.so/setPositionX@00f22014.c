
/* cocos2d::MotionStreak::setPositionX(float) */

void __thiscall cocos2d::MotionStreak::setPositionX(MotionStreak *this,float param_1)

{
  if (this[0x301] != (MotionStreak)0x0) {
    *(float *)(this + 0x318) = param_1;
    return;
  }
  this[0x301] = (MotionStreak)0x1;
  *(float *)(this + 0x318) = param_1;
  return;
}

