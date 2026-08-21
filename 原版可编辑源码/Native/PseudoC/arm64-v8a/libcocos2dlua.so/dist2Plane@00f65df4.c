
/* cocos2d::Plane::dist2Plane(cocos2d::Vec3 const&) const */

float __thiscall cocos2d::Plane::dist2Plane(Plane *this,Vec3 *param_1)

{
  float fVar1;
  
  fVar1 = (float)Vec3::dot((Vec3 *)this,param_1);
  return fVar1 - *(float *)(this + 0xc);
}

