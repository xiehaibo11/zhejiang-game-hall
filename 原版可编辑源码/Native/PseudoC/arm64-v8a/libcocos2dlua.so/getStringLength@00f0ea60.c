
/* cocos2d::Label::getStringLength() */

uint __thiscall cocos2d::Label::getStringLength(Label *this)

{
  uint uVar1;
  
  if (((byte)this[0x310] & 1) == 0) {
    uVar1 = (uint)((byte)this[0x310] >> 1);
  }
  else {
    uVar1 = (uint)*(undefined8 *)(this + 0x318);
  }
  *(uint *)(this + 0x420) = uVar1;
  return uVar1;
}

