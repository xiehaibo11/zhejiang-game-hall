
/* cocos2d::kmMat4PerspectiveProjection(cocos2d::Mat4*, float, float, float, float) */

Mat4 * cocos2d::kmMat4PerspectiveProjection
                 (Mat4 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  Mat4::createPerspective(param_2,param_3,param_4,param_5,param_1);
  return param_1;
}

