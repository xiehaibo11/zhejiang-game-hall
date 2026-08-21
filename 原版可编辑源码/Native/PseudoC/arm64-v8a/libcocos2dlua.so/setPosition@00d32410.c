
/* cocos2d::MotionStreak3D::setPosition(float, float) */

void __thiscall
cocos2d::MotionStreak3D::setPosition(MotionStreak3D *this,float param_1,float param_2)

{
  if (this[0x300] == (MotionStreak3D)0x0) {
    this[0x300] = (MotionStreak3D)0x1;
  }
  *(float *)(this + 0x318) = param_1;
  *(float *)(this + 0x31c) = param_2;
  return;
}

