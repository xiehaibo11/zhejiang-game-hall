
/* cocos2d::Ray::Ray() */

void __thiscall cocos2d::Ray::Ray(Ray *this)

{
  Vec3::Vec3((Vec3 *)this);
  Vec3::Vec3((Vec3 *)(this + 0xc),0.0,0.0,1.0);
  return;
}

