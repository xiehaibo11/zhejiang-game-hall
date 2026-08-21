
/* cocos2d::Properties::getNamespace() const */

Properties * __thiscall cocos2d::Properties::getNamespace(Properties *this)

{
  if (((byte)this[0x10] & 1) == 0) {
    return this + 0x11;
  }
  return *(Properties **)(this + 0x20);
}

