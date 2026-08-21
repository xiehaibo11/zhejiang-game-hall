
undefined8 FT_Stroker_GetCounts(long param_1,int *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == 0) {
    iVar6 = 0;
    iVar5 = 0;
    uVar3 = 6;
    goto joined_r0x00e2508c;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar5 = 0;
    lVar4 = 0;
LAB_00e2509c:
    iVar6 = (int)lVar4;
    *(undefined1 *)(param_1 + 0x98) = 1;
    iVar8 = *(int *)(param_1 + 0xa0);
    if (iVar8 != 0) goto LAB_00e2501c;
LAB_00e250ac:
    iVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    bVar2 = false;
    iVar5 = 0;
    do {
      bVar1 = *(byte *)(*(long *)(param_1 + 0x80) + lVar4);
      if ((bVar1 >> 2 & 1) == 0) {
        if (!bVar2) goto LAB_00e2500c;
      }
      else {
        if (bVar2) goto LAB_00e2500c;
        bVar2 = true;
      }
      lVar4 = lVar4 + 1;
      if ((bVar1 & 8) != 0) {
        bVar2 = false;
      }
      iVar5 = iVar5 + ((bVar1 & 8) >> 3);
    } while (*(int *)(param_1 + 0x70) != (int)lVar4);
    if (!bVar2) goto LAB_00e2509c;
LAB_00e2500c:
    iVar6 = 0;
    iVar5 = 0;
    iVar8 = *(int *)(param_1 + 0xa0);
    if (iVar8 == 0) goto LAB_00e250ac;
LAB_00e2501c:
    lVar4 = 0;
    bVar2 = false;
    iVar7 = 0;
    do {
      bVar1 = *(byte *)(*(long *)(param_1 + 0xb0) + lVar4);
      if ((bVar1 >> 2 & 1) == 0) {
        if (!bVar2) goto LAB_00e25064;
      }
      else {
        if (bVar2) goto LAB_00e25064;
        bVar2 = true;
      }
      lVar4 = lVar4 + 1;
      if ((bVar1 & 8) != 0) {
        bVar2 = false;
      }
      iVar7 = iVar7 + ((bVar1 & 8) >> 3);
    } while (iVar8 != (int)lVar4);
    if (bVar2) {
LAB_00e25064:
      uVar3 = 0;
      goto joined_r0x00e2508c;
    }
  }
  *(undefined1 *)(param_1 + 200) = 1;
  uVar3 = 0;
  iVar6 = (int)lVar4 + iVar6;
  iVar5 = iVar7 + iVar5;
joined_r0x00e2508c:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar6;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar5;
  }
  return uVar3;
}

