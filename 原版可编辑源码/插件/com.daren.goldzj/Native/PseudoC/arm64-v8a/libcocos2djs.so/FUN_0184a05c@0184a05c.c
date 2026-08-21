
void FUN_0184a05c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar3 = param_2[1];
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    param_2[2] = uVar5;
    pvVar1 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0184a3d0;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_01844180(param_1 + 0x18,param_2);
  lVar3 = param_2[1];
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    param_2[2] = uVar5;
    pvVar1 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_0184a3d0;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x29;
  param_2[1] = param_2[1] + 1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_2[1];
    uVar5 = lVar3 + 6;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0184a3d0;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar1 + lVar3) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar2 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    lVar3 = param_2[1];
    uVar5 = lVar3 + 9;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0184a3d0;
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar3)," volatile",9);
    param_2[1] = param_2[1] + 9;
    uVar2 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    lVar3 = param_2[1];
    uVar5 = lVar3 + 9;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0184a3d0;
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar3)," restrict",9);
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar3 = param_2[1];
    uVar5 = lVar3 + 3;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0184a3d0;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x26;
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x2620;
    lVar3 = 3;
LAB_0184a324:
    param_2[1] = param_2[1] + lVar3;
  }
  else if (*(char *)(param_1 + 0x2c) == '\x01') {
    lVar3 = param_2[1];
    uVar5 = lVar3 + 2;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0184a3d0;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x2620;
    lVar3 = 2;
    goto LAB_0184a324;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_0184a3d0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x20;
    plVar6 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if (*(char *)((long)plVar6 + 9) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0184a3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
      return;
    }
  }
  return;
}

