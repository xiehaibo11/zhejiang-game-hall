
/* cocos2d::Mat4::add(float, cocos2d::Mat4*) */

void __thiscall cocos2d::Mat4::add(Mat4 *this,float param_1,Mat4 *param_2)

{
  MathUtil::addMatrix((float *)this,param_1,(float *)param_2);
  return;
}

