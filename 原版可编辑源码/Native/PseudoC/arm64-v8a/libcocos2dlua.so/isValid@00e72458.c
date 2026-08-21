
/* cocos2d::experimental::PcmData::isValid() const */

bool __thiscall cocos2d::experimental::PcmData::isValid(PcmData *this)

{
  if ((((0 < *(int *)(this + 0x10)) && (0 < *(int *)(this + 0x14))) && (0 < *(int *)(this + 0x18)))
     && (((0 < *(int *)(this + 0x1c) && (0 < *(int *)(this + 0x28))) &&
         (0.0 < *(float *)(this + 0x2c))))) {
    return *(long *)this != 0;
  }
  return false;
}

