
void FUN_0015b294(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_2[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0015b5c8;
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar6) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_0015555c(param_1 + 0x20,param_2);
  lVar6 = param_2[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0015b5c8;
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar6) = 0x29;
  plVar3 = *(long **)(param_1 + 0x10);
  param_2[1] = param_2[1] + 1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((uVar4 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015b5c8;
      lVar6 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar6) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar2 + lVar6) = 0x6e6f6320;
    uVar4 = *(uint *)(param_1 + 0x38);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015b5c8;
      lVar6 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar6)," volatile",9);
    uVar4 = *(uint *)(param_1 + 0x38);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015b5c8;
      lVar6 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar6)," restrict",9);
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x3c) == '\x02') {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_0015b5c8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar6) + 1) = 0x26;
    *(undefined2 *)((long)pvVar2 + lVar6) = 0x2620;
    lVar6 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x3c) != '\x01') goto LAB_0015b570;
    lVar6 = param_2[1];
    uVar1 = lVar6 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015b5c8;
      lVar6 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar6) = 0x2620;
    lVar6 = 2;
  }
  param_2[1] = param_2[1] + lVar6;
LAB_0015b570:
  plVar3 = *(long **)(param_1 + 0x30);
  if ((plVar3 != (long *)0x0) &&
     ((**(code **)(*plVar3 + 0x20))(plVar3,param_2), *(char *)((long)plVar3 + 9) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x0015b5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
    return;
  }
  return;
}

