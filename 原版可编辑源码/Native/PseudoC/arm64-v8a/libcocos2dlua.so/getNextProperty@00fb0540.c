
/* cocos2d::Properties::getNextProperty() */

byte * __thiscall cocos2d::Properties::getNextProperty(Properties *this)

{
  byte *pbVar1;
  
  if (*(byte **)(this + 0x70) == *(byte **)(this + 0x60)) {
    pbVar1 = *(byte **)(this + 0x58);
  }
  else {
    pbVar1 = *(byte **)(this + 0x70) + 0x30;
  }
  *(byte **)(this + 0x70) = pbVar1;
  if (pbVar1 != *(byte **)(this + 0x60)) {
    if ((*pbVar1 & 1) == 0) {
      return pbVar1 + 1;
    }
    return *(byte **)(pbVar1 + 0x10);
  }
  return (byte *)0x0;
}

