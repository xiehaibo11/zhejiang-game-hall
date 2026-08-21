
/* spine::Bone::getWorldRotationY() */

float __thiscall spine::Bone::getWorldRotationY(Bone *this)

{
  float fVar1;
  
  fVar1 = (float)MathUtil::atan2(*(float *)(this + 0x8c),*(float *)(this + 0x80));
  return fVar1 * 57.295776;
}

