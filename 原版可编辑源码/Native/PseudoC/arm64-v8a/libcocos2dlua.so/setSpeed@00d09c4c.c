
/* cocos2d::Animate3D::setSpeed(float) */

void __thiscall cocos2d::Animate3D::setSpeed(Animate3D *this,float param_1)

{
  *(float *)(this + 0x68) = ABS(param_1);
  this[0x78] = (Animate3D)(param_1 < 0.0);
  *(float *)(this + 0x4c) = *(float *)(this + 0x84) / ABS(param_1);
  return;
}

