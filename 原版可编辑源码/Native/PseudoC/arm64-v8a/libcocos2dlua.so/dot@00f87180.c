
/* cocos2d::Vec3::dot(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

float cocos2d::Vec3::dot(Vec3 *param_1,Vec3 *param_2)

{
  return *(float *)param_1 * *(float *)param_2 +
         (float)*(undefined8 *)(param_1 + 4) * (float)*(undefined8 *)(param_2 + 4) +
         (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) *
         (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
}

