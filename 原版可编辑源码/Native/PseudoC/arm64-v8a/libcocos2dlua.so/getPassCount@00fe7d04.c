
/* cocos2d::Technique::getPassCount() const */

long __thiscall cocos2d::Technique::getPassCount(Technique *this)

{
  return *(long *)(this + 0x80) - *(long *)(this + 0x78) >> 3;
}

