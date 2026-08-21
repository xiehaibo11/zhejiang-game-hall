
/* universe::Unzipper::setListener(std::__ndk1::function<void (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, char const*, float)>
   const&) */

void __thiscall universe::Unzipper::setListener(Unzipper *this,function *param_1)

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
                    /* try { // try from 00a09fd0 to 00b0a01b has its CatchHandler @ 00a09fd0
                       catch() { ... } // from try @ 00a09fd0 with catch @ 00a09fd0
                       catch() { ... } // from try @ 00a0a02c with catch @ 00a09fd0 */
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
                    /* try { // try from 00a0a01c to 00b0a02b has its CatchHandler @ 00a0a068 */
  FUN_0097aef8(alStack_60,this + 0x30);
                    /* try { // try from 00a0a02c to 00b0a07b has its CatchHandler @ 00a09fd0 */
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00a0a054;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00a0a054:
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00a0a01c with catch @ 00a0a068 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

