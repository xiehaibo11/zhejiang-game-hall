
/* universe::Copy::onResult(universe::CopyTask&) */

void __thiscall universe::Copy::onResult(Copy *this,CopyTask *param_1)

{
  char *pcVar1;
  CopyTask CVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  CopyTask *pCVar6;
  CopyTask local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  CVar2 = param_1[0x70];
  pcVar4 = (char *)Translated::getInstance();
  if (((byte)param_1[0x20] & 1) == 0) {
    pCVar6 = param_1 + 0x21;
  }
  else {
    pCVar6 = *(CopyTask **)(param_1 + 0x30);
  }
                    /* try { // try from 009e7e5c to 00ae7eab has its CatchHandler @ 009e7e5c
                       catch() { ... } // from try @ 009e7e5c with catch @ 009e7e5c
                       catch() { ... } // from try @ 009e7f00 with catch @ 009e7e5c
                       catch() { ... } // from try @ 009e7f38 with catch @ 009e7e5c */
  pcVar1 = "Copy: failed %s";
  if (CVar2 != (CopyTask)0x0) {
    pcVar1 = "Copy: success %s";
  }
  Translated::log(pcVar4,pcVar1,pCVar6);
  plVar5 = *(long **)(this + 0x50);
  if (plVar5 != (long *)0x0) {
    local_3c[0] = param_1[0x70];
    (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x50,local_3c);
  }
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 009e7eac to 00ae7eb3 has its CatchHandler @ 009e7f7c */
                    /* try { // try from 009e7eb4 to 00ae7eff has its CatchHandler @ 009e7f80 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

