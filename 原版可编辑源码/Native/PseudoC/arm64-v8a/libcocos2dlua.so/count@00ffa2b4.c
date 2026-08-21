
/* cocos2d::__Dictionary::count() */

undefined4 __thiscall cocos2d::__Dictionary::count(__Dictionary *this)

{
  if (*(long *)(this + 0x30) != 0) {
    return *(undefined4 *)(*(long *)(*(long *)(this + 0x30) + 0x110) + 0x10);
  }
  return 0;
}

