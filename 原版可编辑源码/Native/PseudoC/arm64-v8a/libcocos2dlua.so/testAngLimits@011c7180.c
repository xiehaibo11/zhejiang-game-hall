
/* btSliderConstraint::testAngLimits() */

void __thiscall btSliderConstraint::testAngLimits(btSliderConstraint *this)

{
  float fVar1;
  float fVar2;
  
  *(undefined4 *)(this + 0x458) = 0;
  this[0x141] = (btSliderConstraint)0x0;
  if (*(float *)(this + 0xd8) <= *(float *)(this + 0xdc)) {
    fVar1 = atan2f(*(float *)(this + 0x358) * *(float *)(this + 0x394) +
                   *(float *)(this + 0x368) * *(float *)(this + 0x3a4) +
                   *(float *)(this + 0x378) * *(float *)(this + 0x3b4),
                   *(float *)(this + 0x354) * *(float *)(this + 0x394) +
                   *(float *)(this + 0x364) * *(float *)(this + 0x3a4) +
                   *(float *)(this + 0x374) * *(float *)(this + 0x3b4));
    fVar1 = (float)btAdjustAngleToLimits(fVar1,*(float *)(this + 0xd8),*(float *)(this + 0xdc));
    fVar2 = *(float *)(this + 0xd8);
    *(float *)(this + 0x454) = fVar1;
    if ((fVar1 < fVar2) || (fVar2 = *(float *)(this + 0xdc), fVar2 < fVar1)) {
      *(float *)(this + 0x458) = fVar1 - fVar2;
      this[0x141] = (btSliderConstraint)0x1;
    }
  }
  return;
}

