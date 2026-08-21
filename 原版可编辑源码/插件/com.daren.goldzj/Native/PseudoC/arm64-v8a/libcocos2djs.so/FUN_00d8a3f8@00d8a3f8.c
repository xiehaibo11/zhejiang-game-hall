
void FUN_00d8a3f8(long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  
  uVar12 = *(uint *)(param_1 + 0x164);
  uVar13 = (ulong)uVar12;
  iVar5 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  if (0 < (int)uVar12) {
    uVar4 = *(uint *)(param_1 + 0x30);
    if (0 < (int)(iVar5 * 2 - uVar4)) {
      iVar11 = (uVar4 - 1) + iVar5 * -2;
      if (iVar11 < -1) {
        iVar11 = -2;
      }
      plVar14 = param_3;
      do {
        memset((void *)(*plVar14 + (ulong)uVar4),
               (uint)*(byte *)((long)(*plVar14 + (ulong)uVar4) + -1),
               (ulong)(((iVar5 * 2 | 1U) - uVar4) + iVar11) + 1);
        uVar13 = uVar13 - 1;
        plVar14 = plVar14 + 1;
      } while (uVar13 != 0);
      uVar12 = *(uint *)(param_1 + 0x164);
    }
  }
  if (0 < (int)uVar12) {
    if (iVar5 == 0) {
      uVar4 = (uVar12 - 1 >> 1) + 1;
      if ((uVar4 < 2) || (uVar3 = uVar4 & 0xfffffffe, uVar3 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = uVar3 << 1;
        uVar8 = uVar3;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
        if (uVar4 == uVar3) {
          return;
        }
      }
      do {
        iVar5 = iVar5 + 2;
      } while (iVar5 < (int)uVar12);
    }
    else {
      lVar6 = 0;
      uVar13 = 0;
      do {
        pbVar9 = (byte *)param_3[uVar13];
        pbVar10 = (byte *)param_3[uVar13 | 1];
        uVar12 = 1;
        puVar7 = *(undefined1 **)(param_4 + lVar6 * 8);
        iVar11 = iVar5;
        do {
          pbVar1 = pbVar9 + 1;
          iVar2 = uVar12 + *pbVar9;
          iVar11 = iVar11 + -1;
          pbVar9 = pbVar9 + 2;
          uVar12 = uVar12 ^ 3;
          *puVar7 = (char)(iVar2 + (uint)*pbVar1 + (uint)*pbVar10 + (uint)pbVar10[1] >> 2);
          pbVar10 = pbVar10 + 2;
          puVar7 = puVar7 + 1;
        } while (iVar11 != 0);
        uVar13 = uVar13 + 2;
        lVar6 = lVar6 + 1;
      } while ((long)uVar13 < (long)*(int *)(param_1 + 0x164));
    }
  }
  return;
}

