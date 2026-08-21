
/* spine::Bone::getWorldScaleY() */

void __thiscall spine::Bone::getWorldScaleY(Bone *this)

{
  MathUtil::sqrt(*(float *)(this + 0x80) * *(float *)(this + 0x80) +
                 *(float *)(this + 0x8c) * *(float *)(this + 0x8c));
  return;
}

