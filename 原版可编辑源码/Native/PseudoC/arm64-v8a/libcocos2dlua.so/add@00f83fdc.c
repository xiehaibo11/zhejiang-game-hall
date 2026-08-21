
/* cocos2d::Mat4::add(float) */

void __thiscall cocos2d::Mat4::add(Mat4 *this,float param_1)

{
  MathUtil::addMatrix((float *)this,param_1,(float *)this);
  return;
}

