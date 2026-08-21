
/* cocos2d::kmVec3Normalize(cocos2d::Vec3*, cocos2d::Vec3 const*) */

Vec3 * cocos2d::kmVec3Normalize(Vec3 *param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  
  uVar1 = Vec3::getNormalized(param_2);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = in_s1;
  *(undefined4 *)(param_1 + 8) = in_s2;
  return param_1;
}

