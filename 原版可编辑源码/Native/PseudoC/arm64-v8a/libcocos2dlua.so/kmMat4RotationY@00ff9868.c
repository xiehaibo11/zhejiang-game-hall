
/* cocos2d::kmMat4RotationY(cocos2d::Mat4*, float) */

Mat4 * cocos2d::kmMat4RotationY(Mat4 *param_1,float param_2)

{
  Mat4::createRotationY(param_2,param_1);
  return param_1;
}

