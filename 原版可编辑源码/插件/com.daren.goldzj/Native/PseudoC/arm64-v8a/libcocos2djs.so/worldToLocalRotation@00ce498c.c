
/* spine::Bone::worldToLocalRotation(float) */

float __thiscall spine::Bone::worldToLocalRotation(Bone *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)MathUtil::sinDeg(param_1);
  fVar2 = (float)MathUtil::cosDeg(param_1);
  fVar1 = (float)MathUtil::atan2(fVar1 * *(float *)(this + 0x7c) - fVar2 * *(float *)(this + 0x88),
                                 fVar2 * *(float *)(this + 0x8c) - fVar1 * *(float *)(this + 0x80));
  return (fVar1 * 57.295776 + *(float *)(this + 0x48)) - *(float *)(this + 0x54);
}

