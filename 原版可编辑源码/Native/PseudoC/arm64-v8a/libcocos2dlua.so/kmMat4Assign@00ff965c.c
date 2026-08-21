
/* cocos2d::kmMat4Assign(cocos2d::Mat4*, cocos2d::Mat4 const*) */

Mat4 * cocos2d::kmMat4Assign(Mat4 *param_1,Mat4 *param_2)

{
  Mat4::set(param_1,(float *)param_2);
  return param_1;
}

