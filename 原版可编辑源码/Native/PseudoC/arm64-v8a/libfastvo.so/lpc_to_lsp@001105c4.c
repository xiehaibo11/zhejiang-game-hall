
int lpc_to_lsp(short *param_1,uint param_2,long param_3,int param_4,short param_5)

{
  undefined8 *puVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  short *psVar14;
  short *psVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  undefined4 *puVar22;
  long lVar23;
  undefined4 *puVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  int *piVar29;
  undefined8 *puVar30;
  undefined2 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  int aiStack_a0 [2];
  long local_98 [3];
  int local_7c;
  ulong local_78;
  long local_70;
  long local_68;
  
  local_98[2] = param_3;
  local_98[0] = tpidr_el0;
  uVar8 = param_2;
  if ((int)param_2 < 0) {
    uVar8 = param_2 + 1;
  }
  uVar8 = (int)uVar8 >> 1;
  uVar28 = (ulong)(uVar8 + 1);
  local_68 = *(long *)(local_98[0] + 0x28);
  uVar10 = uVar28 * 4 + 0xf & 0x7fffffff0;
  lVar7 = -uVar10;
  puVar22 = (undefined4 *)((long)aiStack_a0 + lVar7);
  puVar24 = (undefined4 *)((long)puVar22 - uVar10);
  iVar16 = param_2 - 2;
  *puVar24 = 0x2000;
  *puVar22 = 0x2000;
  if (1 < (int)param_2) {
    sVar3 = *param_1;
    sVar4 = param_1[(int)(param_2 - 1)];
    puVar24[1] = (int)sVar4 + (int)sVar3 + -0x2000;
    *(int *)((long)aiStack_a0 + lVar7 + 4) = ((int)sVar3 - (int)sVar4) + 0x2000;
    if ((param_2 & 0xfffffffe) != 2) {
      lVar20 = (ulong)uVar8 - 1;
      piVar11 = puVar24 + 2;
      piVar29 = (int *)((long)local_98 + lVar7);
      psVar14 = param_1;
      do {
        psVar14 = psVar14 + 1;
        iVar2 = piVar29[-1];
        sVar3 = *psVar14;
        sVar4 = param_1[iVar16];
        lVar20 = lVar20 + -1;
        iVar16 = iVar16 + -1;
        *piVar11 = ((int)sVar4 + (int)sVar3) - piVar11[-1];
        *piVar29 = ((int)sVar3 - (int)sVar4) + iVar2;
        piVar11 = piVar11 + 1;
        piVar29 = piVar29 + 1;
      } while (lVar20 != 0);
    }
    if (1 < (int)param_2) {
      piVar11 = puVar24 + 1;
      *puVar24 = 0x800;
      piVar29 = (int *)((long)aiStack_a0 + lVar7 + 4);
      *puVar22 = 0x800;
      if ((param_2 & 0xfffffffe) != 2) {
        uVar10 = (ulong)(uVar8 - 2) + 1;
        if (uVar10 < 4) {
          iVar16 = 1;
          piVar17 = piVar29;
          piVar21 = piVar11;
        }
        else {
          uVar34 = uVar8 - 1 & 3;
          lVar20 = uVar10 - uVar34;
          iVar16 = (int)lVar20 + 1;
          piVar17 = piVar29 + lVar20;
          piVar21 = piVar11 + lVar20;
          do {
            uVar42 = *(undefined8 *)(piVar29 + 2);
            uVar41 = *(undefined8 *)piVar29;
            lVar20 = lVar20 + -4;
            *(ulong *)(piVar11 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar11 + 2) >> 0x20) + 2 >> 2,
                          (int)*(undefined8 *)(piVar11 + 2) + 2 >> 2);
            *(ulong *)piVar11 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar11 >> 0x20) + 2 >> 2,
                          (int)*(undefined8 *)piVar11 + 2 >> 2);
            *(ulong *)(piVar29 + 2) =
                 CONCAT44((int)((ulong)uVar42 >> 0x20) + 2 >> 2,(int)uVar42 + 2 >> 2);
            *(ulong *)piVar29 = CONCAT44((int)((ulong)uVar41 >> 0x20) + 2 >> 2,(int)uVar41 + 2 >> 2)
            ;
            piVar11 = piVar11 + 4;
            piVar29 = piVar29 + 4;
          } while (lVar20 != 0);
          if (uVar34 == 0) goto LAB_00110774;
        }
        iVar16 = uVar8 - iVar16;
        do {
          iVar2 = *piVar17;
          iVar16 = iVar16 + -1;
          *piVar21 = *piVar21 + 2 >> 2;
          *piVar17 = iVar2 + 2 >> 2;
          piVar17 = piVar17 + 1;
          piVar21 = piVar21 + 1;
        } while (iVar16 != 0);
      }
    }
  }
LAB_00110774:
  uVar10 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
  iVar16 = *(int *)((long)puVar22 + uVar10);
  *(int *)((long)puVar24 + uVar10) = *(int *)((long)puVar24 + uVar10) + 4 >> 3;
  *(int *)((long)puVar22 + uVar10) = iVar16 + 4 >> 3;
  uVar10 = uVar28 * 2 + 0xf & 0x3fffffff0;
  lVar20 = (long)puVar24 - uVar10;
  local_70 = lVar20 - uVar10;
  if (-2 < (int)param_2) {
    local_98[1] = lVar20;
    if (uVar8 + 1 < 8) {
      uVar26 = 0;
LAB_0011083c:
      lVar7 = local_98[1];
      lVar20 = uVar28 - uVar26;
      puVar13 = (undefined2 *)(local_70 + uVar26 * 2);
      puVar22 = puVar22 + uVar26;
      puVar24 = puVar24 + uVar26;
      puVar31 = (undefined2 *)(local_98[1] + uVar26 * 2);
      do {
        lVar20 = lVar20 + -1;
        *puVar31 = (short)*puVar24;
        *puVar13 = (short)*puVar22;
        puVar13 = puVar13 + 1;
        puVar22 = puVar22 + 1;
        puVar24 = puVar24 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar20 != 0);
    }
    else {
      uVar26 = uVar28 & 0xfffffff8;
      puVar30 = (undefined8 *)(puVar24 + 4);
      puVar33 = (undefined8 *)((long)local_98 + lVar7 + 8);
      puVar12 = (undefined8 *)(local_70 + 8);
      uVar10 = uVar26;
      puVar32 = (undefined8 *)(lVar20 + 8);
      do {
        puVar1 = puVar30 + -2;
        puVar5 = puVar30 + -1;
        uVar42 = puVar30[1];
        uVar41 = *puVar30;
        puVar30 = puVar30 + 4;
        uVar10 = uVar10 - 8;
        puVar32[-1] = CONCAT26((short)((ulong)*puVar5 >> 0x20),
                               CONCAT24((short)*puVar5,
                                        CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)));
        *puVar32 = CONCAT26((short)((ulong)uVar42 >> 0x20),
                            CONCAT24((short)uVar42,
                                     CONCAT22((short)((ulong)uVar41 >> 0x20),(short)uVar41)));
        puVar1 = puVar33 + -2;
        puVar5 = puVar33 + -1;
        uVar42 = puVar33[1];
        uVar41 = *puVar33;
        puVar33 = puVar33 + 4;
        puVar12[-1] = CONCAT26((short)((ulong)*puVar5 >> 0x20),
                               CONCAT24((short)*puVar5,
                                        CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)));
        *puVar12 = CONCAT26((short)((ulong)uVar42 >> 0x20),
                            CONCAT24((short)uVar42,
                                     CONCAT22((short)((ulong)uVar41 >> 0x20),(short)uVar41)));
        puVar12 = puVar12 + 2;
        puVar32 = puVar32 + 2;
      } while (uVar10 != 0);
      lVar7 = local_98[1];
      if (uVar26 != uVar28) goto LAB_0011083c;
    }
    if (0 < (int)param_2) {
      lVar23 = (long)(int)uVar8;
      uVar10 = 0;
      uVar35 = 0;
      uVar8 = 0;
      lVar20 = uVar28 - 2;
      uVar34 = 0x4000;
      local_7c = 0;
      local_78 = (ulong)param_2;
      do {
        lVar37 = lVar7;
        if ((uVar10 & 1) != 0) {
          lVar37 = local_70;
        }
        uVar38 = uVar34;
        if (0x3ffe < (short)uVar34) {
          uVar38 = 0x3fff;
        }
        sVar3 = *(short *)(lVar37 + (lVar23 + -1) * 2);
        sVar4 = *(short *)(lVar37 + lVar23 * 2);
        if ((short)uVar38 < -0x3ffe) {
          uVar38 = 0xffffc001;
        }
        uVar36 = (int)sVar4 + ((int)sVar3 * (int)(short)uVar38 + 0x2000 >> 0xe);
        if (3 < (int)param_2) {
          psVar14 = (short *)(lVar37 + (lVar23 + -2) * 2);
          lVar18 = lVar20;
          uVar39 = uVar38;
          uVar25 = 0x4000;
          do {
            uVar9 = uVar39;
            uVar39 = ((uint)((int)(short)uVar9 * (int)(short)uVar38) >> 0xd) - uVar25;
            lVar18 = lVar18 + -1;
            uVar36 = uVar36 + ((int)(short)uVar39 * (int)*psVar14 + 0x2000 >> 0xe);
            psVar14 = psVar14 + -1;
            uVar25 = uVar9;
          } while (lVar18 != 0);
        }
        if (-0x4001 < (short)uVar35) {
          psVar14 = (short *)(lVar37 + (lVar23 + -2) * 2);
LAB_00110950:
          uVar35 = (uint)(((int)(0x40000000 -
                                (((int)(short)uVar34 * (int)(short)uVar34 * 4 >> 0x10) * 56000 &
                                0xffff0000U)) >> 0x10) * (int)param_5) >> 0xf;
          if (uVar36 + 0x1ff < 0x3ff) {
            uVar35 = (short)uVar35 + 1 >> 1;
          }
          iVar16 = uVar34 - uVar35;
          uVar35 = (uint)(short)iVar16;
          if (0x3ffe < (int)uVar35) {
            iVar16 = 0x3fff;
          }
          if ((short)iVar16 < -0x3ffe) {
            iVar16 = -0x3fff;
          }
          uVar38 = (int)sVar4 + ((int)(short)iVar16 * (int)sVar3 + 0x2000 >> 0xe);
          if (3 < (int)param_2) {
            psVar15 = psVar14;
            lVar37 = lVar20;
            iVar2 = iVar16;
            iVar27 = 0x4000;
            do {
              iVar40 = iVar2;
              iVar2 = ((uint)((int)(short)iVar40 * (int)(short)iVar16) >> 0xd) - iVar27;
              lVar37 = lVar37 + -1;
              uVar38 = uVar38 + ((int)(short)iVar2 * (int)*psVar15 + 0x2000 >> 0xe);
              psVar15 = psVar15 + -1;
              iVar27 = iVar40;
            } while (lVar37 != 0);
          }
          if ((uVar36 != 0) && (((uVar38 ^ uVar36) & 0x70000000) == 0)) goto code_r0x00110a08;
          local_7c = local_7c + 1;
          if (-1 < param_4) {
            iVar16 = 0;
            do {
              uVar8 = ((int)(short)uVar34 + 1U >> 1) + ((int)(short)uVar35 + 1U >> 1);
              uVar38 = uVar8;
              if (0x3ffe < (short)uVar8) {
                uVar38 = 0x3fff;
              }
              if ((short)uVar38 < -0x3ffe) {
                uVar38 = 0xffffc001;
              }
              uVar39 = (int)sVar4 + ((int)(short)uVar38 * (int)sVar3 + 0x2000 >> 0xe);
              if (3 < (int)param_2) {
                lVar7 = lVar20;
                psVar15 = psVar14;
                uVar25 = uVar38;
                uVar9 = 0x4000;
                do {
                  uVar19 = uVar25;
                  uVar25 = ((uint)((int)(short)uVar19 * (int)(short)uVar38) >> 0xd) - uVar9;
                  lVar7 = lVar7 + -1;
                  uVar39 = uVar39 + ((int)(short)uVar25 * (int)*psVar15 + 0x2000 >> 0xe);
                  psVar15 = psVar15 + -1;
                  uVar9 = uVar19;
                } while (lVar7 != 0);
              }
              uVar38 = uVar8;
              if (uVar36 != 0 && ((uVar39 ^ uVar36) & 0x70000000) == 0) {
                uVar34 = uVar8;
                uVar38 = uVar35;
                uVar36 = uVar39;
              }
              uVar35 = uVar38;
              bVar6 = iVar16 != param_4;
              iVar16 = iVar16 + 1;
            } while (bVar6);
          }
          uVar34 = -(uVar8 >> 0xf & 1);
          iVar16 = (int)((0x4000 - (uVar8 + uVar34 ^ uVar34)) * 0x10000) >> 0x11;
          uVar34 = iVar16 * ((int)((((iVar16 * 0x5ce >> 0xd) + 0x8c2) * iVar16 * 8 & 0xffff0000U) +
                                  0x40550000) >> 0x10) * 8 >> 0x10;
          uVar38 = uVar34 << 0xd;
          uVar36 = uVar34 >> 3 & 0xffff;
          uVar34 = uVar36;
          if (uVar36 == 0) {
            uVar34 = uVar38;
          }
          uVar25 = (uint)(uVar36 != 0);
          uVar36 = uVar25 << 3 | 4;
          uVar39 = uVar34 >> 8;
          if (uVar34 < 0x100) {
            uVar36 = uVar25 << 3;
            uVar39 = uVar34;
          }
          uVar34 = uVar36 | 2;
          uVar25 = uVar39 >> 4;
          if (uVar39 < 0x10) {
            uVar34 = uVar36;
            uVar25 = uVar39;
          }
          uVar34 = uVar34 | 3 < uVar25;
          uVar36 = 0xd - uVar34;
          sVar3 = (short)((int)uVar38 >> (uVar34 * 2 - 0xc & 0x1f));
          if ((ushort)uVar34 < 7) {
            sVar3 = (short)(uVar38 << (ulong)(uVar34 * -2 + 0xc & 0x1f));
          }
          iVar16 = (int)sVar3;
          iVar16 = (int)((((int)(((iVar16 * 0x41b0 + -0x31530000 >> 0x10) * iVar16 * 4 & 0xffff0000U
                                 ) + 0x52b50000) >> 0x10) * iVar16 * 4 & 0xffff0000U) + 0xe320000)
                   >> 0x10;
          sVar3 = (short)(iVar16 >> (uVar36 & 0x1f));
          if ((int)uVar36 < 1) {
            sVar3 = (short)(iVar16 << (ulong)(-uVar36 & 0x1f));
          }
          sVar4 = 0x6488 - sVar3;
          if (-1 < (short)uVar8) {
            sVar4 = sVar3;
          }
          *(short *)(local_98[2] + uVar10 * 2) = sVar4;
          lVar7 = local_98[1];
          uVar34 = uVar8;
        }
LAB_00110c24:
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_2);
      goto LAB_00110c3c;
    }
  }
  local_7c = 0;
LAB_00110c3c:
  if (*(long *)(local_98[0] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7c;
code_r0x00110a08:
  uVar34 = uVar35;
  uVar36 = uVar38;
  if ((int)uVar35 < -0x4000) goto LAB_00110c24;
  goto LAB_00110950;
}

