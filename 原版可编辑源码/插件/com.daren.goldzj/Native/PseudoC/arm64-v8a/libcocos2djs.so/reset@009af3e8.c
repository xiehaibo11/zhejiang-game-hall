
/* cocos2d::TextRowSpace::reset() */

void __thiscall cocos2d::TextRowSpace::reset(TextRowSpace *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  this[0x30] = (TextRowSpace)0x0;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 8) = 0x80000000800000;
  *(undefined8 *)this = 0x7f7fffff7f7fffff;
  return;
}

