
/* spine::Bone::localToWorldRotation(float) */

float __thiscall spine::Bone::localToWorldRotation(Bone *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 - (*(float *)(this + 0x48) - *(float *)(this + 0x54));
  fVar1 = (float)MathUtil::sinDeg(fVar2);
  fVar2 = (float)MathUtil::cosDeg(fVar2);
  fVar1 = (float)MathUtil::atan2(fVar2 * *(float *)(this + 0x88) + fVar1 * *(float *)(this + 0x8c),
                                 fVar2 * *(float *)(this + 0x7c) + fVar1 * *(float *)(this + 0x80));
  return fVar1 * 57.295776;
}

