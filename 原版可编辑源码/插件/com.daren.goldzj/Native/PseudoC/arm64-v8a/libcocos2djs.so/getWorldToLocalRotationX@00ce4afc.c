
/* spine::Bone::getWorldToLocalRotationX() */

float __thiscall spine::Bone::getWorldToLocalRotationX(Bone *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    fVar2 = (float)MathUtil::atan2(*(float *)(lVar1 + 0x7c) * *(float *)(this + 0x88) -
                                   *(float *)(lVar1 + 0x88) * *(float *)(this + 0x7c),
                                   *(float *)(lVar1 + 0x8c) * *(float *)(this + 0x7c) -
                                   *(float *)(lVar1 + 0x80) * *(float *)(this + 0x88));
    return fVar2 * 57.295776;
  }
  return *(float *)(this + 100);
}

