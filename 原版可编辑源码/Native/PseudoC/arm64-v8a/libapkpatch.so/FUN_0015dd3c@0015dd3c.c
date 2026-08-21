
void FUN_0015dd3c(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  undefined1 uVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  
  plVar10 = *(long **)(param_1 + 0x10);
  if (((char)plVar10[1] == '\n') && (lVar8 = plVar10[2], *(char *)(lVar8 + 8) == '\a')) {
    pcVar5 = *(char **)(lVar8 + 0x10);
    pcVar1 = *(char **)(lVar8 + 0x18);
    if ((long)pcVar1 - (long)pcVar5 == 0xb) {
      if (pcVar5 != pcVar1) {
        pcVar9 = "objc_object";
        do {
          if (*pcVar5 != *pcVar9) goto LAB_0015ddd8;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        } while (pcVar5 != pcVar1);
      }
      plVar11 = param_2 + 1;
      lVar8 = *plVar11;
      uVar3 = lVar8 + 3;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_0015e05c;
        lVar8 = *plVar11;
      }
      *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar8) + 1) = 0x3c;
      *(undefined2 *)((long)pvVar2 + lVar8) = 0x6469;
      lVar8 = *plVar11 + 3;
      *plVar11 = lVar8;
      pvVar2 = (void *)plVar10[3];
      __n = plVar10[4] - (long)pvVar2;
      if (__n != 0) {
        uVar3 = lVar8 + __n;
        if (uVar3 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar6 = param_2[2] << 1;
          if (uVar3 <= uVar6) {
            uVar3 = uVar6;
          }
          param_2[2] = uVar3;
          pvVar4 = realloc((void *)*param_2,uVar3);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_0015e05c;
          lVar8 = *plVar11;
        }
        memmove((void *)((long)pvVar4 + lVar8),pvVar2,__n);
        lVar8 = *plVar11 + __n;
        *plVar11 = lVar8;
      }
      uVar3 = lVar8 + 1;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_0015e05c;
        lVar8 = *plVar11;
      }
      uVar7 = 0x3e;
      goto LAB_0015df48;
    }
  }
LAB_0015ddd8:
  (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
  plVar10 = *(long **)(param_1 + 0x10);
  if ((*(char *)((long)plVar10 + 10) == '\0') ||
     ((*(char *)((long)plVar10 + 10) == '\x02' &&
      (uVar3 = (**(code **)(*plVar10 + 8))(plVar10,param_2), (uVar3 & 1) != 0)))) {
    lVar8 = param_2[1];
    uVar3 = lVar8 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015e05c;
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar8) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  if (*(char *)((long)plVar10 + 10) == '\0') {
LAB_0015deb4:
    lVar8 = param_2[1];
    uVar3 = lVar8 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015e05c;
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar8) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (*(char *)((long)plVar10 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar10 + 8))(plVar10,param_2);
      if ((uVar3 & 1) != 0) goto LAB_0015deb4;
      plVar10 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar10 + 0xb) == '\0') ||
       ((*(char *)((long)plVar10 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar10 + 0x10))(plVar10,param_2), (uVar3 & 1) != 0))))
    goto LAB_0015deb4;
  }
  lVar8 = param_2[1];
  uVar3 = lVar8 + 1;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    param_2[2] = uVar3;
    pvVar2 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0015e05c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar8 = param_2[1];
  }
  uVar7 = 0x2a;
LAB_0015df48:
  *(undefined1 *)((long)pvVar2 + lVar8) = uVar7;
  param_2[1] = param_2[1] + 1;
  return;
}

