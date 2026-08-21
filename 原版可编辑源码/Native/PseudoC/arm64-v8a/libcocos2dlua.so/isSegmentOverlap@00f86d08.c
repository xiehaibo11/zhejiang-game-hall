
/* cocos2d::Vec2::isSegmentOverlap(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2 const&, cocos2d::Vec2*, cocos2d::Vec2*) */

undefined4
cocos2d::Vec2::isSegmentOverlap
          (Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4,Vec2 *param_5,Vec2 *param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)param_2;
  if ((fVar2 != fVar3) || (*(float *)(param_1 + 4) != *(float *)(param_2 + 4))) {
    fVar4 = *(float *)param_3;
    fVar5 = *(float *)param_4;
    if (fVar4 == fVar5) {
      fVar6 = *(float *)(param_3 + 4);
      fVar8 = *(float *)(param_4 + 4);
      if (fVar6 == fVar8) {
        return 0;
      }
    }
    else {
      fVar8 = *(float *)(param_4 + 4);
      fVar6 = *(float *)(param_3 + 4);
    }
    fVar9 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
    if ((fVar3 - fVar2) * (fVar8 - fVar6) - (fVar5 - fVar4) * fVar9 == 0.0) {
      fVar7 = *(float *)(param_1 + 4) - fVar6;
      if (((fVar5 - fVar4) * fVar7 - (fVar2 - fVar4) * (fVar8 - fVar6) == 0.0) ||
         ((fVar3 - fVar2) * fVar7 - (fVar2 - fVar4) * fVar9 == 0.0)) {
        fVar6 = fVar3;
        if (fVar2 <= fVar3) {
          fVar6 = fVar2;
        }
        if (fVar3 <= fVar2) {
          fVar3 = fVar2;
        }
        fVar2 = fVar5;
        if (fVar4 <= fVar5) {
          fVar2 = fVar4;
        }
        if (fVar5 <= fVar4) {
          fVar5 = fVar4;
        }
        uVar1 = 0;
        if ((fVar2 <= fVar3) && (fVar6 <= fVar5)) {
          if ((fVar6 < fVar2) || (fVar5 < fVar6)) {
            if ((fVar3 < fVar2) || (fVar5 < fVar3)) {
              if (param_5 != (Vec2 *)0x0) {
                *(float *)param_5 = fVar2;
              }
              if (param_6 != (Vec2 *)0x0) {
                *(float *)param_6 = fVar5;
              }
            }
            else {
              if (param_5 != (Vec2 *)0x0) {
                *(float *)param_5 = fVar2;
              }
              if (param_6 != (Vec2 *)0x0) {
                *(float *)param_6 = fVar3;
              }
            }
          }
          else {
            if (param_5 != (Vec2 *)0x0) {
              *(float *)param_5 = fVar6;
            }
            if (param_6 != (Vec2 *)0x0) {
              if (fVar3 <= fVar5) {
                fVar5 = fVar3;
              }
              *(float *)param_6 = fVar5;
            }
          }
          fVar4 = *(float *)(param_1 + 4);
          fVar2 = *(float *)(param_2 + 4);
          fVar6 = *(float *)(param_3 + 4);
          fVar3 = *(float *)(param_4 + 4);
          uVar1 = 0;
          fVar5 = fVar2;
          if (fVar4 <= fVar2) {
            fVar5 = fVar4;
          }
          if (fVar2 <= fVar4) {
            fVar2 = fVar4;
          }
          fVar4 = fVar3;
          if (fVar6 <= fVar3) {
            fVar4 = fVar6;
          }
          if (fVar3 <= fVar6) {
            fVar3 = fVar6;
          }
          if ((fVar4 <= fVar2) && (fVar5 <= fVar3)) {
            if ((fVar5 < fVar4) || (fVar3 < fVar5)) {
              *(float *)(param_5 + 4) = fVar4;
              if ((fVar2 < fVar4) || (fVar3 < fVar2)) {
                *(float *)(param_6 + 4) = fVar3;
              }
              else {
                *(float *)(param_6 + 4) = fVar2;
              }
            }
            else {
              if (fVar2 <= fVar3) {
                fVar3 = fVar2;
              }
              *(float *)(param_5 + 4) = fVar5;
              *(float *)(param_6 + 4) = fVar3;
            }
            uVar1 = 1;
          }
        }
        return uVar1;
      }
    }
  }
  return 0;
}

