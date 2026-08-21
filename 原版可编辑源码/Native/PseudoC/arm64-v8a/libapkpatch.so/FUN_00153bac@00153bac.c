
void FUN_00153bac(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  char *__src;
  long *plVar7;
  
  if (3 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) {
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar5 <= uVar3) {
        uVar5 = uVar3;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_00153e4c;
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x28;
    lVar4 = param_2[1] + 1;
    param_2[1] = lVar4;
    pvVar1 = *(void **)(param_1 + 0x10);
    sVar6 = *(long *)(param_1 + 0x18) - (long)pvVar1;
    if (sVar6 != 0) {
      uVar5 = lVar4 + sVar6;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar3 = param_2[2] << 1;
        if (uVar5 <= uVar3) {
          uVar5 = uVar3;
        }
        param_2[2] = uVar5;
        pvVar2 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_00153e4c;
        lVar4 = param_2[1];
      }
      memmove((void *)((long)pvVar2 + lVar4),pvVar1,sVar6);
      lVar4 = param_2[1] + sVar6;
      param_2[1] = lVar4;
    }
    uVar5 = lVar4 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar5 <= uVar3) {
        uVar5 = uVar3;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_00153e4c;
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  __src = *(char **)(param_1 + 0x20);
  if (*__src == 'n') {
    plVar7 = param_2 + 1;
    lVar4 = *plVar7;
    uVar5 = lVar4 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar5 <= uVar3) {
        uVar5 = uVar3;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_00153e4c;
      lVar4 = *plVar7;
    }
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x2d;
    __src = *(char **)(param_1 + 0x20);
    if (*(char **)(param_1 + 0x28) != __src) {
      __src = __src + 1;
    }
    lVar4 = *plVar7 + 1;
    sVar6 = (long)*(char **)(param_1 + 0x28) - (long)__src;
    *plVar7 = lVar4;
    if (sVar6 != 0) {
      uVar5 = param_2[2];
LAB_00153d74:
      plVar7 = param_2 + 1;
      uVar3 = lVar4 + sVar6;
      if (uVar3 < uVar5) {
        pvVar1 = (void *)*param_2;
      }
      else {
        if (uVar3 <= uVar5 << 1) {
          uVar3 = uVar5 << 1;
        }
        param_2[2] = uVar3;
        pvVar1 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) goto LAB_00153e4c;
        lVar4 = *plVar7;
      }
      memmove((void *)((long)pvVar1 + lVar4),__src,sVar6);
      *plVar7 = *plVar7 + sVar6;
    }
  }
  else {
    sVar6 = *(long *)(param_1 + 0x28) - (long)__src;
    if (sVar6 != 0) {
      lVar4 = param_2[1];
      uVar5 = param_2[2];
      goto LAB_00153d74;
    }
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  sVar6 = *(long *)(param_1 + 0x18) - (long)pvVar1;
  if (sVar6 - 1 < 3) {
    lVar4 = param_2[1];
    uVar5 = lVar4 + sVar6;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar5 <= uVar3) {
        uVar5 = uVar3;
      }
      param_2[2] = uVar5;
      pvVar2 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_00153e4c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),pvVar1,sVar6);
    param_2[1] = param_2[1] + sVar6;
  }
  return;
}

