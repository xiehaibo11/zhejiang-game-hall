
/* cocos2d::kmVec3LengthSq(cocos2d::Vec3 const*) */

float cocos2d::kmVec3LengthSq(Vec3 *param_1)

{
  return *(float *)param_1 * *(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
         *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
}

