
void FUN_018439c4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  size_t __n;
  void *pvVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  
  pcVar5 = *(char **)(param_1 + 0x18);
  pcVar2 = *(char **)(param_1 + 0x20);
  if ((long)pcVar2 - (long)pcVar5 == 1) {
    if (pcVar5 != pcVar2) {
      pcVar9 = ">";
      do {
        if (*pcVar5 != *pcVar9) goto LAB_01843a6c;
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar5);
    }
    lVar7 = param_2[1];
    uVar1 = lVar7 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_01843d20;
      lVar7 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar7) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
LAB_01843a6c:
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_01843d20;
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar7) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar10 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2);
  }
  lVar7 = param_2[1];
  uVar1 = lVar7 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_01843d20;
    lVar7 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar7) = 0x2029;
  lVar7 = param_2[1] + 2;
  param_2[1] = lVar7;
  pvVar3 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar7 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_01843d20;
      lVar7 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar7),pvVar3,__n);
    lVar7 = param_2[1] + __n;
    param_2[1] = lVar7;
  }
  uVar1 = lVar7 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_01843d20;
    lVar7 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar7) = 0x2820;
  param_2[1] = param_2[1] + 2;
  plVar10 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2);
  }
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_01843d20;
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar7) = 0x29;
  lVar8 = param_2[1];
  lVar7 = lVar8 + 1;
  param_2[1] = lVar7;
  pcVar5 = *(char **)(param_1 + 0x18);
  pcVar2 = *(char **)(param_1 + 0x20);
  if ((long)pcVar2 - (long)pcVar5 == 1) {
    if (pcVar5 != pcVar2) {
      pcVar9 = ">";
      do {
        if (*pcVar5 != *pcVar9) {
          return;
        }
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar5);
    }
    uVar1 = lVar8 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_01843d20:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar7) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

