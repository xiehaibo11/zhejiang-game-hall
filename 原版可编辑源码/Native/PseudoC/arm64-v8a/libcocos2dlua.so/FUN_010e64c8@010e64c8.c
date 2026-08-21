
void FUN_010e64c8(long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  
  uVar11 = *(uint *)(param_1 + 0x164);
  uVar12 = (ulong)uVar11;
  iVar4 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  if (0 < (int)uVar11) {
    uVar5 = *(uint *)(param_1 + 0x30);
    if (0 < (int)(iVar4 * 2 - uVar5)) {
      iVar10 = (uVar5 - 1) + iVar4 * -2;
      if (iVar10 < -1) {
        iVar10 = -2;
      }
      plVar13 = param_3;
      do {
        memset((void *)(*plVar13 + (ulong)uVar5),
               (uint)*(byte *)((long)(*plVar13 + (ulong)uVar5) + -1),
               (ulong)(((iVar4 * 2 | 1U) - uVar5) + iVar10) + 1);
        uVar12 = uVar12 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar12 != 0);
      uVar11 = *(uint *)(param_1 + 0x164);
    }
  }
  if (0 < (int)uVar11) {
    if (iVar4 == 0) {
      if (uVar11 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar11 & 0xfffffffe;
        uVar7 = uVar5;
        if (uVar5 != 0) {
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
          if (uVar11 == uVar5) {
            return;
          }
        }
      }
      do {
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar11);
    }
    else {
      lVar6 = 0;
      do {
        pbVar9 = (byte *)param_3[lVar6];
        uVar11 = 0;
        puVar8 = *(undefined1 **)(param_4 + lVar6 * 8);
        iVar10 = iVar4;
        do {
          bVar3 = *pbVar9;
          pbVar1 = pbVar9 + 1;
          iVar10 = iVar10 + -1;
          pbVar9 = pbVar9 + 2;
          iVar2 = uVar11 + bVar3;
          uVar11 = uVar11 ^ 1;
          *puVar8 = (char)(iVar2 + (uint)*pbVar1 >> 1);
          puVar8 = puVar8 + 1;
        } while (iVar10 != 0);
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x164));
    }
  }
  return;
}

