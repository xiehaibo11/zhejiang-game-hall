
/* cocos2d::ui::EditBox::setupNormalTexture(bool) */

void __thiscall cocos2d::ui::EditBox::setupNormalTexture(EditBox *this,bool param_1)

{
  Size *pSVar1;
  
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x540),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x558] = (EditBox)param_1;
  this[0x55b] = (EditBox)0x1;
  return;
}

