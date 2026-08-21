
int FUN_0108d158(long param_1,int param_2,int param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  
  *param_4 = 0;
  param_4[1] = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    uVar8 = param_3 - 1;
  }
  if (*(uint *)(param_1 + 0x248) < uVar2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x248) < uVar8) {
    return 0;
  }
  plVar15 = *(long **)(param_1 + 0x268);
  if (plVar15 == (long *)0x0) {
    return 0;
  }
  lVar14 = *(long *)(param_1 + 0xc0);
  uVar2 = (uint)*(ushort *)(*(long *)(param_1 + 600) + (ulong)uVar8 * 0x10) |
          *(int *)(*(long *)(param_1 + 600) + (ulong)uVar2 * 0x10) << 0x10;
  while ((uVar2 < *(uint *)(plVar15 + 3) || (*(uint *)((long)plVar15 + 0x1c) < uVar2))) {
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) {
      return 0;
    }
  }
  iVar5 = FT_Stream_Seek(lVar14,plVar15[2]);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FT_Stream_EnterFrame(lVar14,*(int *)((long)plVar15 + 0xc) * (uint)*(byte *)(plVar15 + 1));
  if (iVar5 != 0) {
    return iVar5;
  }
  bVar3 = *(byte *)((long)plVar15 + 9);
  uVar8 = *(uint *)((long)plVar15 + 0xc);
  puVar6 = *(uint **)(lVar14 + 0x40);
  uVar4 = 0x1f - (int)LZCOUNT((uint)*(byte *)(plVar15 + 1));
  iVar5 = (uint)*(byte *)(plVar15 + 1) - (1 << (ulong)(uVar4 & 0x1f));
  if (iVar5 == 0) {
LAB_0108d2c8:
    uVar4 = uVar8 << (ulong)(uVar4 & 0x1f);
    uVar11 = (ulong)uVar4;
    if (uVar8 < uVar4) {
      puVar10 = puVar6;
      puVar7 = puVar6;
      if ((bVar3 & 1) == 0) {
        do {
          uVar11 = uVar11 >> 1;
          puVar6 = (uint *)((long)puVar10 + uVar11);
                    /* try { // try from 0108d314 to 0118d3d3 has its CatchHandler @ 0108d314
                       catch() { ... } // from try @ 0108d314 with catch @ 0108d314
                       catch() { ... } // from try @ 0108d3dc with catch @ 0108d314
                       catch() { ... } // from try @ 0108d568 with catch @ 0108d314
                       catch() { ... } // from try @ 0108d5b0 with catch @ 0108d314 */
          uVar4 = (uint)*(byte *)((long)puVar6 + 1) | (uint)(byte)*puVar6 << 0x10;
          if (uVar4 == uVar2) {
            puVar10 = (uint *)((long)puVar6 + 2);
            goto LAB_0108d37c;
          }
          if (uVar2 <= uVar4) {
            puVar6 = puVar10;
          }
          puVar10 = puVar6;
        } while (uVar8 < (uint)uVar11);
      }
      else {
        do {
          uVar11 = uVar11 >> 1;
          puVar6 = (uint *)((long)puVar7 + uVar11);
          puVar10 = puVar6 + 1;
          uVar4 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          if (uVar4 == uVar2) goto LAB_0108d37c;
          if (uVar2 <= uVar4) {
            puVar6 = puVar7;
          }
          puVar7 = puVar6;
        } while (uVar8 < (uint)uVar11);
      }
    }
    if ((bVar3 & 1) == 0) {
      puVar10 = (uint *)((long)puVar6 + 2);
      lVar9 = 1;
      uVar8 = (uint)(byte)*puVar6 << 0x10;
    }
    else {
      puVar10 = puVar6 + 1;
      uVar8 = (uint)(byte)*puVar6 << 0x18 | (uint)*(byte *)((long)puVar6 + 1) << 0x10 |
              (uint)*(byte *)((long)puVar6 + 2) << 8;
      lVar9 = 3;
    }
    if ((uVar8 | *(byte *)((long)puVar6 + lVar9)) != uVar2) goto LAB_0108d39c;
  }
  else {
    pbVar1 = (byte *)((long)puVar6 + (ulong)(iVar5 * uVar8));
    if ((bVar3 & 1) == 0) {
      puVar10 = (uint *)(pbVar1 + 2);
      pbVar12 = pbVar1 + 1;
      uVar13 = (uint)*pbVar1 << 0x10;
    }
    else {
      puVar10 = (uint *)(pbVar1 + 4);
      uVar13 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8;
      pbVar12 = pbVar1 + 3;
    }
    if ((uVar13 | *pbVar12) != uVar2) {
      if ((uVar13 | *pbVar12) < uVar2) {
        lVar9 = 1;
        if ((bVar3 & 2) != 0) {
          lVar9 = 2;
        }
        puVar6 = (uint *)((long)puVar10 + lVar9);
      }
      goto LAB_0108d2c8;
    }
  }
LAB_0108d37c:
  uVar11 = (ulong)(byte)*puVar10;
  if ((bVar3 & 2) != 0) {
    uVar11 = (ulong)CONCAT11((byte)*puVar10,*(undefined1 *)((long)puVar10 + 1));
  }
  *param_4 = uVar11 + (long)*(short *)((long)plVar15 + 10);
LAB_0108d39c:
  FT_Stream_ExitFrame(lVar14);
  return 0;
}

