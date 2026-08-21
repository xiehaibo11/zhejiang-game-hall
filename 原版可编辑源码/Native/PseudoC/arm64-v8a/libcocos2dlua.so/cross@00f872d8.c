
/* cocos2d::Vec3::cross(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3*) */

void cocos2d::Vec3::cross(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  MathUtil::crossVec3((float *)param_1,(float *)param_2,(float *)param_3);
  return;
}

