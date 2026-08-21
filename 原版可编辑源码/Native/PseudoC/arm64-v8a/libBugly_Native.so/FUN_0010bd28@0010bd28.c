
void FUN_0010bd28(uint param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  void *__ptr;
  undefined8 uVar6;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  log2Console(3,"eup","getCallFrameByAddressMini");
  if (param_4 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    local_78 = 0;
    lStack_70 = 0;
    local_88 = 0;
    lStack_80 = 0;
    __ptr = (void *)FUN_0010c02c(param_3,&lStack_70,&local_78,&lStack_80,&local_88);
    lVar5 = lStack_70;
    uVar4 = local_78;
    lVar3 = lStack_80;
    uVar6 = local_88;
    log2Console(4,"eup",
                "getCallFrameByAddressMini pc:%p moduleName:%s moduleOffset:%08x funcName:%s funcOffset:%08x"
                ,param_3,lStack_70,local_78,lStack_80,local_88);
    puVar1 = &DAT_00126263;
    if ((param_2 & 1) == 0) {
      puVar1 = &DAT_00126266;
    }
    if (lVar3 == 0) {
      if (lVar5 == 0) {
        snprintf(param_4,0x400,"#%02d    %s %016lx    <unknown>",(ulong)param_1,puVar1,param_3);
      }
      else {
        snprintf(param_4,0x400,"#%02d    %s %016lx    %s",(ulong)param_1,puVar1,uVar4,lVar5);
      }
    }
    else {
      snprintf(param_4,0x400,"#%02d    %s %016lx    %s (%s+%lu)",(ulong)param_1,puVar1,uVar4,lVar5,
               lVar3,uVar6);
      free(__ptr);
    }
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

