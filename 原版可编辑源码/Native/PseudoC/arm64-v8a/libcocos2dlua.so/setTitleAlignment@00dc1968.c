
/* cocos2d::ui::Button::setTitleAlignment(cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

void __thiscall
cocos2d::ui::Button::setTitleAlignment(Button *this,undefined4 param_2,undefined4 param_3)

{
  Label *pLVar1;
  
  pLVar1 = *(Label **)(this + 0x508);
  if (pLVar1 == (Label *)0x0) {
    (**(code **)(*(long *)this + 0x6a0))(this);
    pLVar1 = *(Label **)(this + 0x508);
  }
  Label::setAlignment(pLVar1,param_2,param_3);
  return;
}

