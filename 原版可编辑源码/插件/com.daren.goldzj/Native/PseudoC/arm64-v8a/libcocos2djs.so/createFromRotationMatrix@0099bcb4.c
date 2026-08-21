
/* cocos2d::Quaternion::createFromRotationMatrix(cocos2d::Mat4 const&, cocos2d::Quaternion*) */

void cocos2d::Quaternion::createFromRotationMatrix(Mat4 *param_1,Quaternion *param_2)

{
  Mat4::getRotation(param_1,param_2);
  return;
}

