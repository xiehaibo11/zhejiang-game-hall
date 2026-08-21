
/* cocos2d::Physics3DSliderConstraint::setUpperAngLimit(float) */

void __thiscall
cocos2d::Physics3DSliderConstraint::setUpperAngLimit(Physics3DSliderConstraint *this,float param_1)

{
  float fVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)(this + 0x28);
  fVar3 = fmodf(param_1,6.2831855);
  if (-3.1415927 <= fVar3) {
    if (fVar3 <= 3.1415927) goto LAB_01019ae8;
    fVar1 = -6.2831855;
  }
  else {
    fVar1 = 6.2831855;
  }
  fVar3 = fVar3 + fVar1;
LAB_01019ae8:
  *(float *)(lVar2 + 0xdc) = fVar3;
  return;
}

