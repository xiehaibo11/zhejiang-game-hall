
/* cocos2d::experimental::Track::getVolumeLR() */

uint __thiscall cocos2d::experimental::Track::getVolumeLR(Track *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (this[0x106] == (Track)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(this + 0xd4);
  }
  uVar1 = gain_from_float(uVar2);
  return uVar1 & 0xffff | uVar1 << 0x10;
}

