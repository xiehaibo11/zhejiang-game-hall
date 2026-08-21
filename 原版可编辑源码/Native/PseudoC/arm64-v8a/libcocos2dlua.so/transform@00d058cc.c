
/* cocos2d::Ray::transform(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Ray::transform(Ray *this,Mat4 *param_1)

{
  Mat4::transformVector
            (param_1,*(float *)this,*(float *)(this + 4),*(float *)(this + 8),1.0,(Vec3 *)this);
  Mat4::transformVector(param_1,(Vec3 *)(this + 0xc));
  Vec3::normalize((Vec3 *)(this + 0xc));
  return;
}

