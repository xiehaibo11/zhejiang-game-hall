
/* cocos2d::Animate3D::getSpeed() const */

float __thiscall cocos2d::Animate3D::getSpeed(Animate3D *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x68);
  if (this[0x78] != (Animate3D)0x0) {
    fVar1 = -*(float *)(this + 0x68);
  }
  return fVar1;
}

