
/* cocos2d::Mat4::negate() */

void __thiscall cocos2d::Mat4::negate(Mat4 *this)

{
  MathUtil::negateMatrix((float *)this,(float *)this);
  return;
}

