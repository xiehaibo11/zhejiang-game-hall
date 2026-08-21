
void png_set_quantize(long param_1,byte *param_2,ulong param_3,uint param_4,long param_5,int param_6
                     )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  void *__s;
  long *plVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined4 uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  int iVar35;
  ulong uVar36;
  long *plVar37;
  long lVar38;
  int iVar39;
  
                    /* try { // try from 010c9884 to 011c988f has its CatchHandler @ 010c99b0 */
                    /* try { // try from 010c9890 to 011c98db has its CatchHandler @ 010c9844 */
  uVar36 = param_3 & 0xffffffff;
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x168) >> 6 & 1) != 0) {
    png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
  *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x40;
  uVar34 = (uint)param_3;
  if (param_6 == 0) {
                    /* try { // try from 010c9a2c to 011c9a73 has its CatchHandler @ 010c99d4 */
    puVar18 = (undefined1 *)png_malloc(param_1,uVar36);
    *(undefined1 **)(param_1 + 0x3c8) = puVar18;
    if ((0 < (int)uVar34) && (*puVar18 = 0, uVar34 != 1)) {
      uVar24 = 1;
      do {
        *(char *)(*(long *)(param_1 + 0x3c8) + uVar24) = (char)uVar24;
        uVar24 = uVar24 + 1;
      } while (uVar36 != uVar24);
    }
  }
  if ((int)uVar34 <= (int)param_4) {
    lVar25 = *(long *)(param_1 + 0x298);
    goto joined_r0x010c9fc0;
  }
  puVar18 = (undefined1 *)png_malloc(param_1,uVar36);
                    /* try { // try from 010c98dc to 011c98e3 has its CatchHandler @ 010c9994 */
  if (param_5 == 0) {
    *(undefined1 **)(param_1 + 0x480) = puVar18;
                    /* try { // try from 010c9a74 to 011c9a7b has its CatchHandler @ 010c9aec */
                    /* try { // try from 010c9a7c to 011c9b0b has its CatchHandler @ 010c99d4 */
    uVar20 = png_malloc(param_1,uVar36);
    *(undefined8 *)(param_1 + 0x488) = uVar20;
    if (0 < (int)uVar34) {
      uVar24 = 0;
      do {
        *(char *)(*(long *)(param_1 + 0x480) + uVar24) = (char)uVar24;
        *(char *)(*(long *)(param_1 + 0x488) + uVar24) = (char)uVar24;
        uVar24 = uVar24 + 1;
      } while (uVar36 != uVar24);
    }
    plVar37 = (long *)(param_1 + 0x480);
    lVar26 = png_calloc(param_1,0x1808);
    puVar19 = (undefined8 *)0x0;
    lVar25 = 0x60;
    param_3 = param_3 & 0xffffffff;
LAB_010c9ae0:
    iVar39 = (int)param_3;
                    /* catch() { ... } // from try @ 010c9a74 with catch @ 010c9aec */
                    /* catch() { ... } // from try @ 010c9a28 with catch @ 010c9af0 */
    iVar35 = 1;
    lVar23 = 0;
    do {
      if (iVar39 + -1 <= lVar23) {
        if (puVar19 != (undefined8 *)0x0) {
          lVar23 = 0;
          goto LAB_010c9be4;
        }
        break;
      }
      lVar33 = (long)iVar35;
      if (lVar23 + 1 < (long)iVar39) {
        pbVar30 = param_2 + lVar33 + (long)iVar35 * 2 + 1;
        pbVar31 = param_2 + lVar23 * 3;
        do {
          iVar14 = (uint)*pbVar31 - (uint)pbVar30[-1];
          iVar1 = -iVar14;
          if (-1 < iVar14) {
            iVar1 = iVar14;
          }
          iVar15 = (uint)pbVar31[1] - (uint)*pbVar30;
          iVar14 = -iVar15;
          if (-1 < iVar15) {
            iVar14 = iVar15;
          }
          iVar13 = (uint)pbVar31[2] - (uint)pbVar30[1];
          iVar15 = -iVar13;
          if (-1 < iVar13) {
            iVar15 = iVar13;
          }
          lVar38 = (long)(iVar14 + iVar1 + iVar15);
          if (lVar38 <= lVar25) {
            puVar19 = (undefined8 *)png_malloc_warn(param_1,0x10);
            if (puVar19 == (undefined8 *)0x0) break;
            lVar38 = lVar38 * 8;
            *(char *)(puVar19 + 1) = (char)lVar23;
            *(char *)((long)puVar19 + 9) = (char)lVar33;
            uVar20 = *(undefined8 *)(lVar26 + lVar38);
            *(undefined8 **)(lVar26 + lVar38) = puVar19;
            *puVar19 = uVar20;
          }
          lVar33 = lVar33 + 1;
          pbVar30 = pbVar30 + 3;
        } while (lVar33 < iVar39);
      }
      iVar35 = iVar35 + 1;
      lVar23 = lVar23 + 1;
    } while (puVar19 != (undefined8 *)0x0);
    goto LAB_010c9da8;
  }
  plVar37 = (long *)(param_1 + 0x478);
                    /* try { // try from 010c98e4 to 011c991f has its CatchHandler @ 010c9844 */
  *(undefined1 **)(param_1 + 0x478) = puVar18;
  if ((0 < (int)uVar34) && (*puVar18 = 0, uVar34 != 1)) {
    uVar24 = 1;
    do {
      *(char *)(*plVar37 + uVar24) = (char)uVar24;
      uVar24 = uVar24 + 1;
    } while (uVar36 != uVar24);
  }
  lVar25 = (long)(int)uVar34;
LAB_010c9918:
  if ((int)param_4 < lVar25) {
                    /* try { // try from 010c9920 to 011c992f has its CatchHandler @ 010c9990 */
    lVar26 = 0;
    lVar25 = lVar25 + -1;
    bVar17 = true;
    do {
      lVar26 = (long)(int)lVar26;
      do {
        if (lVar25 <= lVar26) {
          if (bVar17) goto LAB_010c997c;
          goto LAB_010c9918;
        }
        pbVar30 = (byte *)(*plVar37 + lVar26);
        bVar9 = *pbVar30;
        bVar10 = pbVar30[1];
        lVar26 = lVar26 + 1;
      } while (*(ushort *)(param_5 + (ulong)bVar10 * 2) <= *(ushort *)(param_5 + (ulong)bVar9 * 2));
                    /* try { // try from 010c9930 to 011c99d3 has its CatchHandler @ 010c9844 */
      *(byte *)(*plVar37 + lVar26 + -1) = bVar10;
      bVar17 = false;
      *(byte *)(*plVar37 + lVar26) = bVar9;
    } while( true );
  }
LAB_010c997c:
  if (param_6 == 0) {
    if (0 < (int)param_4) {
      uVar24 = 0;
      param_3 = param_3 & 0xffffffff;
      do {
        if ((int)param_4 <= (int)(uint)*(byte *)(*plVar37 + uVar24)) {
          uVar27 = (ulong)(int)param_3;
          pbVar30 = param_2 + uVar27 + (long)(int)param_3 * 2;
          do {
            pbVar31 = pbVar30;
            lVar25 = *plVar37 + uVar27;
            uVar27 = uVar27 - 1;
            pbVar30 = pbVar31 + -3;
          } while ((int)param_4 <= (int)(uint)*(byte *)(lVar25 + -1));
          bVar9 = pbVar31[-1];
          uVar12 = *(undefined2 *)pbVar30;
          pbVar29 = param_2 + uVar24 * 3;
          pbVar31[-1] = pbVar29[2];
          *(undefined2 *)pbVar30 = *(undefined2 *)pbVar29;
          pbVar29[2] = bVar9;
          *(undefined2 *)pbVar29 = uVar12;
          *(char *)(*(long *)(param_1 + 0x3c8) + uVar27) = (char)uVar24;
          *(char *)(*(long *)(param_1 + 0x3c8) + uVar24) = (char)uVar27;
          param_3 = uVar27 & 0xffffffff;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != param_4);
    }
    if (0 < (int)uVar34) {
      if ((int)param_4 < 2) {
        uVar24 = 0;
        do {
          if ((int)param_4 <= (int)(uint)*(byte *)(*(long *)(param_1 + 0x3c8) + uVar24)) {
            *(undefined1 *)(*(long *)(param_1 + 0x3c8) + uVar24) = 0;
          }
          uVar24 = uVar24 + 1;
        } while (uVar36 != uVar24);
      }
      else {
        uVar24 = 0;
        do {
          bVar9 = *(byte *)(*(long *)(param_1 + 0x3c8) + uVar24);
          if ((int)param_4 <= (int)(uint)bVar9) {
            pbVar30 = param_2 + (ulong)bVar9 * 3;
            iVar39 = (uint)*pbVar30 - (uint)*param_2;
            iVar35 = -iVar39;
            if (-1 < iVar39) {
              iVar35 = iVar39;
            }
            iVar1 = (uint)pbVar30[1] - (uint)param_2[1];
            iVar39 = -iVar1;
            if (-1 < iVar1) {
              iVar39 = iVar1;
            }
            iVar14 = (uint)pbVar30[2] - (uint)param_2[2];
            iVar1 = -iVar14;
            if (-1 < iVar14) {
              iVar1 = iVar14;
            }
            uVar28 = 0;
            uVar27 = 1;
            pbVar31 = param_2 + 5;
            iVar35 = iVar39 + iVar35 + iVar1;
            do {
              iVar1 = (uint)*pbVar30 - (uint)pbVar31[-2];
              iVar39 = -iVar1;
              if (-1 < iVar1) {
                iVar39 = iVar1;
              }
              iVar14 = (uint)pbVar30[1] - (uint)pbVar31[-1];
              iVar1 = -iVar14;
              if (-1 < iVar14) {
                iVar1 = iVar14;
              }
              iVar15 = (uint)pbVar30[2] - (uint)*pbVar31;
              iVar14 = -iVar15;
              if (-1 < iVar15) {
                iVar14 = iVar15;
              }
              iVar14 = iVar1 + iVar39 + iVar14;
              uVar16 = (int)uVar27;
              if (iVar35 <= iVar14) {
                iVar14 = iVar35;
                uVar16 = uVar28;
              }
              uVar28 = uVar16;
              uVar27 = uVar27 + 1;
              pbVar31 = pbVar31 + 3;
              iVar35 = iVar14;
            } while (param_4 != uVar27);
            *(char *)(*(long *)(param_1 + 0x3c8) + uVar24) = (char)uVar28;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar36);
      }
    }
  }
  else if (0 < (int)param_4) {
    lVar25 = *plVar37;
    uVar24 = 0;
                    /* catch() { ... } // from try @ 010c9920 with catch @ 010c9990 */
                    /* catch() { ... } // from try @ 010c98dc with catch @ 010c9994 */
    do {
      if ((int)param_4 <= (int)(uint)*(byte *)(lVar25 + uVar24)) {
        iVar35 = (int)uVar36;
                    /* catch() { ... } // from try @ 010c9884 with catch @ 010c99b0 */
        pbVar30 = param_2 + (long)iVar35 + (long)iVar35 * 2;
        pbVar31 = (byte *)(lVar25 + -1 + (long)iVar35);
        do {
          pbVar29 = pbVar30;
          bVar9 = *pbVar31;
          pbVar30 = pbVar29 + -3;
          uVar36 = (ulong)((int)uVar36 - 1);
          pbVar31 = pbVar31 + -1;
        } while ((int)param_4 <= (int)(uint)bVar9);
                    /* try { // try from 010c99d4 to 011c9a27 has its CatchHandler @ 010c99d4
                       catch() { ... } // from try @ 010c99d4 with catch @ 010c99d4
                       catch() { ... } // from try @ 010c9a2c with catch @ 010c99d4
                       catch() { ... } // from try @ 010c9a7c with catch @ 010c99d4 */
        (param_2 + uVar24 * 3)[2] = pbVar29[-1];
        *(undefined2 *)(param_2 + uVar24 * 3) = *(undefined2 *)pbVar30;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != param_4);
  }
  png_free(param_1,*(undefined8 *)(param_1 + 0x478));
LAB_010c9fb8:
  *plVar37 = 0;
  lVar25 = *(long *)(param_1 + 0x298);
  uVar36 = (ulong)param_4;
  uVar34 = param_4;
joined_r0x010c9fc0:
  if (lVar25 == 0) {
    uVar34 = (uint)uVar36;
    *(byte **)(param_1 + 0x298) = param_2;
  }
  *(short *)(param_1 + 0x2a0) = (short)uVar34;
  if (param_6 == 0) {
    return;
  }
  uVar20 = png_calloc(param_1,0x8000);
  *(undefined8 *)(param_1 + 0x3c0) = uVar20;
  __s = (void *)png_malloc(param_1,0x8000);
  memset(__s,0xff,0x8000);
  if (0 < (int)uVar34) {
    lVar25 = 0;
    do {
      pbVar30 = param_2 + lVar25 * 3;
      iVar35 = 0;
      uVar2 = (uint)(*pbVar30 >> 3);
      uVar3 = (uint)(pbVar30[1] >> 3);
      bVar9 = pbVar30[2] >> 3;
      do {
        iVar39 = 0;
        uVar4 = iVar35 - uVar2;
        if (iVar35 - uVar2 == 0 || iVar35 < (int)uVar2) {
          uVar4 = uVar2 - iVar35;
        }
        do {
          uVar5 = iVar39 - uVar3;
          if (iVar39 - uVar3 == 0 || iVar39 < (int)uVar3) {
            uVar5 = uVar3 - iVar39;
          }
          uVar32 = 0;
          uVar6 = uVar4;
          if ((int)uVar4 <= (int)uVar5) {
            uVar6 = uVar5;
          }
          uVar22 = (uint)bVar9;
          do {
            lVar26 = (long)(int)(iVar35 << 10 | iVar39 << 5 | uVar32);
            uVar7 = uVar32 - bVar9;
            if ((int)uVar32 <= (int)(uint)bVar9) {
              uVar7 = uVar22;
            }
            uVar8 = uVar6;
            if ((int)uVar6 <= (int)uVar7) {
              uVar8 = uVar7;
            }
            iVar1 = uVar5 + uVar4 + uVar7 + uVar8;
            if (iVar1 < (int)(uint)*(byte *)((long)__s + lVar26)) {
              lVar23 = *(long *)(param_1 + 0x3c0);
              *(char *)((long)__s + lVar26) = (char)iVar1;
              *(char *)(lVar23 + lVar26) = (char)lVar25;
            }
            uVar32 = uVar32 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar32 != 0x20);
          iVar39 = iVar39 + 1;
        } while (iVar39 != 0x20);
        iVar35 = iVar35 + 1;
      } while (iVar35 != 0x20);
      lVar25 = lVar25 + 1;
                    /* catch() { ... } // from try @ 010ca19c with catch @ 010ca0d8 */
    } while (lVar25 < (int)uVar34);
  }
  png_free(param_1,__s);
  return;
LAB_010c9be4:
  do {
    plVar21 = *(long **)(lVar26 + lVar23 * 8);
    if (plVar21 != (long *)0x0) {
      if (param_6 == 0) {
        do {
          lVar33 = *plVar37;
          bVar9 = *(byte *)(plVar21 + 1);
          iVar35 = (int)param_3;
          if (((int)(uint)*(byte *)(lVar33 + (ulong)bVar9) < iVar35) &&
             (bVar10 = *(byte *)((long)plVar21 + 9),
             (int)(uint)*(byte *)(lVar33 + (ulong)bVar10) < iVar35)) {
            bVar17 = (param_3 & 1) != 0;
            uVar2 = (uint)bVar10;
                    /* catch() { ... } // from try @ 010c9c74 with catch @ 010c9cbc */
            if (bVar17) {
              uVar2 = (uint)bVar9;
            }
            uVar24 = (ulong)uVar2;
                    /* catch() { ... } // from try @ 010c9c58 with catch @ 010c9cc0
                       catch() { ... } // from try @ 010c9c80 with catch @ 010c9cc0 */
            param_3 = (long)iVar35 - 1;
            bVar11 = *(byte *)(lVar33 + uVar24);
            uVar3 = (uint)bVar9;
            if (bVar17) {
              uVar3 = (uint)bVar10;
            }
            (param_2 + (ulong)bVar11 * 3)[2] = (param_2 + param_3 * 3)[2];
            *(undefined2 *)(param_2 + (ulong)bVar11 * 3) = *(undefined2 *)(param_2 + param_3 * 3);
            if (0 < (int)uVar34) {
              uVar27 = 0;
              do {
                lVar38 = *(long *)(param_1 + 0x3c8);
                bVar9 = *(byte *)(lVar38 + uVar27);
                if (bVar9 == *(byte *)(lVar33 + uVar24)) {
                  *(undefined1 *)(lVar38 + uVar27) = *(undefined1 *)(lVar33 + (ulong)uVar3);
                  lVar38 = *(long *)(param_1 + 0x3c8);
                  bVar9 = *(byte *)(lVar38 + uVar27);
                }
                if ((uint)param_3 == (uint)bVar9) {
                  *(undefined1 *)(lVar38 + uVar27) = *(undefined1 *)(*plVar37 + uVar24);
                }
                lVar33 = *plVar37;
                uVar27 = uVar27 + 1;
              } while (uVar36 != uVar27);
            }
            *(undefined1 *)(lVar33 + (ulong)*(byte *)(*(long *)(param_1 + 0x488) + param_3)) =
                 *(undefined1 *)(lVar33 + uVar24);
            *(undefined1 *)
             (*(long *)(param_1 + 0x488) + (ulong)*(byte *)(*(long *)(param_1 + 0x480) + uVar24)) =
                 *(undefined1 *)(*(long *)(param_1 + 0x488) + param_3);
            *(char *)(*(long *)(param_1 + 0x480) + uVar24) = (char)param_3;
            *(char *)(*(long *)(param_1 + 0x488) + param_3) = (char)uVar2;
          }
        } while (((int)param_4 < (int)param_3) &&
                (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0));
      }
      else {
        do {
          lVar33 = *plVar37;
          iVar35 = (int)param_3;
          if (((int)(uint)*(byte *)(lVar33 + (ulong)*(byte *)(plVar21 + 1)) < iVar35) &&
             ((int)(uint)*(byte *)(lVar33 + (ulong)*(byte *)((long)plVar21 + 9)) < iVar35)) {
            bVar9 = *(byte *)((long)plVar21 + 9);
            if ((param_3 & 1) != 0) {
              bVar9 = *(byte *)(plVar21 + 1);
            }
            uVar24 = (ulong)bVar9;
            param_3 = (long)iVar35 - 1;
                    /* try { // try from 010c9c24 to 011c9c57 has its CatchHandler @ 010c9c24
                       catch() { ... } // from try @ 010c9c24 with catch @ 010c9c24
                       catch() { ... } // from try @ 010c9c8c with catch @ 010c9c24 */
            bVar10 = *(byte *)(lVar33 + uVar24);
            (param_2 + (ulong)bVar10 * 3)[2] = (param_2 + param_3 * 3)[2];
            *(undefined2 *)(param_2 + (ulong)bVar10 * 3) = *(undefined2 *)(param_2 + param_3 * 3);
            *(undefined1 *)(lVar33 + (ulong)*(byte *)(*(long *)(param_1 + 0x488) + param_3)) =
                 *(undefined1 *)(lVar33 + uVar24);
                    /* try { // try from 010c9c58 to 011c9c5b has its CatchHandler @ 010c9cc0 */
            *(undefined1 *)
             (*(long *)(param_1 + 0x488) + (ulong)*(byte *)(*(long *)(param_1 + 0x480) + uVar24)) =
                 *(undefined1 *)(*(long *)(param_1 + 0x488) + param_3);
            *(char *)(*(long *)(param_1 + 0x480) + uVar24) = (char)param_3;
                    /* try { // try from 010c9c74 to 011c9c7f has its CatchHandler @ 010c9cbc */
            *(byte *)(*(long *)(param_1 + 0x488) + param_3) = bVar9;
          }
                    /* try { // try from 010c9c80 to 011c9c8b has its CatchHandler @ 010c9cc0 */
        } while (((int)param_4 < (int)param_3) &&
                (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0));
      }
      if ((int)param_3 <= (int)param_4) break;
    }
    bVar17 = lVar23 < lVar25;
    lVar23 = lVar23 + 1;
  } while (bVar17);
LAB_010c9da8:
  lVar23 = 0;
  do {
    plVar21 = *(long **)(lVar26 + lVar23 * 8);
    if (plVar21 != (long *)0x0) {
      do {
        plVar21 = (long *)*plVar21;
        png_free(param_1);
      } while (plVar21 != (long *)0x0);
      puVar19 = (undefined8 *)0x0;
    }
    *(undefined8 *)(lVar26 + lVar23 * 8) = 0;
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x301);
  lVar25 = lVar25 + 0x60;
  if ((int)param_3 <= (int)param_4) goto code_r0x010c9de8;
  goto LAB_010c9ae0;
code_r0x010c9de8:
  png_free(param_1,lVar26);
  png_free(param_1,*(undefined8 *)(param_1 + 0x488));
  png_free(param_1,*(undefined8 *)(param_1 + 0x480));
  *(undefined8 *)(param_1 + 0x488) = 0;
  goto LAB_010c9fb8;
}

