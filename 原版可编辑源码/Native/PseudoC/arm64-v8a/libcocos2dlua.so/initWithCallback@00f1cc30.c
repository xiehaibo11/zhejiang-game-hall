
/* cocos2d::MenuItem::initWithCallback(std::__ndk1::function<void (cocos2d::Ref*)> const&) */

undefined8 __thiscall cocos2d::MenuItem::initWithCallback(MenuItem *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00f1cc34 to 0101cc3b has its CatchHandler @ 00f1cc3c */
                    /* catch() { ... } // from try @ 00f1cb0c with catch @ 00f1cc3c
                       catch() { ... } // from try @ 00f1cc34 with catch @ 00f1cc3c
                       try { // try from 00f1cc3c to 0101ccef has its CatchHandler @ 00f1c714 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f1c8cc with catch @ 00f1cc54
                       catch() { ... } // from try @ 00f1cc2c with catch @ 00f1cc54 */
  local_70[0] = 0x3f0000003f000000;
                    /* catch() { ... } // from try @ 00f1c918 with catch @ 00f1cc64 */
  (**(code **)(*(long *)this + 0x148))(this,local_70);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    local_50 = local_70;
    (**(code **)(*plVar2 + 0x18))(plVar2,local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
                    /* catch() { ... } // from try @ 00f1c810 with catch @ 00f1ccbc
                       catch() { ... } // from try @ 00f1cc24 with catch @ 00f1ccbc */
                    /* catch() { ... } // from try @ 00f1c7a0 with catch @ 00f1ccc0 */
  FUN_00dad434(local_70,this + 0x300);
  if (local_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 00f1ca80 with catch @ 00f1ccd0
                       catch() { ... } // from try @ 00f1cb4c with catch @ 00f1ccd0 */
    if (local_50 == (long *)0x0) goto LAB_00f1ccec;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00f1ccec:
  *(undefined2 *)(this + 0x2f8) = 0x100;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

