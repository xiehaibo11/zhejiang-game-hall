
/* cocos2d::Vec4::angle(cocos2d::Vec4 const&, cocos2d::Vec4 const&) */

void cocos2d::Vec4::angle(Vec4 *param_1,Vec4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)param_2;
  fVar11 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0xc);
  fVar8 = *(float *)param_1;
  fVar10 = *(float *)(param_1 + 4);
  fVar7 = ((fVar3 * fVar4 - fVar8 * fVar6) - fVar10 * fVar5) + fVar1 * fVar11;
  fVar9 = fVar8 * fVar5 + ((fVar3 * fVar11 - fVar6 * fVar10) - fVar4 * fVar1);
  fVar2 = fVar4 * fVar10 + ((fVar3 * fVar5 - fVar6 * fVar1) - fVar8 * fVar11);
  atan2f(SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar9 * fVar9) + 1e-37,
         fVar3 * fVar6 + fVar5 * fVar1 + fVar4 * fVar8 + fVar10 * fVar11);
  return;
}

