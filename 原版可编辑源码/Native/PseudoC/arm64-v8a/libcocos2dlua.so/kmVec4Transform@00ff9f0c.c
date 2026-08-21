
/* cocos2d::kmVec4Transform(cocos2d::Vec4*, cocos2d::Vec4 const*, cocos2d::Mat4 const*) */

Vec4 * cocos2d::kmVec4Transform(Vec4 *param_1,Vec4 *param_2,Mat4 *param_3)

{
  Mat4::transformVector(param_3,param_2,param_1);
  return param_1;
}

