
/* cocos2d::kmVec3Length(cocos2d::Vec3 const*) */

float cocos2d::kmVec3Length(Vec3 *param_1)

{
  return SQRT(*(float *)param_1 * *(float *)param_1 +
              *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
              *(float *)(param_1 + 8) * *(float *)(param_1 + 8));
}

