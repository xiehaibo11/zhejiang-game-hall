
/* cocos2d::Properties::getId() const */

Properties * __thiscall cocos2d::Properties::getId(Properties *this)

{
  if (((byte)this[0x28] & 1) == 0) {
    return this + 0x29;
  }
  return *(Properties **)(this + 0x38);
}

