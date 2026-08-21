
/* cocos2d::__String::length() const */

ulong __thiscall cocos2d::__String::length(__String *this)

{
  if (((byte)this[0x30] & 1) == 0) {
    return (ulong)((byte)this[0x30] >> 1);
  }
  return *(ulong *)(this + 0x38);
}

