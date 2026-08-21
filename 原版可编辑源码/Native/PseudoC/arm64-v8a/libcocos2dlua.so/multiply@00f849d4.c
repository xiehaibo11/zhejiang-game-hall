
/* cocos2d::Mat4::multiply(float, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::multiply(Mat4 *this,float param_1,Mat4 *param_2)

{
  MathUtil::multiplyMatrix((float *)this,param_1,(float *)param_2);
  return;
}

