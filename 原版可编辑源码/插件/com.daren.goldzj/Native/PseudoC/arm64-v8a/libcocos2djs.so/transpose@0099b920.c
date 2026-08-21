
/* cocos2d::Mat4::transpose() */

void __thiscall cocos2d::Mat4::transpose(Mat4 *this)

{
  MathUtil::transposeMatrix((float *)this,(float *)this);
  return;
}

