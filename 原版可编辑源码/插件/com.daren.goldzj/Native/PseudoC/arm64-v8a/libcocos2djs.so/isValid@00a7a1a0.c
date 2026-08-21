
/* cocos2d::PcmData::isValid() const */

bool __thiscall cocos2d::PcmData::isValid(PcmData *this)

{
  if (*(int *)(this + 0x10) < 1) {
    return false;
  }
  if (*(int *)(this + 0x14) < 1) {
    return false;
  }
  if (*(int *)(this + 0x18) < 1) {
                    /* try { // try from 00a7a208 to 00b7a23b has its CatchHandler @ 00a7a208
                       catch() { ... } // from try @ 00a7a208 with catch @ 00a7a208
                       catch() { ... } // from try @ 00a7a250 with catch @ 00a7a208 */
    return false;
  }
  if (0 < *(int *)(this + 0x1c)) {
    if (*(int *)(this + 0x28) < 1) {
      return false;
    }
    if (0.0 < *(float *)(this + 0x2c)) {
      return *(long *)this != 0;
    }
    return false;
  }
  return false;
}

