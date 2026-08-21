
/* WARNING: Type propagation algorithm not settling */

ulong FUN_01093ab4(long param_1,code *param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  size_t sVar11;
  size_t sVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  undefined2 *puVar19;
  char *pcVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined8 uVar29;
  size_t __n;
  undefined8 *puVar30;
  long lVar31;
  short sVar32;
  undefined8 *puVar33;
  char *__s;
  undefined8 *puVar34;
  uint uVar35;
  char *pcVar36;
  char *local_a0;
  char *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
                    /* try { // try from 01093acc to 01193ae3 has its CatchHandler @ 01093ce8 */
  uVar21 = *(ulong *)(param_2 + 0xb8);
  local_6c = FT_Stream_Seek(param_1,0);
  if (local_6c != 0) {
    return (ulong)local_6c;
  }
  uStack_78 = 0x800000000;
  local_80 = 0x100000001;
  local_68 = 0;
  puVar7 = (ulong *)ft_mem_alloc(uVar21,0x44070,&local_68);
  if (local_68 == 0) {
    puVar7[8] = (ulong)&local_80;
    *(undefined2 *)(puVar7 + 3) = 0x7fff;
    puVar7[0x880d] = uVar21;
                    /* try { // try from 01093ba0 to 01193ba3 has its CatchHandler @ 01093c94 */
    puVar7[0x880b] = 0;
    puVar1 = puVar7 + 0x880c;
    puVar7[0x880a] = 0;
    puVar7[0x8809] = 0;
    *puVar1 = uVar21;
                    /* try { // try from 01093bc8 to 01193be3 has its CatchHandler @ 01093c98 */
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    local_64 = 0;
    puVar13 = (undefined1 *)ft_mem_realloc(uVar9,1,0,0x400,0,&local_64);
                    /* try { // try from 01093bec to 01193bef has its CatchHandler @ 01093c90 */
    if (local_64 == 0) {
                    /* try { // try from 01093c14 to 01193c1b has its CatchHandler @ 01093c54 */
      local_90 = FUN_0109562c;
                    /* try { // try from 01093c1c to 01193d47 has its CatchHandler @ 010939b4 */
      local_a0 = (char *)0x1;
      *puVar13 = 0;
      local_98._0_4_ = 0x100;
      sVar12 = 0;
      uVar23 = 0x400;
LAB_01093d20:
      do {
        lVar28 = 0;
        lVar24 = FT_Stream_TryRead(param_1,puVar13 + sVar12,uVar23 - sVar12);
        sVar11 = lVar24 + sVar12;
        sVar12 = sVar11;
        if (0 < (long)sVar11) {
          do {
            pbVar14 = puVar13 + lVar28;
            uVar35 = (uint)*pbVar14;
            if ((uint)local_98 == uVar35) {
              local_98._0_4_ = 0x100;
              lVar31 = lVar28;
            }
            else {
                    /* try { // try from 01093d94 to 01193da3 has its CatchHandler @ 010942e0 */
              lVar22 = 0;
                    /* try { // try from 01093db8 to 01193deb has its CatchHandler @ 010942d8 */
              while ((uVar35 != 10 && (uVar35 != 0xd))) {
                if ((long)sVar11 <= lVar28 + lVar22 + 1) goto LAB_01093dcc;
                lVar31 = lVar22 + 1;
                lVar22 = lVar22 + 1;
                uVar35 = (uint)pbVar14[lVar31];
              }
                    /* catch() { ... } // from try @ 01093c14 with catch @ 01093c54 */
              pcVar10 = puVar13 + lVar28;
              pcVar10[lVar22] = '\0';
              lVar31 = lVar28 + lVar22;
              if (((*pcVar10 != '\x1a') && (*pcVar10 != '#')) && (lVar28 < lVar31)) {
                    /* catch() { ... } // from try @ 01093bec with catch @ 01093c90 */
                    /* catch() { ... } // from try @ 01093ba0 with catch @ 01093c94 */
                local_64 = (*local_90)(pbVar14,lVar22,local_a0,&local_90,puVar7);
                    /* catch() { ... } // from try @ 01093bc8 with catch @ 01093c98 */
                    /* catch() { ... } // from try @ 01093a14 with catch @ 01093c9c */
                    /* catch() { ... } // from try @ 01093a5c with catch @ 01093ca0 */
                if (local_64 == 0xffffffff) {
                    /* catch() { ... } // from try @ 010939f0 with catch @ 01093ca4 */
                  local_64 = (*local_90)(pbVar14,lVar22,local_a0,&local_90,puVar7);
                }
                if (local_64 != 0) goto LAB_01093e74;
              }
              local_a0 = (char *)((long)local_a0 + 1);
              pcVar10[lVar22] = (char)uVar35;
              uVar17 = 10;
                    /* catch() { ... } // from try @ 01093acc with catch @ 01093ce8 */
              if (uVar35 != 0xd) {
                uVar17 = 0x100;
              }
              local_98._0_4_ = 0xd;
              if (uVar35 != 10) {
                local_98._0_4_ = uVar17;
              }
            }
            lVar28 = lVar31 + 1;
            sVar12 = sVar11 - lVar28;
          } while (sVar12 != 0 && lVar28 <= (long)sVar11);
        }
LAB_01093dcc:
        if (lVar24 == 0) break;
        if (lVar28 != 0) {
          memmove(puVar13,puVar13 + lVar28,sVar12);
          goto LAB_01093d20;
        }
        if (0xffff < uVar23) {
          local_64 = 6;
          break;
        }
        puVar13 = (undefined1 *)ft_mem_realloc(uVar9,1,uVar23,uVar23 << 1,puVar13,&local_64);
        sVar12 = uVar23;
        uVar23 = uVar23 << 1;
      } while (local_64 == 0);
    }
LAB_01093e74:
    ft_mem_free(uVar9,puVar13);
    local_68 = local_64;
    uVar23 = puVar7[7];
                    /* try { // try from 01093e90 to 01193ea7 has its CatchHandler @ 01094324 */
    if (local_64 == 0) {
      if (uVar23 != 0) {
        if (*(int *)(uVar23 + 0x30) != 8) {
          *(undefined2 *)(uVar23 + 0x34) = *(undefined2 *)(uVar23 + 8);
        }
        if (puVar7[1] != *(long *)(uVar23 + 0x70) + *(long *)(uVar23 + 0x58)) {
          *(undefined2 *)(uVar23 + 0x880f0) = 1;
        }
        if ((*(long *)(uVar23 + 0x70) != 0 || *(long *)(uVar23 + 0x58) != 0) &&
           (*(int *)puVar7[8] != 0)) {
          sVar32 = (short)puVar7[3];
          uVar35 = (int)*(short *)((long)puVar7 + 0x1c) - (int)sVar32;
          if (uVar35 != *(ushort *)(uVar23 + 8)) {
            *(short *)(uVar23 + 8) = (short)uVar35;
            *(undefined2 *)(uVar23 + 0x880f0) = 1;
          }
          if (*(short *)(uVar23 + 0xc) != sVar32) {
            *(short *)(uVar23 + 0xc) = sVar32;
            *(undefined2 *)(uVar23 + 0x880f0) = 1;
          }
          sVar32 = *(short *)((long)puVar7 + 0x1e);
                    /* try { // try from 01093f6c to 01193f6f has its CatchHandler @ 01094290 */
          if (*(short *)(uVar23 + 0x10) != sVar32) {
            *(short *)(uVar23 + 0x10) = sVar32;
            *(undefined2 *)(uVar23 + 0x880f0) = 1;
          }
                    /* try { // try from 01093f90 to 01193f93 has its CatchHandler @ 0109428c */
          sVar3 = (short)puVar7[4];
          if (*(short *)(uVar23 + 0x12) != sVar3) {
            *(short *)(uVar23 + 0x12) = sVar3;
                    /* try { // try from 01093fb4 to 01193fb7 has its CatchHandler @ 01094288 */
            *(short *)(uVar23 + 0xe) = -sVar3;
            *(undefined2 *)(uVar23 + 0x880f0) = 1;
          }
          if ((int)sVar3 + (int)sVar32 != (uint)*(ushort *)(uVar23 + 10)) {
            *(short *)(uVar23 + 10) = (short)((int)sVar3 + (int)sVar32);
          }
        }
      }
                    /* try { // try from 01093fd8 to 01193fef has its CatchHandler @ 01094294 */
      if ((*puVar7 & 1) == 0) {
        if (uVar23 == 0) {
          local_68 = 3;
        }
        else {
          lVar24 = *(long *)(uVar23 + 0xa0);
          if (lVar24 != 0) {
                    /* try { // try from 01093ff8 to 01193ffb has its CatchHandler @ 01094284 */
            lVar24 = ft_mem_realloc(*(undefined8 *)(uVar23 + 0x880f8),1,lVar24,lVar24 + 1,
                                    *(undefined8 *)(uVar23 + 0x98),&local_68);
            uVar23 = puVar7[7];
            *(long *)(uVar23 + 0x98) = lVar24;
            if (local_68 != 0) goto LAB_01093e98;
            *(undefined1 *)(lVar24 + *(long *)(uVar23 + 0xa0)) = 0;
            uVar23 = puVar7[7];
          }
        }
      }
      else if (((uint)*puVar7 >> 5 & 1) == 0) {
        uVar23 = 0;
        local_68 = 0xb9;
      }
      else {
        uVar23 = 0;
        local_68 = 0xba;
      }
      uVar8 = *puVar1;
    }
    else {
LAB_01093e98:
      FUN_010966c4(uVar23);
      ft_mem_free(uVar21,puVar7[7]);
      puVar7[7] = 0;
      uVar23 = 0;
      uVar8 = *puVar1;
    }
joined_r0x01093ebc:
    if (uVar8 != 0) {
      ft_mem_free(uVar8,puVar7[0x8809]);
      puVar7[0x880a] = 0;
      puVar7[0x8809] = 0;
      puVar7[0x880c] = 0;
      puVar7[0x880b] = 0;
    }
    ft_mem_free(uVar21,puVar7);
  }
  else {
    if (puVar7 != (ulong *)0x0) {
      uVar23 = 0;
      uVar8 = puVar7[0x880c];
      goto joined_r0x01093ebc;
    }
                    /* try { // try from 01093e20 to 01193e2b has its CatchHandler @ 010942dc */
    uVar23 = 0;
  }
  local_6c = local_68;
  if ((local_68 & 0xff) == 0xb0) {
    FUN_01095198(param_2);
    return 2;
  }
  if (local_68 != 0) {
    return (ulong)local_68;
  }
  *(ulong *)(param_2 + 0x108) = uVar23;
  if (0 < param_3) {
    FUN_01095198(param_2);
    return 6;
  }
                    /* try { // try from 01094034 to 0119403f has its CatchHandler @ 01094268 */
  uVar8 = *(ulong *)(param_2 + 0x10);
                    /* try { // try from 01094040 to 01194113 has its CatchHandler @ 01093d48 */
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 1;
  *(ulong *)(param_2 + 0x10) = uVar8 | 0x92;
  if ((uVar23 != 0) && (lVar24 = *(long *)(uVar23 + 0x80), lVar24 != 0)) {
    uVar15 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
    puVar25 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = 0x11b2dc7023 / uVar15;
    }
    puVar30 = puVar25 + (0x11b2dc7023 - uVar16 * uVar15);
    puVar33 = (undefined8 *)*puVar30;
    if (puVar33 != (undefined8 *)0x0) {
      do {
        if ((*(char *)*puVar33 == 'S') && (iVar5 = strcmp((char *)*puVar33,"SPACING"), iVar5 == 0))
        {
          lVar28 = *(long *)(uVar23 + 0x90);
          lVar31 = puVar33[1];
                    /* catch() { ... } // from try @ 0109421c with catch @ 01094260 */
                    /* catch() { ... } // from try @ 01094034 with catch @ 01094268 */
                    /* catch() { ... } // from try @ 01093ff8 with catch @ 01094284 */
                    /* catch() { ... } // from try @ 01093fb4 with catch @ 01094288 */
                    /* catch() { ... } // from try @ 01093f90 with catch @ 0109428c */
                    /* catch() { ... } // from try @ 01093f6c with catch @ 01094290 */
                    /* catch() { ... } // from try @ 01093fd8 with catch @ 01094294 */
                    /* catch() { ... } // from try @ 010941d0 with catch @ 01094298 */
                    /* catch() { ... } // from try @ 01094114 with catch @ 010942a4 */
          if ((lVar28 + lVar31 * 0x18 != 0) &&
             ((((*(int *)(lVar28 + lVar31 * 0x18 + 8) == 1 &&
                (pbVar14 = *(byte **)(lVar28 + lVar31 * 0x18 + 0x10), pbVar14 != (byte *)0x0)) &&
               (uVar35 = *pbVar14 - 0x43, uVar35 < 0x2b)) &&
              ((1L << ((ulong)uVar35 & 0x3f) & 0x40100000401U) != 0)))) {
            *(ulong *)(param_2 + 0x10) = uVar8 | 0x96;
          }
          break;
        }
        puVar33 = puVar30 + -1;
        puVar30 = puVar25 + (uVar15 - 1);
        if (puVar25 <= puVar33) {
          puVar30 = puVar33;
        }
        puVar33 = (undefined8 *)*puVar30;
      } while (puVar33 != (undefined8 *)0x0);
      if (lVar24 == 0) goto LAB_01094140;
    }
    uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
    puVar25 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
    uVar8 = 0;
    if (uVar16 != 0) {
      uVar8 = 0xd22dfc4691da86 / uVar16;
    }
    puVar30 = puVar25 + (0xd22dfc4691da86 - uVar8 * uVar16);
    puVar33 = (undefined8 *)*puVar30;
    if (puVar33 != (undefined8 *)0x0) {
      do {
                    /* try { // try from 01094114 to 0119411f has its CatchHandler @ 010942a4 */
                    /* try { // try from 01094120 to 011941cf has its CatchHandler @ 01093d48 */
        if ((*(char *)*puVar33 == 'F') &&
           (iVar5 = strcmp((char *)*puVar33,"FAMILY_NAME"), iVar5 == 0)) {
          if ((*(long *)(uVar23 + 0x90) + puVar33[1] * 0x18 != 0) &&
             (lVar24 = *(long *)(*(long *)(uVar23 + 0x90) + puVar33[1] * 0x18 + 0x10), lVar24 != 0))
          {
            uVar9 = ft_mem_strdup(uVar21,lVar24,&local_6c);
            *(undefined8 *)(param_2 + 0x28) = uVar9;
            if (local_6c != 0) {
              return (ulong)local_6c;
            }
            uVar8 = *(ulong *)(param_2 + 0x108);
            goto LAB_01094148;
          }
          break;
        }
        puVar33 = puVar30 + -1;
        puVar30 = puVar25 + (uVar16 - 1);
        if (puVar25 <= puVar33) {
          puVar30 = puVar33;
        }
        puVar33 = (undefined8 *)*puVar30;
      } while (puVar33 != (undefined8 *)0x0);
    }
  }
LAB_01094140:
  *(undefined8 *)(param_2 + 0x28) = 0;
  uVar8 = uVar23;
LAB_01094148:
  local_90 = (code *)((ulong)local_90 & 0xffffffff00000000);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((uVar8 == 0) || (*(long *)(uVar8 + 0x80) == 0)) {
    local_98 = (char *)0x0;
    local_a0 = (char *)0x0;
    pcVar10 = (char *)0x0;
    sVar12 = 0;
    __s = (char *)0x0;
    sVar11 = 0;
    bVar4 = true;
LAB_01094240:
    pcVar20 = "Regular";
    pcVar26 = (char *)0x8;
    __n = 7;
  }
  else {
    iVar5 = *(int *)(*(long *)(uVar8 + 0xe8) + 4);
    uVar15 = (ulong)iVar5;
    puVar25 = *(undefined8 **)(*(long *)(uVar8 + 0xe8) + 0x10);
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = 0x4b528ce / uVar15;
    }
    puVar30 = puVar25 + (0x4b528ce - uVar16 * uVar15);
    puVar33 = (undefined8 *)*puVar30;
    if (puVar33 == (undefined8 *)0x0) {
LAB_01094370:
      local_98 = (char *)0x0;
      uVar29 = 2;
    }
    else {
      uVar29 = 2;
      do {
        if ((*(char *)*puVar33 == 'S') && (iVar6 = strcmp((char *)*puVar33,"SLANT"), iVar6 == 0)) {
          lVar24 = *(long *)(uVar8 + 0x90);
          lVar28 = puVar33[1];
                    /* catch() { ... } // from try @ 01093db8 with catch @ 010942d8 */
                    /* catch() { ... } // from try @ 01093e20 with catch @ 010942dc */
                    /* catch() { ... } // from try @ 01093d94 with catch @ 010942e0 */
          if ((lVar24 + lVar28 * 0x18 == 0) ||
             ((*(int *)(lVar24 + lVar28 * 0x18 + 8) != 1 ||
              (pbVar14 = *(byte **)(lVar24 + lVar28 * 0x18 + 0x10), pbVar14 == (byte *)0x0))))
          goto LAB_01094370;
          local_98 = (char *)0x0;
          uVar29 = 2;
                    /* catch() { ... } // from try @ 01093e90 with catch @ 01094324 */
          if ((*pbVar14 - 0x49 < 0x27) &&
             ((1L << ((ulong)(*pbVar14 - 0x49) & 0x3f) & 0x4100000041U) != 0)) {
            uVar29 = 3;
            *(undefined8 *)(param_2 + 0x18) = 1;
            local_98 = "Oblique";
            if ((*pbVar14 | 0x20) != 0x6f) {
              local_98 = "Italic";
            }
          }
          goto LAB_01094378;
        }
        puVar33 = puVar30 + -1;
        puVar30 = puVar25 + (uVar15 - 1);
        if (puVar25 <= puVar33) {
          puVar30 = puVar33;
        }
        puVar33 = (undefined8 *)*puVar30;
                    /* try { // try from 010941d0 to 011941db has its CatchHandler @ 01094298 */
      } while (puVar33 != (undefined8 *)0x0);
      local_98 = (char *)0x0;
    }
LAB_01094378:
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = 0x1040b9ffdf23ff2 / uVar15;
    }
    puVar30 = puVar25 + (0x1040b9ffdf23ff2 - uVar16 * uVar15);
    puVar33 = (undefined8 *)*puVar30;
    if (puVar33 != (undefined8 *)0x0) {
      do {
                    /* try { // try from 010943b4 to 0119442f has its CatchHandler @ 010943b4
                       catch() { ... } // from try @ 010943b4 with catch @ 010943b4
                       catch() { ... } // from try @ 010945b4 with catch @ 010943b4 */
        if ((*(char *)*puVar33 == 'W') &&
           (iVar6 = strcmp((char *)*puVar33,"WEIGHT_NAME"), iVar6 == 0)) {
                    /* try { // try from 01094448 to 01194457 has its CatchHandler @ 01094700 */
          lVar24 = *(long *)(uVar8 + 0x90);
          lVar28 = puVar33[1];
                    /* try { // try from 01094460 to 0119446b has its CatchHandler @ 010946fc */
          if ((lVar24 + lVar28 * 0x18 != 0) &&
             (((*(int *)(lVar24 + lVar28 * 0x18 + 8) == 1 &&
               (pbVar14 = *(byte **)(lVar24 + lVar28 * 0x18 + 0x10), pbVar14 != (byte *)0x0)) &&
              ((*pbVar14 | 0x20) == 0x62)))) {
                    /* try { // try from 01094494 to 0119449f has its CatchHandler @ 01094784 */
            local_a0 = "Bold";
            *(undefined8 *)(param_2 + 0x18) = uVar29;
            goto LAB_010943e0;
          }
          break;
        }
        puVar33 = puVar30 + -1;
        puVar30 = puVar25 + (iVar5 + -1);
        if (puVar25 <= puVar33) {
          puVar30 = puVar33;
        }
        puVar33 = (undefined8 *)*puVar30;
      } while (puVar33 != (undefined8 *)0x0);
    }
    local_a0 = (char *)0x0;
LAB_010943e0:
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = 0xa497d01e0277e346 / uVar15;
    }
    puVar30 = puVar25 + (-0x5b682fe1fd881cba - uVar16 * uVar15);
    puVar33 = (undefined8 *)*puVar30;
    __s = (char *)0x0;
    if (puVar33 != (undefined8 *)0x0) {
      do {
        if ((*(char *)*puVar33 == 'S') &&
           (iVar6 = strcmp((char *)*puVar33,"SETWIDTH_NAME"), iVar6 == 0)) {
          lVar24 = *(long *)(uVar8 + 0x90);
          lVar28 = puVar33[1];
                    /* try { // try from 010944ac to 011944bb has its CatchHandler @ 01094710 */
                    /* try { // try from 010944c4 to 011944d3 has its CatchHandler @ 010946f8 */
          if ((lVar24 + lVar28 * 0x18 == 0) ||
             ((*(int *)(lVar24 + lVar28 * 0x18 + 8) != 1 ||
              (pcVar10 = *(char **)(lVar24 + lVar28 * 0x18 + 0x10), pcVar10 == (char *)0x0)))) {
            __s = (char *)0x0;
          }
          else {
            cVar2 = *pcVar10;
            __s = (char *)0x0;
                    /* try { // try from 010944e8 to 011944f7 has its CatchHandler @ 010946e4 */
            if (((cVar2 != '\0') && (cVar2 != 'N')) && (cVar2 != 'n')) {
              __s = pcVar10;
            }
          }
          goto LAB_01094504;
        }
                    /* try { // try from 01094430 to 0119443b has its CatchHandler @ 010947e8 */
        puVar33 = puVar30 + -1;
        puVar30 = puVar25 + (iVar5 + -1);
        if (puVar25 <= puVar33) {
          puVar30 = puVar33;
        }
        puVar33 = (undefined8 *)*puVar30;
      } while (puVar33 != (undefined8 *)0x0);
      __s = (char *)0x0;
    }
LAB_01094504:
                    /* try { // try from 01094508 to 01194517 has its CatchHandler @ 01094710 */
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = 0xa65ed4f273006f7 / uVar15;
    }
                    /* try { // try from 0109451c to 01194523 has its CatchHandler @ 010946e0 */
    puVar30 = puVar25 + (0xa65ed4f273006f7 - uVar16 * uVar15);
    puVar33 = (undefined8 *)*puVar30;
    if (puVar33 != (undefined8 *)0x0) {
      do {
        if ((*(char *)*puVar33 == 'A') &&
           (iVar6 = strcmp((char *)*puVar33,"ADD_STYLE_NAME"), iVar6 == 0)) {
          lVar24 = *(long *)(uVar8 + 0x90);
          lVar28 = puVar33[1];
          if ((lVar24 + lVar28 * 0x18 != 0) &&
             ((*(int *)(lVar24 + lVar28 * 0x18 + 8) == 1 &&
              (pcVar20 = *(char **)(lVar24 + lVar28 * 0x18 + 0x10), pcVar20 != (char *)0x0)))) {
            cVar2 = *pcVar20;
            if ((cVar2 == '\0') || (cVar2 == 'N')) {
              __n = 0;
              pcVar26 = (char *)0x0;
              pcVar20 = (char *)0x0;
              goto joined_r0x01094bd0;
            }
            if (cVar2 != 'n') {
              __n = strlen(pcVar20);
              pcVar26 = (char *)(__n + 1);
              goto joined_r0x01094bd0;
            }
          }
          break;
        }
        puVar33 = puVar30 + -1;
        puVar30 = puVar25 + (iVar5 + -1);
        if (puVar25 <= puVar33) {
          puVar30 = puVar33;
        }
        puVar33 = (undefined8 *)*puVar30;
                    /* try { // try from 01094564 to 0119456f has its CatchHandler @ 01094720 */
      } while (puVar33 != (undefined8 *)0x0);
    }
    pcVar26 = (char *)0x0;
    __n = 0;
    pcVar20 = (char *)0x0;
joined_r0x01094bd0:
    if (local_a0 == (char *)0x0) {
      local_a0 = (char *)0x0;
      bVar4 = true;
      pcVar10 = (char *)0x0;
      pcVar36 = (char *)0x0;
      if (local_98 != (char *)0x0) goto LAB_0109459c;
LAB_010946bc:
      sVar11 = 0;
      if (__s != (char *)0x0) goto LAB_010945b4;
LAB_010946c4:
      sVar12 = 0;
    }
    else {
      pcVar10 = (char *)strlen(local_a0);
      bVar4 = false;
      pcVar26 = pcVar10 + (long)(pcVar26 + 1);
      pcVar36 = pcVar10;
      if (local_98 == (char *)0x0) goto LAB_010946bc;
LAB_0109459c:
                    /* try { // try from 0109459c to 011945b3 has its CatchHandler @ 010946dc */
      sVar11 = strlen(local_98);
      pcVar26 = pcVar26 + sVar11 + 1;
      pcVar10 = pcVar36;
      if (__s == (char *)0x0) goto LAB_010946c4;
LAB_010945b4:
                    /* try { // try from 010945b4 to 01194847 has its CatchHandler @ 010943b4 */
      sVar12 = strlen(__s);
      pcVar26 = pcVar26 + sVar12 + 1;
    }
    if (pcVar26 == (char *)0x0) goto LAB_01094240;
  }
  puVar13 = (undefined1 *)ft_mem_alloc(uVar9,pcVar26,&local_90);
                    /* catch() { ... } // from try @ 0109459c with catch @ 010946dc */
                    /* catch() { ... } // from try @ 0109451c with catch @ 010946e0 */
                    /* catch() { ... } // from try @ 010944e8 with catch @ 010946e4 */
  *(undefined1 **)(param_2 + 0x30) = puVar13;
  if ((uint)local_90 != 0) {
    return (ulong)local_90 & 0xffffffff;
  }
                    /* catch() { ... } // from try @ 010944c4 with catch @ 010946f8 */
  if (pcVar20 != (char *)0x0) {
                    /* catch() { ... } // from try @ 01094460 with catch @ 010946fc */
                    /* catch() { ... } // from try @ 01094448 with catch @ 01094700 */
    memcpy(puVar13,pcVar20,__n);
    if (__n != 0) {
                    /* catch() { ... } // from try @ 010944ac with catch @ 01094710
                       catch() { ... } // from try @ 01094508 with catch @ 01094710 */
      if (__n < 8) {
        uVar8 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 01094564 with catch @ 01094720 */
        uVar8 = __n & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          puVar27 = puVar13 + 3;
          uVar16 = uVar8;
          do {
            uVar9 = *(undefined8 *)(puVar27 + -3);
            if ((char)uVar9 == ' ') {
              puVar27[-3] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 8) == ' ') {
              puVar27[-2] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x10) == ' ') {
              puVar27[-1] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x18) == ' ') {
              *puVar27 = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x20) == ' ') {
              puVar27[1] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x28) == ' ') {
              puVar27[2] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x30) == ' ') {
                    /* catch() { ... } // from try @ 01094494 with catch @ 01094784 */
              puVar27[3] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x38) == ' ') {
              puVar27[4] = 0x2d;
            }
            uVar16 = uVar16 - 8;
            puVar27 = puVar27 + 8;
          } while (uVar16 != 0);
                    /* catch() { ... } // from try @ 01094430 with catch @ 010947e8 */
          if (__n == uVar8) goto LAB_01094818;
        }
      }
      lVar24 = __n - uVar8;
      pcVar20 = puVar13 + uVar8;
      do {
        if (*pcVar20 == ' ') {
          *pcVar20 = '-';
        }
        lVar24 = lVar24 + -1;
        pcVar20 = pcVar20 + 1;
      } while (lVar24 != 0);
    }
LAB_01094818:
    puVar13 = puVar13 + __n;
  }
  if (!bVar4) {
    puVar27 = puVar13;
    if (puVar13 != *(undefined1 **)(param_2 + 0x30)) {
      puVar27 = puVar13 + 1;
      *puVar13 = 0x20;
    }
    memcpy(puVar27,local_a0,(size_t)pcVar10);
    puVar13 = puVar27 + (long)pcVar10;
  }
  if (local_98 != (char *)0x0) {
    puVar27 = puVar13;
    if (puVar13 != *(undefined1 **)(param_2 + 0x30)) {
      puVar27 = puVar13 + 1;
      *puVar13 = 0x20;
    }
    memcpy(puVar27,local_98,sVar11);
    puVar13 = puVar27 + sVar11;
  }
  if (__s != (char *)0x0) {
    puVar27 = puVar13;
    if (puVar13 != *(undefined1 **)(param_2 + 0x30)) {
      puVar27 = puVar13 + 1;
      *puVar13 = 0x20;
    }
    memcpy(puVar27,__s,sVar12);
    if (sVar12 != 0) {
      if (sVar12 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = sVar12 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          puVar13 = puVar27 + 3;
          uVar16 = uVar8;
          do {
            uVar9 = *(undefined8 *)(puVar13 + -3);
            if ((char)uVar9 == ' ') {
              puVar13[-3] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 8) == ' ') {
              puVar13[-2] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x10) == ' ') {
              puVar13[-1] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x18) == ' ') {
              *puVar13 = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x20) == ' ') {
              puVar13[1] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x28) == ' ') {
              puVar13[2] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x30) == ' ') {
              puVar13[3] = 0x2d;
            }
            if ((char)((ulong)uVar9 >> 0x38) == ' ') {
              puVar13[4] = 0x2d;
            }
            uVar16 = uVar16 - 8;
            puVar13 = puVar13 + 8;
          } while (uVar16 != 0);
          if (sVar12 == uVar8) goto LAB_010949ac;
        }
      }
      do {
        if (puVar27[uVar8] == ' ') {
          puVar27[uVar8] = 0x2d;
        }
        uVar8 = uVar8 + 1;
      } while (sVar12 != uVar8);
    }
LAB_010949ac:
    puVar13 = puVar27 + sVar12;
  }
  *puVar13 = 0;
  local_6c = (uint)local_90;
  if ((uint)local_90 != 0) {
    return (ulong)local_90 & 0xffffffff;
  }
  *(long *)(param_2 + 0x20) = *(long *)(uVar23 + 0x50) + 1;
  *(undefined4 *)(param_2 + 0x38) = 1;
  puVar25 = (undefined8 *)ft_mem_realloc(uVar21,0x20,0,1,0,&local_6c);
  *(undefined8 **)(param_2 + 0x40) = puVar25;
                    /* try { // try from 010949fc to 01194b0b has its CatchHandler @ 010949fc
                       catch() { ... } // from try @ 010949fc with catch @ 010949fc
                       catch() { ... } // from try @ 01094b1c with catch @ 010949fc */
  if (local_6c != 0) {
    return (ulong)local_6c;
  }
  puVar25[1] = 0;
  *puVar25 = 0;
  puVar25[3] = 0;
  puVar25[2] = 0;
  uVar35 = *(int *)(uVar23 + 0x48) + *(int *)(uVar23 + 0x40);
  *(short *)puVar25 = (short)uVar35;
  lVar24 = *(long *)(uVar23 + 0x80);
  if (lVar24 != 0) {
    uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
    puVar30 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
    uVar8 = 0;
    if (uVar16 != 0) {
      uVar8 = 0xe5a81696e406d0e4 / uVar16;
    }
    puVar33 = puVar30 + (-0x1a57e9691bf92f1c - uVar8 * uVar16);
    puVar34 = (undefined8 *)*puVar33;
    if (puVar34 != (undefined8 *)0x0) {
      do {
        if ((*(char *)*puVar34 == 'A') &&
           (iVar5 = strcmp((char *)*puVar34,"AVERAGE_WIDTH"), iVar5 == 0)) {
          if (*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 != 0) {
            lVar28 = *(long *)(*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 + 0x10) + 5;
            iVar5 = (int)(lVar28 / 0x280000000) + (int)(lVar28 >> 0x3f);
            iVar6 = (int)(SUB168(SEXT816(lVar28) * SEXT816(0x6666666666666667),8) >> 2);
            goto LAB_01094aa8;
          }
          break;
        }
        puVar34 = puVar33 + -1;
        puVar33 = puVar30 + (uVar16 - 1);
        if (puVar30 <= puVar34) {
          puVar33 = puVar34;
        }
        puVar34 = (undefined8 *)*puVar33;
      } while (puVar34 != (undefined8 *)0x0);
    }
  }
  uVar35 = -(uVar35 >> 0xf & 1) & 0xfffe0000 | (uVar35 & 0xffff) << 1;
  iVar5 = (int)uVar35 / 3 + ((int)uVar35 >> 0x1f);
  iVar6 = (int)uVar35 / 3 + ((int)uVar35 >> 0x1f);
LAB_01094aa8:
  uVar35 = iVar6 - (iVar5 >> 0x1f);
  *(short *)((long)puVar25 + 2) = (short)uVar35;
  if ((uVar23 != 0) && (lVar24 != 0)) {
    uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
    puVar30 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
    uVar8 = 0;
    if (uVar16 != 0) {
      uVar8 = 0x7c2e86a261970 / uVar16;
    }
    puVar33 = puVar30 + (0x7c2e86a261970 - uVar8 * uVar16);
    puVar34 = (undefined8 *)*puVar33;
    if (puVar34 != (undefined8 *)0x0) {
      do {
                    /* try { // try from 01094b0c to 01194b1b has its CatchHandler @ 01094bb0 */
        if ((*(char *)*puVar34 == 'P') &&
           (iVar5 = strcmp((char *)*puVar34,"POINT_SIZE"), iVar5 == 0)) {
          if (*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 != 0) {
            lVar28 = (*(long *)(*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 + 0x10) * 0x70800 +
                     0x8d27) / 0x11a4e;
            goto LAB_01094b30;
          }
          break;
        }
        puVar34 = puVar33 + -1;
        puVar33 = puVar30 + (uVar16 - 1);
                    /* try { // try from 01094b1c to 01194bcb has its CatchHandler @ 010949fc */
        if (puVar30 <= puVar34) {
          puVar33 = puVar34;
        }
        puVar34 = (undefined8 *)*puVar33;
      } while (puVar34 != (undefined8 *)0x0);
    }
  }
  lVar28 = (long)(int)(-(uVar35 >> 0xf & 1) & 0xffc00000 | (uVar35 & 0xffff) << 6);
LAB_01094b30:
  puVar25[1] = lVar28;
  if ((uVar23 == 0) || (lVar24 == 0)) {
    puVar25[3] = lVar28;
    goto LAB_01094e2c;
  }
  uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
  puVar30 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
  uVar8 = 0;
  if (uVar16 != 0) {
    uVar8 = 0x7be9f1cfe463a / uVar16;
  }
  puVar33 = puVar30 + (0x7be9f1cfe463a - uVar8 * uVar16);
  puVar34 = (undefined8 *)*puVar33;
  if (puVar34 == (undefined8 *)0x0) {
    lVar31 = 0;
LAB_01094bdc:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01094c34 with catch @ 01094bdc
                       catch(type#1 @ 00000000) { ... } // from try @ 01094df4 with catch @ 01094bdc
                        */
    uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
    puVar30 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
    uVar8 = 0;
    if (uVar16 != 0) {
      uVar8 = 0x1dbb06c58844f585 / uVar16;
    }
    puVar33 = puVar30 + (0x1dbb06c58844f585 - uVar8 * uVar16);
    puVar34 = (undefined8 *)*puVar33;
    if (puVar34 == (undefined8 *)0x0) {
      sVar32 = 0;
    }
    else {
      do {
                    /* try { // try from 01094c2c to 01194c33 has its CatchHandler @ 01094f00 */
                    /* try { // try from 01094c34 to 01194d8b has its CatchHandler @ 01094bdc */
        if ((*(char *)*puVar34 == 'R') &&
           (iVar5 = strcmp((char *)*puVar34,"RESOLUTION_X"), iVar5 == 0)) {
          if (*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 != 0) {
            sVar32 = *(short *)(*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 + 0x10);
            goto LAB_01094d4c;
          }
          break;
        }
        puVar34 = puVar33 + -1;
        puVar33 = puVar30 + (uVar16 - 1);
        if (puVar30 <= puVar34) {
          puVar33 = puVar34;
        }
        puVar34 = (undefined8 *)*puVar33;
      } while (puVar34 != (undefined8 *)0x0);
      sVar32 = 0;
LAB_01094d4c:
      if (lVar24 == 0) goto joined_r0x01094dcc;
    }
    uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
    puVar30 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
    uVar8 = 0;
    if (uVar16 != 0) {
      uVar8 = 0x1dbb06c58844f586 / uVar16;
    }
    puVar33 = puVar30 + (0x1dbb06c58844f586 - uVar8 * uVar16);
    puVar34 = (undefined8 *)*puVar33;
    if (puVar34 != (undefined8 *)0x0) {
                    /* try { // try from 01094d8c to 01194d93 has its CatchHandler @ 01094eec */
      do {
        if ((*(char *)*puVar34 == 'R') &&
           (iVar5 = strcmp((char *)*puVar34,"RESOLUTION_Y"), iVar5 == 0)) {
          if (*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 != 0) {
            sVar3 = *(short *)(*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 + 0x10);
            goto joined_r0x01095048;
          }
          break;
        }
        puVar34 = puVar33 + -1;
        puVar33 = puVar30 + (uVar16 - 1);
        if (puVar30 <= puVar34) {
          puVar33 = puVar34;
        }
        puVar34 = (undefined8 *)*puVar33;
      } while (puVar34 != (undefined8 *)0x0);
    }
  }
  else {
    do {
      if ((*(char *)*puVar34 == 'P') && (iVar5 = strcmp((char *)*puVar34,"PIXEL_SIZE"), iVar5 == 0))
      {
        if (*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 != 0) {
          lVar31 = (long)((ulong)(uint)(*(int *)(*(long *)(uVar23 + 0x90) + puVar34[1] * 0x18 + 0x10
                                                ) << 0x10) << 0x20) >> 0x2a;
          puVar25[3] = lVar31;
          goto joined_r0x01094d18;
        }
        break;
      }
      puVar34 = puVar33 + -1;
      puVar33 = puVar30 + (uVar16 - 1);
      if (puVar30 <= puVar34) {
        puVar33 = puVar34;
      }
      puVar34 = (undefined8 *)*puVar33;
    } while (puVar34 != (undefined8 *)0x0);
                    /* catch() { ... } // from try @ 01094b0c with catch @ 01094bb0 */
    lVar31 = 0;
joined_r0x01094d18:
    if (lVar24 != 0) goto LAB_01094bdc;
    sVar32 = 0;
  }
joined_r0x01094dcc:
  sVar3 = 0;
joined_r0x01095048:
  if (lVar31 == 0) {
    puVar25[3] = lVar28;
    if (sVar3 == 0) goto LAB_01094e2c;
                    /* try { // try from 01094dec to 01194df3 has its CatchHandler @ 01094ed4 */
                    /* try { // try from 01094df4 to 01194f03 has its CatchHandler @ 01094bdc */
    lVar31 = (lVar28 * sVar3) / 0x48;
    puVar25[3] = lVar31;
  }
  lVar28 = lVar31;
  if ((sVar32 != 0) && (sVar3 != 0)) {
    lVar24 = lVar28 * sVar32;
    lVar28 = 0;
    if ((long)sVar3 != 0) {
      lVar28 = lVar24 / (long)sVar3;
    }
  }
LAB_01094e2c:
  puVar25[2] = lVar28;
  lVar28 = *(long *)(uVar23 + 0x60);
  lVar24 = ft_mem_realloc(uVar21,0x10,0,*(undefined8 *)(uVar23 + 0x50),0,&local_6c);
  *(long *)(param_2 + 0x110) = lVar24;
  uVar8 = (ulong)local_6c;
  if (local_6c == 0) {
    *(undefined4 *)(param_2 + 0x130) = 0;
    uVar8 = *(ulong *)(uVar23 + 0x50);
    if (uVar8 != 0) {
      lVar31 = *(long *)(uVar23 + 0x38);
      uVar16 = 0;
      plVar18 = (long *)(lVar28 + 8);
      puVar19 = (undefined2 *)(lVar24 + 8);
      do {
        lVar24 = *plVar18;
        *puVar19 = (short)uVar16;
        *(long *)(puVar19 + -4) = lVar24;
        if ((uVar16 < 0xffffffff) && (lVar24 == lVar31)) {
          *(int *)(param_2 + 0x130) = (int)uVar16;
        }
        uVar16 = uVar16 + 1;
        plVar18 = plVar18 + 7;
        puVar19 = puVar19 + 8;
      } while (uVar16 < uVar8);
    }
    lVar24 = *(long *)(uVar23 + 0x80);
    if (lVar24 != 0) {
      uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
      puVar25 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01094dec with catch @ 01094ed4
                        */
      uVar8 = 0;
      if (uVar16 != 0) {
        uVar8 = 0xc07278ace16875f0 / uVar16;
      }
      puVar30 = puVar25 + (-0x3f8d87531e978a10 - uVar8 * uVar16);
      puVar33 = (undefined8 *)*puVar30;
      if (puVar33 != (undefined8 *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01094d8c with catch @ 01094eec
                        */
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01094c2c with catch @ 01094f00
                        */
          if ((*(char *)*puVar33 == 'C') &&
             (iVar5 = strcmp((char *)*puVar33,"CHARSET_REGISTRY"), iVar5 == 0)) {
            lVar28 = *(long *)(uVar23 + 0x90) + puVar33[1] * 0x18;
            goto joined_r0x0109501c;
          }
          puVar33 = puVar30 + -1;
          puVar30 = puVar25 + (uVar16 - 1);
          if (puVar25 <= puVar33) {
            puVar30 = puVar33;
          }
          puVar33 = (undefined8 *)*puVar30;
        } while (puVar33 != (undefined8 *)0x0);
      }
    }
    lVar28 = 0;
joined_r0x0109501c:
    if ((uVar23 != 0) && (lVar24 != 0)) {
      uVar16 = (ulong)*(int *)(*(long *)(uVar23 + 0xe8) + 4);
      puVar25 = *(undefined8 **)(*(long *)(uVar23 + 0xe8) + 0x10);
      uVar8 = 0;
      if (uVar16 != 0) {
        uVar8 = 0xc072785b708b7306 / uVar16;
      }
      puVar30 = puVar25 + (-0x3f8d87a48f748cfa - uVar8 * uVar16);
      puVar33 = (undefined8 *)*puVar30;
      if (puVar33 != (undefined8 *)0x0) {
        do {
          if ((*(char *)*puVar33 == 'C') &&
             (iVar5 = strcmp((char *)*puVar33,"CHARSET_ENCODING"), iVar5 == 0)) {
            if (lVar28 != 0) {
              lVar24 = *(long *)(uVar23 + 0x90);
              lVar31 = puVar33[1];
              if ((((lVar24 + lVar31 * 0x18 != 0) && (*(int *)(lVar28 + 8) == 1)) &&
                  (*(int *)(lVar24 + lVar31 * 0x18 + 8) == 1)) &&
                 ((*(long *)(lVar28 + 0x10) != 0 &&
                  (lVar24 = *(long *)(lVar24 + lVar31 * 0x18 + 0x10), lVar24 != 0)))) {
                uVar9 = ft_mem_strdup(uVar21,lVar24,&local_6c);
                *(undefined8 *)(param_2 + 0xf8) = uVar9;
                if (local_6c != 0) {
                  return (ulong)local_6c;
                }
                pbVar14 = (byte *)ft_mem_strdup(uVar21,*(undefined8 *)(lVar28 + 0x10),&local_6c);
                *(byte **)(param_2 + 0x100) = pbVar14;
                if (local_6c != 0) {
                  return (ulong)local_6c;
                }
                if ((((*pbVar14 | 0x20) == 0x69) && ((pbVar14[1] | 0x20) == 0x73)) &&
                   ((pbVar14[2] | 0x20) == 0x6f)) {
                  iVar5 = strcmp((char *)(pbVar14 + 3),"10646");
                  if ((iVar5 == 0) ||
                     ((iVar5 = strcmp((char *)(pbVar14 + 3),"8859"), iVar5 == 0 &&
                      (iVar5 = strcmp(*(char **)(param_2 + 0xf8),"1"), iVar5 == 0)))) {
                    local_88 = 0x10003756e6963;
                    goto LAB_01095154;
                  }
                }
                local_88 = 0;
LAB_01095154:
                local_90 = param_2;
                uVar21 = FT_CMap_New(&DAT_0172aca8,0,&local_90,0);
                return uVar21 & 0xffffffff;
              }
            }
            break;
          }
          puVar33 = puVar30 + -1;
          puVar30 = puVar25 + (uVar16 - 1);
          if (puVar25 <= puVar33) {
            puVar30 = puVar33;
          }
          puVar33 = (undefined8 *)*puVar30;
        } while (puVar33 != (undefined8 *)0x0);
      }
    }
    local_88 = 0x741444f42;
    local_90 = param_2;
    uVar8 = FT_CMap_New(&DAT_0172aca8,0,&local_90,0);
    uVar8 = uVar8 & 0xffffffff;
    if (*(int *)(param_2 + 0x48) != 0) {
      *(undefined8 *)(param_2 + 0xa8) = **(undefined8 **)(param_2 + 0x50);
    }
  }
  return uVar8;
}

