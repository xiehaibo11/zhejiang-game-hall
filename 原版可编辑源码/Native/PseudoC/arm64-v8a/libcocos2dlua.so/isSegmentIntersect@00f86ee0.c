
/* cocos2d::Vec2::isSegmentIntersect(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2
   const&, cocos2d::Vec2 const&) */

byte cocos2d::Vec2::isSegmentIntersect(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4)

{
  byte bVar1;
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
  
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)param_2;
  if ((fVar2 != fVar3) || (*(float *)(param_1 + 4) != *(float *)(param_2 + 4))) {
    fVar5 = *(float *)param_3;
    if (fVar5 == *(float *)param_4) {
      fVar7 = *(float *)(param_3 + 4);
      fVar9 = *(float *)(param_4 + 4);
      if (fVar7 == fVar9) goto LAB_00f86f58;
    }
    else {
      fVar9 = *(float *)(param_4 + 4);
      fVar7 = *(float *)(param_3 + 4);
    }
    fVar3 = fVar3 - fVar2;
    fVar11 = *(float *)param_4 - fVar5;
    fVar10 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
    fVar6 = fVar3 * (fVar9 - fVar7) - fVar11 * fVar10;
    if (fVar6 != 0.0) {
      fVar8 = *(float *)(param_1 + 4) - fVar7;
      fVar4 = fVar3 * fVar8;
      fVar3 = (fVar11 * fVar8 - (fVar2 - fVar5) * (fVar9 - fVar7)) / fVar6;
      fVar2 = (fVar4 - (fVar2 - fVar5) * fVar10) / fVar6;
      bVar1 = 1;
      goto LAB_00f86f5c;
    }
  }
LAB_00f86f58:
  bVar1 = 0;
LAB_00f86f5c:
  return fVar2 <= 1.0 & 0.0 <= fVar2 & fVar3 <= 1.0 & 0.0 <= fVar3 & bVar1;
}

