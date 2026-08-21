
/* cocos2d::RectApplyAffineTransform(cocos2d::Rect const&, cocos2d::AffineTransform const&) */

void __thiscall
cocos2d::RectApplyAffineTransform(cocos2d *this,Rect *param_1,AffineTransform *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Rect *in_x8;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar6 = (float)Rect::getMinY((Rect *)this);
  fVar7 = (float)Rect::getMinX((Rect *)this);
  fVar8 = (float)Rect::getMaxX((Rect *)this);
  fVar9 = (float)Rect::getMaxY((Rect *)this);
  fVar12 = *(float *)(param_1 + 0x10);
  fVar13 = *(float *)(param_1 + 0x14);
  fVar1 = fVar7 * *(float *)param_1;
  fVar11 = fVar6 * *(float *)(param_1 + 8);
  fVar7 = fVar7 * *(float *)(param_1 + 4);
  fVar6 = fVar6 * *(float *)(param_1 + 0xc);
  fVar5 = fVar8 * *(float *)param_1;
  fVar10 = fVar9 * *(float *)(param_1 + 8);
  fVar9 = fVar9 * *(float *)(param_1 + 0xc);
  fVar8 = fVar8 * *(float *)(param_1 + 4);
  fVar2 = fVar7 + fVar6 + fVar13;
  fVar3 = fVar1 + fVar10 + fVar12;
  fVar7 = fVar7 + fVar9 + fVar13;
  fVar10 = fVar5 + fVar10 + fVar12;
  fVar4 = fVar1 + fVar11 + fVar12;
  fVar12 = fVar5 + fVar11 + fVar12;
  fVar1 = fVar8 + fVar6 + fVar13;
  fVar13 = fVar8 + fVar9 + fVar13;
  fVar8 = fVar10;
  if (fVar3 <= fVar10) {
    fVar8 = fVar3;
  }
  fVar6 = fVar12;
  if (fVar4 <= fVar12) {
    fVar6 = fVar4;
  }
  if (fVar6 <= fVar8) {
    fVar8 = fVar6;
  }
  if (fVar12 <= fVar4) {
    fVar12 = fVar4;
  }
  if (fVar10 <= fVar3) {
    fVar10 = fVar3;
  }
  if (fVar10 <= fVar12) {
    fVar10 = fVar12;
  }
  fVar6 = fVar13;
  if (fVar7 <= fVar13) {
    fVar6 = fVar7;
  }
  fVar11 = fVar1;
  if (fVar2 <= fVar1) {
    fVar11 = fVar2;
  }
  if (fVar11 <= fVar6) {
    fVar6 = fVar11;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  if (fVar13 <= fVar7) {
    fVar13 = fVar7;
  }
  if (fVar13 <= fVar1) {
    fVar13 = fVar1;
  }
  Rect::Rect(in_x8,fVar8,fVar6,fVar10 - fVar8,fVar13 - fVar6);
  return;
}

