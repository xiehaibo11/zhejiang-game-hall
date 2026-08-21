
/* spine::TrackEntry::getAnimationTime() */

float __thiscall spine::TrackEntry::getAnimationTime(TrackEntry *this)

{
  float fVar1;
  float fVar2;
  
  if (this[0x44] == (TrackEntry)0x0) {
    fVar1 = *(float *)(this + 0x68) + *(float *)(this + 0x54);
    if (*(float *)(this + 0x58) <= *(float *)(this + 0x68) + *(float *)(this + 0x54)) {
      fVar1 = *(float *)(this + 0x58);
    }
  }
  else {
    fVar2 = *(float *)(this + 0x58) - *(float *)(this + 0x54);
    fVar1 = *(float *)(this + 0x54);
    if (fVar2 != 0.0) {
      fVar1 = (float)MathUtil::fmod(*(float *)(this + 0x68),fVar2);
      fVar1 = fVar1 + *(float *)(this + 0x54);
    }
  }
  return fVar1;
}

