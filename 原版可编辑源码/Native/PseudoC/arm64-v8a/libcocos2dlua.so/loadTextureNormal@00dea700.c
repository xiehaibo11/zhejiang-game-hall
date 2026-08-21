
/* cocos2d::ui::EditBox::loadTextureNormal(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::ui::EditBox::loadTextureNormal(EditBox *this,SpriteFrame *param_1)

{
  Size *pSVar1;
  
  (**(code **)(**(long **)(this + 0x4f8) + 0x610))();
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x540),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x558] = (EditBox)(param_1 != (SpriteFrame *)0x0);
  this[0x55b] = (EditBox)0x1;
  return;
}

