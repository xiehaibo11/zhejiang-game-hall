
/* cocos2d::ui::Button::loadTextureNormal(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::ui::Button::loadTextureNormal(Button *this,SpriteFrame *param_1)

{
  long lVar1;
  Size *pSVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x4f0) + 0x610))();
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Size::operator=((Size *)(this + 0x548),pSVar2);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  if (this[0x381] != (Button)0x0) {
    if (this[0x515] != (Button)0x0) goto LAB_00dc0fb4;
    (**(code **)(*(long *)this + 0x6a8))(auStack_40,this);
  }
  Widget::updateContentSizeWithTextureSize((Size *)this);
LAB_00dc0fb4:
  this[0x560] = (Button)(param_1 != (SpriteFrame *)0x0);
  this[0x563] = (Button)0x1;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

