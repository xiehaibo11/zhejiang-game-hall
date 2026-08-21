
/* cocos2d::ui::EditBox::loadTexturePressed(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::ui::EditBox::loadTexturePressed(EditBox *this,SpriteFrame *param_1)

{
  Size *pSVar1;
  
  (**(code **)(**(long **)(this + 0x500) + 0x610))();
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
  Size::operator=((Size *)(this + 0x548),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x559] = (EditBox)(param_1 != (SpriteFrame *)0x0);
  this[0x55c] = (EditBox)0x1;
  return;
}

