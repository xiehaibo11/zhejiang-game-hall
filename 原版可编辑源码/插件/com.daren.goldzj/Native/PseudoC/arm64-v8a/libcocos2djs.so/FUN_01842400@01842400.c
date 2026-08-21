
void FUN_01842400(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  char *__src;
  
  if (3 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_018426e0;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
    lVar6 = param_2[1] + 1;
    param_2[1] = lVar6;
    pvVar3 = *(void **)(param_1 + 0x10);
    sVar8 = *(long *)(param_1 + 0x18) - (long)pvVar3;
    if (sVar8 != 0) {
      uVar1 = lVar6 + sVar8;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar1 <= uVar5) {
          uVar1 = uVar5;
        }
        param_2[2] = uVar1;
        pvVar4 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_018426e0;
        lVar6 = param_2[1];
      }
      memmove((void *)((long)pvVar4 + lVar6),pvVar3,sVar8);
      lVar6 = param_2[1] + sVar8;
      param_2[1] = lVar6;
    }
    uVar1 = lVar6 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_018426e0;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  __src = *(char **)(param_1 + 0x20);
  if (*__src == 'n') {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_018426e0;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x2d;
    lVar6 = param_2[1] + 1;
    param_2[1] = lVar6;
    lVar7 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
    lVar2 = lVar7 + -1;
    if (lVar7 != 0 && lVar2 != 0) {
      lVar2 = 1;
    }
    pvVar3 = (void *)(*(long *)(param_1 + 0x20) + lVar2);
    sVar8 = *(long *)(param_1 + 0x28) - (long)pvVar3;
    if (sVar8 != 0) {
      uVar1 = lVar6 + sVar8;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar1 <= uVar5) {
          uVar1 = uVar5;
        }
        param_2[2] = uVar1;
        pvVar4 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_018426e0;
        lVar6 = param_2[1];
      }
      memmove((void *)((long)pvVar4 + lVar6),pvVar3,sVar8);
      lVar6 = param_2[1] + sVar8;
LAB_01842660:
      param_2[1] = lVar6;
    }
  }
  else {
    sVar8 = *(long *)(param_1 + 0x28) - (long)__src;
    if (sVar8 != 0) {
      lVar6 = param_2[1];
      uVar1 = lVar6 + sVar8;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar1 <= uVar5) {
          uVar1 = uVar5;
        }
        param_2[2] = uVar1;
        pvVar3 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_018426e0;
        lVar6 = param_2[1];
      }
      memmove((void *)((long)pvVar3 + lVar6),__src,sVar8);
      lVar6 = param_2[1] + sVar8;
      goto LAB_01842660;
    }
  }
  pvVar3 = *(void **)(param_1 + 0x10);
  sVar8 = *(long *)(param_1 + 0x18) - (long)pvVar3;
  if (sVar8 - 1 < 3) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + sVar8;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_018426e0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar3,sVar8);
    param_2[1] = param_2[1] + sVar8;
  }
  return;
}

