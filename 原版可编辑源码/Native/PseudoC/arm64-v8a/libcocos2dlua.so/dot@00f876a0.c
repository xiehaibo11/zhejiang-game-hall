
/* cocos2d::Vec4::dot(cocos2d::Vec4 const&, cocos2d::Vec4 const&) */

float cocos2d::Vec4::dot(Vec4 *param_1,Vec4 *param_2)

{
  return *(float *)param_1 * *(float *)param_2 + *(float *)(param_1 + 4) * *(float *)(param_2 + 4) +
         (float)*(undefined8 *)(param_1 + 8) * (float)*(undefined8 *)(param_2 + 8) +
         (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) *
         (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
}

