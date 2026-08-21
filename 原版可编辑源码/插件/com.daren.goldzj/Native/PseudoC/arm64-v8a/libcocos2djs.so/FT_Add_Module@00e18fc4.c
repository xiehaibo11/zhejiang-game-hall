
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FT_Add_Module(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  code *pcVar6;
  long *plVar7;
  uint uVar8;
  char *__s2;
  long *plVar9;
  size_t __n;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (0x2000a < *(long *)(param_2 + 0x20)) {
    return 4;
  }
  uVar8 = *(uint *)((long)param_1 + 0x14);
  if (uVar8 != 0) {
    __s2 = *(char **)(param_2 + 0x10);
    lVar10 = 3;
    do {
      plVar9 = (long *)param_1[lVar10];
      lVar11 = *plVar9;
      iVar2 = strcmp(*(char **)(lVar11 + 0x10),__s2);
      if (iVar2 == 0) {
        if (*(long *)(param_2 + 0x18) <= *(long *)(lVar11 + 0x18)) {
          return 5;
        }
        FT_Remove_Module(param_1,plVar9);
        uVar8 = *(uint *)((long)param_1 + 0x14);
        break;
      }
      uVar4 = lVar10 - 2;
      lVar10 = lVar10 + 1;
    } while (uVar4 < uVar8);
    if (0x1f < uVar8) {
      return 0x30;
    }
  }
  __n = *(size_t *)(param_2 + 8);
  lVar10 = *param_1;
  if ((long)__n < 1) {
    if (__n != 0) {
      return 6;
    }
    plVar9 = (long *)0x0;
    pbRam0000000000000000 = param_2;
    _DAT_00000008 = param_1;
    lRam0000000000000010 = lVar10;
    if ((*param_2 >> 1 & 1) != 0) goto LAB_00e1914c;
LAB_00e190c8:
    puVar5 = (ulong *)*plVar9;
    uVar4 = *puVar5;
    uVar8 = (uint)uVar4;
  }
  else {
    plVar9 = (long *)(**(code **)(lVar10 + 8))(lVar10,__n);
    if (plVar9 == (long *)0x0) {
      return 0x40;
    }
    memset(plVar9,0,__n);
    *plVar9 = (long)param_2;
    plVar9[1] = (long)param_1;
    plVar9[2] = lVar10;
    if ((*param_2 >> 1 & 1) == 0) goto LAB_00e190c8;
LAB_00e1914c:
    lVar11 = *param_1;
    plVar3 = (long *)(**(code **)(lVar11 + 8))(lVar11,0x18);
    if (plVar3 == (long *)0x0) {
      iVar2 = 0x40;
      bVar1 = *(byte *)*plVar9;
      goto joined_r0x00e191c8;
    }
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = 0;
    lVar12 = *plVar9;
    plVar9[3] = lVar12;
    iVar2 = *(int *)(lVar12 + 0x48);
    *(int *)(plVar9 + 4) = iVar2;
    if ((iVar2 == 0x6f75746c) &&
       (pcVar6 = *(code **)(*(long *)(lVar12 + 0x70) + 8), pcVar6 != (code *)0x0)) {
      iVar2 = (*pcVar6)(lVar11,plVar9 + 0xd);
      if (iVar2 != 0) {
        (**(code **)(lVar11 + 0x10))(lVar11,plVar3);
        bVar1 = *(byte *)*plVar9;
        goto joined_r0x00e191c8;
      }
      plVar9[0xe] = *(long *)(*(long *)(lVar12 + 0x70) + 0x20);
      plVar9[0xf] = *(long *)(lVar12 + 0x50);
    }
    plVar3[2] = (long)plVar9;
    lVar11 = param_1[0x24];
    *plVar3 = lVar11;
    plVar3[1] = 0;
    if (lVar11 == 0) {
      param_1[0x23] = (long)plVar3;
      param_1[0x24] = (long)plVar3;
      plVar7 = plVar3;
    }
    else {
      *(long **)(lVar11 + 8) = plVar3;
      plVar7 = (long *)param_1[0x23];
      param_1[0x24] = (long)plVar3;
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
      lVar11 = plVar7[2];
      if (*(int *)(lVar11 + 0x20) == 0x6f75746c) goto LAB_00e19274;
    }
    lVar11 = 0;
LAB_00e19274:
    param_1[0x25] = lVar11;
    puVar5 = (ulong *)*plVar9;
    uVar4 = *puVar5;
    uVar8 = (uint)uVar4;
  }
  if ((uVar8 >> 2 & 1) == 0) {
    if ((uVar4 & 1) == 0) goto LAB_00e190d8;
LAB_00e1928c:
    plVar9[3] = (long)puVar5;
    pcVar6 = *(code **)(param_2 + 0x30);
  }
  else {
    param_1[0x26] = (long)plVar9;
    if ((uVar4 & 1) != 0) goto LAB_00e1928c;
LAB_00e190d8:
    pcVar6 = *(code **)(param_2 + 0x30);
  }
  if ((pcVar6 == (code *)0x0) || (iVar2 = (*pcVar6)(plVar9), iVar2 == 0)) {
    uVar8 = *(uint *)((long)param_1 + 0x14);
    *(uint *)((long)param_1 + 0x14) = uVar8 + 1;
    param_1[(ulong)uVar8 + 3] = (long)plVar9;
    return 0;
  }
  bVar1 = *(byte *)*plVar9;
joined_r0x00e191c8:
  if (((((bVar1 >> 1 & 1) != 0) && (lVar11 = plVar9[3], lVar11 != 0)) &&
      (*(int *)(lVar11 + 0x48) == 0x6f75746c)) && (plVar9[0xd] != 0)) {
    (**(code **)(*(long *)(lVar11 + 0x70) + 0x28))();
  }
  (**(code **)(lVar10 + 0x10))(lVar10,plVar9);
  return iVar2;
}

