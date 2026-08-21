
/* cocos2d::Ray::dist(cocos2d::Plane const&) const */

float __thiscall cocos2d::Ray::dist(Ray *this,Plane *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Vec3::dot((Vec3 *)param_1,(Vec3 *)(this + 0xc));
  fVar2 = 0.0;
  if (fVar1 != 0.0) {
    fVar2 = (float)Vec3::dot((Vec3 *)param_1,(Vec3 *)this);
    fVar2 = (*(float *)(param_1 + 0xc) - fVar2) / fVar1;
  }
  return fVar2;
}

