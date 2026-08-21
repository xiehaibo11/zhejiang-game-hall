
void FUN_00d93204(long param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  long lVar16;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long *plVar24;
  int iVar25;
  int iVar26;
  undefined2 *puVar27;
  long lVar28;
  undefined2 *puVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  byte *pbVar35;
  short *psVar36;
  undefined1 *puVar37;
  undefined2 uVar38;
  int iVar39;
  int iVar40;
  undefined2 uVar41;
  int iVar42;
  
  if (0 < (int)param_4) {
    uVar31 = 0;
    iVar6 = *(int *)(param_1 + 0x88);
    plVar24 = *(long **)(param_1 + 0xa0);
    lVar32 = *(long *)(param_1 + 0x290);
    lVar33 = *(long *)(param_1 + 0x1b8);
    lVar4 = *plVar24;
    lVar5 = plVar24[1];
    lVar21 = plVar24[2];
    lVar34 = *(long *)(lVar32 + 0x30);
    lVar16 = *(long *)(lVar32 + 0x50);
    do {
      lVar28 = *(long *)(param_2 + uVar31 * 8);
      puVar37 = *(undefined1 **)(param_3 + uVar31 * 8);
      if (*(int *)(lVar32 + 0x48) == 0) {
        puVar29 = *(undefined2 **)(lVar32 + 0x40);
        lVar22 = 1;
        uVar30 = 3;
        *(undefined4 *)(lVar32 + 0x48) = 1;
        puVar27 = puVar29;
        if (iVar6 != 0) goto LAB_00d932e4;
LAB_00d934c8:
        uVar38 = 0;
        uVar41 = 0;
        uVar17 = 0;
      }
      else {
        uVar30 = 0xfffffffd;
        lVar28 = lVar28 + (ulong)(iVar6 * 3 - 3);
        lVar22 = -1;
        puVar37 = puVar37 + (iVar6 - 1);
        puVar29 = (undefined2 *)(*(long *)(lVar32 + 0x40) + (ulong)(iVar6 * 3 + 3) * 2);
        *(undefined4 *)(lVar32 + 0x48) = 0;
        puVar27 = puVar29;
        if (iVar6 == 0) goto LAB_00d934c8;
LAB_00d932e4:
        pbVar35 = (byte *)(lVar28 + 1);
        iVar26 = 0;
        iVar23 = 0;
        iVar25 = 0;
        iVar42 = 0;
        iVar39 = 0;
        puVar29 = (undefined2 *)((long)puVar27 + ((ulong)(iVar6 - 1) * 2 + 2) * (long)(int)uVar30);
        psVar36 = puVar27 + 2;
        iVar40 = iVar6;
        iVar20 = 0;
        iVar19 = 0;
        iVar18 = 0;
        iVar14 = 0;
        do {
          psVar3 = (short *)((long)psVar36 + (-(uVar30 >> 0x1f) & 0xfffffffe00000000 | uVar30 << 1))
          ;
          bVar7 = *(byte *)(lVar33 + (long)*(int *)(lVar16 + (long)(iVar26 + psVar3[-2] + 8 >> 4) *
                                                             4) + (ulong)pbVar35[-1]);
          bVar8 = *(byte *)(lVar33 + (long)*(int *)(lVar16 + (long)(iVar23 + psVar3[-1] + 8 >> 4) *
                                                             4) + (ulong)*pbVar35);
          bVar9 = *(byte *)(lVar33 + (long)*(int *)(lVar16 + (long)(iVar25 + *psVar3 + 8 >> 4) * 4)
                                     + (ulong)pbVar35[1]);
          puVar1 = (ushort *)
                   (*(long *)(lVar34 + (ulong)(bVar7 >> 3) * 8) + (ulong)(bVar8 >> 2) * 0x40 +
                   (ulong)(bVar9 >> 3) * 2);
          uVar10 = *puVar1;
          if (uVar10 == 0) {
            FUN_00d93a70(param_1);
            uVar10 = *puVar1;
          }
          lVar28 = (ulong)uVar10 - 1;
          *puVar37 = (char)lVar28;
          iVar40 = iVar40 + -1;
          iVar11 = (uint)bVar7 - (uint)*(byte *)(lVar4 + lVar28);
          puVar37 = puVar37 + lVar22;
          iVar12 = (uint)bVar8 - (uint)*(byte *)(lVar5 + lVar28);
          iVar2 = iVar11 * 5 + iVar20;
          uVar17 = (undefined2)iVar2;
          iVar13 = (uint)bVar9 - (uint)*(byte *)(lVar21 + lVar28);
          sVar15 = (short)iVar42;
          iVar42 = iVar12 * 5 + iVar19;
          uVar41 = (undefined2)iVar42;
          psVar36[-2] = (short)iVar11 * 3 + (short)iVar18;
          psVar36[-1] = (short)iVar12 * 3 + sVar15;
          *psVar36 = (short)iVar13 * 3 + (short)iVar39;
          iVar39 = iVar13 * 5 + iVar14;
          uVar38 = (undefined2)iVar39;
          iVar26 = iVar11 * 7;
          iVar23 = iVar12 * 7;
          iVar25 = iVar13 * 7;
          pbVar35 = pbVar35 + (int)uVar30;
          psVar36 = psVar3;
          iVar20 = iVar11;
          iVar19 = iVar12;
          iVar18 = iVar2;
          iVar14 = iVar13;
        } while (iVar40 != 0);
      }
      *puVar29 = uVar17;
      puVar29[1] = uVar41;
      uVar31 = uVar31 + 1;
      puVar29[2] = uVar38;
    } while (uVar31 != param_4);
  }
  return;
}

