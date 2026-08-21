
/* btSliderConstraint::getAncorInA() */

float __thiscall btSliderConstraint::getAncorInA(btSliderConstraint *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(this + 0x28);
  fVar2 = (*(float *)(this + 0xd0) + *(float *)(this + 0xd4)) * 0.5;
  return (*(float *)(this + 0x3d0) * fVar2 + *(float *)(this + 0x3e0)) * *(float *)(lVar1 + 8) +
         (fVar2 * *(float *)(this + 0x3d4) + *(float *)(this + 0x3e4)) * *(float *)(lVar1 + 0x18) +
         (fVar2 * *(float *)(this + 0x3d8) + *(float *)(this + 1000)) * *(float *)(lVar1 + 0x28) +
         ((*(float *)(lVar1 + 8) * -*(float *)(lVar1 + 0x38) -
          *(float *)(lVar1 + 0x18) * *(float *)(lVar1 + 0x3c)) -
         *(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x40));
}

