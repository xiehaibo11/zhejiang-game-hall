
/* spine::Bone::getWorldRotationX() */

float __thiscall spine::Bone::getWorldRotationX(Bone *this)

{
  float fVar1;
  
  fVar1 = (float)MathUtil::atan2(*(float *)(this + 0x88),*(float *)(this + 0x7c));
  return fVar1 * 57.295776;
}

