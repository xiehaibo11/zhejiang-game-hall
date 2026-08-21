
void dumpAbortMessage(undefined4 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_44c [1036];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0xc) == 6) {
    if (localMapInfoList == 0) {
      localMapInfoList = initCurrentMapInfoList(0,1);
    }
    lVar2 = localMapInfoList;
    memset(auStack_44c,0,0x401);
    getAbortMessage(lVar2,auStack_44c,0x400);
    log2Report(param_1,0,"\nabort message:  %s",auStack_44c);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

