
void FUN_00e05b70(byte *param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  short *psVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  short *__ptr;
  short *psVar11;
  short *psVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  long lVar24;
  short sVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ushort *puVar29;
  undefined2 *puVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  byte *pbVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  short *psVar39;
  short *psVar40;
  char local_168 [256];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar34 = (ulong)param_2;
  uVar10 = 0;
  if ((((param_4 < 0x65) && (uVar10 = 0, param_1 != (byte *)0x0)) && (0 < (int)param_2)) &&
     ((0 < (int)param_3 && (uVar10 = 1, 0x18 < (int)param_4)))) {
    uVar9 = (int)param_4 / 0x19;
    uVar5 = uVar9 * 2 | 1;
    uVar36 = (uVar5 + 1) * param_2;
    uVar33 = -(ulong)(uVar36 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar36 << 1;
    uVar37 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1;
    __ptr = (short *)WebPSafeMalloc(1,uVar37 + uVar33 + 0xffe);
    uVar10 = 0;
    if (__ptr != (short *)0x0) {
      iVar7 = uVar5 * param_2;
      lVar38 = (long)(int)param_2;
      psVar2 = __ptr + iVar7;
      uVar36 = -uVar9;
      memset(psVar2 + -lVar38,0,uVar37);
      puVar4 = (ushort *)((long)__ptr + uVar33);
      memset(local_168,0,0x100);
      if ((int)(param_3 * param_2) < 1) {
        uVar14 = 0;
        uVar17 = 0;
        uVar15 = 0xff;
        uVar27 = 0xff;
      }
      else {
        uVar14 = 0;
        uVar16 = (ulong)(param_3 * param_2);
        uVar15 = 0xff;
        pbVar23 = param_1;
        uVar21 = 0;
        uVar26 = 0xff;
        do {
          bVar19 = *pbVar23;
          uVar16 = uVar16 - 1;
          uVar31 = (uint)bVar19;
          uVar27 = uVar31;
          uVar17 = uVar31;
          if (uVar26 <= bVar19) {
            uVar27 = uVar26;
            uVar17 = uVar15;
          }
          uVar15 = uVar17;
          uVar17 = (uint)bVar19;
          uVar26 = (uint)bVar19;
          if (uVar31 <= uVar21) {
            uVar17 = uVar21;
            uVar26 = uVar14;
          }
          uVar14 = uVar26;
          local_168[bVar19] = '\x01';
          pbVar23 = pbVar23 + 1;
          uVar21 = uVar17;
          uVar26 = uVar27;
        } while (uVar16 != 0);
      }
      iVar20 = 0;
      lVar24 = 0;
      iVar28 = uVar17 - uVar27;
      iVar18 = -1;
      uVar27 = 0;
      if (uVar5 * uVar5 != 0) {
        uVar27 = 0x40000 / (uVar5 * uVar5);
      }
      do {
        iVar32 = iVar28;
        iVar22 = iVar18;
        if (local_168[lVar24] != '\0') {
          iVar20 = iVar20 + 1;
          iVar22 = (int)lVar24;
          if ((-1 < iVar18) && (iVar32 = iVar22 - iVar18, iVar28 <= iVar22 - iVar18)) {
            iVar32 = iVar28;
          }
        }
        iVar18 = iVar22;
        iVar28 = iVar32;
        lVar24 = lVar24 + 1;
      } while (lVar24 != 0x100);
      puVar3 = (undefined2 *)((long)puVar4 + uVar37 + 0x7fe);
      iVar18 = iVar28 * 4;
      iVar32 = iVar28 * 0xc >> 2;
      lVar24 = 0;
      iVar22 = iVar18 - iVar32;
      iVar32 = iVar32 * (iVar18 + -1);
      psVar11 = (short *)((long)__ptr + uVar37 + uVar33 + 0x7fc);
      do {
        uVar16 = lVar24 + 1;
        if ((long)((ulong)(uint)(iVar28 * 0xc) << 0x20) >> 0x22 < (long)uVar16) {
          if ((long)uVar16 < (long)iVar18) {
            uVar5 = 0;
            if (iVar22 != 0) {
              uVar5 = iVar32 / iVar22;
            }
            uVar16 = (ulong)uVar5;
          }
          else {
            uVar16 = 0;
          }
        }
        sVar25 = (short)((int)uVar16 >> 2);
        *(short *)((long)__ptr + lVar24 * 2 + uVar37 + uVar33 + 0x800) = sVar25;
        lVar24 = lVar24 + 1;
        *psVar11 = -sVar25;
        iVar32 = iVar32 - (iVar28 * 0xc >> 2);
        psVar11 = psVar11 + -1;
      } while (lVar24 != 0x3ff);
      *puVar3 = 0;
      if ((2 < iVar20) && ((int)uVar36 < (int)param_3)) {
        uVar17 = param_2 - uVar9;
        uVar5 = uVar9 + 1;
        pbVar23 = param_1;
        psVar11 = psVar2 + -lVar38;
        psVar39 = __ptr;
        do {
          if (0 < (int)param_2) {
            sVar25 = 0;
            psVar12 = __ptr + iVar7;
            uVar37 = uVar34;
            pbVar35 = pbVar23;
            psVar40 = psVar39;
            do {
              sVar6 = *psVar11;
              uVar37 = uVar37 - 1;
              sVar25 = (ushort)*pbVar35 + sVar25;
              *psVar12 = (sVar25 + sVar6) - *psVar40;
              *psVar40 = sVar25 + sVar6;
              psVar12 = psVar12 + 1;
              pbVar35 = pbVar35 + 1;
              psVar11 = psVar11 + 1;
              psVar40 = psVar40 + 1;
            } while (uVar37 != 0);
          }
          psVar12 = __ptr;
          if (psVar39 + lVar38 != psVar2) {
            psVar12 = psVar39 + lVar38;
          }
          pbVar35 = pbVar23 + lVar38;
          if ((int)(param_3 - 1) <= (int)uVar36 || 0x7fffffff < uVar36) {
            pbVar35 = pbVar23;
          }
          if ((int)uVar9 <= (int)uVar36) {
            puVar13 = puVar4;
            puVar29 = (ushort *)(__ptr + (long)(int)uVar9 + (long)iVar7);
            uVar37 = (ulong)uVar5;
            iVar20 = uVar9 - 1;
            if ((int)param_4 < -0x18) {
              uVar21 = 0;
              if (0 < (int)uVar17) {
LAB_00e05f2c:
                iVar20 = ~uVar9 + uVar21;
                lVar24 = (long)(int)uVar17 - (long)(int)uVar21;
                puVar30 = (undefined2 *)((long)__ptr + (long)(int)uVar21 * 2 + uVar33);
                puVar13 = (ushort *)(__ptr + iVar7 + (long)(int)uVar9 + (long)(int)uVar21);
                do {
                  lVar1 = (long)iVar20;
                  lVar24 = lVar24 + -1;
                  iVar20 = iVar20 + 1;
                  *puVar30 = (short)(((uint)*puVar13 - (uint)(ushort)psVar2[lVar1] & 0xffff) *
                                     uVar27 >> 0x10);
                  puVar30 = puVar30 + 1;
                  puVar13 = puVar13 + 1;
                  uVar21 = uVar17;
                } while (lVar24 != 0);
              }
            }
            else {
              do {
                lVar24 = (long)iVar20;
                uVar37 = uVar37 - 1;
                iVar20 = iVar20 + 1;
                *puVar13 = (ushort)(((uint)*puVar29 + (uint)(ushort)psVar2[lVar24] & 0xffff) *
                                    uVar27 >> 0x10);
                puVar13 = puVar13 + 1;
                puVar29 = puVar29 + -1;
              } while (uVar37 != 0);
              uVar21 = uVar5;
              if ((int)uVar5 < (int)uVar17) goto LAB_00e05f2c;
            }
            if ((int)uVar21 < (int)param_2) {
              lVar24 = lVar38 - (int)uVar21;
              iVar28 = ((param_2 * 2 + -2) - uVar9) - uVar21;
              iVar20 = ~uVar9 + uVar21;
              puVar30 = (undefined2 *)((long)__ptr + (long)(int)uVar21 * 2 + uVar33);
              do {
                lVar1 = (long)iVar28;
                lVar24 = lVar24 + -1;
                iVar28 = iVar28 + -1;
                *puVar30 = (short)((((uint)(ushort)psVar2[lVar38 + -1] * 2 -
                                    (uint)(ushort)psVar2[lVar1]) - (uint)(ushort)psVar2[iVar20] &
                                   0xffff) * uVar27 >> 0x10);
                iVar20 = iVar20 + 1;
                puVar30 = puVar30 + 1;
              } while (lVar24 != 0);
            }
            puVar13 = puVar4;
            pbVar23 = param_1;
            uVar37 = uVar34;
            if (0 < (int)param_2) {
              do {
                if ((*pbVar23 < uVar14) && (uVar21 = (uint)*pbVar23, uVar15 < uVar21)) {
                  uVar21 = (int)(short)puVar3[(int)((uint)*puVar13 + uVar21 * -4)] + uVar21;
                  if (uVar21 < 0x100) {
                    bVar19 = (byte)uVar21;
                  }
                  else {
                    bVar19 = ((byte)((int)uVar21 >> 0x1f) & 1) - 1;
                  }
                  *pbVar23 = bVar19;
                }
                uVar37 = uVar37 - 1;
                puVar13 = puVar13 + 1;
                pbVar23 = pbVar23 + 1;
              } while (uVar37 != 0);
            }
            param_1 = param_1 + lVar38;
          }
          uVar36 = uVar36 + 1;
          pbVar23 = pbVar35;
          psVar11 = psVar39;
          psVar39 = psVar12;
        } while (uVar36 != param_3);
      }
      WebPSafeFree(__ptr);
      uVar10 = 1;
    }
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

