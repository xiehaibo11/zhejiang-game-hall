
/* cocos2d::ui::Button::setupPressedTexture(bool) */

void __thiscall cocos2d::ui::Button::setupPressedTexture(Button *this,bool param_1)

{
  Size *pSVar1;
  
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x550),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x561] = (Button)param_1;
  this[0x564] = (Button)0x1;
  return;
}

