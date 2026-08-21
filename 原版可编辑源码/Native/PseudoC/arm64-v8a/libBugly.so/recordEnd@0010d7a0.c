
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recordEnd(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char local_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = snprintf(local_20,0x14,"%d",(ulong)param_2);
  if (iVar1 == -1) {
    log2Console(6,"CrashReport-Native","snprintf %d",param_2);
    local_20[2] = 0;
    local_20[0] = '-';
    local_20[1] = 0x31;
  }
  iVar1 = recordProperty(param_1,"rqd_bc",local_20);
  if (iVar1 == -1) {
    log2Console(6,"CrashReport-Native","write property fail %s %d","rqd_bc",local_20);
    iVar1 = -1;
  }
  else {
    iVar2 = recordStr(param_1,"NATIVE_RQD_REPORT");
    iVar1 = iVar1 + iVar2;
    if (iVar2 == -1) {
      log2Console(6,"CrashReport-Native","write end fail");
      iVar1 = -1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

