
/* cocos2d::kmVec3Lerp(cocos2d::Vec3*, cocos2d::Vec3 const*, cocos2d::Vec3 const*, float) */

void cocos2d::kmVec3Lerp(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)param_2;
  fVar2 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  *(ulong *)param_1 =
       CONCAT44(fVar2 + ((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar2) * param_4,
                fVar1 + ((float)*(undefined8 *)param_3 - fVar1) * param_4);
  *(float *)(param_1 + 8) =
       *(float *)(param_2 + 8) + (*(float *)(param_3 + 8) - *(float *)(param_2 + 8)) * param_4;
  return;
}

