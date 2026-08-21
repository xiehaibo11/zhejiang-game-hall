
/* cocos2d::ui::TextField::deleteBackwardEvent() */

void __thiscall cocos2d::ui::TextField::deleteBackwardEvent(TextField *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 local_34;
  TextField *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Ref::retain((Ref *)this);
  if (*(long *)(this + 0x508) != 0) {
    pcVar3 = *(code **)(this + 0x510);
    uVar4 = *(ulong *)(this + 0x518) & 1;
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar2 = (long *)(*(long *)(this + 0x508) + ((long)*(ulong *)(this + 0x518) >> 1));
                    /* try { // try from 00dcfa38 to 00ecfa6b has its CatchHandler @ 00dcfb20 */
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar2);
      }
      (*pcVar3)(plVar2,this,3);
    }
  }
  plVar2 = *(long **)(this + 0x540);
  if (plVar2 != (long *)0x0) {
    local_34 = 3;
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
  }
  plVar2 = *(long **)(this + 0x4b0);
  if (plVar2 != (long *)0x0) {
    local_34 = 3;
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

