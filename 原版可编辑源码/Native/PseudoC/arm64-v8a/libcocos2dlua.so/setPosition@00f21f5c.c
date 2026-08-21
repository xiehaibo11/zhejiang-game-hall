
/* cocos2d::MotionStreak::setPosition(float, float) */

void __thiscall cocos2d::MotionStreak::setPosition(MotionStreak *this,float param_1,float param_2)

{
  if (this[0x301] == (MotionStreak)0x0) {
    this[0x301] = (MotionStreak)0x1;
  }
  *(float *)(this + 0x318) = param_1;
  *(float *)(this + 0x31c) = param_2;
  return;
}

