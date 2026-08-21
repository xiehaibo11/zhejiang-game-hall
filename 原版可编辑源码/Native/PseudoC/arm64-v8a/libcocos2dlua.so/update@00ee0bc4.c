
/* cocos2d::ResizeBy::update(float) */

void __thiscall cocos2d::ResizeBy::update(ResizeBy *this,float param_1)

{
  long lVar1;
  long *plVar2;
  Size aSStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x38);
  if (plVar2 != (long *)0x0) {
    Size::operator*((Size *)(this + 0x58),param_1);
    Size::operator+((Size *)(this + 0x60),aSStack_48);
    (**(code **)(*plVar2 + 0x160))(plVar2,auStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

