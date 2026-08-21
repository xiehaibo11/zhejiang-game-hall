
/* cocos2d::MotionStreak::setPositionY(float) */

void __thiscall cocos2d::MotionStreak::setPositionY(MotionStreak *this,float param_1)

{
  if (this[0x301] != (MotionStreak)0x0) {
    *(float *)(this + 0x31c) = param_1;
    return;
  }
  this[0x301] = (MotionStreak)0x1;
  *(float *)(this + 0x31c) = param_1;
  return;
}

