
/* cocos2d::Properties::readChar() */

undefined1 __thiscall cocos2d::Properties::readChar(Properties *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)this;
  if (lVar1 < (*(long **)(this + 8))[1]) {
    lVar2 = **(long **)(this + 8);
    **(long **)this = lVar1 + 1;
    return *(undefined1 *)(lVar2 + lVar1);
  }
  return 0xff;
}

