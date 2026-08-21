
/* cocos2d::ui::TabHeader::onSizeChanged() */

void __thiscall cocos2d::ui::TabHeader::onSizeChanged(TabHeader *this)

{
  long lVar1;
  long *plVar2;
  undefined1 local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  AbstractCheckButton::onSizeChanged((AbstractCheckButton *)this);
  plVar2 = *(long **)(this + 0x5c0);
  Size::operator*((Size *)(this + 0x80),0.5);
  (**(code **)(*plVar2 + 0x98))(plVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

