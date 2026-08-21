
/* cocos2d::ui::Button::setupDisabledTexture(bool) */

void __thiscall cocos2d::ui::Button::setupDisabledTexture(Button *this,bool param_1)

{
  Size *pSVar1;
  
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
  Size::operator=((Size *)(this + 0x558),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x562] = (Button)param_1;
  this[0x565] = (Button)0x1;
  return;
}

