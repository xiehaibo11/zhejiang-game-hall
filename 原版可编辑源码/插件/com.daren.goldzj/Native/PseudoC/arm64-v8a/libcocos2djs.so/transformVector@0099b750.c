
/* cocos2d::Mat4::transformVector(cocos2d::Vec4 const&, cocos2d::Vec4*) const */

void __thiscall cocos2d::Mat4::transformVector(Mat4 *this,Vec4 *param_1,Vec4 *param_2)

{
  MathUtil::transformVec4((float *)this,(float *)param_1,(float *)param_2);
  return;
}

