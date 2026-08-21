
/* cocos2d::kmMat4Translation(cocos2d::Mat4*, float, float, float) */

Mat4 * cocos2d::kmMat4Translation(Mat4 *param_1,float param_2,float param_3,float param_4)

{
  Mat4::createTranslation(param_2,param_3,param_4,param_1);
  return param_1;
}

