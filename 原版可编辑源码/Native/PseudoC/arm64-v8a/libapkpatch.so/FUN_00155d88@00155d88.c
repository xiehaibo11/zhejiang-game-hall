
void FUN_00155d88(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  undefined **local_60;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar8 = param_2 + 1;
  uVar6 = *puVar8;
  uVar5 = uVar6 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    param_2[2] = uVar5;
    pvVar3 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0015649c;
    uVar6 = *puVar8;
    uVar5 = uVar6 + 1;
  }
  *puVar8 = uVar5;
  *(undefined1 *)((long)pvVar3 + uVar6) = 0x28;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar6 = param_2[1];
    uVar5 = uVar6 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar6 = *puVar8;
      uVar5 = uVar6 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar3 + uVar6) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x1010122;
    local_60 = &PTR_FUN_00167ab0;
    FUN_001564ac(&local_60,param_2);
    uVar6 = param_2[1];
    uVar5 = uVar6 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar6 = *puVar8;
      uVar5 = uVar6 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar3 + uVar6) = 0x29;
    uVar6 = param_2[1];
    uVar5 = uVar6 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar6 = *puVar8;
      uVar5 = uVar6 + 1;
    }
    *puVar8 = uVar5;
    *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
    pvVar3 = *(void **)(param_1 + 0x20);
    uVar5 = *puVar8;
    sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
    if (sVar1 != 0) {
      uVar6 = uVar5 + sVar1;
      if (uVar6 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        param_2[2] = uVar6;
        pvVar4 = realloc((void *)*param_2,uVar6);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_0015649c;
        uVar5 = *puVar8;
      }
      memmove((void *)((long)pvVar4 + uVar5),pvVar3,sVar1);
      uVar5 = *puVar8 + sVar1;
      *puVar8 = uVar5;
    }
    uVar6 = uVar5 + 4;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar5 = *puVar8;
    }
    *(undefined4 *)((long)pvVar3 + uVar5) = 0x2e2e2e20;
    uVar6 = *puVar8;
    uVar5 = uVar6 + 4;
    *puVar8 = uVar5;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar6 = uVar6 + 5;
      if (uVar6 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        param_2[2] = uVar6;
        pvVar3 = realloc((void *)*param_2,uVar6);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_0015649c;
        uVar5 = *puVar8;
        uVar6 = uVar5 + 1;
      }
      *puVar8 = uVar6;
      *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
      pvVar3 = *(void **)(param_1 + 0x20);
      uVar5 = *puVar8;
      sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
      if (sVar1 != 0) {
        uVar6 = uVar5 + sVar1;
        if (uVar6 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar5 = param_2[2] << 1;
          if (uVar6 <= uVar5) {
            uVar6 = uVar5;
          }
          param_2[2] = uVar6;
          pvVar4 = realloc((void *)*param_2,uVar6);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_0015649c;
          uVar5 = *puVar8;
        }
        memmove((void *)((long)pvVar4 + uVar5),pvVar3,sVar1);
        uVar5 = *puVar8 + sVar1;
        *puVar8 = uVar5;
      }
      uVar6 = uVar5 + 1;
      if (uVar6 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        param_2[2] = uVar6;
        pvVar3 = realloc((void *)*param_2,uVar6);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_0015649c;
        uVar5 = *puVar8;
        uVar6 = uVar5 + 1;
      }
      param_2[1] = uVar6;
      *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
      plVar7 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if (*(char *)((long)plVar7 + 9) != '\x01') {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if (*(char *)((long)plVar7 + 9) != '\x01') {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      uVar6 = param_2[1];
      uVar5 = uVar6 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar3 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_0015649c;
        uVar6 = *puVar8;
        uVar5 = uVar6 + 1;
      }
      *puVar8 = uVar5;
      *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
      pvVar3 = *(void **)(param_1 + 0x20);
      uVar5 = *puVar8;
      sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
      if (sVar1 != 0) {
        uVar6 = uVar5 + sVar1;
        if (uVar6 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar5 = param_2[2] << 1;
          if (uVar6 <= uVar5) {
            uVar6 = uVar5;
          }
          param_2[2] = uVar6;
          pvVar4 = realloc((void *)*param_2,uVar6);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_0015649c;
          uVar5 = *puVar8;
        }
        memmove((void *)((long)pvVar4 + uVar5),pvVar3,sVar1);
        uVar5 = *puVar8 + sVar1;
        *puVar8 = uVar5;
      }
      uVar6 = uVar5 + 1;
      if (uVar6 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        param_2[2] = uVar6;
        pvVar3 = realloc((void *)*param_2,uVar6);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_0015649c;
        uVar5 = *puVar8;
        uVar6 = uVar5 + 1;
      }
      *puVar8 = uVar6;
      *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
    }
    uVar6 = param_2[1];
    uVar5 = uVar6 + 4;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar6 = *puVar8;
    }
    *(undefined4 *)((long)pvVar3 + uVar6) = 0x202e2e2e;
    uVar5 = *puVar8 + 4;
    *puVar8 = uVar5;
    pvVar3 = *(void **)(param_1 + 0x20);
    sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
    if (sVar1 != 0) {
      uVar6 = uVar5 + sVar1;
      if (uVar6 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        param_2[2] = uVar6;
        pvVar4 = realloc((void *)*param_2,uVar6);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_0015649c;
        uVar5 = *puVar8;
      }
      memmove((void *)((long)pvVar4 + uVar5),pvVar3,sVar1);
      uVar5 = *puVar8 + sVar1;
      *puVar8 = uVar5;
    }
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
    uVar6 = param_2[1];
    uVar5 = uVar6 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar6 = *puVar8;
      uVar5 = uVar6 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar3 + uVar6) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x1010122;
    local_60 = &PTR_FUN_00167ab0;
    FUN_001564ac(&local_60,param_2);
    uVar6 = param_2[1];
    uVar5 = uVar6 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015649c;
      uVar6 = *puVar8;
      uVar5 = uVar6 + 1;
    }
    *puVar8 = uVar5;
    *(undefined1 *)((long)pvVar3 + uVar6) = 0x29;
  }
  uVar6 = param_2[1];
  uVar5 = uVar6 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    param_2[2] = uVar5;
    pvVar3 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_0015649c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    uVar6 = *puVar8;
    uVar5 = uVar6 + 1;
  }
  *puVar8 = uVar5;
  *(undefined1 *)((long)pvVar3 + uVar6) = 0x29;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

