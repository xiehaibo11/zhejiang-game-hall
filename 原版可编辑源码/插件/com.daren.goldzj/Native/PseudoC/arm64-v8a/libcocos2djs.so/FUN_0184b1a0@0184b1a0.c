
void FUN_0184b1a0(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = *(long **)(param_1 + 0x10);
  if (((char)plVar11[1] == '\n') && (lVar9 = plVar11[2], *(char *)(lVar9 + 8) == '\a')) {
    pcVar5 = *(char **)(lVar9 + 0x10);
    pcVar1 = *(char **)(lVar9 + 0x18);
    if ((long)pcVar1 - (long)pcVar5 == 0xb) {
      if (pcVar5 != pcVar1) {
        pcVar10 = "objc_object";
        do {
          if (*pcVar5 != *pcVar10) goto LAB_0184b23c;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        } while (pcVar1 != pcVar5);
      }
      plVar12 = param_2 + 1;
      lVar9 = *plVar12;
      uVar3 = lVar9 + 3;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar3 <= uVar7) {
          uVar3 = uVar7;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_0184b4c8;
        lVar9 = *plVar12;
      }
      *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar9) + 1) = 0x3c;
      *(undefined2 *)((long)pvVar2 + lVar9) = 0x6469;
      lVar9 = *plVar12 + 3;
      *plVar12 = lVar9;
      pvVar2 = (void *)plVar11[3];
      __n = plVar11[4] - (long)pvVar2;
      if (__n != 0) {
        uVar3 = lVar9 + __n;
        if (uVar3 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (uVar3 <= uVar7) {
            uVar3 = uVar7;
          }
          param_2[2] = uVar3;
          pvVar4 = realloc((void *)*param_2,uVar3);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_0184b4c8;
          lVar9 = *plVar12;
        }
        memmove((void *)((long)pvVar4 + lVar9),pvVar2,__n);
        lVar9 = *plVar12 + __n;
        *plVar12 = lVar9;
      }
      uVar3 = lVar9 + 1;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar3 <= uVar7) {
          uVar3 = uVar7;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_0184b4c8;
        lVar9 = *plVar12;
      }
      puVar6 = (undefined1 *)((long)pvVar2 + lVar9);
      uVar8 = 0x3e;
      goto LAB_0184b3b4;
    }
  }
LAB_0184b23c:
  (**(code **)(*plVar11 + 0x20))(plVar11,param_2);
  plVar11 = *(long **)(param_1 + 0x10);
  if ((*(char *)((long)plVar11 + 10) == '\0') ||
     ((*(char *)((long)plVar11 + 10) == '\x02' &&
      (uVar3 = (**(code **)(*plVar11 + 8))(plVar11,param_2), (uVar3 & 1) != 0)))) {
    lVar9 = param_2[1];
    uVar3 = lVar9 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0184b4c8;
      lVar9 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar9) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (*(char *)((long)plVar11 + 10) == '\0') {
LAB_0184b318:
    lVar9 = param_2[1];
    uVar3 = lVar9 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0184b4c8;
      lVar9 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar9) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (*(char *)((long)plVar11 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar11 + 8))(plVar11,param_2);
      if ((uVar3 & 1) != 0) goto LAB_0184b318;
      plVar11 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar11 + 0xb) == '\0') ||
       ((*(char *)((long)plVar11 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2), (uVar3 & 1) != 0))))
    goto LAB_0184b318;
  }
  lVar9 = param_2[1];
  uVar3 = lVar9 + 1;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar7 = param_2[2] << 1;
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    param_2[2] = uVar3;
    pvVar2 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0184b4c8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar9 = param_2[1];
  }
  puVar6 = (undefined1 *)((long)pvVar2 + lVar9);
  uVar8 = 0x2a;
LAB_0184b3b4:
  *puVar6 = uVar8;
  param_2[1] = param_2[1] + 1;
  return;
}

