
void FUN_001334f0(long param_1,long *param_2)

{
  long lVar1;
  uint *puVar2;
  short *psVar3;
  short *psVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  short sVar18;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  undefined2 *puVar23;
  uint uVar24;
  ushort uVar25;
  int iVar26;
  ushort *puVar27;
  int *piVar28;
  ushort *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  long *plVar35;
  ushort auStack_88 [16];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  lVar32 = *param_2;
  lVar15 = *(long *)param_2[2];
  uVar24 = *(uint *)(param_2[2] + 0x14);
  puVar2 = (uint *)(param_1 + 0x14b4);
  puVar2[0] = 0;
  puVar2[1] = 0x23d;
  if ((int)uVar24 < 1) {
    uVar22 = 0;
    uVar34 = 0xffffffff;
  }
  else {
    uVar19 = 0;
    puVar23 = (undefined2 *)(lVar32 + 2);
    uVar34 = 0xffffffff;
    do {
      if (puVar23[-1] == 0) {
        *puVar23 = 0;
      }
      else {
        uVar34 = uVar19 & 0xffffffff;
        lVar30 = (long)*(int *)(param_1 + 0x14b4) + 1;
        *(int *)(param_1 + 0x14b4) = (int)lVar30;
        *(int *)(param_1 + lVar30 * 4 + 0xbc0) = (int)uVar19;
        *(undefined1 *)(param_1 + 0x14bc + uVar19) = 0;
      }
      uVar33 = (uint)uVar34;
      uVar19 = uVar19 + 1;
      puVar23 = puVar23 + 2;
    } while (uVar24 != uVar19);
    uVar22 = *(uint *)(param_1 + 0x14b4);
    if (1 < (int)uVar22) goto LAB_00133644;
  }
  do {
    uVar33 = (uint)uVar34;
    uVar7 = 0;
    if ((int)uVar33 < 2) {
      uVar7 = uVar33 + 1;
    }
    *(int *)(param_1 + 0x14b4) = (int)((long)(int)uVar22 + 1);
    *(uint *)(param_1 + ((long)(int)uVar22 + 1) * 4 + 0xbc0) = uVar7;
    *(undefined2 *)(lVar32 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2)) = 1
    ;
    *(undefined1 *)(param_1 + (int)uVar7 + 0x14bc) = 0;
    if ((int)uVar33 < 2) {
      uVar33 = uVar33 + 1;
    }
    uVar34 = (ulong)uVar33;
    *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
    if (lVar15 != 0) {
      *(long *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar15 + (long)(int)uVar7 * 4 + 2);
    }
    uVar22 = *puVar2;
  } while ((int)uVar22 < 2);
LAB_00133644:
  plVar35 = (long *)(param_1 + 0x1718);
  *(uint *)(param_2 + 1) = uVar33;
  uVar22 = uVar22 >> 1;
  do {
    FUN_00133d74(param_1,lVar32,uVar22);
    uVar7 = uVar22 - 1;
    bVar12 = 0 < (int)uVar22;
    uVar22 = uVar7;
  } while (uVar7 != 0 && bVar12);
  iVar14 = *(int *)(param_1 + 0x14b4);
  lVar15 = (long)(int)uVar24 << 2;
  lVar30 = (long)(int)uVar24;
  do {
    *(int *)(param_1 + 0x14b4) = iVar14 + -1;
    lVar1 = param_1 + 0xbc0;
    iVar13 = *(int *)(param_1 + 0xbc4);
    *(undefined4 *)(param_1 + 0xbc4) = *(undefined4 *)(lVar1 + (long)iVar14 * 4);
    FUN_00133d74(param_1,lVar32,1);
    iVar14 = *(int *)(param_1 + 0xbc4);
    psVar3 = (short *)(lVar32 + (long)iVar13 * 4);
    lVar16 = (long)*(int *)(param_1 + 0x14b8) + -1;
    *(int *)(param_1 + 0x14b8) = (int)lVar16;
    *(int *)(lVar1 + lVar16 * 4) = iVar13;
    psVar4 = (short *)(lVar32 + (long)iVar14 * 4);
    lVar16 = (long)*(int *)(param_1 + 0x14b8) + -1;
    *(int *)(param_1 + 0x14b8) = (int)lVar16;
    *(int *)(lVar1 + lVar16 * 4) = iVar14;
    *(short *)(lVar32 + lVar15) = *psVar4 + *psVar3;
    bVar5 = *(byte *)(param_1 + 0x14bc + (long)iVar13);
    bVar6 = *(byte *)(param_1 + 0x14bc + (long)iVar14);
    if (bVar6 <= bVar5) {
      bVar6 = bVar5;
    }
    *(byte *)(param_1 + 0x14bc + lVar30) = bVar6 + 1;
    psVar4[1] = (short)lVar30;
    psVar3[1] = (short)lVar30;
    *(int *)(param_1 + 0xbc4) = (int)lVar30;
    FUN_00133d74(param_1,lVar32,1);
    iVar14 = *(int *)(param_1 + 0x14b4);
    lVar15 = lVar15 + 4;
    lVar30 = lVar30 + 1;
  } while (1 < iVar14);
  lVar15 = (long)*(int *)(param_1 + 0x14b8) + -1;
  *(int *)(param_1 + 0x14b8) = (int)lVar15;
  *(undefined4 *)(lVar1 + lVar15 * 4) = *(undefined4 *)(param_1 + 0xbc4);
  plVar20 = (long *)param_2[2];
  lVar17 = *param_2;
  lVar10 = param_2[1];
  lVar15 = *plVar20;
  lVar30 = plVar20[1];
  lVar11 = plVar20[2];
  iVar14 = (int)plVar20[3];
  lVar16 = (long)iVar14;
  *(undefined8 *)(param_1 + 3000) = 0;
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  *(undefined2 *)(lVar17 + (long)*(int *)(lVar1 + (long)*(int *)(param_1 + 0x14b8) * 4) * 4 + 2) = 0
  ;
  iVar13 = *(int *)(param_1 + 0x14b8);
  if (iVar13 < 0x23c) {
    iVar26 = iVar13 + -0x23c;
    iVar21 = 0;
    piVar28 = (int *)(param_1 + (long)iVar13 * 4 + 0xbc4);
    do {
      iVar13 = *piVar28;
      lVar31 = (long)iVar13;
      lVar1 = lVar17 + lVar31 * 4;
      uVar25 = *(ushort *)(lVar17 + (ulong)*(ushort *)(lVar1 + 2) * 4 + 2);
      if ((int)(uint)uVar25 < iVar14) {
        iVar9 = uVar25 + 1;
      }
      else {
        iVar21 = iVar21 + 1;
        iVar9 = iVar14;
      }
      *(short *)(lVar1 + 2) = (short)iVar9;
      if (iVar13 <= (int)lVar10) {
        lVar1 = param_1 + (long)iVar9 * 2;
        *(short *)(lVar1 + 0xba0) = *(short *)(lVar1 + 0xba0) + 1;
        if (iVar13 < (int)lVar11) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(lVar30 + (long)(iVar13 - (int)lVar11) * 4);
        }
        uVar34 = (ulong)*(ushort *)(lVar17 + lVar31 * 4);
        *plVar35 = *plVar35 + uVar34 * (uint)(iVar13 + iVar9);
        if (lVar15 != 0) {
          *(long *)(param_1 + 0x1720) =
               *(long *)(param_1 + 0x1720) +
               (iVar13 + (uint)*(ushort *)(lVar15 + lVar31 * 4 + 2)) * uVar34;
        }
      }
      bVar12 = iVar26 != -1;
      iVar26 = iVar26 + 1;
      piVar28 = piVar28 + 1;
    } while (bVar12);
    if (iVar21 != 0) {
      puVar29 = (ushort *)(param_1 + lVar16 * 2 + 0xba0);
      lVar15 = (lVar16 << 0x20) + 0x100000000;
      puVar27 = puVar29;
      lVar30 = lVar15;
      do {
        do {
          puVar27 = puVar27 + -1;
          lVar30 = lVar30 + -0x100000000;
        } while (*puVar27 == 0);
        lVar30 = param_1 + (lVar30 >> 0x1f);
        *puVar27 = *puVar27 - 1;
        iVar13 = iVar21 + -2;
        *(short *)(lVar30 + 0xba0) = *(short *)(lVar30 + 0xba0) + 2;
        uVar25 = *puVar29 - 1;
        *puVar29 = uVar25;
        bVar12 = 1 < iVar21;
        puVar27 = puVar29;
        lVar30 = lVar15;
        iVar21 = iVar13;
      } while (iVar13 != 0 && bVar12);
      if (iVar14 != 0) {
        iVar14 = 0x23d;
        while( true ) {
          if (uVar25 != 0) {
            uVar24 = (uint)uVar25;
            do {
              piVar28 = (int *)(param_1 + 0xbbc + (long)iVar14 * 4);
              do {
                iVar13 = *piVar28;
                iVar14 = iVar14 + -1;
                piVar28 = piVar28 + -1;
              } while ((int)lVar10 < iVar13);
              puVar29 = (ushort *)(lVar17 + (long)iVar13 * 4 + 2);
              uVar25 = *puVar29;
              if ((uint)lVar16 != (uint)uVar25) {
                *plVar35 = *plVar35 +
                           (lVar16 - (ulong)uVar25) * (ulong)*(ushort *)(lVar17 + (long)iVar13 * 4);
                *puVar29 = (ushort)lVar16;
              }
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          lVar16 = lVar16 + -1;
          if (lVar16 == 0) break;
          uVar25 = *(ushort *)(param_1 + lVar16 * 2 + 0xba0);
        }
      }
    }
  }
  lVar15 = 0;
  sVar18 = 0;
  do {
    sVar18 = (sVar18 + *(short *)(param_1 + 0xba0 + lVar15)) * 2;
    *(short *)(((ulong)auStack_88 | 2) + lVar15) = sVar18;
    lVar15 = lVar15 + 2;
  } while (lVar15 != 0x1e);
  if (-1 < (int)uVar33) {
    uVar34 = 0;
    do {
      uVar25 = *(ushort *)(lVar32 + uVar34 * 4 + 2);
      if (uVar25 != 0) {
        uVar22 = (uint)auStack_88[(uint)uVar25];
        uVar24 = 0;
        auStack_88[uVar25] = auStack_88[(uint)uVar25] + 1;
        iVar14 = uVar25 + 1;
        do {
          iVar14 = iVar14 + -1;
          uVar7 = uVar24 | uVar22 & 1;
          uVar22 = uVar22 >> 1;
          uVar24 = uVar7 << 1;
        } while (1 < iVar14);
        *(short *)(lVar32 + uVar34 * 4) = (short)uVar7;
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar33 + 1);
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

