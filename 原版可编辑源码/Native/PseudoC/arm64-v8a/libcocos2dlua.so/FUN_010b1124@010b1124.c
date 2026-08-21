
void FUN_010b1124(__jmp_buf_tag *param_1,long param_2,ulong param_3,long param_4,long param_5,
                 long param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  
  lVar5 = param_6 - param_4;
  uVar10 = param_5 >> 8;
  if (lVar5 == 0) {
    uVar9 = param_1[1].__saved_mask.__val[1];
    uVar17 = param_1[1].__jmpbuf[7];
    if ((long)uVar10 <= (long)uVar9) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 - param_1[1].__saved_mask.__val[0];
    if ((long)uVar9 < 0) {
      uVar9 = 0xffffffffffffffff;
    }
    param_2 = param_2 - param_1[1].__saved_mask.__val[2];
    if ((uVar9 != uVar17) || (param_2 != *(long *)&param_1[1].__mask_was_saved)) {
      if ((int)param_1[1].__saved_mask.__val[8] == 0) {
        iVar8 = (int)param_1[1].__saved_mask.__val[6];
        uVar10 = param_1[1].__saved_mask.__val[7];
        if (uVar10 != 0 || iVar8 != 0) {
          uVar19 = param_1[1].__saved_mask.__val[4];
          puVar22 = (ulong *)(param_1[0xc].__jmpbuf[6] + *(long *)&param_1[1].__mask_was_saved * 8);
          puVar16 = (ulong *)*puVar22;
          if ((long)uVar17 <= (long)uVar19) {
            uVar19 = uVar17;
          }
          while ((puVar16 != (ulong *)0x0 && ((long)*puVar16 <= (long)uVar19))) {
            if (*puVar16 == uVar19) goto LAB_010b13ac;
            puVar22 = puVar16 + 3;
            puVar16 = (ulong *)*puVar22;
          }
          uVar17 = param_1[1].__saved_mask.__val[0xb];
          if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar17) {
LAB_010b15a0:
                    /* WARNING: Subroutine does not return */
            longjmp(param_1,1);
          }
          uVar20 = param_1[1].__saved_mask.__val[9];
          param_1[1].__saved_mask.__val[0xb] = uVar17 + 1;
          puVar16 = (ulong *)(uVar20 + uVar17 * 0x20);
          *(undefined4 *)(puVar16 + 2) = 0;
          *puVar16 = uVar19;
          puVar16[1] = 0;
          puVar16[3] = *puVar22;
          *puVar22 = (ulong)puVar16;
LAB_010b13ac:
          *(int *)(puVar16 + 2) = (int)puVar16[2] + iVar8;
          puVar16[1] = puVar16[1] + uVar10;
        }
      }
      *(undefined4 *)(param_1[1].__saved_mask.__val + 6) = 0;
      param_1[1].__saved_mask.__val[7] = 0;
      param_1[1].__jmpbuf[7] = uVar9;
      *(long *)&param_1[1].__mask_was_saved = param_2;
    }
    if ((uint)param_2 < (uint)param_1[1].__saved_mask.__val[5]) {
      *(uint *)(param_1[1].__saved_mask.__val + 8) =
           (uint)((long)param_1[1].__saved_mask.__val[4] <= (long)uVar9);
    }
    else {
      *(undefined4 *)(param_1[1].__saved_mask.__val + 8) = 1;
    }
  }
  else {
    lVar14 = param_3 - (param_3 & 0xffffffffffffff00);
    iVar8 = (uint)param_5 - ((uint)param_5 & 0xffffff00);
    if ((long)param_3 >> 8 == uVar10) {
      uVar10 = param_1[1].__saved_mask.__val[7];
      *(int *)(param_1[1].__saved_mask.__val + 6) =
           (int)param_1[1].__saved_mask.__val[6] + (iVar8 + (int)lVar14) * (int)lVar5;
      param_1[1].__saved_mask.__val[7] = uVar10 + lVar5;
    }
    else {
      uVar9 = param_5 - param_3;
      lVar6 = lVar14;
      if (-1 < (long)uVar9) {
        lVar6 = 0x100 - lVar14;
      }
      uVar17 = -uVar9;
      if (-1 < (long)uVar9) {
        uVar17 = uVar9;
      }
      uVar19 = param_1[1].__saved_mask.__val[1];
      lVar3 = 0;
      if (uVar17 != 0) {
        lVar3 = (lVar6 * lVar5) / (long)uVar17;
      }
      uVar18 = (long)uVar9 >> 0x3f | 1;
      lVar5 = lVar6 * lVar5 - lVar3 * uVar17;
      uVar15 = param_1[1].__saved_mask.__val[0];
      uVar11 = (int)((long)uVar9 >> 0x3f) + 0x100U & 0xffffff00;
      uVar7 = lVar5 >> 0x3f;
      uVar20 = uVar18 + ((long)param_3 >> 8);
      lVar3 = uVar7 + lVar3;
      uVar21 = param_1[1].__jmpbuf[7];
      uVar9 = (long)(int)param_1[1].__saved_mask.__val[6] +
              (long)(int)((int)lVar3 * (uVar11 + (int)lVar14));
      uVar4 = uVar19;
      if ((long)uVar20 <= (long)uVar19) {
        uVar4 = uVar20;
      }
      param_2 = param_2 - param_1[1].__saved_mask.__val[2];
      uVar4 = uVar4 - uVar15;
      if ((long)uVar4 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar12 = param_1[1].__saved_mask.__val[7] + lVar3;
      *(int *)(param_1[1].__saved_mask.__val + 6) = (int)uVar9;
      param_1[1].__saved_mask.__val[7] = uVar12;
      if ((uVar4 != uVar21) || (param_2 != *(long *)&param_1[1].__mask_was_saved)) {
        if (((int)param_1[1].__saved_mask.__val[8] == 0) && (uVar12 != 0 || uVar9 != 0)) {
          uVar24 = param_1[1].__saved_mask.__val[4];
          puVar22 = (ulong *)(param_1[0xc].__jmpbuf[6] + *(long *)&param_1[1].__mask_was_saved * 8);
          puVar16 = (ulong *)*puVar22;
          if ((long)uVar21 <= (long)uVar24) {
            uVar24 = uVar21;
          }
          while ((puVar16 != (ulong *)0x0 && ((long)*puVar16 <= (long)uVar24))) {
            if (*puVar16 == uVar24) goto LAB_010b12e0;
            puVar22 = puVar16 + 3;
            puVar16 = (ulong *)*puVar22;
          }
          uVar21 = param_1[1].__saved_mask.__val[0xb];
          if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar21) goto LAB_010b15a0;
          uVar25 = param_1[1].__saved_mask.__val[9];
          param_1[1].__saved_mask.__val[0xb] = uVar21 + 1;
          puVar16 = (ulong *)(uVar25 + uVar21 * 0x20);
          *(undefined4 *)(puVar16 + 2) = 0;
          *puVar16 = uVar24;
          puVar16[1] = 0;
          puVar16[3] = *puVar22;
          *puVar22 = (ulong)puVar16;
LAB_010b12e0:
          *(int *)(puVar16 + 2) = (int)puVar16[2] + (int)uVar9;
          puVar16[1] = puVar16[1] + uVar12;
        }
        uVar12 = 0;
        uVar9 = 0;
        *(undefined4 *)(param_1[1].__saved_mask.__val + 6) = 0;
        param_1[1].__saved_mask.__val[7] = 0;
        param_1[1].__jmpbuf[7] = uVar4;
        *(long *)&param_1[1].__mask_was_saved = param_2;
      }
      iVar13 = (int)uVar9;
      uVar2 = (uint)param_1[1].__saved_mask.__val[5];
      if ((uint)param_2 < uVar2) {
        uVar23 = (uint)((long)param_1[1].__saved_mask.__val[4] <= (long)uVar4);
      }
      else {
        uVar23 = 1;
      }
      param_4 = lVar3 + param_4;
      *(uint *)(param_1[1].__saved_mask.__val + 8) = uVar23;
      if (uVar20 != uVar10) {
        lVar6 = ((lVar3 + param_6) - param_4) * 0x100;
        lVar14 = 0;
        if (uVar17 != 0) {
          lVar14 = lVar6 / (long)uVar17;
        }
        lVar6 = lVar6 - lVar14 * uVar17;
        uVar21 = lVar6 >> 0x3f;
        lVar5 = (lVar5 - (int)uVar17) + (uVar7 & uVar17);
        uVar7 = uVar4;
        do {
          uVar24 = (uVar21 & uVar17) + lVar6 + lVar5;
          uVar20 = uVar20 + uVar18;
          uVar25 = uVar19;
          if ((long)uVar20 <= (long)uVar19) {
            uVar25 = uVar20;
          }
          lVar3 = uVar21 + lVar14 + (uVar24 >> 0x3f ^ 1);
          uVar25 = uVar25 - uVar15;
          if ((long)uVar25 < 0) {
            uVar25 = 0xffffffffffffffff;
          }
          uVar1 = (int)uVar9 + (int)lVar3 * 0x100;
          uVar9 = (ulong)uVar1;
          uVar12 = uVar12 + lVar3;
          if (uVar25 != uVar7) {
            if ((uVar23 == 0) && (uVar12 != 0 || uVar1 != 0)) {
              uVar9 = param_1[1].__saved_mask.__val[4];
              puVar22 = (ulong *)(param_1[0xc].__jmpbuf[6] + param_2 * 8);
              puVar16 = (ulong *)*puVar22;
              if ((long)uVar4 <= (long)uVar9) {
                uVar9 = uVar4;
              }
              while ((puVar16 != (ulong *)0x0 && ((long)*puVar16 <= (long)uVar9))) {
                if (*puVar16 == uVar9) goto LAB_010b14fc;
                puVar22 = puVar16 + 3;
                puVar16 = (ulong *)*puVar22;
              }
              uVar4 = param_1[1].__saved_mask.__val[0xb];
              if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar4) {
                *(uint *)(param_1[1].__saved_mask.__val + 6) = uVar1;
                param_1[1].__saved_mask.__val[7] = uVar12;
                    /* WARNING: Subroutine does not return */
                longjmp(param_1,1);
              }
              uVar7 = param_1[1].__saved_mask.__val[9];
              param_1[1].__saved_mask.__val[0xb] = uVar4 + 1;
              puVar16 = (ulong *)(uVar7 + uVar4 * 0x20);
              *(undefined4 *)(puVar16 + 2) = 0;
              *puVar16 = uVar9;
              puVar16[1] = 0;
              puVar16[3] = *puVar22;
              *puVar22 = (ulong)puVar16;
LAB_010b14fc:
              *(uint *)(puVar16 + 2) = (int)puVar16[2] + uVar1;
              puVar16[1] = puVar16[1] + uVar12;
            }
            uVar12 = 0;
            uVar9 = 0;
            param_1[1].__jmpbuf[7] = uVar25;
            *(long *)&param_1[1].__mask_was_saved = param_2;
            uVar4 = uVar25;
          }
          iVar13 = (int)uVar9;
          lVar5 = uVar24 - (uVar17 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU));
          param_4 = lVar3 + param_4;
          if ((uint)param_2 < uVar2) {
            uVar23 = (uint)((long)param_1[1].__saved_mask.__val[4] <= (long)uVar25);
          }
          else {
            uVar23 = 1;
          }
          *(uint *)(param_1[1].__saved_mask.__val + 8) = uVar23;
          uVar7 = uVar25;
        } while (uVar20 != uVar10);
        *(int *)(param_1[1].__saved_mask.__val + 6) = iVar13;
        param_1[1].__saved_mask.__val[7] = uVar12;
      }
      *(uint *)(param_1[1].__saved_mask.__val + 6) =
           iVar13 + (int)(param_6 - param_4) * ((iVar8 + 0x100) - uVar11);
      param_1[1].__saved_mask.__val[7] = uVar12 + (param_6 - param_4);
    }
  }
                    /* try { // try from 010b158c to 011b15fb has its CatchHandler @ 010b158c
                       catch() { ... } // from try @ 010b158c with catch @ 010b158c
                       catch() { ... } // from try @ 010b1608 with catch @ 010b158c */
  return;
}

