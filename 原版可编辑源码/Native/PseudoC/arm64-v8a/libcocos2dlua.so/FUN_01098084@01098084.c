
ulong FUN_01098084(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  size_t __n;
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  undefined8 uVar11;
  void *pvVar12;
  ulong uVar13;
  ushort uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  char *pcVar20;
  short sVar21;
  undefined *puVar22;
  char cVar23;
  ulong uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  undefined8 uVar29;
  char *pcVar30;
  short *psVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  uint local_58;
  uint local_54;
  
  local_58 = 0;
  uVar34 = param_5[7];
  uVar29 = *(undefined8 *)(uVar34 + 0x880f8);
  iVar10 = strncmp(param_1,"COMMENT",7);
  if (iVar10 == 0) {
    bVar6 = param_1[7];
                    /* try { // try from 01098120 to 01198137 has its CatchHandler @ 010982c8 */
    if ((0x20 < bVar6) || ((1L << ((ulong)bVar6 & 0x3f) & 0x100002601U) == 0)) goto LAB_010980d4;
    local_54 = 0;
    lVar17 = -8;
    if (bVar6 == 0) {
      lVar17 = -7;
    }
    __n = lVar17 + param_2;
                    /* try { // try from 0109814c to 0119814f has its CatchHandler @ 010982fc */
    lVar17 = ft_mem_realloc(uVar29,1,*(long *)(uVar34 + 0xa0),*(long *)(uVar34 + 0xa0) + __n + 1,
                            *(undefined8 *)(uVar34 + 0x98),&local_54);
    *(long *)(uVar34 + 0x98) = lVar17;
    uVar3 = local_54;
    if (local_54 == 0) {
      pbVar19 = (byte *)(param_1 + 7);
      if (bVar6 != 0) {
        pbVar19 = (byte *)(param_1 + 8);
      }
      pvVar12 = (void *)(lVar17 + *(long *)(uVar34 + 0xa0));
      memcpy(pvVar12,pbVar19,__n);
      *(undefined1 *)((long)pvVar12 + __n) = 10;
      *(size_t *)(uVar34 + 0xa0) = *(long *)(uVar34 + 0xa0) + __n + 1;
      uVar3 = local_54;
    }
    goto joined_r0x01098518;
  }
LAB_010980d4:
  uVar33 = *param_5;
  uVar32 = (uint)uVar33;
  if ((uVar32 >> 5 & 1) == 0) {
                    /* try { // try from 010980ec to 0119811f has its CatchHandler @ 01098000 */
    iVar10 = strncmp(param_1,"CHARS",5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109814c with catch @ 010982fc
                        */
    if (((iVar10 != 0) || (0x20 < (byte)param_1[5])) ||
       ((1L << ((ulong)(byte)param_1[5] & 0x3f) & 0x100002601U) == 0)) {
      uVar33 = 0xb4;
LAB_010993dc:
      local_58 = (uint)uVar33;
      bVar6 = (byte)*param_5;
      goto joined_r0x01099308;
    }
    uVar33 = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
    local_58 = (uint)uVar33;
    if (local_58 != 0) goto LAB_01099304;
    pbVar19 = *(byte **)(param_5[0x8809] + 8);
    if (pbVar19 == (byte *)0x0) {
LAB_010989d8:
      *(undefined8 *)(uVar34 + 0x50) = 0;
      param_5[1] = 0;
LAB_010989e4:
      uVar13 = 0x40;
      *(undefined8 *)(uVar34 + 0x50) = 0x40;
    }
    else {
      bVar6 = *pbVar19;
      uVar33 = (ulong)bVar6;
      if (bVar6 == 0) goto LAB_010989d8;
      if (bVar6 == 0x30) {
        if ((pbVar19[1] | 0x20) != 0x78) {
          uVar33 = 0x30;
          goto LAB_01098960;
        }
        pbVar19 = pbVar19 + 2;
        uVar33 = (ulong)*pbVar19;
        puVar22 = &DAT_0145ffea;
        lVar17 = 0x10;
      }
      else {
LAB_01098960:
        puVar22 = &DAT_0146000a;
        lVar17 = 10;
      }
      if ((1 << (ulong)((uint)uVar33 & 7) & (uint)(byte)puVar22[uVar33 >> 3]) == 0)
      goto LAB_010989d8;
      uVar13 = 0;
      do {
        pbVar19 = pbVar19 + 1;
        bVar6 = *pbVar19;
        uVar13 = (ulong)(byte)(&DAT_0145ff6a)[uVar33] + uVar13 * lVar17;
        uVar33 = (ulong)bVar6;
      } while ((1 << (ulong)(bVar6 & 7) & (uint)(byte)puVar22[bVar6 >> 3]) != 0);
      *(ulong *)(uVar34 + 0x50) = uVar13;
      param_5[1] = uVar13;
      if (uVar13 == 0) goto LAB_010989e4;
      if (0x10ffff < uVar13) {
        uVar33 = 6;
        goto LAB_010993dc;
      }
    }
    uVar11 = ft_mem_realloc(uVar29,0x38,0,uVar13,0,&local_58);
    *(undefined8 *)(uVar34 + 0x60) = uVar11;
    uVar33 = (ulong)local_58;
    if (local_58 == 0) {
      uVar33 = *param_5 | 0x20;
      goto LAB_010992f8;
    }
  }
  else {
    iVar10 = strncmp(param_1,"ENDFONT",7);
                    /* try { // try from 01098390 to 0119841f has its CatchHandler @ 01098390
                       catch() { ... } // from try @ 01098390 with catch @ 01098390
                       catch() { ... } // from try @ 01098440 with catch @ 01098390
                       catch() { ... } // from try @ 0109857c with catch @ 01098390 */
    if (((iVar10 == 0) && ((byte)param_1[7] < 0x21)) &&
       ((1L << ((ulong)(byte)param_1[7] & 0x3f) & 0x100002601U) != 0)) {
      if ((uVar33 & 0xfc0) != 0) {
        uVar33 = 0xba;
        goto LAB_010993dc;
      }
      qsort(*(void **)(uVar34 + 0x60),*(size_t *)(uVar34 + 0x58),0x38,FUN_010993f4);
      uVar33 = *param_5 & 0xfffffffffffffffe;
LAB_010992f8:
      *param_5 = uVar33;
      uVar3 = local_58;
    }
    else {
      iVar10 = strncmp(param_1,"ENDCHAR",7);
      if (((iVar10 == 0) && ((byte)param_1[7] < 0x21)) &&
         ((1L << ((ulong)(byte)param_1[7] & 0x3f) & 0x100002601U) != 0)) {
        param_5[6] = 0;
        uVar33 = uVar33 & 0xfffffffffffff03f;
        goto LAB_010992f8;
      }
      if ((((uVar32 >> 6 & 1) == 0) || (param_5[6] != 0xffffffffffffffff)) ||
         (uVar3 = local_58, *(int *)(param_5[8] + 4) != 0)) {
        iVar10 = strncmp(param_1,"STARTCHAR",9);
        if (((iVar10 != 0) || (0x20 < (byte)param_1[9])) ||
           ((1L << ((ulong)(byte)param_1[9] & 0x3f) & 0x100002601U) == 0)) {
          iVar10 = strncmp(param_1,"ENCODING",8);
          if (((iVar10 != 0) || (0x20 < (byte)param_1[8])) ||
             ((1L << ((ulong)(byte)param_1[8] & 0x3f) & 0x100002601U) == 0)) {
            plVar4 = (long *)(uVar34 + 0x78);
            plVar7 = (long *)(uVar34 + 0x70);
            if (param_5[6] != 0xffffffffffffffff) {
              plVar4 = (long *)(uVar34 + 0x60);
              plVar7 = (long *)(uVar34 + 0x58);
            }
            lVar17 = *plVar4;
            lVar35 = *plVar7 + -1;
            if ((uVar32 >> 0xb & 1) != 0) {
              uVar3 = local_58;
              if (param_5[2] < (ulong)*(ushort *)(lVar17 + lVar35 * 0x38 + 0x16)) {
                    /* try { // try from 010984cc to 011984d3 has its CatchHandler @ 01098674 */
                lVar15 = lVar17 + lVar35 * 0x38;
                lVar18 = *(long *)(lVar15 + 0x28);
                pbVar19 = (byte *)(*(long *)(lVar15 + 0x20) + lVar18 * param_5[2]);
                uVar13 = lVar18 * 2;
                uVar33 = 0;
                while (uVar24 = uVar33, uVar24 < uVar13) {
                  bVar6 = param_1[uVar24];
                  if ((1 << (ulong)(bVar6 & 7) & (uint)(byte)(&DAT_0145ffea)[bVar6 >> 3]) == 0) {
                    if (((uint)*param_5 >> 0x1e & 1) == 0) {
                      *param_5 = *param_5 | 0x40000000;
                      *(undefined2 *)(uVar34 + 0x880f0) = 1;
                    }
                    break;
                  }
                  uVar33 = uVar24 + 1;
                  *pbVar19 = (&DAT_0145ff6a)[bVar6] + *pbVar19 * '\x10';
                  if ((uVar33 < uVar13) && ((uVar24 & 1) != 0)) {
                    pbVar19 = pbVar19 + 1;
                    *pbVar19 = 0;
                  }
                }
                uVar14 = *(ushort *)(lVar17 + lVar35 * 0x38 + 0x14);
                if (uVar14 != 0) {
                  *pbVar19 = *pbVar19 &
                             (&DAT_0146002a)
                             [(ulong)((uint)*(ushort *)(param_5[7] + 0x880f2) * (uint)uVar14) & 7];
                }
                if (((uVar13 - uVar24 == 0) &&
                    ((1 << (ulong)((byte)param_1[uVar13] & 7) &
                     (uint)(byte)(&DAT_0145ffea)[(byte)param_1[uVar13] >> 3]) != 0)) &&
                   (((uint)*param_5 >> 0x1e & 1) == 0)) {
                  *param_5 = *param_5 | 0x40000000;
                  *(undefined2 *)(uVar34 + 0x880f0) = 1;
                }
                param_5[2] = param_5[2] + 1;
              }
              else {
                    /* try { // try from 010984f8 to 0119850b has its CatchHandler @ 01098670 */
                if (-1 < (int)uVar32) {
                  *param_5 = uVar33 | 0x80000000;
                  *(undefined2 *)(uVar34 + 0x880f0) = 1;
                }
              }
              goto joined_r0x01098518;
            }
            iVar10 = strncmp(param_1,"SWIDTH",6);
            if (((iVar10 != 0) || (0x20 < (byte)param_1[6])) ||
               ((1L << ((ulong)(byte)param_1[6] & 0x3f) & 0x100002601U) == 0)) {
              iVar10 = strncmp(param_1,"DWIDTH",6);
              if (((iVar10 == 0) && ((byte)param_1[6] < 0x21)) &&
                 ((1L << ((ulong)(byte)param_1[6] & 0x3f) & 0x100002601U) != 0)) {
                if ((uVar32 >> 7 & 1) != 0) {
                    /* catch() { ... } // from try @ 01098570 with catch @ 01098654 */
                    /* catch() { ... } // from try @ 01098564 with catch @ 01098664 */
                    /* catch() { ... } // from try @ 01098530 with catch @ 01098668 */
                    /* catch() { ... } // from try @ 01098518 with catch @ 0109866c */
                    /* catch() { ... } // from try @ 010984f8 with catch @ 01098670 */
                    /* catch() { ... } // from try @ 010984cc with catch @ 01098674 */
                  uVar33 = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
                    /* catch() { ... } // from try @ 01098420 with catch @ 01098678 */
                  local_58 = (uint)uVar33;
                  if (local_58 != 0) goto LAB_01099304;
                    /* catch() { ... } // from try @ 0109853c with catch @ 01098680 */
                  pbVar19 = *(byte **)(param_5[0x8809] + 8);
                  if (pbVar19 == (byte *)0x0) {
LAB_01098e44:
                    sVar21 = 0;
                  }
                  else {
                    bVar6 = *pbVar19;
                    uVar33 = (ulong)bVar6;
                    if (bVar6 == 0) goto LAB_01098e44;
                    if (bVar6 == 0x30) {
                      if ((pbVar19[1] | 0x20) != 0x78) {
                    /* try { // try from 01098de0 to 01198deb has its CatchHandler @ 01098f60 */
                        uVar33 = 0x30;
                        goto LAB_01098de8;
                      }
                      pbVar19 = pbVar19 + 2;
                      uVar33 = (ulong)*pbVar19;
                      puVar22 = &DAT_0145ffea;
                      sVar9 = 0x10;
                    }
                    else {
LAB_01098de8:
                      puVar22 = &DAT_0146000a;
                      sVar9 = 10;
                    }
                    /* try { // try from 01098dec to 01198e53 has its CatchHandler @ 01098d14 */
                    if ((1 << (ulong)((uint)uVar33 & 7) & (uint)(byte)puVar22[uVar33 >> 3]) == 0)
                    goto LAB_01098e44;
                    sVar21 = 0;
                    do {
                      pbVar19 = pbVar19 + 1;
                      bVar6 = *pbVar19;
                      sVar21 = (ushort)(byte)(&DAT_0145ff6a)[uVar33] + sVar21 * sVar9;
                      uVar33 = (ulong)bVar6;
                    } while ((1 << (ulong)(bVar6 & 7) & (uint)(byte)puVar22[bVar6 >> 3]) != 0);
                  }
                  *(short *)(lVar17 + lVar35 * 0x38 + 0x12) = sVar21;
                    /* try { // try from 01098e54 to 01198e5f has its CatchHandler @ 01098f5c */
                  uVar33 = *param_5;
                  if (((uint)uVar33 >> 8 & 1) == 0) {
                    /* try { // try from 01098e60 to 01198eaf has its CatchHandler @ 01098d14 */
                    uVar8 = FT_MulDiv(sVar21,72000,
                                      *(long *)(uVar34 + 0x20) * *(long *)(uVar34 + 0x18));
                    *(undefined2 *)(lVar17 + lVar35 * 0x38 + 0x10) = uVar8;
                    uVar33 = *param_5;
                  }
                  uVar33 = uVar33 | 0x200;
                  goto LAB_010992f8;
                }
              }
              else {
                iVar10 = strncmp(param_1,"BBX",3);
                if (((iVar10 != 0) || (0x20 < (byte)param_1[3])) ||
                   ((1L << ((ulong)(byte)param_1[3] & 0x3f) & 0x100002601U) == 0)) {
                  iVar10 = strncmp(param_1,"BITMAP",6);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01098034 with catch @ 010982c8
                       catch(type#1 @ 00000000) { ... } // from try @ 01098120 with catch @ 010982c8
                        */
                  if (((iVar10 != 0) || (0x20 < (byte)param_1[6])) ||
                     ((1L << ((ulong)(byte)param_1[6] & 0x3f) & 0x100002601U) == 0))
                  goto LAB_010993d8;
                  if ((uVar32 >> 10 & 1) == 0) {
                    uVar33 = 0xb7;
                  }
                  else {
                    lVar18 = lVar17 + lVar35 * 0x38;
                    uVar33 = (ulong)((uint)*(ushort *)(uVar34 + 0x880f2) *
                                     (uint)*(ushort *)(lVar18 + 0x14) + 7 >> 3);
                    uVar34 = uVar33 * *(ushort *)(lVar18 + 0x16);
                    *(ulong *)(lVar18 + 0x28) = uVar33;
                    if (((uVar34 | uVar33) & 0x1fffffff0000) == 0) {
                      lVar17 = lVar17 + lVar35 * 0x38;
                      *(short *)(lVar17 + 0x30) = (short)uVar34;
                      uVar11 = ft_mem_realloc(uVar29,1,0,uVar34 & 0xffff,0,&local_58);
                      *(undefined8 *)(lVar17 + 0x20) = uVar11;
                      uVar33 = (ulong)local_58;
                      if (local_58 == 0) {
                        param_5[2] = 0;
                        uVar33 = *param_5 | 0x800;
                        goto LAB_010992f8;
                      }
                      goto LAB_01099304;
                    }
                    uVar33 = 0xb8;
                  }
                  goto LAB_010993dc;
                }
                if ((uVar32 >> 7 & 1) != 0) {
                  uVar33 = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
                  local_58 = (uint)uVar33;
                  if (local_58 == 0) {
                    uVar33 = param_5[0x8809];
                    pbVar19 = *(byte **)(uVar33 + 8);
                    if (pbVar19 == (byte *)0x0) {
                      uVar14 = 0;
                    }
                    else {
                      bVar6 = *pbVar19;
                      uVar14 = (ushort)bVar6;
                      if (bVar6 != 0) {
                        if (bVar6 == 0x2d) {
                          pbVar19 = pbVar19 + 1;
                        }
                        uVar13 = (ulong)*pbVar19;
                        if (*pbVar19 == 0x30) {
                          if ((pbVar19[1] | 0x20) == 0x78) {
                            pbVar19 = pbVar19 + 2;
                            uVar13 = (ulong)*pbVar19;
                            puVar22 = &DAT_0145ffea;
                            sVar9 = 0x10;
                          }
                          else {
                            puVar22 = &DAT_0146000a;
                            sVar9 = 10;
                            uVar13 = 0x30;
                          }
                        }
                        else {
                          puVar22 = &DAT_0146000a;
                          sVar9 = 10;
                        }
                    /* try { // try from 01098eb0 to 01198ebb has its CatchHandler @ 01098f58 */
                    /* try { // try from 01098ebc to 01198f7b has its CatchHandler @ 01098d14 */
                        uVar25 = 0;
                        if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar22[uVar13 >> 3]) != 0
                           ) {
                          uVar25 = 0;
                          do {
                            pbVar19 = pbVar19 + 1;
                            bVar5 = *pbVar19;
                            uVar25 = (ushort)(byte)(&DAT_0145ff6a)[uVar13] + uVar25 * sVar9;
                            uVar13 = (ulong)bVar5;
                          } while ((1 << (ulong)(bVar5 & 7) & (uint)(byte)puVar22[bVar5 >> 3]) != 0)
                          ;
                        }
                        uVar14 = -uVar25;
                        if (bVar6 != 0x2d) {
                          uVar14 = uVar25;
                        }
                      }
                    }
                    *(ushort *)(lVar17 + lVar35 * 0x38 + 0x14) = uVar14;
                    pbVar19 = *(byte **)(uVar33 + 0x10);
                    if (pbVar19 == (byte *)0x0) {
                    /* catch() { ... } // from try @ 01098e54 with catch @ 01098f5c */
                      uVar25 = 0;
                    /* catch() { ... } // from try @ 01098de0 with catch @ 01098f60 */
                    }
                    else {
                      bVar6 = *pbVar19;
                      uVar25 = (ushort)bVar6;
                      if (bVar6 != 0) {
                        if (bVar6 == 0x2d) {
                          pbVar19 = pbVar19 + 1;
                        }
                        uVar13 = (ulong)*pbVar19;
                        if (*pbVar19 == 0x30) {
                          if ((pbVar19[1] | 0x20) == 0x78) {
                            pbVar19 = pbVar19 + 2;
                            uVar13 = (ulong)*pbVar19;
                            puVar22 = &DAT_0145ffea;
                            sVar9 = 0x10;
                    /* catch() { ... } // from try @ 01098eb0 with catch @ 01098f58 */
                          }
                          else {
                            puVar22 = &DAT_0146000a;
                            sVar9 = 10;
                            uVar13 = 0x30;
                          }
                        }
                        else {
                          puVar22 = &DAT_0146000a;
                          sVar9 = 10;
                        }
                        uVar26 = 0;
                        if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar22[uVar13 >> 3]) != 0
                           ) {
                          uVar26 = 0;
                          do {
                            pbVar19 = pbVar19 + 1;
                            bVar5 = *pbVar19;
                            uVar26 = (ushort)(byte)(&DAT_0145ff6a)[uVar13] + uVar26 * sVar9;
                            uVar13 = (ulong)bVar5;
                          } while ((1 << (ulong)(bVar5 & 7) & (uint)(byte)puVar22[bVar5 >> 3]) != 0)
                          ;
                        }
                        uVar25 = -uVar26;
                        if (bVar6 != 0x2d) {
                          uVar25 = uVar26;
                        }
                      }
                    }
                    *(ushort *)(lVar17 + lVar35 * 0x38 + 0x16) = uVar25;
                    pbVar19 = *(byte **)(uVar33 + 0x18);
                    if (pbVar19 == (byte *)0x0) {
                      uVar26 = 0;
                    }
                    else {
                      bVar6 = *pbVar19;
                      uVar26 = (ushort)bVar6;
                      if (bVar6 != 0) {
                        if (bVar6 == 0x2d) {
                          pbVar19 = pbVar19 + 1;
                        }
                        uVar13 = (ulong)*pbVar19;
                        if (*pbVar19 == 0x30) {
                          if ((pbVar19[1] | 0x20) == 0x78) {
                            pbVar19 = pbVar19 + 2;
                            uVar13 = (ulong)*pbVar19;
                            puVar22 = &DAT_0145ffea;
                            sVar9 = 0x10;
                          }
                          else {
                            puVar22 = &DAT_0146000a;
                            sVar9 = 10;
                            uVar13 = 0x30;
                          }
                        }
                        else {
                          puVar22 = &DAT_0146000a;
                          sVar9 = 10;
                        }
                        uVar27 = 0;
                        if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar22[uVar13 >> 3]) != 0
                           ) {
                          uVar27 = 0;
                          do {
                            pbVar19 = pbVar19 + 1;
                            bVar5 = *pbVar19;
                            uVar27 = (ushort)(byte)(&DAT_0145ff6a)[uVar13] + uVar27 * sVar9;
                            uVar13 = (ulong)bVar5;
                          } while ((1 << (ulong)(bVar5 & 7) & (uint)(byte)puVar22[bVar5 >> 3]) != 0)
                          ;
                        }
                        uVar26 = -uVar27;
                        if (bVar6 != 0x2d) {
                          uVar26 = uVar27;
                        }
                      }
                    }
                    *(ushort *)(lVar17 + lVar35 * 0x38 + 0x18) = uVar26;
                    pbVar19 = *(byte **)(uVar33 + 0x20);
                    if (pbVar19 == (byte *)0x0) {
                      uVar27 = 0;
                    }
                    else {
                      bVar6 = *pbVar19;
                      uVar27 = (ushort)bVar6;
                      if (bVar6 != 0) {
                        if (bVar6 == 0x2d) {
                          pbVar19 = pbVar19 + 1;
                        }
                        uVar33 = (ulong)*pbVar19;
                        if (*pbVar19 == 0x30) {
                          if ((pbVar19[1] | 0x20) == 0x78) {
                            pbVar19 = pbVar19 + 2;
                            uVar33 = (ulong)*pbVar19;
                            puVar22 = &DAT_0145ffea;
                            sVar9 = 0x10;
                          }
                          else {
                            puVar22 = &DAT_0146000a;
                            sVar9 = 10;
                            uVar33 = 0x30;
                          }
                        }
                        else {
                          puVar22 = &DAT_0146000a;
                          sVar9 = 10;
                        }
                        uVar28 = 0;
                        if ((1 << (ulong)((uint)uVar33 & 7) & (uint)(byte)puVar22[uVar33 >> 3]) != 0
                           ) {
                          uVar28 = 0;
                          do {
                            pbVar19 = pbVar19 + 1;
                            bVar5 = *pbVar19;
                            uVar28 = (ushort)(byte)(&DAT_0145ff6a)[uVar33] + uVar28 * sVar9;
                            uVar33 = (ulong)bVar5;
                          } while ((1 << (ulong)(bVar5 & 7) & (uint)(byte)puVar22[bVar5 >> 3]) != 0)
                          ;
                        }
                        uVar27 = -uVar28;
                        if (bVar6 != 0x2d) {
                          uVar27 = uVar28;
                        }
                      }
                    }
                    lVar18 = lVar17 + lVar35 * 0x38;
                    sVar9 = uVar25 + uVar27;
                    *(ushort *)(lVar18 + 0x1a) = uVar27;
                    *(short *)(lVar18 + 0x1c) = sVar9;
                    *(ushort *)(lVar18 + 0x1e) = -uVar27;
                    if (sVar9 <= *(short *)((long)param_5 + 0x1e)) {
                      sVar9 = *(short *)((long)param_5 + 0x1e);
                    }
                    *(short *)((long)param_5 + 0x1e) = sVar9;
                    sVar21 = (short)param_5[4];
                    sVar9 = uVar26 + uVar14;
                    *(short *)((long)param_5 + 0x22) = sVar9;
                    if (sVar21 < (short)-uVar27) {
                      sVar21 = -uVar27;
                    }
                    *(short *)(param_5 + 4) = sVar21;
                    if (sVar9 <= *(short *)((long)param_5 + 0x1c)) {
                      sVar9 = *(short *)((long)param_5 + 0x1c);
                    }
                    *(short *)((long)param_5 + 0x1c) = sVar9;
                    uVar25 = uVar26;
                    if ((short)(ushort)param_5[3] <= (short)uVar26) {
                      uVar25 = (ushort)param_5[3];
                    }
                    *(ushort *)(param_5 + 3) = uVar25;
                    uVar33 = *param_5;
                    if ((short)uVar26 <= (short)*(ushort *)((long)param_5 + 0x1a)) {
                      uVar26 = *(ushort *)((long)param_5 + 0x1a);
                    }
                    *(ushort *)((long)param_5 + 0x1a) = uVar26;
                    if (((uint)uVar33 >> 9 & 1) == 0) {
                      *(ushort *)(lVar17 + lVar35 * 0x38 + 0x12) = uVar14;
                    }
                    if (*(int *)param_5[8] != 0) {
                      lVar18 = lVar17 + lVar35 * 0x38;
                      sVar9 = FT_MulDiv(*(undefined2 *)(lVar18 + 0x12),72000,
                                        *(long *)(uVar34 + 0x20) * *(long *)(uVar34 + 0x18));
                      psVar31 = (short *)(lVar18 + 0x10);
                      if (*psVar31 == sVar9) {
                        uVar33 = *param_5;
                      }
                      else {
                        *psVar31 = sVar9;
                        if (param_5[6] == 0xffffffffffffffff) {
                          uVar33 = *(long *)(uVar34 + 0x70) - 1;
                          puVar16 = (ulong *)(uVar34 + (uVar33 >> 2 & 0x3ffffffffffffff8) + 0x440f0)
                          ;
                        }
                        else {
                    /* catch() { ... } // from try @ 010993c8 with catch @ 01099284 */
                          uVar33 = *(ulong *)(lVar17 + lVar35 * 0x38 + 8);
                          puVar16 = (ulong *)(uVar34 + ((long)uVar33 >> 5) * 8 + 0xf0);
                        }
                        *puVar16 = *puVar16 | (long)(1 << (ulong)((uint)uVar33 & 0x1f));
                        uVar33 = *param_5 | 0x1000;
                        *param_5 = uVar33;
                        *(undefined2 *)(uVar34 + 0x880f0) = 1;
                      }
                    }
                    uVar33 = uVar33 | 0x400;
                    goto LAB_010992f8;
                  }
                  goto LAB_01099304;
                }
              }
LAB_01098804:
              uVar33 = 0xb6;
              goto LAB_010993dc;
            }
            if ((uVar32 >> 7 & 1) == 0) goto LAB_01098804;
            uVar33 = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
            local_58 = (uint)uVar33;
            if (local_58 != 0) goto LAB_01099304;
            pbVar19 = *(byte **)(param_5[0x8809] + 8);
            if (pbVar19 == (byte *)0x0) {
LAB_01098b90:
              sVar9 = 0;
            }
            else {
              bVar6 = *pbVar19;
              uVar34 = (ulong)bVar6;
              if (bVar6 == 0) goto LAB_01098b90;
              if (bVar6 == 0x30) {
                if ((pbVar19[1] | 0x20) != 0x78) {
                  uVar34 = 0x30;
                  goto LAB_01098d6c;
                }
                pbVar19 = pbVar19 + 2;
                uVar34 = (ulong)*pbVar19;
                puVar22 = &DAT_0145ffea;
                sVar21 = 0x10;
              }
              else {
LAB_01098d6c:
                puVar22 = &DAT_0146000a;
                sVar21 = 10;
              }
              uVar3 = 1 << (ulong)((uint)uVar34 & 7) & (uint)(byte)puVar22[uVar34 >> 3];
              sVar9 = (short)uVar3;
              if (uVar3 != 0) {
                sVar9 = 0;
                do {
                  pbVar19 = pbVar19 + 1;
                  bVar6 = *pbVar19;
                  sVar9 = (ushort)(byte)(&DAT_0145ff6a)[uVar34] + sVar9 * sVar21;
                  uVar34 = (ulong)bVar6;
                } while ((1 << (ulong)(bVar6 & 7) & (uint)(byte)puVar22[bVar6 >> 3]) != 0);
              }
            }
            *(short *)(lVar17 + lVar35 * 0x38 + 0x10) = sVar9;
            uVar33 = *param_5 | 0x100;
            goto LAB_010992f8;
          }
          if ((uVar32 >> 6 & 1) == 0) {
            uVar33 = 0xb5;
            goto LAB_010993dc;
          }
                    /* try { // try from 01098530 to 0119853b has its CatchHandler @ 01098668 */
                    /* try { // try from 0109853c to 01198563 has its CatchHandler @ 01098680 */
          uVar33 = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
          local_58 = (uint)uVar33;
          if (local_58 != 0) goto LAB_01099304;
          uVar33 = param_5[0x8809];
          pbVar19 = *(byte **)(uVar33 + 8);
          if ((pbVar19 == (byte *)0x0) || (bVar6 = *pbVar19, bVar6 == 0)) {
LAB_010988c4:
            uVar24 = 0;
            param_5[6] = 0;
LAB_010988cc:
            uVar33 = (ulong)(1 << (ulong)((uint)uVar24 & 0x1f));
            if ((param_5[(uVar24 >> 5) + 9] & uVar33) != 0) {
              param_5[6] = 0xffffffffffffffff;
              *(undefined2 *)(uVar34 + 0x880f0) = 1;
              goto LAB_01098904;
            }
            param_5[(uVar24 >> 5) + 9] = param_5[(uVar24 >> 5) + 9] | uVar33;
            lVar17 = *(long *)(uVar34 + 0x58);
            if (lVar17 == *(long *)(uVar34 + 0x50)) {
              lVar35 = ft_mem_realloc(uVar29,0x38,lVar17,lVar17 + 0x40,
                                      *(undefined8 *)(uVar34 + 0x60),&local_58);
              *(long *)(uVar34 + 0x60) = lVar35;
              uVar33 = (ulong)local_58;
              if (local_58 != 0) goto LAB_01099304;
              lVar17 = *(long *)(uVar34 + 0x58);
              *(long *)(uVar34 + 0x50) = *(long *)(uVar34 + 0x50) + 0x40;
              uVar24 = param_5[6];
            }
            else {
              lVar35 = *(long *)(uVar34 + 0x60);
            }
            *(long *)(uVar34 + 0x58) = lVar17 + 1;
            puVar16 = (ulong *)(lVar35 + lVar17 * 0x38);
            *puVar16 = param_5[5];
            puVar16[1] = uVar24;
          }
          else {
                    /* try { // try from 01098564 to 0119856f has its CatchHandler @ 01098664 */
            if (bVar6 == 0x2d) {
              pbVar19 = pbVar19 + 1;
            }
            uVar13 = (ulong)*pbVar19;
                    /* try { // try from 01098570 to 0119857b has its CatchHandler @ 01098654 */
            if (*pbVar19 == 0x30) {
                    /* try { // try from 0109857c to 0119869b has its CatchHandler @ 01098390 */
              if ((pbVar19[1] | 0x20) != 0x78) {
                uVar13 = 0x30;
                goto LAB_01098c64;
              }
              pbVar19 = pbVar19 + 2;
              uVar13 = (ulong)*pbVar19;
              puVar22 = &DAT_0145ffea;
              lVar17 = 0x10;
            }
            else {
LAB_01098c64:
              puVar22 = &DAT_0146000a;
              lVar17 = 10;
            }
            if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar22[uVar13 >> 3]) == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              do {
                pbVar19 = pbVar19 + 1;
                bVar5 = *pbVar19;
                uVar24 = (ulong)(byte)(&DAT_0145ff6a)[uVar13] + uVar24 * lVar17;
                uVar13 = (ulong)bVar5;
              } while ((1 << (ulong)(bVar5 & 7) & (uint)(byte)puVar22[bVar5 >> 3]) != 0);
            }
            uVar13 = -uVar24;
            if (bVar6 != 0x2d) {
              uVar13 = uVar24;
            }
            uVar24 = uVar13;
            if ((long)uVar13 < 0) {
              uVar24 = 0xffffffffffffffff;
            }
            puVar16 = param_5 + 6;
            *puVar16 = uVar24;
            if (((long)uVar13 < 0) && (2 < param_5[0x880b])) {
              pbVar19 = *(byte **)(uVar33 + 0x10);
              if ((pbVar19 == (byte *)0x0) || (bVar6 = *pbVar19, bVar6 == 0)) goto LAB_010988c4;
              if (bVar6 == 0x2d) {
                pbVar19 = pbVar19 + 1;
              }
              uVar33 = (ulong)*pbVar19;
                    /* try { // try from 01098d14 to 01198ddf has its CatchHandler @ 01098d14
                       catch() { ... } // from try @ 01098d14 with catch @ 01098d14
                       catch() { ... } // from try @ 01098dec with catch @ 01098d14
                       catch() { ... } // from try @ 01098e60 with catch @ 01098d14
                       catch() { ... } // from try @ 01098ebc with catch @ 01098d14 */
              if (*pbVar19 == 0x30) {
                if ((pbVar19[1] | 0x20) != 0x78) {
                    /* try { // try from 01099344 to 01199387 has its CatchHandler @ 01099520 */
                  uVar33 = 0x30;
                  goto LAB_01099348;
                }
                pbVar19 = pbVar19 + 2;
                uVar33 = (ulong)*pbVar19;
                puVar22 = &DAT_0145ffea;
                lVar17 = 0x10;
              }
              else {
LAB_01099348:
                puVar22 = &DAT_0146000a;
                lVar17 = 10;
              }
              if ((1 << (ulong)((uint)uVar33 & 7) & (uint)(byte)puVar22[uVar33 >> 3]) == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = 0;
                do {
                  pbVar19 = pbVar19 + 1;
                  bVar5 = *pbVar19;
                  uVar13 = (ulong)(byte)(&DAT_0145ff6a)[uVar33] + uVar13 * lVar17;
                    /* try { // try from 0109939c to 011993a7 has its CatchHandler @ 01099524 */
                  uVar33 = (ulong)bVar5;
                } while ((1 << (ulong)(bVar5 & 7) & (uint)(byte)puVar22[bVar5 >> 3]) != 0);
              }
              uVar24 = -uVar13;
              if (bVar6 != 0x2d) {
                uVar24 = uVar13;
              }
              *puVar16 = uVar24;
              if (-2 < (long)uVar24) goto LAB_010993c8;
                    /* try { // try from 010993bc to 011993c7 has its CatchHandler @ 0109952c */
              *puVar16 = 0xffffffffffffffff;
            }
            else {
LAB_010993c8:
                    /* try { // try from 010993c8 to 01199657 has its CatchHandler @ 01099284 */
              if ((0 < (long)uVar24) && (0x10ffff < uVar24)) goto LAB_010993d8;
              if (-1 < (long)uVar24) goto LAB_010988cc;
            }
LAB_01098904:
            if (*(int *)(param_5[8] + 4) == 0) {
              ft_mem_free(uVar29,param_5[5]);
              param_5[5] = 0;
            }
            else {
              uVar33 = *(ulong *)(uVar34 + 0x70);
              if (uVar33 == *(ulong *)(uVar34 + 0x68)) {
                lVar17 = ft_mem_realloc(uVar29,0x38,uVar33,uVar33 + 4,*(undefined8 *)(uVar34 + 0x78)
                                        ,&local_58);
                *(long *)(uVar34 + 0x78) = lVar17;
                uVar33 = (ulong)local_58;
                if (local_58 != 0) goto LAB_01099304;
                uVar33 = *(ulong *)(uVar34 + 0x70);
                *(long *)(uVar34 + 0x68) = *(long *)(uVar34 + 0x68) + 4;
              }
              else {
                lVar17 = *(long *)(uVar34 + 0x78);
              }
              puVar16 = (ulong *)(lVar17 + uVar33 * 0x38);
              *puVar16 = param_5[5];
              *(ulong *)(uVar34 + 0x70) = uVar33 + 1;
              puVar16[1] = uVar33;
            }
          }
          param_5[5] = 0;
          uVar33 = *param_5 & 0xffffffff3fffff7f | 0x80;
          goto LAB_010992f8;
        }
        ft_mem_free(uVar29,param_5[5]);
        puVar16 = param_5 + 0x8809;
                    /* try { // try from 01098420 to 0119843f has its CatchHandler @ 01098678 */
        param_5[5] = 0;
        uVar33 = FUN_01096bfc(puVar16,&DAT_0145fc2e,param_1,param_2);
        local_58 = (uint)uVar33;
        if (local_58 == 0) {
                    /* try { // try from 01098440 to 011984cb has its CatchHandler @ 01098390 */
          puVar1 = param_5 + 0x880b;
          uVar34 = *puVar1;
          if (uVar34 != 0) {
            uVar33 = uVar34 - 1;
            if (uVar33 == 0) {
              *puVar1 = 0;
            }
            else {
              lVar17 = 0;
              do {
                uVar13 = lVar17 + 2;
                puVar2 = (undefined8 *)(*puVar16 + lVar17 * 8);
                lVar17 = lVar17 + 1;
                *puVar2 = puVar2[1];
              } while (uVar13 < uVar34);
              *puVar1 = uVar33;
              if (uVar33 != 0) {
                lVar17 = 0;
                uVar34 = 0;
                pcVar30 = *(char **)*puVar16;
                cVar23 = *pcVar30;
                pcVar20 = pcVar30;
                while( true ) {
                  if (cVar23 != '\0') {
                    do {
                      pcVar20 = pcVar20 + 1;
                      pcVar30[lVar17] = cVar23;
                      cVar23 = *pcVar20;
                      lVar17 = lVar17 + 1;
                    } while (cVar23 != '\0');
                    uVar33 = *puVar1;
                  }
                  uVar34 = uVar34 + 1;
                  if (uVar34 < uVar33) {
                    pcVar30[lVar17] = ' ';
                    uVar33 = *puVar1;
                    lVar17 = lVar17 + 1;
                  }
                  if (uVar33 <= uVar34) break;
                  pcVar20 = *(char **)(*puVar16 + uVar34 * 8);
                  cVar23 = *pcVar20;
                }
                pcVar20 = "";
                if ((pcVar30 == "") ||
                   (pcVar30[lVar17] = '\0', pcVar20 = pcVar30, pcVar30 != (char *)0x0)) {
                  pvVar12 = (void *)ft_mem_realloc(uVar29,1,0,lVar17 + 1U,0,&local_58);
                  param_5[5] = (ulong)pvVar12;
                  uVar33 = (ulong)local_58;
                  if (local_58 == 0) {
                    memcpy(pvVar12,pcVar20,lVar17 + 1U);
                    uVar33 = *param_5 | 0x40;
                    goto LAB_010992f8;
                  }
                  goto LAB_01099304;
                }
              }
            }
          }
LAB_010993d8:
          uVar33 = 3;
          goto LAB_010993dc;
        }
        goto LAB_01099304;
      }
    }
joined_r0x01098518:
    local_58 = uVar3;
                    /* try { // try from 01098518 to 01198523 has its CatchHandler @ 0109866c */
    uVar33 = (ulong)local_58;
    if (local_58 == 0) {
      return 0;
    }
  }
LAB_01099304:
  bVar6 = (byte)*param_5;
joined_r0x01099308:
  if ((bVar6 >> 6 & 1) != 0) {
    ft_mem_free(uVar29,param_5[5]);
    param_5[5] = 0;
    uVar33 = (ulong)local_58;
  }
  return uVar33;
}

