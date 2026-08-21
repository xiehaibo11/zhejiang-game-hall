
/* cocos2d::LabelTTF::setVerticalAlignment(cocos2d::TextVAlignment) */

void __thiscall cocos2d::LabelTTF::setVerticalAlignment(LabelTTF *this,undefined4 param_2)

{
  Label::setAlignment(*(Label **)(this + 0x308),*(undefined4 *)(*(Label **)(this + 0x308) + 0x450),
                      param_2);
  this[0x310] = (LabelTTF)0x1;
  return;
}

