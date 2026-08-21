
/* btSliderConstraint::testLinLimits() */

void __thiscall btSliderConstraint::testLinLimits(btSliderConstraint *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(this + 0xd0);
  fVar3 = *(float *)(this + 0xd4);
  fVar1 = *(float *)(this + 0x420);
  this[0x140] = (btSliderConstraint)0x0;
  *(float *)(this + 0x450) = fVar1;
  if ((fVar2 <= fVar3) && ((fVar3 < fVar1 || (fVar3 = fVar2, fVar1 < fVar2)))) {
    *(float *)(this + 0x420) = fVar1 - fVar3;
    this[0x140] = (btSliderConstraint)0x1;
    return;
  }
  *(undefined4 *)(this + 0x420) = 0;
  return;
}

