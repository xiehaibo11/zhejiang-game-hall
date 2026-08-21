
void FUN_0184b634(long param_1,undefined8 *param_2)

{
  size_t __n;
  int iVar1;
  undefined *__src;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar7 = *(int *)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
  while (*(char *)(lVar2 + 8) == '\f') {
    plVar6 = *(long **)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar7 <= *(int *)(lVar2 + 0x18)) {
      iVar1 = iVar7;
    }
    lVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,param_2);
    iVar7 = iVar1;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 10) == '\0') {
LAB_0184b6e4:
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      param_2[2] = uVar3;
      pvVar4 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0184b860;
      lVar2 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar2) = 0x20;
    param_2[1] = param_2[1] + 1;
LAB_0184b734:
    if ((*(char *)((long)plVar6 + 10) != '\0') &&
       ((*(char *)((long)plVar6 + 10) != '\x02' ||
        (uVar3 = (**(code **)(*plVar6 + 8))(plVar6,param_2), (uVar3 & 1) == 0)))) goto LAB_0184b75c;
LAB_0184b784:
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      param_2[2] = uVar3;
      pvVar4 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_0184b860;
      lVar2 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar2) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (*(char *)((long)plVar6 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar6 + 8))(plVar6,param_2);
      if ((uVar3 & 1) != 0) goto LAB_0184b6e4;
      goto LAB_0184b734;
    }
LAB_0184b75c:
    if ((*(char *)((long)plVar6 + 0xb) == '\0') ||
       ((*(char *)((long)plVar6 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), (uVar3 & 1) != 0))))
    goto LAB_0184b784;
  }
  __src = &DAT_019c796b;
  if (iVar7 != 0) {
    __src = &DAT_01a68a6e;
  }
  lVar2 = param_2[1];
  __n = 1;
  if (iVar7 != 0) {
    __n = 2;
  }
  uVar3 = lVar2 + __n;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    param_2[2] = uVar3;
    pvVar4 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_0184b860:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = param_2[1];
  }
  memmove((void *)((long)pvVar4 + lVar2),__src,__n);
  param_2[1] = param_2[1] + __n;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

