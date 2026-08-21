
/* cocos2d::ui::EditBox::setupPressedTexture(bool) */

void __thiscall cocos2d::ui::EditBox::setupPressedTexture(EditBox *this,bool param_1)

{
  Size *pSVar1;
  
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
  Size::operator=((Size *)(this + 0x548),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x559] = (EditBox)param_1;
  this[0x55c] = (EditBox)0x1;
  return;
}

