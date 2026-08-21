
/* cocos2d::Timer::isExhausted() const */

bool __thiscall cocos2d::Timer::isExhausted(Timer *this)

{
  if (this[0x34] != (Timer)0x0) {
    return false;
  }
  return *(uint *)(this + 0x3c) < *(uint *)(this + 0x38);
}

