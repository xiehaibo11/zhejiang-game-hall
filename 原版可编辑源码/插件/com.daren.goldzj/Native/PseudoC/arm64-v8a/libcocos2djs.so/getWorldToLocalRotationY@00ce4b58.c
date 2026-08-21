
/* spine::Bone::getWorldToLocalRotationY() */

float __thiscall spine::Bone::getWorldToLocalRotationY(Bone *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    fVar2 = (float)MathUtil::atan2(*(float *)(lVar1 + 0x7c) * *(float *)(this + 0x8c) -
                                   *(float *)(lVar1 + 0x88) * *(float *)(this + 0x80),
                                   *(float *)(lVar1 + 0x8c) * *(float *)(this + 0x80) -
                                   *(float *)(lVar1 + 0x80) * *(float *)(this + 0x8c));
    return fVar2 * 57.295776;
  }
  return *(float *)(this + 100);
}

