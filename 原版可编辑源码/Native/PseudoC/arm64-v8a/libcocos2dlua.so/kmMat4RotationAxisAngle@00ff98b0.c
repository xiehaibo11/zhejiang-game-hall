
/* cocos2d::kmMat4RotationAxisAngle(cocos2d::Mat4*, cocos2d::Vec3 const*, float) */

Mat4 * cocos2d::kmMat4RotationAxisAngle(Mat4 *param_1,Vec3 *param_2,float param_3)

{
  Mat4::createRotation(param_2,param_3,param_1);
  return param_1;
}

