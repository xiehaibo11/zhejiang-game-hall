
/* cocos2d::Mat4::add(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Mat4::add(Mat4 *this,Mat4 *param_1)

{
  MathUtil::addMatrix((float *)this,(float *)param_1,(float *)this);
  return;
}

