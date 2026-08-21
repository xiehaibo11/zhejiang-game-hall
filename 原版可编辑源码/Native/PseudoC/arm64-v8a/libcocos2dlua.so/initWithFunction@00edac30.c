
/* cocos2d::CallFuncN::initWithFunction(std::__ndk1::function<void (cocos2d::Node*)> const&) */

undefined8 __thiscall cocos2d::CallFuncN::initWithFunction(CallFuncN *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00edacb8 with catch @ 00edac48 */
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
                    /* try { // try from 00edac88 to 00fdacab has its CatchHandler @ 00edade4 */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_00edbd1c(alStack_60,this + 0xa0);
                    /* try { // try from 00edacac to 00fdacb7 has its CatchHandler @ 00edade0 */
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
                    /* try { // try from 00edacb8 to 00fdae3b has its CatchHandler @ 00edac48 */
    if (local_40 == (long *)0x0) goto LAB_00edacd4;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00edacd4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

