
/* cocos2d::Quaternion::multiply(cocos2d::Quaternion const&, cocos2d::Quaternion const&,
   cocos2d::Quaternion*) */

void cocos2d::Quaternion::multiply(Quaternion *param_1,Quaternion *param_2,Quaternion *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0xc);
  fVar3 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0xc);
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  *(float *)param_3 = (fVar2 * fVar3 + fVar6 * fVar5 + fVar7 * fVar4) - fVar1 * fVar8;
  *(float *)(param_3 + 4) = fVar3 * fVar1 + fVar5 * fVar7 + (fVar2 * fVar8 - fVar6 * fVar4);
  *(float *)(param_3 + 8) = fVar5 * fVar1 + ((fVar2 * fVar4 + fVar6 * fVar8) - fVar3 * fVar7);
  *(float *)(param_3 + 0xc) = ((fVar2 * fVar5 - fVar3 * fVar6) - fVar7 * fVar8) - fVar4 * fVar1;
  return;
}

