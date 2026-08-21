
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01091edc(long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  short *psVar16;
  ulong *puVar17;
  ulong uVar18;
  size_t __n;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  ulong uVar22;
  short *psVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  long *plVar27;
  ulong *puVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 uVar32;
  char *__s;
  undefined8 uVar33;
  undefined8 *puVar34;
  char *__s_00;
  long lVar35;
  undefined8 uVar36;
  int iVar37;
  long lVar38;
  undefined1 *puVar39;
  undefined8 *puVar40;
  ulong uVar41;
  short *psVar42;
  undefined8 *puVar43;
  char *pcVar44;
  size_t __n_00;
  uint uVar45;
  int iVar46;
  size_t __n_01;
  size_t __n_02;
  int iVar47;
  char *local_b8;
  long local_a8;
  char *local_a0;
  int local_94;
  undefined8 local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  int local_64;
  
  uVar32 = param_2[0x17];
  local_64 = FT_Stream_Seek(param_1,0);
  if (local_64 != 0) {
    return 3;
  }
  local_64 = FT_Stream_ReadFields(param_1,&DAT_0145fab2,param_2 + 0x2c);
  if (local_64 != 0) {
    return 3;
  }
  if (param_2[0x2c] != 0x70636601) {
    return 3;
  }
  if (0x3fffffe < param_2[0x2d] - 1) {
    return 3;
  }
  lVar15 = ft_mem_realloc(uVar32,0x20,0,param_2[0x2d],0,&local_64);
  param_2[0x2e] = lVar15;
  if (local_64 != 0) {
    return 3;
  }
  uVar22 = 0;
  if (param_2[0x2d] == 0) {
LAB_01092030:
    uVar26 = 0;
    do {
      if (uVar22 == uVar26 + 1) {
        uVar26 = *(ulong *)(param_1 + 8);
        lVar35 = param_2[0x2e];
        goto LAB_010922e0;
      }
      bVar1 = false;
      uVar18 = 0;
      uVar41 = *(ulong *)(lVar15 + 0x18);
      uVar30 = 1;
      do {
        puVar17 = (ulong *)(lVar15 + uVar18 * 0x20);
        puVar28 = (ulong *)(lVar15 + uVar30 * 0x20);
        uVar31 = puVar28[3];
        if (uVar31 < uVar41) {
          uStack_78 = puVar17[3];
          local_80 = puVar17[2];
          bVar1 = true;
          uStack_88 = puVar17[1];
          local_90 = *puVar17;
          uVar22 = puVar28[2];
          puVar17[3] = puVar28[3];
          puVar17[2] = uVar22;
                    /* try { // try from 01092090 to 01192273 has its CatchHandler @ 01092090
                       catch() { ... } // from try @ 01092090 with catch @ 01092090
                       catch() { ... } // from try @ 01092600 with catch @ 01092090 */
          uVar22 = *puVar28;
          puVar17[1] = puVar28[1];
          *puVar17 = uVar22;
          puVar28[3] = uStack_78;
          puVar28[2] = local_80;
          puVar28[1] = uStack_88;
          *puVar28 = local_90;
          uVar31 = puVar28[3];
        }
        if ((uVar31 < puVar17[2]) || (uVar31 - puVar17[2] < puVar17[3])) {
          local_64 = 9;
          goto LAB_01092110;
        }
        uVar22 = param_2[0x2d];
        bVar2 = uVar30 < uVar22 + ~uVar26;
        uVar18 = uVar30;
        uVar41 = uVar31;
        uVar30 = (ulong)((int)uVar30 + 1);
      } while (bVar2);
    } while ((bVar1) && (uVar26 = (ulong)((int)uVar26 + 1), uVar26 < uVar22 - 1));
    lVar15 = param_2[0x2e];
    uVar26 = *(ulong *)(param_1 + 8);
    lVar35 = lVar15;
    if (uVar22 != 1) {
LAB_010922e0:
      lVar15 = lVar35;
      uVar18 = 1;
      do {
        if ((uVar26 < *(ulong *)(lVar15 + 0x10)) ||
           (uVar26 - *(ulong *)(lVar15 + 0x10) < *(ulong *)(lVar15 + 0x18))) goto LAB_01092028;
        lVar15 = lVar15 + 0x20;
        bVar1 = uVar18 < uVar22 - 1;
        uVar18 = (ulong)((int)uVar18 + 1);
      } while (bVar1);
    }
  }
  else {
    uVar26 = 1;
    do {
      local_64 = FT_Stream_ReadFields(param_1,&DAT_0145fac2,lVar15);
      if (local_64 != 0) goto LAB_01092110;
      uVar22 = param_2[0x2d];
      lVar15 = lVar15 + 0x20;
      bVar1 = uVar26 < uVar22;
      local_64 = 0;
      uVar26 = (ulong)((int)uVar26 + 1);
    } while (bVar1);
    lVar15 = param_2[0x2e];
    local_64 = 0;
    if (uVar22 != 1) goto LAB_01092030;
    uVar26 = *(ulong *)(param_1 + 8);
    lVar35 = lVar15;
  }
  uVar18 = uVar26 - *(ulong *)(lVar15 + 0x18);
  if (uVar26 < *(ulong *)(lVar15 + 0x18)) {
LAB_01092028:
    local_64 = 8;
LAB_01092110:
    ft_mem_free(uVar32,param_2[0x2e]);
    param_2[0x2e] = 0;
    if (local_64 != 0) {
      return 3;
    }
    uVar22 = param_2[0x2d];
    lVar35 = 0;
    uVar33 = param_2[0x17];
    local_64 = 0;
  }
  else {
    if (uVar18 < *(ulong *)(lVar15 + 0x10)) {
      *(ulong *)(lVar15 + 0x10) = uVar18;
    }
    uVar33 = param_2[0x17];
  }
  local_94 = 0;
  if (uVar22 != 0) {
    uVar26 = 0;
    puVar17 = (ulong *)(lVar35 + 0x10);
    do {
      if (puVar17[-2] == 1) {
        if ((puVar17[1] < *(ulong *)(param_1 + 0x10)) ||
           (iVar11 = FT_Stream_Skip(param_1,puVar17[1] - *(ulong *)(param_1 + 0x10)), iVar11 != 0))
        {
          uVar21 = 0x53;
          goto LAB_01092188;
        }
        uVar22 = *puVar17;
        local_90 = local_90 & 0xffffffff00000000;
        uVar12 = FT_Stream_ReadULongLE(param_1,&local_90);
                    /* try { // try from 010922a8 to 011922c3 has its CatchHandler @ 01092660 */
        lVar15 = 0;
        if ((int)local_90 != 0) {
          lVar35 = 0;
          goto LAB_01092194;
        }
        lVar35 = lVar15;
        if ((uVar12 & 0xffffff00) != 0) goto LAB_01092194;
        if ((uVar12 >> 2 & 1) == 0) {
          uVar26 = FT_Stream_ReadULongLE(param_1,&local_90);
        }
        else {
          uVar26 = FT_Stream_ReadULong(param_1,&local_90);
        }
        if ((int)local_90 != 0) {
          lVar15 = 0;
          lVar35 = 0;
          goto LAB_01092194;
        }
        uVar18 = (ulong)(int)uVar26;
        if (uVar22 / 9 < uVar18) {
          lVar35 = 0;
          goto LAB_010923b8;
        }
        *(int *)(param_2 + 0x3f) = (int)uVar26;
        lVar35 = ft_mem_realloc(uVar33,0x18,0,uVar18,0,&local_90);
        lVar15 = 0;
        if ((int)local_90 != 0) goto LAB_01092194;
        if (uVar18 == 0) goto LAB_01092510;
        if ((uVar12 >> 2 & 1) != 0) {
          uVar41 = 0;
          lVar15 = lVar35;
          goto LAB_010924b0;
        }
        uVar41 = 0;
        lVar15 = lVar35;
        goto LAB_01092404;
      }
      uVar26 = uVar26 + 1;
      puVar17 = puVar17 + 4;
    } while (uVar26 < uVar22);
  }
  uVar21 = 3;
LAB_01092188:
  lVar15 = 0;
  lVar35 = 0;
  goto LAB_01092190;
  while( true ) {
    uVar41 = uVar41 + 1;
    lVar15 = lVar15 + 0x18;
    if (uVar18 <= uVar41) break;
LAB_01092404:
    iVar11 = FT_Stream_ReadFields(param_1,&DAT_0145faee,lVar15);
    local_90 = CONCAT44(local_90._4_4_,iVar11);
    if (iVar11 != 0) goto LAB_0109253c;
  }
  goto LAB_010924e0;
  while( true ) {
                    /* try { // try from 010925e8 to 011925ff has its CatchHandler @ 01092630 */
    *psVar16 = (byte)local_90 - 0x80;
    psVar16[1] = local_90._1_1_ - 0x80;
                    /* try { // try from 01092600 to 01192687 has its CatchHandler @ 01092090 */
    psVar16[2] = local_90._2_1_ - 0x80;
    psVar16[3] = local_90._3_1_ - 0x80;
    psVar16[5] = 0;
    psVar16[4] = local_90._4_1_ - 0x80;
    local_64 = 0;
    psVar16[8] = 0;
    psVar16[9] = 0;
    psVar16[10] = 0;
    psVar16[0xb] = 0;
                    /* catch() { ... } // from try @ 010925e8 with catch @ 01092630 */
    if ((psVar16[1] < *psVar16) ||
       ((int)(short)(local_90._4_1_ - 0x80) + (int)(short)(local_90._3_1_ - 0x80) < 0)) {
                    /* catch() { ... } // from try @ 010924b8 with catch @ 01092648 */
      psVar16[4] = 0;
                    /* catch() { ... } // from try @ 01092274 with catch @ 0109264c */
      psVar16[0] = 0;
      psVar16[1] = 0;
      psVar16[2] = 0;
      psVar16[3] = 0;
    }
    uVar22 = uVar22 + 1;
    psVar16 = psVar16 + 0xc;
    if (uVar26 <= uVar22) break;
LAB_010925d0:
    local_64 = FT_Stream_ReadFields(param_1,&DAT_0145fbaa,&local_90);
    if (local_64 != 0) {
      psVar16[8] = 0;
      psVar16[9] = 0;
      psVar16[10] = 0;
      psVar16[0xb] = 0;
      goto LAB_010927f8;
    }
  }
  goto LAB_010927e0;
LAB_010927f8:
  ft_mem_free(uVar33,param_2[0x42]);
  param_2[0x42] = 0;
  if (local_64 != 0) {
    return 3;
  }
  uVar22 = param_2[0x2d];
  goto joined_r0x01092818;
  while( true ) {
    uVar41 = uVar41 + 1;
    lVar15 = lVar15 + 0x18;
    if (uVar18 <= uVar41) break;
LAB_010924b0:
                    /* try { // try from 010924b8 to 011924c3 has its CatchHandler @ 01092648 */
    iVar11 = FT_Stream_ReadFields(param_1,&DAT_0145fada,lVar15);
    local_90 = CONCAT44(local_90._4_4_,iVar11);
    if (iVar11 != 0) goto LAB_0109253c;
  }
LAB_010924e0:
  if ((uVar26 & 3) == 0) {
LAB_01092510:
    if ((uVar12 >> 2 & 1) == 0) {
      uVar26 = FT_Stream_ReadULongLE(param_1,&local_90);
    }
    else {
                    /* try { // try from 01092528 to 0119253f has its CatchHandler @ 01092668 */
      uVar26 = FT_Stream_ReadULong(param_1,&local_90);
    }
    if ((int)local_90 != 0) {
LAB_0109253c:
      lVar15 = 0;
      goto LAB_01092194;
    }
    if (uVar26 <= uVar22 + uVar18 * -9) {
                    /* catch() { ... } // from try @ 01092454 with catch @ 01092664 */
                    /* catch() { ... } // from try @ 01092528 with catch @ 01092668 */
                    /* catch() { ... } // from try @ 0109231c with catch @ 0109266c */
      lVar15 = ft_mem_realloc(uVar33,1,0,uVar26 + 1,0,&local_90);
                    /* catch() { ... } // from try @ 01092824 with catch @ 01092688
                       catch() { ... } // from try @ 010928e8 with catch @ 01092688
                       catch() { ... } // from try @ 01092964 with catch @ 01092688 */
      if ((int)local_90 == 0) {
        iVar11 = FT_Stream_Read(param_1,lVar15,uVar26);
        local_90 = CONCAT44(local_90._4_4_,iVar11);
        if (iVar11 == 0) {
          lVar38 = ft_mem_realloc(uVar33,0x18,0,uVar18,0,&local_90);
                    /* try { // try from 010926c8 to 011926d7 has its CatchHandler @ 010929d0 */
          if ((int)local_90 == 0) {
            param_2[0x40] = lVar38;
            if (uVar18 != 0) {
              lVar24 = 0;
              uVar22 = 0;
              do {
                uVar41 = *(ulong *)(lVar35 + lVar24);
                    /* try { // try from 010926e4 to 011926f3 has its CatchHandler @ 01092a14 */
                if (((long)uVar41 < 0) || (uVar26 < uVar41)) {
LAB_010928b4:
                  uVar21 = 9;
                  goto LAB_01092190;
                }
                uVar36 = ft_mem_strdup(uVar33,lVar15 + uVar41,&local_90);
                *(undefined8 *)(lVar38 + lVar24) = uVar36;
                if ((int)local_90 != 0) goto LAB_01092194;
                cVar4 = *(char *)(lVar35 + lVar24 + 8);
                *(char *)(lVar38 + lVar24 + 8) = cVar4;
                uVar41 = *(ulong *)(lVar35 + lVar24 + 0x10);
                if (cVar4 == '\0') {
                  *(ulong *)(lVar38 + lVar24 + 0x10) = uVar41;
                }
                else {
                  if (((long)uVar41 < 0) || (uVar26 < uVar41)) goto LAB_010928b4;
                  uVar36 = ft_mem_strdup(uVar33,lVar15 + uVar41,&local_90);
                  *(undefined8 *)(lVar38 + lVar24 + 0x10) = uVar36;
                  if ((int)local_90 != 0) goto LAB_01092194;
                }
                uVar22 = uVar22 + 1;
                lVar24 = lVar24 + 0x18;
              } while (uVar22 < uVar18);
            }
            local_90 = local_90 & 0xffffffff00000000;
          }
        }
      }
      goto LAB_01092194;
    }
LAB_010923b8:
    lVar15 = 0;
    uVar21 = 8;
  }
  else {
    iVar11 = FT_Stream_Skip(param_1,4 - (uVar26 & 3));
    local_90 = CONCAT44(local_90._4_4_,iVar11);
    if (iVar11 == 0) goto LAB_01092510;
    uVar21 = 0x53;
    lVar15 = 0;
  }
LAB_01092190:
  local_90 = CONCAT44(local_90._4_4_,uVar21);
LAB_01092194:
  ft_mem_free(uVar33,lVar35);
  ft_mem_free(uVar33,lVar15);
  local_94 = (int)local_90;
  if ((int)local_90 == 0) {
    uVar22 = param_2[0x2d];
    if (uVar22 != 0) {
      plVar27 = (long *)param_2[0x2e];
      uVar26 = 0;
      plVar29 = plVar27;
      do {
        if (*plVar29 == 0x100) {
          bVar1 = true;
          goto LAB_01092238;
        }
        uVar26 = uVar26 + 1;
        plVar29 = plVar29 + 4;
      } while (uVar26 < uVar22);
    }
    iVar11 = FUN_010937ec(param_1,param_2,2);
    if ((iVar11 == 0) && (uVar22 = param_2[0x2d], uVar22 != 0)) {
      plVar27 = (long *)param_2[0x2e];
      bVar1 = false;
      local_94 = 0;
LAB_01092238:
      uVar33 = param_2[0x17];
      uVar26 = 0;
      puVar17 = (ulong *)(plVar27 + 2);
      do {
        if (puVar17[-2] == 4) {
                    /* try { // try from 01092274 to 0119227f has its CatchHandler @ 0109264c */
          if (puVar17[1] < *(ulong *)(param_1 + 0x10)) {
            return 3;
          }
          iVar11 = FT_Stream_Skip(param_1,puVar17[1] - *(ulong *)(param_1 + 0x10));
          if (iVar11 != 0) {
            return 3;
          }
          uVar22 = *puVar17;
                    /* try { // try from 0109231c to 01192423 has its CatchHandler @ 0109266c */
          local_64 = 0;
          uVar12 = FT_Stream_ReadULongLE(param_1,&local_64);
          if (local_64 != 0) {
            return 3;
          }
          uVar45 = uVar12 & 0xffffff00;
          if ((uVar45 | 0x100) != 0x100) {
            return 3;
          }
          if (uVar45 == 0) {
            if ((uVar12 >> 2 & 1) == 0) {
              uVar26 = FT_Stream_ReadULongLE(param_1,&local_64);
            }
            else {
              uVar26 = FT_Stream_ReadULong(param_1,&local_64);
            }
          }
          else {
            if ((uVar12 >> 2 & 1) == 0) {
                    /* try { // try from 01092454 to 01192463 has its CatchHandler @ 01092664 */
              uVar13 = FT_Stream_ReadUShortLE(param_1,&local_64);
            }
            else {
              uVar13 = FT_Stream_ReadUShort(param_1,&local_64);
            }
            uVar26 = (ulong)(uVar13 & 0xffff);
          }
          if (local_64 != 0) {
            return 3;
          }
          param_2[0x41] = uVar26;
          if (uVar26 == 0) {
            return 3;
          }
          if (uVar45 == 0) {
            uVar22 = uVar22 / 0xc;
          }
          else {
            uVar22 = uVar22 / 5;
          }
          if (uVar22 < uVar26) {
            return 3;
          }
          psVar16 = (short *)ft_mem_realloc(uVar33,0x18,0,uVar26,0,&local_64);
          param_2[0x42] = psVar16;
          if (local_64 != 0) {
            return 3;
          }
          puVar3 = &DAT_0145fb6a;
          if ((uVar12 & 4) == 0) {
            puVar3 = &DAT_0145fb8a;
          }
          if (uVar45 == 0) {
            uVar22 = 0;
            psVar42 = psVar16 + 4;
            goto LAB_0109277c;
          }
          uVar22 = 0;
          goto LAB_010925d0;
        }
        uVar26 = uVar26 + 1;
        puVar17 = puVar17 + 4;
      } while (uVar26 < uVar22);
    }
  }
  return 3;
LAB_0109277c:
  do {
                    /* try { // try from 0109278c to 011927f3 has its CatchHandler @ 01092a24 */
    local_64 = FT_Stream_ReadFields(param_1,puVar3,psVar42 + -4);
    psVar42[4] = 0;
    psVar42[5] = 0;
    psVar42[6] = 0;
    psVar42[7] = 0;
    if (local_64 != 0) goto LAB_010927f8;
    psVar23 = psVar42;
    if (psVar42[-3] < psVar42[-4]) {
LAB_010927c4:
      psVar42[-4] = 0;
      psVar42[-3] = 0;
      psVar42[-2] = 0;
      psVar42[-1] = 0;
      *psVar23 = 0;
    }
    else if ((int)*psVar42 + (int)psVar42[-1] < 0) {
      psVar23 = psVar16 + 4;
      goto LAB_010927c4;
    }
    uVar22 = uVar22 + 1;
    psVar16 = psVar42 + 8;
    local_64 = 0;
    psVar42 = psVar42 + 0xc;
  } while (uVar22 < uVar26);
LAB_010927e0:
  uVar22 = param_2[0x2d];
joined_r0x01092818:
  local_64 = 0;
  local_94 = 0;
                    /* try { // try from 01092818 to 01192823 has its CatchHandler @ 010929cc */
  if (uVar22 == 0) {
    return 3;
  }
  uVar33 = param_2[0x17];
                    /* try { // try from 01092824 to 011928c3 has its CatchHandler @ 01092688 */
  uVar26 = 0;
  puVar17 = (ulong *)(param_2[0x2e] + 0x10);
  while (puVar17[-2] != 8) {
    uVar26 = uVar26 + 1;
    puVar17 = puVar17 + 4;
    if (uVar22 <= uVar26) {
      return 3;
    }
  }
  if (puVar17[1] < *(ulong *)(param_1 + 0x10)) {
    return 3;
  }
  iVar11 = FT_Stream_Skip(param_1,puVar17[1] - *(ulong *)(param_1 + 0x10));
  if (iVar11 != 0) {
    return 3;
  }
  uVar22 = *puVar17;
  iVar11 = FT_Stream_EnterFrame(param_1,8);
  local_90 = CONCAT44(local_90._4_4_,iVar11);
  if (iVar11 != 0) {
    return 3;
  }
  uVar26 = FT_Stream_GetULongLE(param_1);
  uVar12 = (uint)uVar26;
  if ((uVar12 >> 2 & 1) == 0) {
    lVar15 = FT_Stream_GetULongLE(param_1);
  }
  else {
    lVar15 = FT_Stream_GetULong(param_1);
  }
                    /* try { // try from 010928c4 to 011928cf has its CatchHandler @ 010929b4 */
  FT_Stream_ExitFrame(param_1);
                    /* try { // try from 010928d0 to 011928e7 has its CatchHandler @ 010929b0 */
  if ((uVar26 & 0xffffff00) != 0) {
    return 3;
  }
  if ((long)param_2[0x41] < 0) {
    return 3;
  }
                    /* try { // try from 010928e8 to 011928f7 has its CatchHandler @ 01092688 */
  if (lVar15 != param_2[0x41]) {
    return 3;
  }
                    /* try { // try from 010928f8 to 0119290b has its CatchHandler @ 010929ac */
  puVar17 = (ulong *)ft_mem_realloc(uVar33,8,0,lVar15,0,&local_90);
                    /* try { // try from 0109290c to 0119291f has its CatchHandler @ 01092994 */
  if ((int)local_90 != 0) {
    return 3;
  }
  if (lVar15 == 0) {
LAB_01092968:
                    /* catch() { ... } // from try @ 0109293c with catch @ 01092968 */
    if ((uVar12 >> 2 & 1) == 0) {
      FT_Stream_ReadULongLE(param_1,&local_90);
      if ((int)local_90 == 0) {
        FT_Stream_ReadULongLE(param_1,&local_90);
        if ((int)local_90 == 0) {
                    /* catch() { ... } // from try @ 0109290c with catch @ 01092994 */
          FT_Stream_ReadULongLE(param_1,&local_90);
          if ((int)local_90 == 0) {
                    /* catch() { ... } // from try @ 010928f8 with catch @ 010929ac */
                    /* catch() { ... } // from try @ 010928d0 with catch @ 010929b0 */
            FT_Stream_ReadULongLE(param_1,&local_90);
                    /* catch() { ... } // from try @ 010928c4 with catch @ 010929b4 */
joined_r0x01092a0c:
            if ((int)local_90 == 0) {
              if (lVar15 != 0) {
                    /* catch() { ... } // from try @ 010926e4 with catch @ 01092a14 */
                lVar35 = 0x10;
                puVar28 = puVar17;
                do {
                  uVar18 = *puVar28;
                    /* catch() { ... } // from try @ 0109278c with catch @ 01092a24 */
                  if ((-1 < (long)uVar18) && (uVar18 <= uVar22)) {
                    *(ulong *)(param_2[0x42] + lVar35) = *(long *)(param_1 + 0x10) + uVar18;
                  }
                  lVar15 = lVar15 + -1;
                  lVar35 = lVar35 + 0x18;
                  puVar28 = puVar28 + 1;
                } while (lVar15 != 0);
              }
              param_2[0x46] = uVar26;
            }
          }
        }
      }
    }
    else {
      FT_Stream_ReadULong(param_1,&local_90);
                    /* catch() { ... } // from try @ 01092818 with catch @ 010929cc */
                    /* catch() { ... } // from try @ 010926c8 with catch @ 010929d0 */
      if ((int)local_90 == 0) {
        FT_Stream_ReadULong(param_1,&local_90);
        if ((int)local_90 == 0) {
          FT_Stream_ReadULong(param_1,&local_90);
          if ((int)local_90 == 0) {
            FT_Stream_ReadULong(param_1,&local_90);
            goto joined_r0x01092a0c;
          }
        }
      }
    }
  }
  else {
    lVar35 = lVar15;
    puVar28 = puVar17;
    if ((uVar12 >> 2 & 1) == 0) {
      do {
        uVar18 = FT_Stream_ReadULongLE(param_1,&local_90);
        lVar35 = lVar35 + -1;
        *puVar28 = uVar18;
        puVar28 = puVar28 + 1;
      } while (lVar35 != 0);
    }
    else {
      do {
        uVar18 = FT_Stream_ReadULong(param_1,&local_90);
        lVar35 = lVar35 + -1;
        *puVar28 = uVar18;
        puVar28 = puVar28 + 1;
      } while (lVar35 != 0);
    }
                    /* try { // try from 01092964 to 01192a93 has its CatchHandler @ 01092688 */
    if ((int)local_90 == 0) goto LAB_01092968;
  }
  ft_mem_free(uVar33,puVar17);
  local_94 = (int)local_90;
  if ((int)local_90 != 0) {
    return 3;
  }
  if (param_2[0x2d] == 0) {
    return 3;
  }
  uVar33 = param_2[0x17];
  plVar29 = (long *)param_2[0x2e];
  uVar22 = 0;
  while (*plVar29 != 0x20) {
    uVar22 = uVar22 + 1;
    plVar29 = plVar29 + 4;
    if ((ulong)param_2[0x2d] <= uVar22) {
      return 3;
    }
  }
                    /* try { // try from 01092aa8 to 01192ae7 has its CatchHandler @ 01092aa8
                       catch() { ... } // from try @ 01092aa8 with catch @ 01092aa8
                       catch() { ... } // from try @ 01092af0 with catch @ 01092aa8 */
  if ((ulong)plVar29[3] < *(ulong *)(param_1 + 0x10)) {
    return 3;
  }
  iVar11 = FT_Stream_Skip(param_1,plVar29[3] - *(ulong *)(param_1 + 0x10));
  if (iVar11 != 0) {
    return 3;
  }
  iVar11 = FT_Stream_EnterFrame(param_1,0xe);
  local_90 = CONCAT44(local_90._4_4_,iVar11);
  if (iVar11 != 0) {
    return 3;
  }
  uVar12 = FT_Stream_GetULongLE(param_1);
                    /* try { // try from 01092ae8 to 01192aef has its CatchHandler @ 01092b3c */
  if ((uVar12 >> 2 & 1) == 0) {
                    /* try { // try from 01092af0 to 01192b73 has its CatchHandler @ 01092aa8 */
    sVar6 = FT_Stream_GetUShortLE(param_1);
    sVar7 = FT_Stream_GetUShortLE(param_1);
    sVar8 = FT_Stream_GetUShortLE(param_1);
    sVar9 = FT_Stream_GetUShortLE(param_1);
    uVar10 = FT_Stream_GetUShortLE(param_1);
  }
  else {
    sVar6 = FT_Stream_GetUShort(param_1);
                    /* catch() { ... } // from try @ 01092ae8 with catch @ 01092b3c */
    sVar7 = FT_Stream_GetUShort(param_1);
    sVar8 = FT_Stream_GetUShort(param_1);
    sVar9 = FT_Stream_GetUShort(param_1);
    uVar10 = FT_Stream_GetUShort(param_1);
  }
  iVar11 = (int)sVar8;
  iVar37 = (int)sVar9;
  iVar47 = (int)sVar7;
  iVar46 = (int)sVar6;
  *(undefined2 *)(param_2 + 0x45) = uVar10;
  FT_Stream_ExitFrame(param_1);
  if ((uVar12 & 0xffffff00) != 0) {
    return 3;
  }
  if (iVar46 < 0) {
    return 3;
  }
  if (iVar47 < iVar46) {
    return 3;
  }
  if (0xff < iVar47) {
    return 3;
  }
  if (iVar11 < 0) {
    return 3;
  }
  if (iVar37 < iVar11) {
    return 3;
  }
  if (0xff < iVar37) {
    return 3;
  }
  iVar5 = ((1 - iVar11) + iVar37) * ((1 - iVar46) + iVar47);
  lVar15 = ft_mem_realloc(uVar33,0x10,0,(long)iVar5,0,&local_90);
  if ((int)local_90 != 0) {
    return 3;
  }
  iVar14 = FT_Stream_EnterFrame(param_1,(long)(iVar5 * 2));
  local_90 = CONCAT44(local_90._4_4_,iVar14);
  if (iVar14 == 0) {
                    /* try { // try from 01092c54 to 01192c5b has its CatchHandler @ 01092ca8 */
                    /* try { // try from 01092c5c to 01192cdf has its CatchHandler @ 01092c1c */
    local_a8 = (long)iVar11;
    if ((uVar12 >> 2 & 1) == 0) {
      lVar24 = (long)iVar46 + -1;
      iVar14 = 0;
      lVar38 = (long)(iVar11 << 8);
      lVar35 = lVar24;
      do {
        do {
          sVar6 = FT_Stream_GetUShortLE(param_1);
          if (sVar6 != -1) {
            plVar29 = (long *)(lVar15 + (long)iVar14 * 0x10);
            iVar14 = iVar14 + 1;
            *(short *)(plVar29 + 1) = sVar6;
            *plVar29 = lVar38 + lVar35 + 1;
          }
                    /* catch() { ... } // from try @ 01092c54 with catch @ 01092ca8 */
          lVar35 = lVar35 + 1;
        } while (lVar35 < iVar47);
        lVar38 = lVar38 + 0x100;
        bVar2 = local_a8 < iVar37;
        lVar35 = lVar24;
        local_a8 = local_a8 + 1;
      } while (bVar2);
    }
    else {
      iVar14 = 0;
      lVar24 = (long)iVar46 + -1;
      lVar38 = (long)(iVar11 << 8);
      lVar35 = lVar24;
      do {
        do {
          sVar6 = FT_Stream_GetUShort(param_1);
                    /* try { // try from 01092cf4 to 01192d2b has its CatchHandler @ 01092cf4
                       catch() { ... } // from try @ 01092cf4 with catch @ 01092cf4
                       catch() { ... } // from try @ 01092d34 with catch @ 01092cf4 */
          if (sVar6 != -1) {
            plVar29 = (long *)(lVar15 + (long)iVar14 * 0x10);
            iVar14 = iVar14 + 1;
            *(short *)(plVar29 + 1) = sVar6;
            *plVar29 = lVar38 + lVar35 + 1;
          }
          lVar35 = lVar35 + 1;
        } while (lVar35 < iVar47);
        lVar38 = lVar38 + 0x100;
                    /* try { // try from 01092d2c to 01192d33 has its CatchHandler @ 01092d80 */
                    /* try { // try from 01092d34 to 01192db7 has its CatchHandler @ 01092cf4 */
        bVar2 = local_a8 < iVar37;
        lVar35 = lVar24;
        local_a8 = local_a8 + 1;
      } while (bVar2);
    }
    FT_Stream_ExitFrame(param_1);
    lVar15 = ft_mem_realloc(uVar33,0x10,(long)iVar5,(long)iVar14,lVar15,&local_90);
    if ((int)local_90 != 0) goto LAB_01092d70;
    param_2[0x43] = (long)iVar14;
    param_2[0x44] = lVar15;
    local_94 = 0;
  }
  else {
LAB_01092d70:
    ft_mem_free(uVar33,lVar15);
                    /* catch() { ... } // from try @ 01092d2c with catch @ 01092d80 */
    local_94 = (int)local_90;
    if ((int)local_90 != 0) {
      return 3;
    }
  }
  if ((bVar1) && (local_94 = FUN_010937ec(param_1,param_2,0x100), local_94 != 0)) {
    return 3;
  }
  uVar22 = param_2[2];
  param_2[1] = 0;
  *param_2 = 1;
  param_2[2] = uVar22 | 0x92;
  if (*(char *)((long)param_2 + 0x17b) != '\0') {
    param_2[2] = uVar22 | 0x96;
  }
  local_90 = local_90 & 0xffffffff00000000;
  lVar15 = (long)*(int *)(param_2 + 0x3f);
  uVar33 = param_2[0x17];
  param_2[3] = 0;
  if (*(int *)(param_2 + 0x3f) < 1) {
    __n_00 = 0;
                    /* try { // try from 01092ec0 to 01192f27 has its CatchHandler @ 01092ec0
                       catch() { ... } // from try @ 01092ec0 with catch @ 01092ec0
                       catch() { ... } // from try @ 01092f38 with catch @ 01092ec0 */
    __n_01 = 0;
    __s_00 = (char *)0x0;
    __s = (char *)0x0;
    __n_02 = 0;
    local_a0 = (char *)0x0;
    local_b8 = (char *)0x0;
    bVar1 = true;
LAB_0109310c:
    pcVar44 = "Regular";
    lVar15 = 8;
    __n = 7;
  }
  else {
    lVar35 = 1;
    puVar43 = (undefined8 *)(param_2[0x40] + -8);
    puVar20 = puVar43;
    do {
      puVar34 = puVar20;
      iVar11 = strcmp((char *)puVar34[1],"SLANT");
      puVar20 = puVar34 + 3;
      if (lVar15 <= lVar35) break;
      lVar35 = lVar35 + 1;
    } while (iVar11 != 0);
    __s = (char *)0x0;
    uVar36 = 2;
    if ((puVar20 != (undefined8 *)&DAT_00000010) && (iVar11 == 0)) {
      if (*(char *)(puVar34 + 2) == '\0') {
        __s = (char *)0x0;
        uVar36 = 2;
      }
      else {
        pbVar25 = (byte *)*puVar20;
        __s = (char *)0x0;
        uVar36 = 2;
        uVar12 = *pbVar25 - 0x49;
        if ((uVar12 < 0x27) && ((1L << ((ulong)uVar12 & 0x3f) & 0x4100000041U) != 0)) {
          param_2[3] = 1;
          __s = "Oblique";
          if ((*pbVar25 | 0x20) != 0x6f) {
            __s = "Italic";
          }
          uVar36 = 3;
        }
      }
    }
    lVar35 = 1;
    puVar20 = puVar43;
    do {
      puVar34 = puVar20;
      iVar11 = strcmp((char *)puVar34[1],"WEIGHT_NAME");
      puVar20 = puVar34 + 3;
      if (lVar15 <= lVar35) break;
      lVar35 = lVar35 + 1;
    } while (iVar11 != 0);
    local_a0 = (char *)0x0;
                    /* try { // try from 01092f28 to 01192f37 has its CatchHandler @ 01092f88 */
    if ((puVar20 != (undefined8 *)&DAT_00000010) && (iVar11 == 0)) {
                    /* try { // try from 01092f38 to 01192fbf has its CatchHandler @ 01092ec0 */
      if ((*(char *)(puVar34 + 2) == '\0') || ((*(byte *)*puVar20 | 0x20) != 0x62)) {
        local_a0 = (char *)0x0;
      }
      else {
        param_2[3] = uVar36;
        local_a0 = "Bold";
      }
    }
    lVar35 = 1;
    puVar20 = puVar43;
    do {
      puVar34 = puVar20;
      iVar11 = strcmp((char *)puVar34[1],"SETWIDTH_NAME");
      puVar20 = puVar34 + 3;
      if (lVar15 <= lVar35) break;
                    /* catch() { ... } // from try @ 01092f28 with catch @ 01092f88 */
      lVar35 = lVar35 + 1;
    } while (iVar11 != 0);
    __s_00 = (char *)0x0;
    if ((puVar20 != (undefined8 *)&DAT_00000010) && (iVar11 == 0)) {
      if (*(char *)(puVar34 + 2) == '\0') {
        __s_00 = (char *)0x0;
      }
      else {
        __s_00 = (char *)0x0;
        cVar4 = *(char *)*puVar20;
        if (((cVar4 != '\0') && (cVar4 != 'N')) && (cVar4 != 'n')) {
          __s_00 = (char *)*puVar20;
        }
      }
    }
    lVar35 = 1;
    do {
      puVar20 = puVar43;
      iVar11 = strcmp((char *)puVar20[1],"ADD_STYLE_NAME");
      puVar43 = puVar20 + 3;
      if (lVar15 <= lVar35) break;
      lVar35 = lVar35 + 1;
    } while (iVar11 != 0);
    if (puVar43 == (undefined8 *)&DAT_00000010) {
LAB_0109306c:
      pcVar44 = (char *)0x0;
      __n = 0;
      lVar15 = 0;
      if (local_a0 == (char *)0x0) goto LAB_0109307c;
LAB_010930bc:
      __n_01 = strlen(local_a0);
      lVar15 = lVar15 + __n_01 + 1;
      bVar1 = false;
      if (__s == (char *)0x0) goto LAB_01093090;
LAB_010930d8:
      __n_02 = strlen(__s);
      lVar15 = lVar15 + __n_02 + 1;
                    /* try { // try from 010930f0 to 011930ff has its CatchHandler @ 01093150 */
      local_b8 = __s;
      if (__s_00 == (char *)0x0) goto LAB_0109309c;
LAB_010930f4:
      __n_00 = strlen(__s_00);
                    /* try { // try from 01093100 to 01193187 has its CatchHandler @ 01093024 */
      lVar15 = lVar15 + __n_00 + 1;
    }
    else {
      if ((iVar11 == 0) && (*(char *)(puVar20 + 2) != '\0')) {
        pcVar44 = (char *)*puVar43;
                    /* try { // try from 01093024 to 011930ef has its CatchHandler @ 01093024
                       catch() { ... } // from try @ 01093024 with catch @ 01093024
                       catch() { ... } // from try @ 01093100 with catch @ 01093024 */
        cVar4 = *pcVar44;
        if ((cVar4 == '\0') || (cVar4 == 'N')) goto LAB_0109306c;
        if ((cVar4 == 'n') || (pcVar44 == (char *)0x0)) goto LAB_010930b4;
        __n = strlen(pcVar44);
        lVar15 = __n + 1;
      }
      else {
LAB_010930b4:
        __n = 0;
        lVar15 = 0;
        pcVar44 = (char *)0x0;
      }
      if (local_a0 != (char *)0x0) goto LAB_010930bc;
LAB_0109307c:
      local_a0 = (char *)0x0;
      __n_01 = 0;
      bVar1 = true;
      if (__s != (char *)0x0) goto LAB_010930d8;
LAB_01093090:
      local_b8 = (char *)0x0;
      __n_02 = 0;
      if (__s_00 != (char *)0x0) goto LAB_010930f4;
LAB_0109309c:
      __n_00 = 0;
    }
    if (lVar15 == 0) goto LAB_0109310c;
  }
  puVar19 = (undefined1 *)ft_mem_alloc(uVar33,lVar15,&local_90);
  param_2[6] = puVar19;
  if ((int)local_90 != 0) {
    return 3;
  }
  if (pcVar44 != (char *)0x0) {
    memcpy(puVar19,pcVar44,__n);
                    /* catch() { ... } // from try @ 010930f0 with catch @ 01093150 */
    if (__n != 0) {
      if (__n < 8) {
        uVar22 = 0;
      }
      else {
        uVar22 = __n & 0xfffffffffffffff8;
        if (uVar22 != 0) {
          puVar39 = puVar19 + 3;
          uVar26 = uVar22;
          do {
            uVar33 = *(undefined8 *)(puVar39 + -3);
            if ((char)uVar33 == ' ') {
              puVar39[-3] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 8) == ' ') {
              puVar39[-2] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x10) == ' ') {
              puVar39[-1] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x18) == ' ') {
              *puVar39 = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x20) == ' ') {
              puVar39[1] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x28) == ' ') {
              puVar39[2] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x30) == ' ') {
              puVar39[3] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x38) == ' ') {
              puVar39[4] = 0x2d;
            }
            uVar26 = uVar26 - 8;
            puVar39 = puVar39 + 8;
                    /* try { // try from 01093228 to 0119325f has its CatchHandler @ 01093228
                       catch() { ... } // from try @ 01093228 with catch @ 01093228
                       catch() { ... } // from try @ 0109326c with catch @ 01093228 */
          } while (uVar26 != 0);
          if (__n == uVar22) goto LAB_0109325c;
        }
      }
      lVar15 = __n - uVar22;
      pcVar44 = puVar19 + uVar22;
      do {
        if (*pcVar44 == ' ') {
          *pcVar44 = '-';
        }
        lVar15 = lVar15 + -1;
        pcVar44 = pcVar44 + 1;
      } while (lVar15 != 0);
    }
LAB_0109325c:
    puVar19 = puVar19 + __n;
  }
                    /* try { // try from 01093260 to 0119326b has its CatchHandler @ 010932b8 */
  if (!bVar1) {
    puVar39 = puVar19;
    if (puVar19 != (undefined1 *)param_2[6]) {
      puVar39 = puVar19 + 1;
      *puVar19 = 0x20;
    }
    memcpy(puVar39,local_a0,__n_01);
    puVar19 = puVar39 + __n_01;
    local_b8 = __s;
  }
  if (local_b8 != (char *)0x0) {
    puVar39 = puVar19;
    if (puVar19 != (undefined1 *)param_2[6]) {
      puVar39 = puVar19 + 1;
      *puVar19 = 0x20;
    }
                    /* catch() { ... } // from try @ 01093260 with catch @ 010932b8 */
    memcpy(puVar39,local_b8,__n_02);
    puVar19 = puVar39 + __n_02;
  }
  if (__s_00 != (char *)0x0) {
    puVar39 = puVar19;
    if (puVar19 != (undefined1 *)param_2[6]) {
      puVar39 = puVar19 + 1;
      *puVar19 = 0x20;
    }
    memcpy(puVar39,__s_00,__n_00);
                    /* try { // try from 010932f0 to 01193327 has its CatchHandler @ 010932f0
                       catch() { ... } // from try @ 010932f0 with catch @ 010932f0
                       catch() { ... } // from try @ 01093334 with catch @ 010932f0 */
    if (__n_00 != 0) {
      if (__n_00 < 8) {
        uVar22 = 0;
      }
      else {
        uVar22 = __n_00 & 0xfffffffffffffff8;
        if (uVar22 != 0) {
          puVar19 = puVar39 + 3;
          uVar26 = uVar22;
          do {
            uVar33 = *(undefined8 *)(puVar19 + -3);
                    /* try { // try from 01093328 to 01193333 has its CatchHandler @ 01093380 */
            if ((char)uVar33 == ' ') {
              puVar19[-3] = 0x2d;
                    /* try { // try from 01093334 to 011933b7 has its CatchHandler @ 010932f0 */
            }
            if ((char)((ulong)uVar33 >> 8) == ' ') {
                    /* catch() { ... } // from try @ 01093328 with catch @ 01093380 */
              puVar19[-2] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x10) == ' ') {
              puVar19[-1] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x18) == ' ') {
              *puVar19 = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x20) == ' ') {
              puVar19[1] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x28) == ' ') {
              puVar19[2] = 0x2d;
            }
            if ((char)((ulong)uVar33 >> 0x30) == ' ') {
              puVar19[3] = 0x2d;
            }
                    /* catch() { ... } // from try @ 010934e4 with catch @ 010933b8 */
            if ((char)((ulong)uVar33 >> 0x38) == ' ') {
              puVar19[4] = 0x2d;
            }
            uVar26 = uVar26 - 8;
            puVar19 = puVar19 + 8;
          } while (uVar26 != 0);
          if (__n_00 == uVar22) goto LAB_010933f4;
        }
      }
      do {
        if (puVar39[uVar22] == ' ') {
          puVar39[uVar22] = 0x2d;
        }
        uVar22 = uVar22 + 1;
      } while (__n_00 != uVar22);
    }
LAB_010933f4:
    puVar19 = puVar39 + __n_00;
  }
  *puVar19 = 0;
  local_94 = (int)local_90;
  if ((int)local_90 != 0) {
    return 3;
  }
  iVar11 = *(int *)(param_2 + 0x3f);
  if (iVar11 < 1) {
LAB_0109347c:
    param_2[5] = 0;
  }
  else {
                    /* try { // try from 01093414 to 0119341f has its CatchHandler @ 010935c8 */
    lVar15 = 1;
    puVar20 = (undefined8 *)(param_2[0x40] + -8);
    do {
      puVar43 = puVar20;
      iVar37 = strcmp((char *)puVar43[1],"FAMILY_NAME");
      puVar20 = puVar43 + 3;
      if (iVar11 <= lVar15) break;
      lVar15 = lVar15 + 1;
    } while (iVar37 != 0);
    if (((puVar20 == (undefined8 *)&DAT_00000010) || (iVar37 != 0)) ||
       (*(char *)(puVar43 + 2) == '\0')) goto LAB_0109347c;
    uVar33 = ft_mem_strdup(uVar32,*puVar20,&local_94);
    param_2[5] = uVar33;
    if (local_94 != 0) {
      return 3;
    }
  }
                    /* try { // try from 01093488 to 01193493 has its CatchHandler @ 010935b8 */
                    /* try { // try from 01093494 to 011934af has its CatchHandler @ 010935d0 */
  param_2[4] = param_2[0x41] + 1;
  *(undefined4 *)(param_2 + 7) = 1;
  puVar20 = (undefined8 *)ft_mem_realloc(uVar32,0x20,0,1,0,&local_94);
                    /* try { // try from 010934b0 to 011934b3 has its CatchHandler @ 010935b4 */
  param_2[8] = puVar20;
  if (local_94 != 0) {
    return 3;
  }
  puVar20[1] = 0;
  *puVar20 = 0;
  puVar20[3] = 0;
  puVar20[2] = 0;
  uVar12 = *(int *)(param_2 + 0x31) + *(int *)(param_2 + 0x30);
  *(short *)puVar20 = (short)uVar12;
  iVar11 = *(int *)(param_2 + 0x3f);
  lVar15 = (long)iVar11;
                    /* try { // try from 010934dc to 011934e3 has its CatchHandler @ 01093580 */
  puVar43 = (undefined8 *)param_2[0x40];
                    /* try { // try from 010934e4 to 0119361b has its CatchHandler @ 010933b8 */
  if (iVar11 < 1) {
LAB_01093544:
    uVar12 = -(uVar12 >> 0xf & 1) & 0xfffe0000 | (uVar12 & 0xffff) << 1;
    sVar6 = (short)((uint)((int)uVar12 / 3 + ((int)uVar12 >> 0x1f)) >> 0x10);
    sVar7 = (short)((int)uVar12 / 3) + (short)((int)uVar12 >> 0x1f);
  }
  else {
    lVar35 = 1;
    puVar34 = puVar43;
    do {
      puVar40 = puVar34;
      iVar37 = strcmp((char *)*puVar40,"AVERAGE_WIDTH");
      if (lVar15 <= lVar35) break;
      lVar35 = lVar35 + 1;
      puVar34 = puVar40 + 3;
    } while (iVar37 != 0);
    if ((puVar40 + 3 == (undefined8 *)0x18) || (iVar37 != 0)) goto LAB_01093544;
    lVar35 = puVar40[2] + 5;
    sVar6 = (short)((uint)((int)(lVar35 / 0x280000000) + (int)(lVar35 >> 0x3f)) >> 0x10);
    sVar7 = (short)(SUB168(SEXT816(lVar35) * SEXT816(0x6666666666666667),8) >> 2);
  }
  *(short *)((long)puVar20 + 2) = sVar7 - (sVar6 >> 0xf);
  if (iVar11 < 1) {
    puVar20[2] = 0;
    puVar20[3] = 0;
LAB_0109374c:
    puVar20 = (undefined8 *)0x0;
  }
  else {
    lVar35 = 1;
    puVar34 = puVar43;
    do {
      puVar40 = puVar34;
                    /* catch() { ... } // from try @ 010934dc with catch @ 01093580 */
      iVar37 = strcmp((char *)*puVar40,"POINT_SIZE");
      if (lVar15 <= lVar35) break;
      lVar35 = lVar35 + 1;
      puVar34 = puVar40 + 3;
    } while (iVar37 != 0);
    lVar35 = 0;
    if ((puVar40 + 3 != (undefined8 *)0x18) && (iVar37 == 0)) {
                    /* catch() { ... } // from try @ 010934b0 with catch @ 010935b4 */
                    /* catch() { ... } // from try @ 01093488 with catch @ 010935b8 */
                    /* catch() { ... } // from try @ 01093414 with catch @ 010935c8 */
                    /* catch() { ... } // from try @ 01093494 with catch @ 010935d0 */
      lVar35 = (puVar40[2] * 0x70800 + 0x8d27) / 0x11a4e;
      puVar20[1] = lVar35;
    }
    lVar38 = 1;
    puVar34 = puVar43;
    do {
      puVar40 = puVar34;
      iVar37 = strcmp((char *)*puVar40,"PIXEL_SIZE");
      if (lVar15 <= lVar38) break;
      lVar38 = lVar38 + 1;
      puVar34 = puVar40 + 3;
    } while (iVar37 != 0);
    lVar38 = 0;
    if ((puVar40 + 3 != (undefined8 *)0x18) && (iVar37 == 0)) {
      lVar38 = (long)((ulong)(uint)(*(int *)(puVar40 + 2) << 0x10) << 0x20) >> 0x2a;
      puVar20[3] = lVar38;
    }
    lVar24 = 1;
    puVar34 = puVar43;
    do {
      puVar40 = puVar34;
      iVar37 = strcmp((char *)*puVar40,"RESOLUTION_X");
      if (lVar15 <= lVar24) break;
      lVar24 = lVar24 + 1;
      puVar34 = puVar40 + 3;
    } while (iVar37 != 0);
    sVar6 = 0;
    if ((puVar40 + 3 != (undefined8 *)0x18) && (iVar37 == 0)) {
      sVar6 = *(short *)(puVar40 + 2);
    }
    lVar24 = 1;
    puVar34 = puVar43;
    do {
      puVar40 = puVar34;
      iVar37 = strcmp((char *)*puVar40,"RESOLUTION_Y");
      if (lVar15 <= lVar24) break;
      lVar24 = lVar24 + 1;
      puVar34 = puVar40 + 3;
    } while (iVar37 != 0);
    sVar7 = 0;
    if ((puVar40 + 3 != (undefined8 *)0x18) && (iVar37 == 0)) {
      sVar7 = *(short *)(puVar40 + 2);
    }
    if (lVar38 == 0) {
      puVar20[3] = lVar35;
      if (sVar7 != 0) {
        lVar38 = (lVar35 * sVar7) / 0x48;
        puVar20[3] = lVar38;
        goto LAB_010936dc;
      }
    }
    else {
LAB_010936dc:
      lVar35 = lVar38;
      if ((sVar6 != 0) && (sVar7 != 0)) {
        lVar38 = lVar35 * sVar6;
        lVar35 = 0;
        if ((long)sVar7 != 0) {
          lVar35 = lVar38 / (long)sVar7;
        }
      }
    }
    puVar20[2] = lVar35;
    if (iVar11 < 1) goto LAB_0109374c;
    lVar35 = 1;
                    /* try { // try from 01093724 to 0119378b has its CatchHandler @ 01093724
                       catch() { ... } // from try @ 01093724 with catch @ 01093724
                       catch() { ... } // from try @ 0109379c with catch @ 01093724 */
    puVar20 = puVar43 + -3;
    do {
      puVar20 = puVar20 + 3;
      iVar37 = strcmp((char *)*puVar20,"CHARSET_REGISTRY");
      if (lVar15 <= lVar35) break;
      lVar35 = lVar35 + 1;
    } while (iVar37 != 0);
    if (iVar37 != 0) goto LAB_0109374c;
  }
  if (0 < iVar11) {
    lVar35 = 1;
    puVar43 = puVar43 + -3;
    do {
      puVar43 = puVar43 + 3;
      iVar11 = strcmp((char *)*puVar43,"CHARSET_ENCODING");
      if (lVar15 <= lVar35) break;
      lVar35 = lVar35 + 1;
    } while (iVar11 != 0);
    if (iVar11 == 0) goto LAB_01093790;
  }
                    /* try { // try from 0109378c to 0119379b has its CatchHandler @ 010937ec */
  puVar43 = (undefined8 *)0x0;
LAB_01093790:
  if (puVar20 == (undefined8 *)0x0) {
    return 0;
  }
  if (puVar43 == (undefined8 *)0x0) {
    return 0;
  }
                    /* try { // try from 0109379c to 01193823 has its CatchHandler @ 01093724 */
  if (*(char *)(puVar20 + 1) == '\0') {
    return 0;
  }
  if (*(char *)(puVar43 + 1) != '\0') {
    uVar33 = ft_mem_strdup(uVar32,puVar43[2],&local_94);
    param_2[0x2a] = uVar33;
    if (local_94 != 0) {
      return 3;
    }
    uVar32 = ft_mem_strdup(uVar32,puVar20[2],&local_94);
    param_2[0x2b] = uVar32;
    if (local_94 != 0) {
      return 3;
    }
    return 0;
  }
  return 0;
}

