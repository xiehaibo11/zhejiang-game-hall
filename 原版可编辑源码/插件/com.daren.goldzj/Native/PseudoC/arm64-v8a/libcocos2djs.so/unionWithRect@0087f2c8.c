
/* cocos2d::Rect::unionWithRect(cocos2d::Rect const&) const */

void cocos2d::Rect::unionWithRect(Rect *param_1)

{
  float fVar1;
  float fVar2;
  float *in_x1;
  float *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar8 = *in_x1;
  fVar3 = *(float *)(param_1 + 8) + fVar2;
  fVar7 = in_x1[1];
  fVar6 = fVar5 + *(float *)(param_1 + 0xc);
  fVar1 = fVar2;
  if (fVar2 <= fVar3) {
    fVar1 = fVar3;
    fVar3 = fVar2;
  }
  fVar9 = in_x1[2] + fVar8;
  fVar2 = fVar6;
  if (fVar5 <= fVar6) {
    fVar2 = fVar5;
    fVar5 = fVar6;
  }
  fVar4 = fVar7 + in_x1[3];
  fVar6 = fVar8;
  if (fVar8 <= fVar9) {
    fVar6 = fVar9;
    fVar9 = fVar8;
  }
  fVar8 = fVar4;
  if (fVar7 <= fVar4) {
    fVar8 = fVar7;
    fVar7 = fVar4;
  }
  if (fVar3 <= fVar9) {
    fVar9 = fVar3;
  }
  if (fVar6 <= fVar1) {
    fVar6 = fVar1;
  }
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  if (fVar2 <= fVar8) {
    fVar8 = fVar2;
  }
  *in_x8 = fVar9;
  in_x8[1] = fVar8;
  in_x8[2] = fVar6 - fVar9;
  in_x8[3] = fVar7 - fVar8;
  return;
}

