
/* cocos2d::LabelTTF::setHorizontalAlignment(cocos2d::TextHAlignment) */

void __thiscall cocos2d::LabelTTF::setHorizontalAlignment(LabelTTF *this,undefined8 param_2)

{
  Label::setAlignment(*(Label **)(this + 0x308),param_2,
                      *(undefined4 *)(*(Label **)(this + 0x308) + 0x454));
  this[0x310] = (LabelTTF)0x1;
  return;
}

