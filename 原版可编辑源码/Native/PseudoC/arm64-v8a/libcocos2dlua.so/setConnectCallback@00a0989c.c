
/* universe::network::GuoPengFei::setConnectCallback(std::__ndk1::function<void (bool)> const&) */

void __thiscall
universe::network::GuoPengFei::setConnectCallback(GuoPengFei *this,function *param_1)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00a098ac to 00b0990b has its CatchHandler @ 00a097d8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,&DAT_012f8bab);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar3) {
                    /* try { // try from 00a0990c to 00b09953 has its CatchHandler @ 00a0990c
                       catch() { ... } // from try @ 00a0990c with catch @ 00a0990c
                       catch() { ... } // from try @ 00a09980 with catch @ 00a0990c */
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
                    /* catch() { ... } // from try @ 00a0984c with catch @ 00a098ec */
                    /* catch() { ... } // from try @ 00a09828 with catch @ 00a098f0
                       catch() { ... } // from try @ 00a09898 with catch @ 00a098f0 */
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_009e0664(alStack_70,this + 0x20);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a09958;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
                    /* try { // try from 00a09954 to 00b0997f has its CatchHandler @ 00a099d8 */
  (*pcVar4)();
LAB_00a09958:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

