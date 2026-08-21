
/* cocos2d::MotionStreak3D::setPositionX(float) */

void __thiscall cocos2d::MotionStreak3D::setPositionX(MotionStreak3D *this,float param_1)

{
  if (this[0x300] != (MotionStreak3D)0x0) {
    *(float *)(this + 0x318) = param_1;
    return;
  }
  this[0x300] = (MotionStreak3D)0x1;
  *(float *)(this + 0x318) = param_1;
  return;
}

