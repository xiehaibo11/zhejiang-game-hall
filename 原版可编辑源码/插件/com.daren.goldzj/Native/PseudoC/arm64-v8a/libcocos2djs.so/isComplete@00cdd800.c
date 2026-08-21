
/* spine::TrackEntry::isComplete() */

bool __thiscall spine::TrackEntry::isComplete(TrackEntry *this)

{
  return *(float *)(this + 0x58) - *(float *)(this + 0x54) <= *(float *)(this + 0x68);
}

