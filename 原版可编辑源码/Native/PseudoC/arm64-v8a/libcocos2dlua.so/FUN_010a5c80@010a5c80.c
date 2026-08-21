
ulong FUN_010a5c80(undefined8 *param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  char cVar8;
  short sVar9;
  long lVar10;
  bool bVar11;
  short *__dest;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  short *psVar17;
  long lVar18;
  int iVar19;
  ulong *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  short *psVar26;
  short *psVar27;
  undefined8 uVar28;
  short *__src;
  long lVar29;
  int *piVar30;
  ulong *local_78;
  uint local_64;
  
  uVar24 = (ulong)param_4;
  uVar13 = FUN_010a50f8(param_1,uVar24);
  if ((int)uVar13 == 0) {
    FUN_010a5544(param_1,param_2,param_3,uVar24);
    uVar16 = *param_1;
                    /* try { // try from 010a5ce4 to 011a5ceb has its CatchHandler @ 010a5db4 */
                    /* try { // try from 010a5cec to 011a5dc7 has its CatchHandler @ 010a5b70 */
    lVar25 = param_1[0x14];
    puVar6 = param_1 + 1;
    if (param_4 != 0) {
      puVar6 = param_1 + 3;
    }
    piVar30 = (int *)(param_1 + (ulong)param_4 * 5 + 0xb);
    *piVar30 = 0;
    uVar13 = param_1[(ulong)param_4 * 5 + 10];
    iVar15 = *(int *)(param_1 + (ulong)param_4 * 5 + 9);
    uVar28 = *puVar6;
    if (param_4 == 0) {
      lVar29 = FT_DivFix(0x40,param_1[3]);
    }
    else {
      lVar29 = 0;
    }
    lVar25 = FT_MulFix(*(undefined8 *)(lVar25 + uVar24 * 0x9d8 + 0x1e8),uVar28);
    if (0xf < lVar25) {
      lVar25 = 0x10;
    }
    lVar25 = FT_DivFix(lVar25,uVar28);
    if (iVar15 < 1) {
      local_78 = param_1 + uVar24 * 5 + 0xc;
    }
    else {
      uVar23 = uVar13 + (long)iVar15 * 0x58;
      piVar2 = (int *)((long)param_1 + uVar24 * 0x28 + 0x5c);
      local_78 = param_1 + uVar24 * 5 + 0xc;
      do {
        if ((lVar29 <= *(short *)(uVar13 + 8)) &&
           ((*(long *)(uVar13 + 0x28) == 0 || (lVar29 * 3 <= (long)*(short *)(uVar13 + 8) * 2)))) {
          iVar15 = *piVar30;
                    /* catch() { ... } // from try @ 010a5ce4 with catch @ 010a5db4 */
          if (iVar15 < 1) {
            sVar9 = *(short *)(uVar13 + 2);
          }
          else {
            sVar9 = *(short *)(uVar13 + 2);
            lVar18 = 0;
            puVar20 = (ulong *)(*local_78 + 0x50);
            do {
              lVar10 = (long)sVar9 - (long)(short)puVar20[-10];
              lVar4 = -lVar10;
              if (-1 < lVar10) {
                lVar4 = lVar10;
              }
              if ((lVar4 < lVar25) && (*(char *)((long)puVar20 + -0x37) == *(char *)(uVar13 + 1))) {
                *(ulong *)(uVar13 + 0x18) = puVar20[-1];
                *(ulong *)(*puVar20 + 0x18) = uVar13;
                *puVar20 = uVar13;
                goto LAB_010a5f98;
              }
              lVar18 = lVar18 + 1;
              puVar20 = puVar20 + 0xb;
            } while (lVar18 < iVar15);
          }
          cVar8 = *(char *)(uVar13 + 1);
          local_64 = 0;
          iVar19 = *piVar2;
          if (iVar15 < iVar19) {
            psVar27 = (short *)*local_78;
          }
          else {
            if (0x1745d16 < iVar19) {
              return 0x40;
            }
            iVar15 = iVar19 + (iVar19 >> 2) + 4;
            iVar5 = 0x1745d17;
            if (iVar15 < 0x1745d18 && -5 < iVar19 >> 2) {
              iVar5 = iVar15;
            }
            psVar27 = (short *)ft_mem_realloc(uVar16,0x58,(long)iVar19,(long)iVar5,*local_78,
                                              &local_64);
            *local_78 = (ulong)psVar27;
            if (local_64 != 0) {
              return (ulong)local_64;
            }
            *piVar2 = iVar5;
            iVar15 = *piVar30;
          }
          psVar26 = psVar27 + (long)iVar15 * 0x2c;
          psVar17 = psVar26;
          if (0 < iVar15) {
            __dest = psVar27 + (long)iVar15 * 0x2c;
            do {
              __src = __dest + -0x2c;
              psVar17 = __dest;
              if ((*__src < sVar9) ||
                 ((*__src == sVar9 &&
                  (psVar17 = psVar26, *(int *)(param_1 + uVar24 * 5 + 0xd) == (int)cVar8)))) break;
              psVar26 = psVar26 + -0x2c;
              memcpy(__dest,__src,0x58);
              psVar17 = psVar26;
              __dest = __src;
            } while (psVar27 < __src);
            iVar15 = *piVar30;
          }
          *piVar30 = iVar15 + 1;
          memset(psVar17,0,0x48);
          *(ulong *)(psVar17 + 0x24) = uVar13;
          *(ulong *)(psVar17 + 0x28) = uVar13;
          *(undefined1 *)((long)psVar17 + 0x19) = *(undefined1 *)(uVar13 + 1);
          sVar9 = *(short *)(uVar13 + 2);
          *psVar17 = sVar9;
          uVar14 = FT_MulFix((long)sVar9,uVar28);
          *(undefined8 *)(psVar17 + 4) = uVar14;
          *(undefined8 *)(psVar17 + 8) = uVar14;
          *(ulong *)(uVar13 + 0x18) = uVar13;
        }
LAB_010a5f98:
        uVar13 = uVar13 + 0x58;
      } while (uVar13 < uVar23);
    }
    if (0 < *piVar30) {
      psVar17 = (short *)*local_78;
      psVar26 = psVar17 + (long)*piVar30 * 0x2c;
      psVar27 = psVar17;
      do {
        lVar29 = *(long *)(psVar27 + 0x24);
        lVar25 = lVar29;
        if (lVar29 != 0) {
          do {
            *(short **)(lVar25 + 0x10) = psVar27;
            plVar1 = (long *)(lVar25 + 0x18);
            lVar25 = *plVar1;
          } while (*plVar1 != lVar29);
        }
        psVar27 = psVar27 + 0x2c;
      } while (psVar27 < psVar26);
      do {
        pbVar21 = *(byte **)(psVar17 + 0x24);
        iVar15 = 0;
        iVar19 = 0;
        plVar1 = (long *)(psVar17 + 0x18);
        plVar3 = (long *)(psVar17 + 0x1c);
        pbVar22 = pbVar21;
        do {
          lVar25 = *(long *)(pbVar22 + 0x28);
          bVar11 = false;
          if (lVar25 != 0) {
            psVar27 = *(short **)(lVar25 + 0x10);
            bVar11 = psVar27 != psVar17 && psVar27 != (short *)0x0;
          }
          lVar25 = *(long *)(pbVar22 + 0x20);
          iVar15 = iVar15 + (*pbVar22 & 1);
          iVar19 = iVar19 + (*pbVar22 & 1 ^ 1);
          if (lVar25 == 0) {
            if (bVar11) goto LAB_010a607c;
          }
          else if (bVar11 || *(long *)(lVar25 + 0x10) != 0) {
LAB_010a607c:
            pbVar7 = pbVar22 + 0x28;
            plVar12 = plVar3;
            if (!bVar11) {
              pbVar7 = pbVar22 + 0x20;
              plVar12 = plVar1;
            }
            psVar27 = (short *)*plVar12;
            if (psVar27 == (short *)0x0) {
LAB_010a60bc:
              psVar27 = *(short **)(*(long *)pbVar7 + 0x10);
            }
            else {
              lVar29 = (long)*psVar17 - (long)*psVar27;
              lVar25 = -lVar29;
              if (-1 < lVar29) {
                lVar25 = lVar29;
              }
              lVar18 = (long)*(short *)(pbVar22 + 2) - (long)*(short *)(*(long *)pbVar7 + 2);
              lVar29 = -lVar18;
              if (-1 < lVar18) {
                lVar29 = lVar18;
              }
              if (lVar29 < lVar25) goto LAB_010a60bc;
            }
            if (bVar11) {
              *plVar3 = (long)psVar27;
              *(byte *)(psVar27 + 0xc) = *(byte *)(psVar27 + 0xc) | 2;
            }
            else {
              *plVar1 = (long)psVar27;
            }
          }
          pbVar22 = *(byte **)(pbVar22 + 0x18);
        } while (pbVar22 != pbVar21);
        *(bool *)(psVar17 + 0xc) = 0 < iVar15 && iVar19 <= iVar15;
        if ((*(long *)(psVar17 + 0x1c) != 0) && (*plVar1 != 0)) {
          *plVar3 = 0;
        }
        psVar17 = psVar17 + 0x2c;
      } while (psVar17 < psVar26);
    }
    uVar13 = 0;
  }
  return uVar13;
}

