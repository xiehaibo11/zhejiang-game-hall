
/* cocos2d::Plane::getSide(cocos2d::Vec3 const&) const */

int __thiscall cocos2d::Plane::getSide(Plane *this,Vec3 *param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)Vec3::dot((Vec3 *)this,param_1);
  iVar1 = (uint)(fVar2 - *(float *)(this + 0xc) < 0.0) << 1;
  if (0.0 < fVar2 - *(float *)(this + 0xc)) {
    iVar1 = 1;
  }
  return iVar1;
}

