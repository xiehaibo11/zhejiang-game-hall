
/* cocos2d::Mat4::subtract(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Mat4::subtract(Mat4 *this,Mat4 *param_1)

{
  MathUtil::subtractMatrix((float *)this,(float *)param_1,(float *)this);
  return;
}

