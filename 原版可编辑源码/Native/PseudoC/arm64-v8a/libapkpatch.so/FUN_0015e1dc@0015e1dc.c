
void FUN_0015e1dc(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *__src;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar8 = *(int *)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
  while (*(char *)(lVar2 + 8) == '\f') {
    plVar7 = *(long **)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar8 <= *(int *)(lVar2 + 0x18)) {
      iVar1 = iVar8;
    }
    lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
    iVar8 = iVar1;
  }
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 10) == '\0') {
LAB_0015e294:
    sVar4 = __strlen_chk(&DAT_00115745,2);
    if (sVar4 != 0) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + sVar4;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar5 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_0015e46c;
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar5 + lVar2),&DAT_00115745,sVar4);
      param_2[1] = param_2[1] + sVar4;
    }
LAB_0015e308:
    if ((*(char *)((long)plVar7 + 10) != '\0') &&
       ((*(char *)((long)plVar7 + 10) != '\x02' ||
        (uVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_2), (uVar3 & 1) == 0)))) goto LAB_0015e330;
LAB_0015e358:
    sVar4 = __strlen_chk(&DAT_00119e93,2);
    if (sVar4 != 0) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + sVar4;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar5 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_0015e46c;
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar5 + lVar2),&DAT_00119e93,sVar4);
      param_2[1] = param_2[1] + sVar4;
    }
  }
  else {
    if (*(char *)((long)plVar7 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_2);
      if ((uVar3 & 1) != 0) goto LAB_0015e294;
      goto LAB_0015e308;
    }
LAB_0015e330:
    if ((*(char *)((long)plVar7 + 0xb) == '\0') ||
       ((*(char *)((long)plVar7 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2), (uVar3 & 1) != 0))))
    goto LAB_0015e358;
  }
  __src = &DAT_0011a495;
  if (iVar8 != 0) {
    __src = &DAT_0011a235;
  }
  sVar4 = __strlen_chk(__src,3);
  if (sVar4 != 0) {
    lVar2 = param_2[1];
    uVar3 = lVar2 + sVar4;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      param_2[2] = uVar3;
      pvVar5 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
LAB_0015e46c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar2 = param_2[1];
    }
    memmove((void *)((long)pvVar5 + lVar2),__src,sVar4);
    param_2[1] = param_2[1] + sVar4;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

