
/* cocos2d::Mat4::multiply(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Mat4::multiply(Mat4 *this,Mat4 *param_1)

{
  MathUtil::multiplyMatrix((float *)this,(float *)param_1,(float *)this);
  return;
}

