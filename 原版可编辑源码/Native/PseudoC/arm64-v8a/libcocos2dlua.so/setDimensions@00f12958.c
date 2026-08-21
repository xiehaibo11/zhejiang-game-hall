
/* cocos2d::LabelTTF::setDimensions(cocos2d::Size const&) */

void __thiscall cocos2d::LabelTTF::setDimensions(LabelTTF *this,Size *param_1)

{
  Label::setDimensions(*(Label **)(this + 0x308),*(float *)param_1,*(float *)(param_1 + 4));
  this[0x310] = (LabelTTF)0x1;
  return;
}

