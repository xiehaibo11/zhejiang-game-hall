
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e66010(undefined8 *param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong *puVar15;
  short *psVar16;
  undefined8 uVar17;
  short *psVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  short *psVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 uVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  int *piVar31;
  ulong uVar32;
  short *psStack_68;
  
  uVar28 = (ulong)param_4;
  uVar11 = FUN_00e62d8c(param_1,param_4);
  if ((int)uVar11 == 0) {
    FUN_00e63588(param_1,param_2,param_3,uVar28);
    uVar11 = *param_1;
    plVar30 = (long *)param_1[0x284];
    uVar20 = *(uint *)(*plVar30 + 8);
    piVar31 = (int *)(param_1 + uVar28 * 0x13d + 0xb);
    *piVar31 = 0;
    lVar29 = 8;
    if (param_4 != 0) {
      lVar29 = 0x18;
    }
    iVar7 = *(int *)(param_1 + uVar28 * 0x13d + 9);
    uVar26 = param_1[uVar28 * 0x13d + 10];
    uVar17 = *(undefined8 *)((long)param_1 + lVar29);
    uVar27 = 0;
    if (param_4 == 1) {
      uVar27 = (&PTR_DAT_01c97170)[uVar20][0x18];
    }
    if (param_4 == 0) {
      lVar29 = FT_DivFix(0x40,param_1[3]);
    }
    else {
      lVar29 = 0;
    }
    lVar12 = FT_DivFix(0x20,uVar17);
    lVar13 = FT_MulFix(plVar30[uVar28 * 0x90b + 0x3d],uVar17);
    if (0xf < lVar13) {
      lVar13 = 0x10;
    }
    lVar13 = FT_DivFix(lVar13,uVar17);
    if (iVar7 < 1) {
      puVar1 = param_1 + uVar28 * 0x13d + 0xc;
      iVar7 = *piVar31;
    }
    else {
      uVar25 = uVar26 + (long)iVar7 * 0x50;
      puVar1 = param_1 + uVar28 * 0x13d + 0xc;
      uVar32 = uVar26;
      do {
        if ((lVar29 <= *(short *)(uVar32 + 10)) && (*(short *)(uVar32 + 4) <= lVar12)) {
          cVar5 = *(char *)(uVar32 + 1);
          if ((cVar5 != '\x04') &&
             ((*(long *)(uVar32 + 0x28) == 0 || (lVar29 * 3 <= (long)*(short *)(uVar32 + 10) * 2))))
          {
            if (*piVar31 < 1) {
              sVar6 = *(short *)(uVar32 + 2);
            }
            else {
              sVar6 = *(short *)(uVar32 + 2);
              lVar19 = 0;
              puVar15 = (ulong *)(*puVar1 + 0x50);
              do {
                lVar8 = (long)sVar6 - (long)(short)puVar15[-10];
                lVar3 = -lVar8;
                if (-1 < lVar8) {
                  lVar3 = lVar8;
                }
                if ((lVar3 < lVar13) && (*(char *)((long)puVar15 + -0x37) == cVar5)) {
                  *(ulong *)(uVar32 + 0x18) = puVar15[-1];
                  *(ulong *)(*puVar15 + 0x18) = uVar32;
                  *puVar15 = uVar32;
                  goto joined_r0x00e66260;
                }
                lVar19 = lVar19 + 1;
                puVar15 = puVar15 + 0xb;
              } while (lVar19 < *piVar31);
            }
            uVar14 = FUN_00e6566c(param_1 + uVar28 * 0x13d + 9,(int)sVar6,(long)cVar5,uVar27,uVar11,
                                  &psStack_68);
            psVar24 = psStack_68;
            if ((int)uVar14 != 0) {
              return uVar14;
            }
            psStack_68[0x14] = 0;
            psStack_68[0x15] = 0;
            psStack_68[0x16] = 0;
            psStack_68[0x17] = 0;
            psStack_68[0x10] = 0;
            psStack_68[0x11] = 0;
            psStack_68[0x12] = 0;
            psStack_68[0x13] = 0;
            psStack_68[0x1c] = 0;
            psStack_68[0x1d] = 0;
            psStack_68[0x1e] = 0;
            psStack_68[0x1f] = 0;
            psStack_68[0x18] = 0;
            psStack_68[0x19] = 0;
            psStack_68[0x1a] = 0;
            psStack_68[0x1b] = 0;
            psStack_68[4] = 0;
            psStack_68[5] = 0;
            psStack_68[6] = 0;
            psStack_68[7] = 0;
            psStack_68[0] = 0;
            psStack_68[1] = 0;
            psStack_68[2] = 0;
            psStack_68[3] = 0;
            psStack_68[0xc] = 0;
            psStack_68[0xd] = 0;
            psStack_68[0xe] = 0;
            psStack_68[0xf] = 0;
            psStack_68[8] = 0;
            psStack_68[9] = 0;
            psStack_68[10] = 0;
            psStack_68[0xb] = 0;
            psStack_68[0x20] = 0;
            psStack_68[0x21] = 0;
            psStack_68[0x22] = 0;
            psStack_68[0x23] = 0;
            *(ulong *)(psStack_68 + 0x24) = uVar32;
            *(ulong *)(psStack_68 + 0x28) = uVar32;
            *(undefined1 *)((long)psStack_68 + 0x19) = *(undefined1 *)(uVar32 + 1);
            sVar6 = *(short *)(uVar32 + 2);
            *psStack_68 = sVar6;
            uVar14 = FT_MulFix((long)sVar6,uVar17);
            *(undefined8 *)(psVar24 + 4) = uVar14;
            *(undefined8 *)(psVar24 + 8) = uVar14;
            *(ulong *)(uVar32 + 0x18) = uVar32;
          }
        }
joined_r0x00e66260:
        uVar32 = uVar32 + 0x50;
      } while (uVar32 < uVar25);
      do {
        if ((*(char *)(uVar26 + 1) == '\x04') && (0 < *piVar31)) {
          lVar29 = 0;
          puVar15 = (ulong *)(*puVar1 + 0x50);
          do {
            lVar19 = (long)*(short *)(uVar26 + 2) - (long)(short)puVar15[-10];
            lVar12 = -lVar19;
            if (-1 < lVar19) {
              lVar12 = lVar19;
            }
            if (lVar12 < lVar13) {
              if (puVar15 != (ulong *)0x50) {
                *(ulong *)(uVar26 + 0x18) = puVar15[-1];
                *(ulong *)(*puVar15 + 0x18) = uVar26;
                *puVar15 = uVar26;
              }
              break;
            }
            lVar29 = lVar29 + 1;
            puVar15 = puVar15 + 0xb;
          } while (lVar29 < *piVar31);
        }
        uVar26 = uVar26 + 0x50;
      } while (uVar26 < uVar25);
      iVar7 = *piVar31;
    }
    if (0 < iVar7) {
      psVar16 = (short *)*puVar1;
      psVar18 = psVar16 + (long)iVar7 * 0x2c;
      psVar24 = psVar16;
      do {
        lVar13 = *(long *)(psVar24 + 0x24);
        lVar29 = lVar13;
        if (lVar13 != 0) {
          do {
            *(short **)(lVar29 + 0x10) = psVar24;
            plVar30 = (long *)(lVar29 + 0x18);
            lVar29 = *plVar30;
          } while (*plVar30 != lVar13);
        }
        psVar24 = psVar24 + 0x2c;
      } while (psVar24 < psVar18);
      do {
        pbVar22 = *(byte **)(psVar16 + 0x24);
        uVar20 = 0;
        uVar21 = 0;
        plVar30 = (long *)(psVar16 + 0x18);
        plVar2 = (long *)(psVar16 + 0x1c);
        pbVar23 = pbVar22;
        do {
          while( true ) {
            lVar29 = *(long *)(pbVar23 + 0x28);
            bVar9 = false;
            if (lVar29 != 0) {
              psVar24 = *(short **)(lVar29 + 0x10);
              bVar9 = psVar24 != psVar16 && psVar24 != (short *)0x0;
            }
            lVar29 = *(long *)(pbVar23 + 0x20);
            uVar20 = uVar20 + (*pbVar23 & 1);
            uVar21 = uVar21 + (*pbVar23 & 1 ^ 1);
            if (lVar29 != 0) break;
            if (bVar9) goto LAB_00e663c0;
LAB_00e663ac:
            pbVar23 = *(byte **)(pbVar23 + 0x18);
joined_r0x00e66434:
            if (pbVar23 == pbVar22) goto LAB_00e66438;
          }
          if (!bVar9 && *(long *)(lVar29 + 0x10) == 0) goto LAB_00e663ac;
LAB_00e663c0:
          pbVar4 = pbVar23 + 0x28;
          plVar10 = plVar2;
          if (!bVar9) {
            pbVar4 = pbVar23 + 0x20;
            plVar10 = plVar30;
          }
          psVar24 = (short *)*plVar10;
          if (psVar24 == (short *)0x0) {
LAB_00e66400:
            psVar24 = *(short **)(*(long *)pbVar4 + 0x10);
          }
          else {
            lVar13 = (long)*psVar16 - (long)*psVar24;
            lVar29 = -lVar13;
            if (-1 < lVar13) {
              lVar29 = lVar13;
            }
            lVar12 = (long)*(short *)(pbVar23 + 2) - (long)*(short *)(*(long *)pbVar4 + 2);
            lVar13 = -lVar12;
            if (-1 < lVar12) {
              lVar13 = lVar12;
            }
            if (lVar13 < lVar29) goto LAB_00e66400;
          }
          if (!bVar9) {
            *plVar30 = (long)psVar24;
            pbVar23 = *(byte **)(pbVar23 + 0x18);
            goto joined_r0x00e66434;
          }
          *plVar2 = (long)psVar24;
          *(byte *)(psVar24 + 0xc) = *(byte *)(psVar24 + 0xc) | 2;
          pbVar23 = *(byte **)(pbVar23 + 0x18);
        } while (pbVar23 != pbVar22);
LAB_00e66438:
        *(bool *)(psVar16 + 0xc) = uVar20 != 0 && uVar21 <= uVar20;
        if ((*(long *)(psVar16 + 0x1c) != 0) && (*plVar30 != 0)) {
          *plVar2 = 0;
        }
        psVar16 = psVar16 + 0x2c;
      } while (psVar16 < psVar18);
    }
    uVar11 = 0;
  }
  return uVar11;
}

