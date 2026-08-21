
/* cocos2d::ui::ScrollViewBar::calculatePosition(float, float, float, float, float) */

float __thiscall
cocos2d::ui::ScrollViewBar::calculatePosition
          (ScrollViewBar *this,float param_1,float param_2,float param_3,float param_4,float param_5
          )

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1 - param_2) + ABS(param_4);
  if (param_4 == 0.0) {
    fVar2 = param_1 - param_2;
  }
  if (fVar2 == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = param_3 / fVar2;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(fVar2,0x3f800000);
  }
  fVar3 = *(float *)(this + 0x348);
  fVar3 = fVar3 + fVar2 * ((param_2 - param_5) - (fVar3 + fVar3));
  if (*(int *)(this + 800) == 1) {
    pfVar1 = (float *)(**(code **)(**(long **)(this + 0x318) + 0x168))();
    fVar3 = *pfVar1 - *(float *)(this + 0x344);
  }
  return fVar3;
}

