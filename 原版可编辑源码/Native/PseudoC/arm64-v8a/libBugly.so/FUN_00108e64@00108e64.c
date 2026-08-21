
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108e64(uint param_1,char param_2,long param_3,char *param_4)

{
  size_t sVar1;
  int iVar2;
  void *__ptr;
  long lVar3;
  char *__s1;
  undefined8 uVar4;
  long *plVar5;
  size_t __n;
  undefined *puVar6;
  char *__src;
  char *local_28;
  long local_20;
  char *local_18;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == (char *)0x0) {
    uVar4 = 0;
    goto LAB_00109084;
  }
  local_28 = (char *)0x0;
  local_20 = 0;
  local_18 = (char *)0x0;
  local_10 = 0;
  __ptr = (void *)FUN_00108d48(param_3,&local_28,&local_20,&local_18,&local_10);
  if (localMapInfoList == 0) {
    log2Console(4,"CrashReport-Native","There is nothing is the map info list.");
LAB_00109100:
    if (local_28 != (char *)0x0) goto LAB_00108fc0;
  }
  else {
    log2Console(3,"CrashReport-Native","Try to find module for pc: %p",param_3);
    lVar3 = findModuleInMapInfoList(localMapInfoList,param_3);
    if (lVar3 == 0) goto LAB_00109100;
    __s1 = (char *)(lVar3 + 0x43);
    log2Console(3,"CrashReport-Native","Found the module: %s",__s1);
    iVar2 = strcmp(__s1,"<null>");
    if ((iVar2 == 0) && (*(char *)(lVar3 + 0x40) != '\0')) {
      __src = *(char **)(lVar3 + 8);
      if ((*__src != '\0') && (-1 < *__src)) {
        sVar1 = 1;
        do {
          __n = sVar1;
          if (__src[__n] == '\0') break;
          sVar1 = __n + 1;
        } while (-1 < __src[__n]);
        __s1 = calloc(1,(long)((int)__n + 1));
        memcpy(__s1,__src,__n);
      }
    }
    local_20 = *(long *)(lVar3 + 0x28);
    if (local_20 == 0) {
      local_20 = *(long *)(lVar3 + 8);
    }
    local_20 = param_3 - local_20;
    local_28 = __s1;
LAB_00108fc0:
    log2Console(3,"CrashReport-Native","Got module name: %s for pc: %p",local_28,param_3);
    if (local_18 == (char *)0x0) {
      plVar5 = (long *)searchSymbolInElfFile(local_28,local_20);
      if (plVar5 == (long *)0x0) {
        log2Console(3,"CrashReport-Native","Can not find function name for pc: %p",param_3);
        log2Console(3,"CrashReport-Native",
                    "Function with offset %p may only be contained in debug so of: %s",local_20,
                    local_28);
      }
      else {
        local_18 = strdup((char *)plVar5[2]);
        local_10 = local_20 - *plVar5;
      }
    }
    else {
      log2Console(3,"CrashReport-Native","Got function name: %s with offset: %p",local_18,local_10);
    }
  }
  if (param_2 == '\0') {
    puVar6 = &DAT_00123e48;
    if (local_18 == (char *)0x0) goto LAB_001090c8;
LAB_00109018:
    snprintf(param_4,0x400,"#%02d    %s %016lx    %s (%s+%lu)",(ulong)param_1,puVar6,local_20,
             local_28,local_18,local_10);
    free(__ptr);
  }
  else {
    puVar6 = &DAT_00123e40;
    if (local_18 != (char *)0x0) goto LAB_00109018;
LAB_001090c8:
    if (local_28 == (char *)0x0) {
      snprintf(param_4,0x400,"#%02d    %s %016lx    <unknown>",(ulong)param_1,puVar6,param_3);
    }
    else {
      snprintf(param_4,0x400,"#%02d    %s %016lx    %s",(ulong)param_1,puVar6,local_20);
    }
  }
  if ((local_28 != (char *)0x0) && (lVar3 = getElfInfoWithSymbolTable(local_28,1), lVar3 != 0)) {
    snprintf(param_4,0x400,"%s [%s:%s:%s]",param_4,lVar3 + 0x88,lVar3 + 0x98,lVar3 + 0xa8);
  }
  uVar4 = 1;
LAB_00109084:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

