
/* cocos2d::ui::TextField::getPasswordStyleText() const */

byte * __thiscall cocos2d::ui::TextField::getPasswordStyleText(TextField *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
                    /* try { // try from 00dcf72c to 00ecf73b has its CatchHandler @ 00dcf794 */
  pbVar1 = (byte *)TextFieldTTF::getPasswordTextStyle(*(TextFieldTTF **)(this + 0x4f0));
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
  return pbVar2;
}

