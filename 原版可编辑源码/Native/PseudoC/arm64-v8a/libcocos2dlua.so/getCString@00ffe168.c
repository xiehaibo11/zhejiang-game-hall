
/* cocos2d::__String::getCString() const */

__String * __thiscall cocos2d::__String::getCString(__String *this)

{
  if (((byte)this[0x30] & 1) == 0) {
    return this + 0x31;
  }
  return *(__String **)(this + 0x40);
}

