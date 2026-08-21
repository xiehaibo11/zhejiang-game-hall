
/* cocos2d::Vec3::add(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3*) */

void cocos2d::Vec3::add(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  *(ulong *)param_3 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)param_2);
  *(float *)(param_3 + 8) = *(float *)(param_1 + 8) + *(float *)(param_2 + 8);
  return;
}

