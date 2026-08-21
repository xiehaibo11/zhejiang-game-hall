
void FUN_00124f28(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = lVar2 + 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (uVar3 <= uVar4) {
      if (uVar4 <= uVar3 << 1) {
        uVar4 = uVar3 << 1;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_00125120;
      lVar2 = param_2[1];
      uVar4 = lVar2 + 1;
    }
    else {
      pvVar1 = (void *)*param_2;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x2e;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if (*(char *)((long)plVar5 + 9) != '\x01') {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
  }
  else {
    if (uVar3 <= uVar4) {
      if (uVar4 <= uVar3 << 1) {
        uVar4 = uVar3 << 1;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_00125120;
      lVar2 = param_2[1];
      uVar4 = lVar2 + 1;
    }
    else {
      pvVar1 = (void *)*param_2;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if (*(char *)((long)plVar5 + 9) != '\x01') {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
    if (uVar4 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_00125120:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar2 = param_2[1];
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if ((*(byte *)(plVar5 + 1) & 0xfe) != 0x42) {
    lVar2 = __strlen_chk(&DAT_0012f269,4);
    FUN_0011bcc0(param_2,&DAT_0012f269,&DAT_0012f269 + lVar2);
    plVar5 = *(long **)(param_1 + 0x18);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012511c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}

