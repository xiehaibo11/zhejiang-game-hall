
/* fairygui::GTweener::onStart(std::__ndk1::function<void (fairygui::GTweener*)>) */

GTweener * __thiscall fairygui::GTweener::onStart(GTweener *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_2 == plVar2) {
                    /* try { // try from 00ac138c to 00bc139f has its CatchHandler @ 00ac1424 */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
                    /* try { // try from 00ac1358 to 00bc138b has its CatchHandler @ 00ac1458 */
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_00ac2190(alStack_70,this + 0x120);
                    /* try { // try from 00ac13a4 to 00bc13d7 has its CatchHandler @ 00ac1428 */
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00ac13c8;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00ac13c8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ac13d8 to 00bc1473 has its CatchHandler @ 00ac10c4 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

