
void FUN_00122350(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined **local_60;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = param_2[1];
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    param_2[2] = uVar5;
    pvVar2 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001228c4;
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  if (*(char *)(param_1 + 0x30) == '\0') {
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar2 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001228c4;
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x101011d;
    local_60 = &PTR_FUN_00137488;
    FUN_001228d8(&local_60,param_2);
    if (local_58._1_1_ != '\x01') {
      (*(code *)local_60[5])(&local_60,param_2);
    }
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar2 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001228c4;
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar2 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001228c4;
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    lVar3 = __strlen_chk(&DAT_0012f02c,5);
    FUN_0011bcc0(param_2,&DAT_0012f02c,&DAT_0012f02c + lVar3);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar5 <= uVar4) {
          uVar5 = uVar4;
        }
        param_2[2] = uVar5;
        pvVar2 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_001228c4;
        lVar3 = param_2[1];
        uVar5 = lVar3 + 1;
      }
      param_2[1] = uVar5;
      *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
      FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar5 <= uVar4) {
          uVar5 = uVar4;
        }
        param_2[2] = uVar5;
        pvVar2 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_001228c4;
        lVar3 = param_2[1];
        uVar5 = lVar3 + 1;
      }
      param_2[1] = uVar5;
      *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
      plVar6 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
      if (*(char *)((long)plVar6 + 9) != '\x01') {
        (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
      }
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
      if (*(char *)((long)plVar6 + 9) != '\x01') {
        (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar5 <= uVar4) {
          uVar5 = uVar4;
        }
        param_2[2] = uVar5;
        pvVar2 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_001228c4;
        lVar3 = param_2[1];
        uVar5 = lVar3 + 1;
      }
      param_2[1] = uVar5;
      *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
      FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar5 <= uVar4) {
          uVar5 = uVar4;
        }
        param_2[2] = uVar5;
        pvVar2 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_001228c4;
        lVar3 = param_2[1];
        uVar5 = lVar3 + 1;
      }
      param_2[1] = uVar5;
      *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    }
    lVar3 = __strlen_chk(&DAT_0012f26e,5);
    FUN_0011bcc0(param_2,&DAT_0012f26e,&DAT_0012f26e + lVar3);
    FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar2 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001228c4;
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar2 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001228c4;
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x101011d;
    local_60 = &PTR_FUN_00137488;
    FUN_001228d8(&local_60,param_2);
    if (local_58._1_1_ != '\x01') {
      (*(code *)local_60[5])(&local_60,param_2);
    }
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar2 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001228c4;
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  }
  lVar3 = param_2[1];
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    param_2[2] = uVar5;
    pvVar2 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001228c4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

