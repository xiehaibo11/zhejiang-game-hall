
void FUN_00c1c1d8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_70 [28];
  
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[0x12] = 0;
  local_70[0x13] = 0;
  local_70[0x10] = 0;
  local_70[0x11] = 0;
  uVar9 = *(uint *)(param_2 + 0x30);
  local_70[10] = 0;
  local_70[0xb] = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  local_70[0xe] = 0;
  local_70[0xf] = 0;
  local_70[0xc] = 0;
  local_70[0xd] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  lVar10 = *(long *)(param_2 + 0x10);
  local_70[0x16] = 0;
  local_70[0x17] = 0;
  local_70[0x14] = 0;
  local_70[0x15] = 0;
  iVar6 = 1;
  local_70[0x1a] = 0;
  local_70[0x1b] = 0;
  local_70[0x18] = 0;
  local_70[0x19] = 0;
  iVar12 = 0;
  if (uVar9 != 0) {
    lVar11 = 0;
    iVar12 = 0;
    uVar5 = 0;
    do {
      while( true ) {
        uVar8 = 2 << (ulong)((uint)lVar11 & 0x1f);
        if (uVar8 < uVar9) break;
        uVar8 = uVar9 - 1;
        if (uVar9 - 1 < (uint)uVar5) goto LAB_00c1c2b0;
LAB_00c1c278:
        iVar6 = 0;
        do {
          lVar2 = uVar5 * 8;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar3;
          if (*(long *)(lVar10 + lVar2) != -1) {
            iVar6 = iVar6 + 1;
          }
        } while (uVar3 <= uVar8);
        iVar12 = iVar12 + iVar6;
        local_70[lVar11] = iVar6 + local_70[lVar11];
        lVar11 = lVar11 + 1;
        if (lVar11 == 0x1c) goto LAB_00c1c2b0;
      }
      if ((uint)uVar5 <= uVar8) goto LAB_00c1c278;
      local_70[lVar11] = local_70[lVar11];
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x1c);
LAB_00c1c2b0:
    iVar6 = iVar12 + 1;
  }
  uVar9 = *(uint *)(param_2 + 0x34);
  iVar13 = 0;
  lVar10 = *(long *)(param_2 + 0x28);
  iVar14 = 0;
  uVar5 = 0;
  do {
    iVar4 = 0;
    uVar8 = (int)uVar5 + 1;
    lVar11 = lVar10 + uVar5 * 0x18;
    if (*(long *)(lVar10 + uVar5 * 0x18) != -1) {
      iVar13 = iVar13 + 1;
      if ((uint)((long)*(undefined8 *)(lVar11 + 8) >> 0x2f) < 0xfffffff2) {
        iVar4 = FUN_00c1b7ec(lVar11 + 8,local_70);
      }
      iVar14 = iVar14 + iVar4;
    }
    uVar5 = (ulong)uVar8;
  } while (uVar8 <= uVar9);
  iVar4 = 0;
  if ((uint)((long)*param_3 >> 0x2f) < 0xfffffff2) {
    iVar4 = FUN_00c1b7ec(param_3,local_70);
  }
  iVar4 = iVar14 + iVar12 + iVar4;
  if (((uint)(iVar4 * 2) < 2) || (iVar4 == 0)) {
    iVar14 = 0;
    iVar12 = 0;
  }
  else {
    uVar9 = 1;
    iVar14 = 0;
    iVar12 = 0;
    iVar7 = 0;
    uVar5 = 0;
    uVar8 = 0;
    do {
      piVar1 = local_70 + uVar5;
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar3;
      if (*piVar1 != 0) {
        iVar7 = iVar7 + *piVar1;
        if (uVar9 < (uint)(iVar7 * 2)) {
          iVar12 = (2 << (ulong)(uVar8 & 0x1f)) + 1;
          iVar14 = iVar7;
        }
      }
      uVar9 = 1 << (ulong)(uVar3 & 0x1f);
    } while ((iVar4 != iVar7) && (uVar8 = uVar3, uVar9 < (uint)(iVar4 * 2)));
  }
  iVar14 = (iVar13 + iVar6) - iVar14;
  iVar6 = 0;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      iVar6 = 1;
    }
    else {
      iVar6 = ((uint)LZCOUNT(iVar14 + -1) ^ 0x1f) + 1;
    }
  }
  FUN_00c1bf2c(param_1,param_2,iVar12,iVar6);
  return;
}

