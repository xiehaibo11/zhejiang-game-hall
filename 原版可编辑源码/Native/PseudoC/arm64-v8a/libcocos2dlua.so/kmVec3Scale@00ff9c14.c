
/* cocos2d::kmVec3Scale(cocos2d::Vec3*, cocos2d::Vec3 const*, float) */

void cocos2d::kmVec3Scale(Vec3 *param_1,Vec3 *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 8);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * param_3,
                (float)*(undefined8 *)param_2 * param_3);
  *(float *)(param_1 + 8) = fVar1 * param_3;
  return;
}

