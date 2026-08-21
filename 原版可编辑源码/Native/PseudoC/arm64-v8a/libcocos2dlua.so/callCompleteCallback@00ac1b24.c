
/* fairygui::GTweener::callCompleteCallback() */

void __thiscall fairygui::GTweener::callCompleteCallback(GTweener *this)

{
  long lVar1;
  long *plVar2;
  GTweener *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x170);
  if (plVar2 != (long *)0x0) {
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x30))();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

