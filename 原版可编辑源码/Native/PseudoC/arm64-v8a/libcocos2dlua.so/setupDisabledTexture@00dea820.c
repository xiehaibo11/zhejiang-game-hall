
/* cocos2d::ui::EditBox::setupDisabledTexture(bool) */

void __thiscall cocos2d::ui::EditBox::setupDisabledTexture(EditBox *this,bool param_1)

{
  Size *pSVar1;
  
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x508) + 0x168))();
  Size::operator=((Size *)(this + 0x550),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x55a] = (EditBox)param_1;
  this[0x55d] = (EditBox)0x1;
  return;
}

