
/* cocos2d::isOneDimensionSegmentOverlap(float, float, float, float, float*, float*) */

undefined4
cocos2d::isOneDimensionSegmentOverlap
          (float param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2;
  if (param_1 <= param_2) {
    fVar3 = param_1;
  }
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  fVar2 = param_4;
  if (param_3 <= param_4) {
    fVar2 = param_3;
  }
  if (param_4 <= param_3) {
    param_4 = param_3;
  }
  uVar1 = 0;
  if ((fVar2 <= param_2) && (fVar3 <= param_4)) {
    if ((fVar3 < fVar2) || (param_4 < fVar3)) {
      if ((param_2 < fVar2) || (param_4 < param_2)) {
        if (param_5 != (float *)0x0) {
          *param_5 = fVar2;
        }
        if (param_6 != (float *)0x0) {
          *param_6 = param_4;
        }
      }
      else {
        if (param_5 != (float *)0x0) {
          *param_5 = fVar2;
        }
        if (param_6 != (float *)0x0) {
          *param_6 = param_2;
        }
      }
    }
    else {
      if (param_5 != (float *)0x0) {
        *param_5 = fVar3;
      }
      if (param_6 != (float *)0x0) {
        if (param_2 <= param_4) {
          param_4 = param_2;
        }
        *param_6 = param_4;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

