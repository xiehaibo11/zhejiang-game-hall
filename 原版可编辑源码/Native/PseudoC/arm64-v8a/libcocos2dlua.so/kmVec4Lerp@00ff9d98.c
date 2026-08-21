
/* cocos2d::kmVec4Lerp(cocos2d::Vec4*, cocos2d::Vec4 const*, cocos2d::Vec4 const*, float) */

void cocos2d::kmVec4Lerp(Vec4 *param_1,Vec4 *param_2,Vec4 *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_3;
  fVar1 = (float)*(undefined8 *)param_2;
  fVar2 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_2 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar4 + ((float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) - fVar4) * param_4,
                fVar3 + ((float)*(undefined8 *)(param_3 + 8) - fVar3) * param_4);
  *(ulong *)param_1 =
       CONCAT44(fVar2 + ((float)((ulong)uVar5 >> 0x20) - fVar2) * param_4,
                fVar1 + ((float)uVar5 - fVar1) * param_4);
  return;
}

