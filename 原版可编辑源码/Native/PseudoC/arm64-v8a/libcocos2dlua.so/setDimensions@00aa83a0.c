
/* fairygui::FUIRichText::setDimensions(float, float) */

void __thiscall fairygui::FUIRichText::setDimensions(FUIRichText *this,float param_1,float param_2)

{
  if (((1 < *(int *)(this + 0x354)) && (*(float *)(this + 0x344) != param_1)) ||
     (param_1 < *(float *)(this + 0x80))) {
    this[0x340] = (FUIRichText)0x1;
  }
  cocos2d::Size::setSize((Size *)(this + 0x344),param_1,param_2);
  return;
}

