
/* cocos2d::kmMat4Scaling(cocos2d::Mat4*, float, float, float) */

Mat4 * cocos2d::kmMat4Scaling(Mat4 *param_1,float param_2,float param_3,float param_4)

{
  Mat4::createScale(param_2,param_3,param_4,param_1);
  return param_1;
}

