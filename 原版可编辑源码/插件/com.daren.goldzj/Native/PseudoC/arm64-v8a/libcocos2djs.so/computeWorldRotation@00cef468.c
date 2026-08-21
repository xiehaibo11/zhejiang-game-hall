
/* spine::PointAttachment::computeWorldRotation(spine::Bone&) */

float __thiscall spine::PointAttachment::computeWorldRotation(PointAttachment *this,Bone *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)MathUtil::cosDeg(*(float *)(this + 0x2c));
  fVar2 = (float)MathUtil::sinDeg(*(float *)(this + 0x2c));
  fVar1 = (float)MathUtil::atan2(fVar1 * *(float *)(param_1 + 0x88) +
                                 fVar2 * *(float *)(param_1 + 0x8c),
                                 fVar1 * *(float *)(param_1 + 0x7c) +
                                 fVar2 * *(float *)(param_1 + 0x80));
  return fVar1 * 57.295776;
}

