
/* cocos2d::ui::EditBox::setFontColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ui::EditBox::setFontColor(EditBox *this,Color3B *param_1)

{
  long lVar1;
  long *plVar2;
  Color4B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B(aCStack_30,param_1,0xff);
  plVar2 = *(long **)(this + 0x5b8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,aCStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

