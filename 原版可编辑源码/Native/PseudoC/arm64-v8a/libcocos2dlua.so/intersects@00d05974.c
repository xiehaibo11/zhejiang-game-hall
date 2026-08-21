
/* cocos2d::Ray::intersects(cocos2d::Plane const&) const */

void __thiscall cocos2d::Ray::intersects(Ray *this,Plane *param_1)

{
  float fVar1;
  
  fVar1 = (float)Vec3::dot((Vec3 *)param_1,(Vec3 *)(this + 0xc));
  if (fVar1 != 0.0) {
    Vec3::dot((Vec3 *)param_1,(Vec3 *)this);
  }
  return;
}

