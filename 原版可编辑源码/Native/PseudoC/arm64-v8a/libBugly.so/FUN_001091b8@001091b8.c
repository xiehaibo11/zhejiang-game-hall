
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001091b8(uint param_1,char param_2,undefined8 param_3,char *param_4)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long local_28;
  undefined8 local_20;
  long local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    __ptr = (void *)FUN_00108d48(param_3,&local_28,&local_20,&local_18,&local_10);
    log2Console(4,"CrashReport-Native","funcName is %s, moduleName is %s",local_18,local_28);
    if (param_2 == '\0') {
      puVar1 = &DAT_00123e48;
    }
    else {
      puVar1 = &DAT_00123e40;
    }
    if (local_18 == 0) {
      if (local_28 == 0) {
        snprintf(param_4,0x400,"#%02d    %s %016lx    <unknown>",(ulong)param_1,puVar1,param_3);
        uVar2 = 1;
      }
      else {
        snprintf(param_4,0x400,"#%02d    %s %016lx    %s",(ulong)param_1,puVar1,local_20);
        uVar2 = 1;
      }
    }
    else {
      snprintf(param_4,0x400,"#%02d    %s %016lx    %s (%s+%lu)",(ulong)param_1,puVar1,local_20,
               local_28,local_18,local_10);
      free(__ptr);
      uVar2 = 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

