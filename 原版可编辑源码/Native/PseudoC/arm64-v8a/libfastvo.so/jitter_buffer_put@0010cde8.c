
void jitter_buffer_put(int *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  undefined1 *puVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_1[0x710] == 0) {
    lVar11 = -0x1900;
    do {
      while ((pvVar4 = *(void **)((long)param_1 + lVar11 + 0x1910), pvVar4 == (void *)0x0 ||
             (0 < (*(int *)((long)param_1 + lVar11 + 0x1920) +
                  *(int *)((long)param_1 + lVar11 + 0x191c)) - *param_1))) {
        lVar11 = lVar11 + 0x20;
        if (lVar11 == 0) goto LAB_0010ce64;
      }
      if (*(code **)(param_1 + 0x70c) == (code *)0x0) {
        free(pvVar4);
      }
      else {
        (**(code **)(param_1 + 0x70c))();
      }
      *(undefined8 *)((long)param_1 + lVar11 + 0x1910) = 0;
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != 0);
LAB_0010ce64:
    if ((param_1[0x710] == 0) && (iVar6 = *(int *)((long)param_2 + 0xc) - param_1[2], iVar6 < 0)) {
      FUN_0010d0c4(param_1,iVar6 - param_1[0x711]);
      bVar2 = true;
      goto LAB_0010ce80;
    }
  }
  bVar2 = false;
LAB_0010ce80:
  if (param_1[0x7db] < 0x15) {
    if ((param_1[0x710] == 0) &&
       (((int)param_2[2] + *(int *)((long)param_2 + 0xc) + param_1[0x70e]) - *param_1 < 0)) {
      return;
    }
  }
  else {
    lVar11 = -0x1900;
    do {
      pvVar4 = *(void **)((long)param_1 + lVar11 + 0x1910);
      if (pvVar4 != (void *)0x0) {
        if (*(code **)(param_1 + 0x70c) == (code *)0x0) {
          free(pvVar4);
        }
        else {
          (**(code **)(param_1 + 0x70c))();
        }
        *(undefined8 *)((long)param_1 + lVar11 + 0x1910) = 0;
      }
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != 0);
    param_1[0x710] = 1;
    piVar8 = param_1 + 0x715;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0x7da] = 32000;
    param_1[0x7db] = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    *(int **)(param_1 + 2000) = piVar8;
    piVar8 = param_1 + 0x753;
    piVar8[0] = 0;
    piVar8[1] = 0;
    *(int **)(param_1 + 0x7d2) = piVar8;
    piVar8 = param_1 + 0x791;
    piVar8[0] = 0;
    piVar8[1] = 0;
    *(int **)(param_1 + 0x7d4) = piVar8;
  }
  uVar13 = 0;
  plVar7 = (long *)(param_1 + 4);
  do {
    if (*plVar7 == 0) goto LAB_0010cfd4;
    uVar13 = uVar13 + 1;
    plVar7 = plVar7 + 4;
  } while (uVar13 < 200);
  if ((int)uVar13 == 200) {
    uVar13 = 0;
    lVar11 = -199;
    piVar8 = param_1 + 0xf;
    iVar6 = param_1[7];
    do {
      uVar12 = (uint)uVar13;
      bVar3 = -1 < *piVar8 - iVar6;
      uVar10 = (int)lVar11 + 200;
      if (*(long *)(param_1 + (long)(int)uVar12 * 8 + 4) != 0 && bVar3) {
        uVar10 = uVar12;
      }
      uVar13 = (ulong)uVar10;
      iVar1 = *piVar8;
      if (*(long *)(param_1 + (long)(int)uVar12 * 8 + 4) != 0 && bVar3) {
        iVar1 = iVar6;
      }
      lVar11 = lVar11 + 1;
      piVar8 = piVar8 + 8;
      iVar6 = iVar1;
    } while (lVar11 != 0);
    piVar8 = param_1 + (long)(int)uVar10 * 8 + 4;
    if (*(code **)(param_1 + 0x70c) == (code *)0x0) {
      free(*(void **)piVar8);
    }
    else {
      (**(code **)(param_1 + 0x70c))();
    }
    piVar8[0] = 0;
    piVar8[1] = 0;
  }
LAB_0010cfd4:
  iVar6 = (int)uVar13;
  if (*(long *)(param_1 + 0x70c) == 0) {
    lVar11 = param_2[1];
    puVar5 = calloc((long)(int)lVar11,1);
    *(undefined1 **)(param_1 + (long)iVar6 * 8 + 4) = puVar5;
    if ((int)lVar11 == 0) {
      uVar10 = 0;
    }
    else {
      *puVar5 = *(undefined1 *)*param_2;
      uVar10 = *(uint *)(param_2 + 1);
      if (1 < uVar10) {
        uVar13 = 1;
        do {
          *(undefined1 *)(*(long *)(param_1 + (long)iVar6 * 8 + 4) + uVar13) =
               *(undefined1 *)(*param_2 + uVar13);
          uVar10 = *(uint *)(param_2 + 1);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar10);
      }
    }
  }
  else {
    *(long *)(param_1 + (long)iVar6 * 8 + 4) = *param_2;
    uVar10 = *(uint *)(param_2 + 1);
  }
  lVar11 = (long)iVar6;
  uVar9 = *(undefined8 *)((long)param_2 + 0xc);
  param_1[lVar11 * 8 + 6] = uVar10;
  *(undefined8 *)(param_1 + lVar11 * 8 + 7) = uVar9;
  *(undefined2 *)(param_1 + lVar11 * 8 + 9) = *(undefined2 *)((long)param_2 + 0x14);
  param_1[lVar11 * 8 + 10] = (int)param_2[3];
  if (param_1[0x710] == 0 && !bVar2) {
    iVar6 = param_1[2];
  }
  else {
    iVar6 = 0;
  }
  param_1[lVar11 + 0x644] = iVar6;
  return;
}

