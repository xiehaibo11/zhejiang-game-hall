
/* cocos2d::Vec2::getIntersectPoint(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2
   const&, cocos2d::Vec2 const&) */

void __thiscall
cocos2d::Vec2::getIntersectPoint(Vec2 *this,Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)this;
  if ((fVar1 != *(float *)param_1) || (*(float *)(this + 4) != *(float *)(param_1 + 4))) {
    fVar2 = *(float *)param_2;
    if (fVar2 == *(float *)param_3) {
      fVar4 = *(float *)(param_2 + 4);
      fVar5 = *(float *)(param_3 + 4);
      if (fVar4 == fVar5) goto LAB_0087fe94;
    }
    else {
      fVar5 = *(float *)(param_3 + 4);
      fVar4 = *(float *)(param_2 + 4);
    }
    fVar9 = *(float *)(param_1 + 4);
    fVar6 = *(float *)(this + 4);
    fVar7 = *(float *)param_1 - fVar1;
    fVar8 = *(float *)param_3 - fVar2;
    fVar3 = fVar7 * (fVar5 - fVar4) - fVar8 * (fVar9 - fVar6);
    if (fVar3 != 0.0) {
      fVar3 = (fVar8 * (fVar6 - fVar4) - (fVar1 - fVar2) * (fVar5 - fVar4)) / fVar3;
      *in_x8 = fVar1 + fVar7 * fVar3;
      in_x8[1] = fVar6 + fVar3 * (fVar9 - fVar6);
      return;
    }
  }
LAB_0087fe94:
  *(undefined8 *)in_x8 = ZERO;
  return;
}

