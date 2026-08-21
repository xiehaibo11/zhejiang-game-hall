
/* cocos2d::Mat4::subtract(cocos2d::Mat4 const&, cocos2d::Mat4 const&, cocos2d::Mat4*) */

void cocos2d::Mat4::subtract(Mat4 *param_1,Mat4 *param_2,Mat4 *param_3)

{
  MathUtil::subtractMatrix((float *)param_1,(float *)param_2,(float *)param_3);
  return;
}

