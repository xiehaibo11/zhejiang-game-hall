
void FUN_0015c9a4(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_2[1];
  uVar6 = lVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar1 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0015cd24;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_0015555c(param_1 + 0x18,param_2);
  lVar5 = param_2[1];
  uVar6 = lVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar1 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0015cd24;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x29;
  plVar2 = *(long **)(param_1 + 0x10);
  lVar5 = *plVar2;
  param_2[1] = param_2[1] + 1;
  (**(code **)(lVar5 + 0x28))(plVar2,param_2);
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    lVar5 = param_2[1];
    uVar6 = lVar5 + 6;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar1 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0015cd24;
      lVar5 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar5) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar1 + lVar5) = 0x6e6f6320;
    uVar3 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar5 = param_2[1];
    uVar6 = lVar5 + 9;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar1 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0015cd24;
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar5)," volatile",9);
    uVar3 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar5 = param_2[1];
    uVar6 = lVar5 + 9;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar1 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0015cd24;
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar5)," restrict",9);
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar5 = param_2[1];
    uVar6 = lVar5 + 3;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar1 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0015cd24;
      lVar5 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar5) + 1) = 0x26;
    *(undefined2 *)((long)pvVar1 + lVar5) = 0x2620;
    lVar5 = 3;
LAB_0015cc70:
    param_2[1] = param_2[1] + lVar5;
  }
  else if (*(char *)(param_1 + 0x2c) == '\x01') {
    lVar5 = param_2[1];
    uVar6 = lVar5 + 2;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar1 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0015cd24;
      lVar5 = param_2[1];
    }
    *(undefined2 *)((long)pvVar1 + lVar5) = 0x2620;
    lVar5 = 2;
    goto LAB_0015cc70;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar5 = param_2[1];
    uVar6 = lVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar1 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_0015cd24:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
      uVar6 = lVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar1 + lVar5) = 0x20;
    plVar2 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    if (*(char *)((long)plVar2 + 9) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0015cd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      return;
    }
  }
  return;
}

