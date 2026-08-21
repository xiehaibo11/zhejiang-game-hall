
ulong FUN_01097624(long param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  void *__dest;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  uint local_68;
  uint local_64;
  
                    /* try { // try from 01097644 to 0119764f has its CatchHandler @ 01097948 */
                    /* try { // try from 01097650 to 01197663 has its CatchHandler @ 010979cc */
  uVar23 = *(undefined8 *)(param_1 + 0x880f8);
  local_68 = 0;
                    /* try { // try from 01097664 to 01197693 has its CatchHandler @ 010975a4 */
  puVar22 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0x10);
  uVar13 = 0;
  bVar3 = *param_2;
  pbVar16 = param_2;
  bVar2 = bVar3;
  while (bVar2 != 0) {
    pbVar16 = pbVar16 + 1;
    uVar13 = uVar13 * 0x1f + (ulong)(uint)bVar2;
    bVar2 = *pbVar16;
  }
                    /* try { // try from 01097694 to 011976a3 has its CatchHandler @ 01097938 */
  uVar10 = (ulong)*(int *)(*(long *)(param_1 + 0xe8) + 4);
  uVar12 = 0;
  if (uVar10 != 0) {
    uVar12 = uVar13 / uVar10;
  }
  puVar20 = puVar22 + (uVar13 - uVar12 * uVar10);
                    /* try { // try from 010976a4 to 011976bb has its CatchHandler @ 010979b0 */
  puVar21 = (undefined8 *)*puVar20;
  uVar15 = (uint)bVar3;
  if (puVar21 != (undefined8 *)0x0) {
    do {
      if ((*(byte *)*puVar21 == uVar15) &&
         (iVar4 = strcmp((char *)*puVar21,(char *)param_2), iVar4 == 0)) {
                    /* catch() { ... } // from try @ 0109783c with catch @ 010978fc */
        lVar6 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 010978a8 with catch @ 01097900 */
        lVar19 = puVar21[1];
                    /* catch() { ... } // from try @ 0109786c with catch @ 01097904 */
        iVar4 = *(int *)(lVar6 + lVar19 * 0x18 + 8);
                    /* catch() { ... } // from try @ 0109785c with catch @ 01097914 */
        if (iVar4 != 3) {
          if (iVar4 == 2) {
            if ((param_3 == (byte *)0x0) || (bVar2 = *param_3, bVar2 == 0)) {
              lVar17 = 0;
            }
            else {
                    /* catch() { ... } // from try @ 010976a4 with catch @ 010979b0 */
              if (bVar2 == 0x2d) {
                param_3 = param_3 + 1;
              }
              uVar13 = (ulong)*param_3;
              if (*param_3 == 0x30) {
                    /* catch() { ... } // from try @ 01097650 with catch @ 010979cc */
                if ((param_3[1] | 0x20) != 0x78) {
                  uVar13 = 0x30;
                  goto LAB_01097fec;
                }
                    /* catch() { ... } // from try @ 010975f0 with catch @ 010979d0 */
                param_3 = param_3 + 2;
                uVar13 = (ulong)*param_3;
                puVar14 = &DAT_0145ffea;
                lVar17 = 0x10;
              }
              else {
LAB_01097fec:
                puVar14 = &DAT_0146000a;
                lVar17 = 10;
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010980ec with catch @ 01098000
                        */
              if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar14[uVar13 >> 3]) == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = 0;
                do {
                  param_3 = param_3 + 1;
                  bVar3 = *param_3;
                    /* try { // try from 01098034 to 011980eb has its CatchHandler @ 010982c8 */
                  lVar18 = (ulong)(byte)(&DAT_0145ff6a)[uVar13] + lVar18 * lVar17;
                  uVar13 = (ulong)bVar3;
                } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)puVar14[bVar3 >> 3]) != 0);
              }
              lVar17 = -lVar18;
              if (bVar2 != 0x2d) {
                lVar17 = lVar18;
              }
            }
            *(long *)(lVar6 + lVar19 * 0x18 + 0x10) = lVar17;
            return 0;
          }
                    /* catch() { ... } // from try @ 0109777c with catch @ 01097924 */
          if (iVar4 == 1) {
            puVar22 = (undefined8 *)(lVar6 + lVar19 * 0x18 + 0x10);
                    /* catch() { ... } // from try @ 0109776c with catch @ 01097934 */
                    /* catch() { ... } // from try @ 01097694 with catch @ 01097938 */
            ft_mem_free(uVar23,*puVar22);
            *puVar22 = 0;
                    /* catch() { ... } // from try @ 01097644 with catch @ 01097948 */
            if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
                    /* catch() { ... } // from try @ 010975e4 with catch @ 0109794c */
              uVar23 = ft_mem_strdup(uVar23,param_3,&local_68);
                    /* catch() { ... } // from try @ 01097878 with catch @ 0109795c */
              *puVar22 = uVar23;
              return (ulong)local_68;
            }
          }
          goto LAB_01097e98;
        }
        if (param_3 != (byte *)0x0) {
          bVar2 = *param_3;
          uVar13 = (ulong)bVar2;
          if (bVar2 != 0) {
            if (bVar2 == 0x30) {
                    /* catch() { ... } // from try @ 0109778c with catch @ 01097988 */
              if ((param_3[1] | 0x20) != 0x78) {
                uVar13 = 0x30;
                goto LAB_01097cdc;
              }
              param_3 = param_3 + 2;
              uVar13 = (ulong)*param_3;
              puVar14 = &DAT_0145ffea;
              lVar17 = 0x10;
            }
            else {
LAB_01097cdc:
              puVar14 = &DAT_0146000a;
              lVar17 = 10;
            }
                    /* try { // try from 01097cec to 01197cf7 has its CatchHandler @ 01097ed0 */
            if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar14[uVar13 >> 3]) != 0) {
              lVar18 = 0;
                    /* try { // try from 01097d04 to 01197d77 has its CatchHandler @ 01097edc */
              do {
                param_3 = param_3 + 1;
                bVar2 = *param_3;
                lVar18 = (ulong)(byte)(&DAT_0145ff6a)[uVar13] + lVar18 * lVar17;
                uVar13 = (ulong)bVar2;
              } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)puVar14[bVar2 >> 3]) != 0);
LAB_01097d3c:
              *(long *)(lVar6 + lVar19 * 0x18 + 0x10) = lVar18;
              return 0;
            }
          }
        }
        lVar18 = 0;
        goto LAB_01097d3c;
      }
      puVar21 = puVar20 + -1;
      puVar20 = puVar22 + (uVar10 - 1);
      if (puVar22 <= puVar21) {
        puVar20 = puVar21;
      }
      puVar21 = (undefined8 *)*puVar20;
    } while (puVar21 != (undefined8 *)0x0);
  }
  puVar22 = *(undefined8 **)(param_1 + 0x88120);
  uVar13 = 0;
  if (uVar15 != 0) {
    uVar12 = (ulong)uVar15;
    pbVar16 = param_2;
    do {
      pbVar16 = pbVar16 + 1;
      uVar13 = uVar13 * 0x1f + uVar12;
      uVar12 = (ulong)*pbVar16;
    } while (*pbVar16 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x88114);
  uVar10 = (ulong)iVar4;
  uVar12 = 0;
  if (uVar10 != 0) {
    uVar12 = uVar13 / uVar10;
  }
  puVar20 = puVar22 + (uVar13 - uVar12 * uVar10);
  puVar21 = (undefined8 *)*puVar20;
  if (puVar21 != (undefined8 *)0x0) {
    do {
      if ((*(byte *)*puVar21 == uVar15) &&
         (iVar5 = strcmp((char *)*puVar21,(char *)param_2), iVar5 == 0)) goto LAB_01097a7c;
                    /* try { // try from 0109776c to 0119777b has its CatchHandler @ 01097934 */
      puVar21 = puVar20 + -1;
      puVar20 = puVar22 + (uVar10 - 1);
      if (puVar22 <= puVar21) {
        puVar20 = puVar21;
      }
      puVar21 = (undefined8 *)*puVar20;
                    /* try { // try from 0109777c to 0119778b has its CatchHandler @ 01097924 */
    } while (puVar21 != (undefined8 *)0x0);
  }
  uVar13 = 0;
  local_64 = 0;
  uVar15 = (uint)bVar3;
  pbVar16 = param_2;
  while (uVar15 != 0) {
                    /* try { // try from 0109778c to 011977a3 has its CatchHandler @ 01097988 */
    pbVar16 = pbVar16 + 1;
    uVar13 = uVar13 * 0x1f + (ulong)uVar15;
    uVar15 = (uint)*pbVar16;
  }
  uVar12 = 0;
  if (uVar10 != 0) {
    uVar12 = uVar13 / uVar10;
  }
  puVar20 = puVar22 + (uVar13 - uVar12 * uVar10);
  puVar21 = (undefined8 *)*puVar20;
  if (puVar21 != (undefined8 *)0x0) {
    do {
      if (((uint)*(byte *)*puVar21 == (uint)bVar3) &&
         (iVar5 = strcmp((char *)*puVar21,(char *)param_2), iVar5 == 0)) goto LAB_01097a00;
      puVar21 = puVar20 + -1;
      puVar20 = puVar22 + (iVar4 + -1);
      if (puVar22 <= puVar21) {
        puVar20 = puVar21;
      }
      puVar21 = (undefined8 *)*puVar20;
    } while (puVar21 != (undefined8 *)0x0);
  }
  plVar1 = (long *)(param_1 + 0x88108);
  lVar6 = ft_mem_realloc(uVar23,0x18,*plVar1,*plVar1 + 1,*(undefined8 *)(param_1 + 0x88100),
                         &local_64);
  *(long *)(param_1 + 0x88100) = lVar6;
  if (local_64 != 0) {
    return (ulong)local_64;
  }
                    /* try { // try from 0109783c to 0119785b has its CatchHandler @ 010978fc */
  lVar19 = *plVar1;
  puVar22 = (undefined8 *)(lVar6 + lVar19 * 0x18);
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = 0;
  sVar7 = strlen((char *)param_2);
                    /* try { // try from 0109785c to 0119786b has its CatchHandler @ 01097914 */
                    /* try { // try from 0109786c to 01197877 has its CatchHandler @ 01097904 */
  __dest = (void *)ft_mem_realloc(uVar23,1,0,sVar7 + 1,0,&local_64);
                    /* try { // try from 01097878 to 0119788b has its CatchHandler @ 0109795c */
  *puVar22 = __dest;
  if (local_64 != 0) {
    return (ulong)local_64;
  }
  memcpy(__dest,param_2,sVar7 + 1);
                    /* try { // try from 010978a8 to 011978af has its CatchHandler @ 01097900 */
                    /* try { // try from 010978b0 to 011979f3 has its CatchHandler @ 010975a4 */
  *(undefined8 *)(lVar6 + lVar19 * 0x18 + 8) = 1;
  uVar13 = FUN_0109699c(*puVar22,*plVar1 + 0x53,param_1 + 0x88110,uVar23);
  if ((int)uVar13 != 0) {
    return uVar13;
  }
                    /* catch() { ... } // from try @ 01097a24 with catch @ 010979f4 */
  *plVar1 = *plVar1 + 1;
  puVar22 = *(undefined8 **)(param_1 + 0x88120);
  bVar3 = *param_2;
  local_64 = 0;
LAB_01097a00:
  uVar13 = 0;
  local_68 = 0;
  pbVar16 = param_2;
  bVar2 = bVar3;
  while (bVar2 != 0) {
    pbVar16 = pbVar16 + 1;
                    /* try { // try from 01097a1c to 01197a23 has its CatchHandler @ 01097a34 */
                    /* try { // try from 01097a24 to 01197a4f has its CatchHandler @ 010979f4 */
    uVar13 = uVar13 * 0x1f + (ulong)(uint)bVar2;
    bVar2 = *pbVar16;
  }
  uVar10 = (ulong)*(int *)(param_1 + 0x88114);
  uVar12 = 0;
  if (uVar10 != 0) {
    uVar12 = uVar13 / uVar10;
  }
                    /* catch() { ... } // from try @ 01097a1c with catch @ 01097a34 */
  puVar20 = puVar22 + (uVar13 - uVar12 * uVar10);
  puVar21 = (undefined8 *)*puVar20;
  if (puVar21 != (undefined8 *)0x0) {
    do {
                    /* try { // try from 01097a50 to 01197c8f has its CatchHandler @ 01097a50
                       catch() { ... } // from try @ 01097a50 with catch @ 01097a50
                       catch() { ... } // from try @ 01097d78 with catch @ 01097a50 */
      if ((*(byte *)*puVar21 == bVar3) &&
         (iVar4 = strcmp((char *)*puVar21,(char *)param_2), iVar4 == 0)) break;
      puVar21 = puVar20 + -1;
      puVar20 = puVar22 + (uVar10 - 1);
      if (puVar22 <= puVar21) {
        puVar20 = puVar21;
      }
      puVar21 = (undefined8 *)*puVar20;
    } while (puVar21 != (undefined8 *)0x0);
  }
LAB_01097a7c:
  lVar6 = *(long *)(param_1 + 0x88);
  if (lVar6 == *(long *)(param_1 + 0x80)) {
    if (lVar6 == 0) {
      lVar19 = 1;
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      lVar19 = lVar6 + 1;
    }
    lVar6 = ft_mem_realloc(uVar23,0x18,lVar6,lVar19,uVar8,&local_68);
    *(long *)(param_1 + 0x90) = lVar6;
    if (local_68 != 0) {
      return (ulong)local_68;
    }
    puVar22 = (undefined8 *)(lVar6 + *(long *)(param_1 + 0x80) * 0x18);
    puVar22[1] = 0;
    puVar22[2] = 0;
    *puVar22 = 0;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  }
  uVar13 = puVar21[1];
  if (uVar13 < 0x53) {
    ppuVar11 = &PTR_s_ADD_STYLE_NAME_0172acf8 + uVar13 * 3;
  }
  else {
    ppuVar11 = (undefined **)(*(long *)(param_1 + 0x88100) + uVar13 * 0x18 + -0x7c8);
  }
  lVar6 = *(long *)(param_1 + 0x88);
  lVar19 = *(long *)(param_1 + 0x90);
  puVar22 = (undefined8 *)(lVar19 + lVar6 * 0x18);
  *puVar22 = *ppuVar11;
  *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(ppuVar11 + 1);
  *(undefined4 *)((long)puVar22 + 0xc) = *(undefined4 *)((long)ppuVar11 + 0xc);
  iVar4 = *(int *)(ppuVar11 + 1);
  if (iVar4 != 3) {
    if (iVar4 != 2) {
      if (iVar4 == 1) {
        puVar20 = (undefined8 *)(lVar19 + lVar6 * 0x18 + 0x10);
        *puVar20 = 0;
        if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
          uVar8 = ft_mem_strdup(uVar23,param_3,&local_68);
          *puVar20 = uVar8;
          if (local_68 != 0) {
            return (ulong)local_68;
          }
        }
      }
      goto LAB_01097dd0;
    }
    if ((param_3 == (byte *)0x0) || (bVar2 = *param_3, bVar2 == 0)) {
      lVar17 = 0;
    }
    else {
      if (bVar2 == 0x2d) {
        param_3 = param_3 + 1;
      }
      uVar13 = (ulong)*param_3;
      if (*param_3 == 0x30) {
        if ((param_3[1] | 0x20) != 0x78) {
          uVar13 = 0x30;
          goto LAB_01097d5c;
        }
        param_3 = param_3 + 2;
        uVar13 = (ulong)*param_3;
        puVar14 = &DAT_0145ffea;
        lVar17 = 0x10;
      }
      else {
LAB_01097d5c:
        puVar14 = &DAT_0146000a;
        lVar17 = 10;
      }
                    /* try { // try from 01097d78 to 01197fff has its CatchHandler @ 01097a50 */
      if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar14[uVar13 >> 3]) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          param_3 = param_3 + 1;
          bVar3 = *param_3;
          lVar18 = (ulong)(byte)(&DAT_0145ff6a)[uVar13] + lVar18 * lVar17;
          uVar13 = (ulong)bVar3;
        } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)puVar14[bVar3 >> 3]) != 0);
      }
      lVar17 = -lVar18;
      if (bVar2 != 0x2d) {
        lVar17 = lVar18;
      }
    }
    *(long *)(lVar19 + lVar6 * 0x18 + 0x10) = lVar17;
    goto LAB_01097dd0;
  }
  if (param_3 == (byte *)0x0) {
LAB_01097cbc:
    lVar18 = 0;
  }
  else {
    bVar2 = *param_3;
    uVar13 = (ulong)bVar2;
    if (bVar2 == 0) goto LAB_01097cbc;
    if (bVar2 == 0x30) {
      if ((param_3[1] | 0x20) != 0x78) {
        uVar13 = 0x30;
        goto LAB_01097c60;
      }
      param_3 = param_3 + 2;
      uVar13 = (ulong)*param_3;
      puVar14 = &DAT_0145ffea;
      lVar17 = 0x10;
    }
    else {
LAB_01097c60:
      puVar14 = &DAT_0146000a;
      lVar17 = 10;
    }
    if ((1 << (ulong)((uint)uVar13 & 7) & (uint)(byte)puVar14[uVar13 >> 3]) == 0) goto LAB_01097cbc;
    lVar18 = 0;
    do {
                    /* try { // try from 01097c90 to 01197cd3 has its CatchHandler @ 01097edc */
      param_3 = param_3 + 1;
      bVar2 = *param_3;
      lVar18 = (ulong)(byte)(&DAT_0145ff6a)[uVar13] + lVar18 * lVar17;
      uVar13 = (ulong)bVar2;
    } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)puVar14[bVar2 >> 3]) != 0);
  }
  *(long *)(lVar19 + lVar6 * 0x18 + 0x10) = lVar18;
LAB_01097dd0:
  iVar4 = strncmp((char *)param_2,"COMMENT",7);
  if (((iVar4 != 0) || (0x20 < param_2[7])) ||
     ((1L << ((ulong)param_2[7] & 0x3f) & 0x100002601U) == 0)) {
    uVar13 = FUN_0109699c(*puVar22,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0xe8),
                          uVar23);
    if ((int)uVar13 != 0) {
      return uVar13;
    }
    local_68 = 0;
  }
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  iVar4 = strncmp((char *)param_2,"DEFAULT_CHAR",0xc);
  if (((iVar4 == 0) && (param_2[0xc] < 0x21)) &&
     ((1L << ((ulong)param_2[0xc] & 0x3f) & 0x100002601U) != 0)) {
                    /* catch() { ... } // from try @ 01097cec with catch @ 01097ed0 */
    uVar13 = 0;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar19 + lVar6 * 0x18 + 0x10);
  }
  else {
    iVar4 = strncmp((char *)param_2,"FONT_ASCENT",0xb);
                    /* catch() { ... } // from try @ 01097c90 with catch @ 01097edc
                       catch() { ... } // from try @ 01097d04 with catch @ 01097edc */
    if (((iVar4 == 0) && (param_2[0xb] < 0x21)) &&
       ((1L << ((ulong)param_2[0xb] & 0x3f) & 0x100002601U) != 0)) {
      uVar13 = 0;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar19 + lVar6 * 0x18 + 0x10);
    }
    else {
      iVar4 = strncmp((char *)param_2,"FONT_DESCENT",0xc);
      if (((iVar4 == 0) && (param_2[0xc] < 0x21)) &&
         ((1L << ((ulong)param_2[0xc] & 0x3f) & 0x100002601U) != 0)) {
        uVar13 = 0;
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar19 + lVar6 * 0x18 + 0x10);
      }
      else {
        iVar4 = strncmp((char *)param_2,"SPACING",7);
        if (iVar4 == 0) {
          uVar13 = 0;
          if ((param_2[7] < 0x21) && ((1L << ((ulong)param_2[7] & 0x3f) & 0x100002601U) != 0)) {
            pbVar16 = *(byte **)(lVar19 + lVar6 * 0x18 + 0x10);
            if (pbVar16 == (byte *)0x0) {
              uVar13 = 3;
            }
            else {
              uVar13 = 0;
              uVar15 = *pbVar16 - 0x43;
              uVar12 = (ulong)uVar15;
              if (uVar15 < 0x2e) {
                if ((1L << (uVar12 & 0x3f) & 0x100000001U) == 0) {
                  if ((1L << (uVar12 & 0x3f) & 0x40000000400U) == 0) {
                    if ((1L << (uVar12 & 0x3f) & 0x200000002000U) == 0) {
                      return 0;
                    }
                    uVar9 = 8;
                  }
                  else {
                    uVar9 = 0x10;
                  }
                }
                else {
                  uVar9 = 0x20;
                }
                uVar13 = 0;
                *(undefined4 *)(param_1 + 0x30) = uVar9;
              }
            }
          }
        }
        else {
LAB_01097e98:
          uVar13 = 0;
        }
      }
    }
  }
  return uVar13;
}

