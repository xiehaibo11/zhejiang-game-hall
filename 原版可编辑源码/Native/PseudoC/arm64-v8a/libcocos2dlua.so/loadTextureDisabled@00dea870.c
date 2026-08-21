
/* cocos2d::ui::EditBox::loadTextureDisabled(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::ui::EditBox::loadTextureDisabled(EditBox *this,SpriteFrame *param_1)

{
  Size *pSVar1;
  
  (**(code **)(**(long **)(this + 0x508) + 0x610))();
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x508) + 0x168))();
  Size::operator=((Size *)(this + 0x550),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x55a] = (EditBox)(param_1 != (SpriteFrame *)0x0);
  this[0x55d] = (EditBox)0x1;
  return;
}

