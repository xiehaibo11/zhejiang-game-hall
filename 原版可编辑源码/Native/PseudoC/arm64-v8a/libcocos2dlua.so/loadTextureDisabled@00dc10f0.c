
/* cocos2d::ui::Button::loadTextureDisabled(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::ui::Button::loadTextureDisabled(Button *this,SpriteFrame *param_1)

{
  Size *pSVar1;
  
  (**(code **)(**(long **)(this + 0x500) + 0x610))();
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
  Size::operator=((Size *)(this + 0x558),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x562] = (Button)(param_1 != (SpriteFrame *)0x0);
  this[0x565] = (Button)0x1;
  return;
}

