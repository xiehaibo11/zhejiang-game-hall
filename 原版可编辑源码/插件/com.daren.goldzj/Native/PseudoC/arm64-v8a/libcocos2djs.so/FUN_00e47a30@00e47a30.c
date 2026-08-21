
int FUN_00e47a30(long param_1,int param_2,int param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  
  *param_4 = 0;
  param_4[1] = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = param_3 - 1;
  }
  if (*(uint *)(param_1 + 0x248) < uVar2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x248) < uVar4) {
    return 0;
  }
  plVar14 = *(long **)(param_1 + 0x268);
  if (plVar14 == (long *)0x0) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0xc0);
  uVar2 = (uint)*(ushort *)(*(long *)(param_1 + 600) + (ulong)uVar4 * 0x10) |
          *(int *)(*(long *)(param_1 + 600) + (ulong)uVar2 * 0x10) << 0x10;
  while ((uVar2 < *(uint *)(plVar14 + 3) || (*(uint *)((long)plVar14 + 0x1c) < uVar2))) {
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return 0;
    }
  }
  iVar8 = FUN_00e1bb5c(lVar13,plVar14[2]);
  if (iVar8 != 0) {
    return iVar8;
  }
  iVar8 = FUN_00e1d718(lVar13,*(int *)((long)plVar14 + 0xc) * (uint)*(byte *)(plVar14 + 1));
  if (iVar8 != 0) {
    return iVar8;
  }
  uVar4 = *(uint *)((long)plVar14 + 0xc);
  puVar9 = *(uint **)(lVar13 + 0x40);
  uVar7 = 0x1f - (int)LZCOUNT((uint)*(byte *)(plVar14 + 1));
  bVar5 = *(byte *)((long)plVar14 + 9);
  iVar8 = (uint)*(byte *)(plVar14 + 1) - (1 << (ulong)(uVar7 & 0x1f));
  if (iVar8 == 0) {
LAB_00e47ba0:
    uVar7 = uVar4 << (ulong)(uVar7 & 0x1f);
    uVar11 = (ulong)uVar7;
    if (uVar4 < uVar7) {
      puVar10 = puVar9;
      puVar12 = puVar9;
      if ((bVar5 & 1) == 0) {
        do {
          uVar11 = uVar11 >> 1;
          puVar9 = (uint *)((long)puVar12 + uVar11);
          uVar7 = (uint)*(byte *)((long)puVar9 + 1) | (uint)(byte)*puVar9 << 0x10;
          if (uVar7 == uVar2) {
            puVar12 = (uint *)((long)puVar9 + 2);
            goto LAB_00e47c6c;
          }
          if (uVar2 <= uVar7) {
            puVar9 = puVar12;
          }
          puVar12 = puVar9;
        } while (uVar4 < (uint)uVar11);
      }
      else {
        do {
          uVar11 = uVar11 >> 1;
          puVar9 = (uint *)((long)puVar10 + uVar11);
          puVar12 = puVar9 + 1;
          uVar7 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
          uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
          if (uVar7 == uVar2) goto LAB_00e47c6c;
          if (uVar2 <= uVar7) {
            puVar9 = puVar10;
          }
          puVar10 = puVar9;
        } while (uVar4 < (uint)uVar11);
      }
    }
    if ((bVar5 & 1) == 0) {
      puVar12 = (uint *)((long)puVar9 + 2);
      uVar4 = (uint)(byte)*puVar9 << 0x10 | (uint)*(byte *)((long)puVar9 + 1);
    }
    else {
      puVar12 = puVar9 + 1;
      uVar4 = (uint)(byte)*puVar9 << 0x18 | (uint)*(byte *)((long)puVar9 + 1) << 0x10 |
              (uint)*(byte *)((long)puVar9 + 2) << 8 | (uint)*(byte *)((long)puVar9 + 3);
    }
    if (uVar4 != uVar2) goto LAB_00e47c90;
  }
  else {
    pbVar1 = (byte *)((long)puVar9 + (ulong)(iVar8 * uVar4));
    if ((bVar5 & 1) == 0) {
      puVar12 = (uint *)(pbVar1 + 2);
      uVar6 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1];
    }
    else {
      puVar12 = (uint *)(pbVar1 + 4);
      uVar6 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 |
              (uint)pbVar1[3];
    }
    if (uVar6 != uVar2) {
      if (uVar6 < uVar2) {
        lVar3 = 1;
        if ((bVar5 >> 1 & 1) != 0) {
          lVar3 = 2;
        }
        puVar9 = (uint *)((long)puVar12 + lVar3);
      }
      goto LAB_00e47ba0;
    }
  }
LAB_00e47c6c:
  uVar11 = (ulong)(byte)*puVar12;
  if ((bVar5 >> 1 & 1) != 0) {
    uVar11 = (long)(short)((ushort)(byte)*puVar12 << 8) | (ulong)*(byte *)((long)puVar12 + 1);
  }
  *param_4 = uVar11 + (long)*(short *)((long)plVar14 + 10);
LAB_00e47c90:
  FUN_00e1d90c(lVar13);
  return 0;
}

