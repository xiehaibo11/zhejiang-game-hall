
/* cocos2d::ui::Button::loadTexturePressed(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::ui::Button::loadTexturePressed(Button *this,SpriteFrame *param_1)

{
  Size *pSVar1;
  
  (**(code **)(**(long **)(this + 0x4f8) + 0x610))();
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x550),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x561] = (Button)(param_1 != (SpriteFrame *)0x0);
  this[0x564] = (Button)0x1;
  return;
}

