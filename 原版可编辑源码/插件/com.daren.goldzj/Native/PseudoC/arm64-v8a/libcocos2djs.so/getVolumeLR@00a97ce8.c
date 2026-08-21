
/* cocos2d::Track::getVolumeLR() */

uint __thiscall cocos2d::Track::getVolumeLR(Track *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (this[0x106] == (Track)0x0) {
                    /* catch() { ... } // from try @ 00a97cc0 with catch @ 00a97cf8 */
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(this + 0xd4);
  }
  uVar1 = gain_from_float(uVar2);
  return uVar1 & 0xffff | uVar1 << 0x10;
}

