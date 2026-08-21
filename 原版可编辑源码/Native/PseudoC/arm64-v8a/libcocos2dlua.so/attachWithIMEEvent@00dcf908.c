
/* cocos2d::ui::TextField::attachWithIMEEvent() */

void __thiscall cocos2d::ui::TextField::attachWithIMEEvent(TextField *this)

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
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar2);
      }
      (*pcVar3)(plVar2,this,0);
    }
  }
  plVar2 = *(long **)(this + 0x540);
                    /* try { // try from 00dcf968 to 00ecf993 has its CatchHandler @ 00dcf9c8 */
  if (plVar2 != (long *)0x0) {
    local_34 = 0;
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
  }
  plVar2 = *(long **)(this + 0x4b0);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 00dcf994 to 00ecf9ef has its CatchHandler @ 00dcf8e4 */
    local_34 = 0;
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00dcf968 with catch @ 00dcf9c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

