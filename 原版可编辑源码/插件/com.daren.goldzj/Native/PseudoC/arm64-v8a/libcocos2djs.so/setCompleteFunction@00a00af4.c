
/* universe::core::SimpleProvided::setCompleteFunction(std::__ndk1::function<void ()> const&) */

void __thiscall
universe::core::SimpleProvided::setCompleteFunction(SimpleProvided *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
                    /* try { // try from 00a00b04 to 00b00b1b has its CatchHandler @ 00a00f90 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 00a00b3c to 00b00b53 has its CatchHandler @ 00a00fa0 */
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
                    /* try { // try from 00a00b24 to 00b00b2f has its CatchHandler @ 00a00f8c */
                    /* try { // try from 00a00b30 to 00b00b3b has its CatchHandler @ 00a00f88 */
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_008feca4(alStack_60,this + 0x20);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
                    /* try { // try from 00a00b7c to 00b00b83 has its CatchHandler @ 00a00f50 */
    if (local_40 == (long *)0x0) goto LAB_00a00b98;
    pcVar3 = *(code **)(*local_40 + 0x28);
                    /* try { // try from 00a00b88 to 00b00b9f has its CatchHandler @ 00a00f34 */
  }
  (*pcVar3)();
LAB_00a00b98:
                    /* try { // try from 00a00ba4 to 00b00bab has its CatchHandler @ 00a00f2c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00a00bac to 00b00bcb has its CatchHandler @ 00a00f38 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

