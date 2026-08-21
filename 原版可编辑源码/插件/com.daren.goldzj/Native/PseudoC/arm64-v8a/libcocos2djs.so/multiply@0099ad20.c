
/* cocos2d::Mat4::multiply(float) */

void __thiscall cocos2d::Mat4::multiply(Mat4 *this,float param_1)

{
  MathUtil::multiplyMatrix((float *)this,param_1,(float *)this);
  return;
}

