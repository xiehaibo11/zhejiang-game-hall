
/* spine::Bone::getWorldScaleX() */

void __thiscall spine::Bone::getWorldScaleX(Bone *this)

{
  MathUtil::sqrt(*(float *)(this + 0x7c) * *(float *)(this + 0x7c) +
                 *(float *)(this + 0x88) * *(float *)(this + 0x88));
  return;
}

