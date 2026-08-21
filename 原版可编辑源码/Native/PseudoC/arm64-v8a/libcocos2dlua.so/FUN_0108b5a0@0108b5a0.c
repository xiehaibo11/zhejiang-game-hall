
ulong FUN_0108b5a0(long param_1,ulong *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  short sVar11;
  ushort uVar12;
  bool bVar13;
  undefined4 *puVar14;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  void *pvVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  undefined1 *puVar24;
  code *pcVar25;
  ulong uVar26;
  int *piVar27;
  int iVar28;
  long lVar29;
  byte *pbVar30;
  long lVar31;
  uint *puVar32;
  ulong uVar33;
  undefined4 *puVar34;
  byte *pbVar35;
  undefined4 *puVar36;
  byte *pbVar37;
  uint uVar38;
  ulong uVar39;
  byte *pbVar40;
  ulong uVar41;
  byte *pbVar42;
  int iVar43;
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined1 auVar46 [14];
  undefined1 auVar47 [16];
  ulong *local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
                    /* try { // try from 0108b5a8 to 0118b5b3 has its CatchHandler @ 0108b79c */
                    /* try { // try from 0108b5c0 to 0118b5e3 has its CatchHandler @ 0108b7bc */
  uVar17 = FT_Stream_Seek(param_1,0);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
                    /* try { // try from 0108b5f0 to 0118b5f7 has its CatchHandler @ 0108b768 */
  uVar17 = FT_Stream_ReadFields(param_1,&DAT_0145f7b4,param_2 + 0x1f);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
                    /* try { // try from 0108b600 to 0118b627 has its CatchHandler @ 0108b778 */
  *(int *)((long)param_2 + 0x11c) = *(int *)((long)param_2 + 0x11c) + (int)param_2[0x28] * 0x10000;
  local_68 = 0;
                    /* try { // try from 0108b630 to 0118b643 has its CatchHandler @ 0108b7bc */
                    /* try { // try from 0108b644 to 0118b64f has its CatchHandler @ 0108b798 */
  if (((((int)param_2[0x1f] != 0x50465230) || (4 < *(uint *)((long)param_2 + 0xfc))) ||
      (*(uint *)((long)param_2 + 0x104) < 0x3a)) || ((int)param_2[0x20] != 0xd0a)) {
    return 2;
  }
  uVar17 = FT_Stream_Seek(param_1,*(undefined4 *)((long)param_2 + 0x10c));
  local_78 = (ulong *)CONCAT44(local_78._4_4_,uVar17);
                    /* try { // try from 0108b65c to 0118b67f has its CatchHandler @ 0108b7bc */
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
  uVar17 = FT_Stream_ReadUShort(param_1,&local_78);
  local_68 = (uint)local_78;
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  *param_2 = (ulong)(uVar17 & 0xffff);
  if ((int)param_3 < 0) {
    return 0;
  }
                    /* try { // try from 0108b68c to 0118b693 has its CatchHandler @ 0108b764 */
  if ((long)(ulong)(uVar17 & 0xffff) <= (long)(int)param_3) {
    return 6;
  }
  uVar39 = param_2[0x28];
                    /* try { // try from 0108b69c to 0118b6c3 has its CatchHandler @ 0108b774 */
  uVar17 = FT_Stream_Seek(param_1,*(undefined4 *)((long)param_2 + 0x10c));
  local_78 = (ulong *)CONCAT44(local_78._4_4_,uVar17);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
  uVar17 = FT_Stream_ReadUShort(param_1,&local_78);
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  if ((uVar17 & 0xffff) <= param_3) {
    return 6;
  }
                    /* try { // try from 0108b6cc to 0118b6db has its CatchHandler @ 0108b7bc */
  uVar17 = FT_Stream_Skip(param_1,param_3 * 5);
                    /* try { // try from 0108b6dc to 0118b863 has its CatchHandler @ 0108b2e0 */
  local_78 = (ulong *)CONCAT44(local_78._4_4_,uVar17);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
  uVar17 = FT_Stream_ReadUShort(param_1,&local_78);
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  uVar18 = FT_Stream_ReadUOffset(param_1,&local_78);
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  uVar17 = uVar17 & 0xffff;
  *(undefined4 *)(param_2 + 0x2d) = uVar18;
  *(uint *)((long)param_2 + 0x164) = uVar17;
  uVar19 = FT_Stream_Seek(param_1,uVar18);
  if (uVar19 != 0) {
    return (ulong)uVar19;
  }
  local_78._0_4_ = uVar19;
  uVar19 = FT_Stream_EnterFrame(param_1,(ulong)uVar17);
  if (uVar19 != 0) {
    return (ulong)uVar19;
  }
  if (uVar17 < 0xd) {
LAB_0108b958:
    local_78._0_4_ = 8;
  }
  else {
    pbVar30 = *(byte **)(param_1 + 0x40);
                    /* catch() { ... } // from try @ 0108b68c with catch @ 0108b764 */
                    /* catch() { ... } // from try @ 0108b5f0 with catch @ 0108b768 */
                    /* catch() { ... } // from try @ 0108b554 with catch @ 0108b76c */
                    /* catch() { ... } // from try @ 0108b4b8 with catch @ 0108b770 */
    *(uint *)((long)param_2 + 0x16c) =
         (uint)*pbVar30 << 0x10 | (uint)pbVar30[1] << 8 | (uint)pbVar30[2];
                    /* catch() { ... } // from try @ 0108b69c with catch @ 0108b774 */
                    /* catch() { ... } // from try @ 0108b600 with catch @ 0108b778 */
                    /* catch() { ... } // from try @ 0108b564 with catch @ 0108b77c */
                    /* catch() { ... } // from try @ 0108b4c8 with catch @ 0108b780 */
    *(uint *)(param_2 + 0x2e) = (uint)pbVar30[3] << 0x10 | (uint)pbVar30[4] << 8 | (uint)pbVar30[5];
                    /* catch() { ... } // from try @ 0108b644 with catch @ 0108b798 */
                    /* catch() { ... } // from try @ 0108b5a8 with catch @ 0108b79c */
                    /* catch() { ... } // from try @ 0108b50c with catch @ 0108b7a0 */
                    /* catch() { ... } // from try @ 0108b470 with catch @ 0108b7a4 */
                    /* catch() { ... } // from try @ 0108b45c with catch @ 0108b7a8 */
    *(uint *)((long)param_2 + 0x174) =
         (uint)pbVar30[6] << 0x10 | (uint)pbVar30[7] << 8 | (uint)pbVar30[8];
                    /* catch() { ... } // from try @ 0108b3f8 with catch @ 0108b7ac */
                    /* catch() { ... } // from try @ 0108b3c4 with catch @ 0108b7b0 */
                    /* catch() { ... } // from try @ 0108b3b4 with catch @ 0108b7b4 */
                    /* catch() { ... } // from try @ 0108b3a8 with catch @ 0108b7b8 */
                    /* catch() { ... } // from try @ 0108b488 with catch @ 0108b7bc
                       catch() { ... } // from try @ 0108b4f8 with catch @ 0108b7bc
                       catch() { ... } // from try @ 0108b524 with catch @ 0108b7bc
                       catch() { ... } // from try @ 0108b594 with catch @ 0108b7bc
                       catch() { ... } // from try @ 0108b5c0 with catch @ 0108b7bc
                       catch() { ... } // from try @ 0108b630 with catch @ 0108b7bc
                       catch() { ... } // from try @ 0108b65c with catch @ 0108b7bc
                       catch() { ... } // from try @ 0108b6cc with catch @ 0108b7bc */
    *(uint *)(param_2 + 0x2f) =
         (uint)pbVar30[9] << 0x10 | (uint)pbVar30[10] << 8 | (uint)pbVar30[0xb];
    bVar3 = pbVar30[0xc];
                    /* catch() { ... } // from try @ 0108b380 with catch @ 0108b7cc */
    if ((bVar3 >> 2 & 1) == 0) {
      uVar33 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0108b370 with catch @ 0108b7d0 */
                    /* catch() { ... } // from try @ 0108b368 with catch @ 0108b7d4 */
                    /* catch() { ... } // from try @ 0108b434 with catch @ 0108b7d8 */
      uVar19 = bVar3 >> 3 & 1 | 4;
                    /* catch() { ... } // from try @ 0108b420 with catch @ 0108b7dc */
      if ((bVar3 & 3) != 0) {
        uVar19 = (bVar3 >> 3 & 1) + 1;
      }
      uVar33 = (ulong)uVar19;
    }
    pbVar40 = pbVar30 + 0xd;
    pbVar35 = pbVar30 + uVar17;
    if ((bVar3 >> 4 & 1) != 0) {
      uVar33 = (ulong)((bVar3 >> 5 & 1) + (int)uVar33 + 1);
    }
    if (pbVar35 < pbVar40 + uVar33) goto LAB_0108b958;
    if ((bVar3 >> 2 & 1) != 0) {
      if ((bVar3 >> 3 & 1) == 0) {
        uVar17 = (uint)pbVar30[0xd];
        pbVar40 = pbVar30 + 0xe;
      }
      else {
        pbVar40 = pbVar30 + 0xf;
        uVar17 = (uint)CONCAT11(pbVar30[0xd],pbVar30[0xe]);
      }
      *(uint *)(param_2 + 0x30) = uVar17;
      if ((bVar3 & 3) == 0) {
        bVar4 = *pbVar40;
        pbVar30 = pbVar40 + 1;
        pbVar23 = pbVar40 + 2;
        pbVar40 = pbVar40 + 3;
        *(uint *)(param_2 + 0x31) = (uint)bVar4 << 0x10 | (uint)*pbVar30 << 8 | (uint)*pbVar23;
      }
    }
    pbVar30 = pbVar40;
    if ((bVar3 >> 4 & 1) != 0) {
      if ((bVar3 >> 5 & 1) == 0) {
        pbVar30 = pbVar40 + 1;
        uVar17 = (uint)*pbVar40;
      }
      else {
        pbVar30 = pbVar40 + 2;
        uVar17 = (uint)CONCAT11(*pbVar40,pbVar40[1]);
      }
      *(uint *)((long)param_2 + 0x184) = uVar17;
    }
    pbVar40 = pbVar30;
    if ((bVar3 >> 6 & 1) != 0) {
      pbVar40 = pbVar30 + 1;
      if (pbVar35 < pbVar40) goto LAB_0108b958;
      if (*pbVar30 != 0) {
        iVar43 = -(uint)*pbVar30;
        do {
          if ((pbVar35 < pbVar40 + 2) || (pbVar40 = pbVar40 + 2 + *pbVar40, pbVar35 < pbVar40))
          goto LAB_0108b958;
          iVar43 = iVar43 + 1;
        } while (iVar43 != 0);
      }
    }
    local_78._0_4_ = 0;
    if (pbVar35 < pbVar40 + 5) goto LAB_0108b958;
    bVar3 = *pbVar40;
    bVar4 = pbVar40[1];
    *(uint *)((long)param_2 + 0x18c) = (uint)CONCAT11(bVar3,bVar4);
    *(uint *)(param_2 + 0x32) = (uint)pbVar40[2] << 0x10 | (uint)pbVar40[3] << 8 | (uint)pbVar40[4];
    if ((int)uVar39 != 0) {
      if (pbVar35 < pbVar40 + 6) goto LAB_0108b958;
      *(uint *)((long)param_2 + 0x18c) = (uint)CONCAT12(pbVar40[5],CONCAT11(bVar3,bVar4));
    }
  }
  FT_Stream_ExitFrame(param_1);
  local_68 = (uint)local_78;
  if ((uint)local_78 != 0) {
    return (ulong)(uint)local_78;
  }
  uVar17 = (uint)param_2[0x32];
  uVar39 = *(ulong *)(param_1 + 0x38);
  uVar19 = *(uint *)((long)param_2 + 0x18c);
  param_2[0x4d] = 0;
  param_2[0x33] = uVar39;
  *(uint *)(param_2 + 0x34) = uVar17;
  param_2[0x4e] = (ulong)(param_2 + 0x4d);
  local_64 = FT_Stream_Seek(param_1,(ulong)uVar17);
  if (local_64 != 0) {
    return (ulong)local_64;
  }
  uVar20 = FT_Stream_EnterFrame(param_1,(ulong)uVar19);
  if (uVar20 != 0) {
    return (ulong)uVar20;
  }
  puVar24 = *(undefined1 **)(param_1 + 0x40);
                    /* try { // try from 0108b9cc to 0118ba47 has its CatchHandler @ 0108b9cc
                       catch() { ... } // from try @ 0108b9cc with catch @ 0108b9cc
                       catch() { ... } // from try @ 0108ba50 with catch @ 0108b9cc */
  param_2[0x50] = (ulong)puVar24;
  if (uVar19 < 0xf) goto LAB_0108bdcc;
  *(uint *)((long)param_2 + 0x1a4) = (uint)CONCAT11(*puVar24,puVar24[1]);
  *(uint *)(param_2 + 0x35) = (uint)CONCAT11(puVar24[2],puVar24[3]);
  *(uint *)((long)param_2 + 0x1ac) = (uint)CONCAT11(puVar24[4],puVar24[5]);
  param_2[0x36] = (long)CONCAT11(puVar24[6],puVar24[7]);
  param_2[0x37] = (long)CONCAT11(puVar24[8],puVar24[9]);
                    /* try { // try from 0108ba48 to 0118ba4f has its CatchHandler @ 0108ba90 */
  param_2[0x38] = (long)CONCAT11(puVar24[10],puVar24[0xb]);
                    /* try { // try from 0108ba50 to 0118baab has its CatchHandler @ 0108b9cc */
  param_2[0x39] = (long)CONCAT11(puVar24[0xc],puVar24[0xd]);
  bVar3 = puVar24[0xe];
  uVar20 = (uint)bVar3;
  *(uint *)(param_2 + 0x3a) = uVar20;
  if ((bVar3 >> 2 & 1) == 0) {
    if (uVar19 < 0x11) goto LAB_0108bdcc;
                    /* catch() { ... } // from try @ 0108ba48 with catch @ 0108ba90 */
    pbVar30 = puVar24 + 0x11;
    *(int *)((long)param_2 + 0x1d4) = (int)CONCAT11(puVar24[0xf],puVar24[0x10]);
  }
  else {
    pbVar30 = puVar24 + 0xf;
  }
  pbVar35 = puVar24 + uVar19;
  pbVar40 = pbVar30;
  if ((char)bVar3 < '\0') {
    pbVar40 = pbVar30 + 1;
    if (pbVar40 <= pbVar35) {
      if (*pbVar30 != 0) {
        iVar43 = -(uint)*pbVar30;
        local_64 = 0;
        pbVar30 = pbVar40;
        do {
          pbVar23 = pbVar30 + 2;
          if ((pbVar35 < pbVar23) || (pbVar40 = pbVar23 + *pbVar30, pbVar35 < pbVar40))
          goto LAB_0108bacc;
          pcVar25 = FUN_0108d3f8;
          switch(pbVar30[1]) {
          case 1:
            break;
          case 2:
            pcVar25 = FUN_0108d6c8;
            break;
          case 3:
            pcVar25 = FUN_0108d740;
            break;
          case 4:
            pcVar25 = FUN_0108d8c4;
            break;
          default:
            goto switchD_0108bb3c_default;
          }
          uVar19 = (*pcVar25)(pbVar23,pbVar40,param_2 + 0x33);
          if (uVar19 != 0) goto LAB_0108bdd4;
switchD_0108bb3c_default:
          iVar43 = iVar43 + 1;
          pbVar30 = pbVar40;
        } while (iVar43 != 0);
      }
      goto LAB_0108bb84;
    }
LAB_0108bacc:
    uVar19 = 8;
    goto LAB_0108bdd4;
  }
LAB_0108bb84:
  local_64 = 0;
  pbVar30 = pbVar40 + 3;
  if (pbVar35 < pbVar30) {
LAB_0108bdcc:
                    /* try { // try from 0108bdd0 to 0118bdeb has its CatchHandler @ 0108bf78 */
    local_64 = 8;
    uVar19 = local_64;
  }
  else {
    uVar33 = (ulong)*pbVar40 << 0x10 | (ulong)pbVar40[1] << 8 | (ulong)pbVar40[2];
    pbVar40 = pbVar30;
    if (uVar33 != 0) {
      pbVar40 = pbVar30 + uVar33;
      if (pbVar35 < pbVar40) goto LAB_0108bdcc;
      do {
        while( true ) {
          pbVar23 = pbVar30 + 4;
          if (pbVar40 < pbVar23) goto LAB_0108bda0;
          uVar19 = (uint)CONCAT11(*pbVar30,pbVar30[1]);
          uVar41 = (ulong)uVar19;
          uVar38 = uVar19 - 4;
          if ((uVar19 < 4) || (bVar13 = uVar33 < uVar41, uVar33 = uVar33 - uVar41, bVar13))
          goto LAB_0108bda0;
          sVar11 = CONCAT11(pbVar30[2],pbVar30[3]);
          if (sVar11 != 3) break;
          local_78._0_4_ = 0;
          if ((uVar38 == 0) ||
             ((uVar19 = uVar19 - 5, pbVar23[uVar19] == 0 && (uVar38 = uVar19, uVar19 == 0)))) {
LAB_0108bd88:
            param_2[0x43] = 0;
LAB_0108bd90:
            local_78._0_4_ = 0;
            local_64 = 0;
          }
          else {
            uVar26 = 0;
            do {
                    /* catch() { ... } // from try @ 0108be70 with catch @ 0108bcc4
                       catch() { ... } // from try @ 0108bf44 with catch @ 0108bcc4 */
              if ((pbVar23[uVar26] < 0x20) || ((char)pbVar23[uVar26] < '\0')) goto LAB_0108bd88;
              uVar19 = (int)uVar26 + 1;
              uVar26 = (ulong)uVar19;
            } while (uVar19 < uVar38);
            pvVar21 = (void *)ft_mem_alloc(uVar39,uVar38 + 1,&local_78);
            if ((uint)local_78 != 0) {
              param_2[0x43] = (ulong)pvVar21;
LAB_0108c384:
              return (ulong)(uint)local_78;
            }
            memcpy(pvVar21,pbVar23,(ulong)uVar38);
            *(undefined1 *)((long)pvVar21 + (ulong)uVar38) = 0;
            param_2[0x43] = (ulong)pvVar21;
LAB_0108bd18:
            local_64 = (uint)local_78;
            if ((uint)local_78 != 0) {
              return (ulong)(uint)local_78;
            }
          }
LAB_0108bd94:
          pbVar30 = pbVar30 + uVar41;
          if (uVar33 == 0) goto LAB_0108bda0;
        }
        if (sVar11 != 2) {
          if (sVar11 == 1) {
            local_78._0_4_ = 0;
            if ((uVar38 == 0) ||
               ((uVar19 = uVar19 - 5, pbVar23[uVar19] == 0 && (uVar38 = uVar19, uVar19 == 0)))) {
LAB_0108bd7c:
              param_2[0x42] = 0;
              goto LAB_0108bd90;
            }
            uVar26 = 0;
            do {
              if ((pbVar23[uVar26] < 0x20) || ((char)pbVar23[uVar26] < '\0')) goto LAB_0108bd7c;
              uVar19 = (int)uVar26 + 1;
              uVar26 = (ulong)uVar19;
            } while (uVar19 < uVar38);
            pvVar21 = (void *)ft_mem_alloc(uVar39,uVar38 + 1,&local_78);
            if ((uint)local_78 != 0) {
              param_2[0x42] = (ulong)pvVar21;
              goto LAB_0108c384;
            }
            memcpy(pvVar21,pbVar23,(ulong)uVar38);
            *(undefined1 *)((long)pvVar21 + (ulong)uVar38) = 0;
            param_2[0x42] = (ulong)pvVar21;
            goto LAB_0108bd18;
          }
          goto LAB_0108bd94;
        }
        if (uVar41 + 2 < 0x26) goto LAB_0108bd94;
                    /* try { // try from 0108bd38 to 0118bd43 has its CatchHandler @ 0108bf5c */
        *(int *)(param_2 + 0x3b) = (int)CONCAT11(pbVar30[0xe],pbVar30[0xf]);
        *(int *)((long)param_2 + 0x1dc) = (int)CONCAT11(pbVar30[0x10],pbVar30[0x11]);
        *(int *)(param_2 + 0x3c) = (int)CONCAT11(pbVar30[0x12],pbVar30[0x13]);
        pbVar30 = pbVar30 + uVar41;
      } while (uVar33 != 0);
    }
LAB_0108bda0:
    pbVar30 = pbVar40 + 1;
    if (pbVar35 < pbVar30) goto LAB_0108bdcc;
    bVar4 = *pbVar40;
    uVar33 = (ulong)bVar4;
                    /* try { // try from 0108bdb4 to 0118bdbf has its CatchHandler @ 0108bf4c */
    *(uint *)(param_2 + 0x46) = (uint)bVar4;
    if (pbVar35 < pbVar30 + uVar33 * 2) goto LAB_0108bdcc;
    pbVar23 = (byte *)ft_mem_realloc(uVar39,4,0,uVar33,0,&local_64);
    param_2[0x47] = (ulong)pbVar23;
    uVar19 = local_64;
    if (local_64 != 0) goto LAB_0108bdd4;
    if (bVar4 != 0) {
      uVar19 = (uint)bVar4;
      if (uVar19 < 4) {
LAB_0108c15c:
        lVar29 = 0;
LAB_0108c164:
        lVar31 = uVar33 - lVar29;
        pbVar23 = pbVar23 + lVar29 * 4;
        do {
          bVar4 = *pbVar30;
          pbVar37 = pbVar30 + 1;
          lVar31 = lVar31 + -1;
                    /* try { // try from 0108c178 to 0118c183 has its CatchHandler @ 0108c218 */
          pbVar30 = pbVar30 + 2;
                    /* try { // try from 0108c184 to 0118c27b has its CatchHandler @ 0108c080 */
          *(int *)pbVar23 = (int)CONCAT11(bVar4,*pbVar37);
          pbVar23 = pbVar23 + 4;
        } while (lVar31 != 0);
      }
      else {
        lVar29 = uVar33 - (uVar33 & 3);
        if (lVar29 == 0) goto LAB_0108c164;
                    /* try { // try from 0108c150 to 0118c15b has its CatchHandler @ 0108c258 */
        if ((pbVar23 < pbVar40 + (uVar33 << 1 | 1)) && (pbVar30 < pbVar23 + uVar33 * 4))
        goto LAB_0108c15c;
        lVar31 = lVar29;
        pbVar37 = pbVar23;
        pbVar42 = pbVar30;
        do {
          uVar45 = *(undefined8 *)pbVar42;
          lVar31 = lVar31 + -4;
          uVar6 = NEON_rev16(uVar45,1);
          uVar12 = CONCAT11((char)((ulong)uVar45 >> 0x20),(char)((ulong)uVar6 >> 0x20));
          auVar46._0_12_ = ZEXT212(uVar12) << 0x40;
          auVar46[0xc] = (char)((ulong)uVar6 >> 0x30);
          auVar46[0xd] = (char)((ulong)uVar45 >> 0x30);
          *(int *)(pbVar37 + 8) = (int)(short)uVar12;
          *(int *)(pbVar37 + 0xc) = (int)auVar46._12_2_;
          *(int *)pbVar37 = (int)CONCAT11((char)uVar45,(char)uVar6);
          *(int *)(pbVar37 + 4) =
               (int)CONCAT11((char)((ulong)uVar45 >> 0x10),(char)((ulong)uVar6 >> 0x10));
          pbVar37 = pbVar37 + 0x10;
          pbVar42 = pbVar42 + 8;
        } while (lVar31 != 0);
        pbVar30 = pbVar30 + (uVar33 * 2 - (ulong)((uVar19 & 3) << 1));
        if ((bVar4 & 3) != 0) goto LAB_0108c164;
      }
      pbVar30 = pbVar40 + (ulong)(uVar19 - 1) * 2 + 3;
    }
    pbVar40 = pbVar30 + 8;
    if (pbVar35 < pbVar40) goto LAB_0108bdcc;
    *(uint *)(param_2 + 0x48) = (uint)*pbVar30;
    *(uint *)((long)param_2 + 0x244) = (uint)pbVar30[1];
    *(uint *)(param_2 + 0x3f) = (uint)CONCAT11(pbVar30[2],pbVar30[3]);
    *(uint *)(param_2 + 0x3d) = (uint)CONCAT11(pbVar30[4],pbVar30[5]);
    uVar38 = (uint)CONCAT11(pbVar30[6],pbVar30[7]);
    uVar33 = (ulong)uVar38;
    *(uint *)(param_2 + 0x49) = uVar38;
    param_2[0x4a] = (ulong)(pbVar40 + ((ulong)uVar17 - *(long *)(param_1 + 0x40)));
    uVar39 = ft_mem_realloc(uVar39,0x10,0,uVar33,0,&local_64);
    param_2[0x4b] = uVar39;
                    /* catch() { ... } // from try @ 0108c178 with catch @ 0108c218 */
    uVar19 = local_64;
    if (local_64 == 0) {
      if (pbVar35 < pbVar40 + uVar38 * ((bVar3 >> 4 & 1) + ((uVar20 & 8) >> 3) +
                                        ((uVar20 & 0x20) >> 5) + (bVar3 >> 1 & 3 | 4)))
      goto LAB_0108bdcc;
                    /* catch() { ... } // from try @ 0108c150 with catch @ 0108c258 */
      if (uVar38 != 0) {
        if ((bVar3 >> 1 & 1) == 0) {
                    /* catch() { ... } // from try @ 0108c0dc with catch @ 0108c268 */
          if ((bVar3 >> 2 & 1) == 0) {
            puVar32 = (uint *)(uVar39 + 8);
            uVar17 = *(uint *)((long)param_2 + 0x1d4);
            do {
              pbVar30 = pbVar40 + 2;
              if ((bVar3 & 8) == 0) {
                pbVar30 = pbVar40 + 1;
              }
              puVar32[-2] = (uint)*pbVar40;
              puVar32[-1] = uVar17;
              if ((bVar3 & 0x10) == 0) {
                pbVar35 = pbVar30 + 1;
                *puVar32 = (uint)*pbVar30;
                if ((bVar3 & 0x20) != 0) goto LAB_0108c498;
LAB_0108c46c:
                pbVar40 = pbVar35 + 2;
                lVar29 = 1;
                uVar20 = (uint)*pbVar35 << 8;
              }
              else {
                pbVar35 = pbVar30 + 2;
                *puVar32 = (uint)CONCAT11(*pbVar30,pbVar30[1]);
                if ((bVar3 & 0x20) == 0) goto LAB_0108c46c;
LAB_0108c498:
                pbVar40 = pbVar35 + 3;
                uVar20 = (uint)*pbVar35 << 0x10 | (uint)pbVar35[1] << 8;
                lVar29 = 2;
              }
              uVar33 = uVar33 - 1;
              puVar32[1] = uVar20 | pbVar35[lVar29];
              puVar32 = puVar32 + 4;
            } while (uVar33 != 0);
          }
          else {
            puVar32 = (uint *)(uVar39 + 8);
            do {
              puVar32[-2] = (uint)*pbVar40;
              puVar32[-1] = (int)CONCAT11(pbVar40[1],pbVar40[2]);
              pbVar30 = pbVar40 + 4;
              if ((bVar3 & 8) == 0) {
                pbVar30 = pbVar40 + 3;
              }
              if ((bVar3 & 0x10) == 0) {
                pbVar35 = pbVar30 + 1;
                *puVar32 = (uint)*pbVar30;
                if ((bVar3 & 0x20) != 0) goto LAB_0108c2dc;
LAB_0108c2b0:
                pbVar40 = pbVar35 + 2;
                lVar29 = 1;
                uVar17 = (uint)*pbVar35 << 8;
              }
              else {
                pbVar35 = pbVar30 + 2;
                *puVar32 = (uint)CONCAT11(*pbVar30,pbVar30[1]);
                if ((bVar3 & 0x20) == 0) goto LAB_0108c2b0;
LAB_0108c2dc:
                pbVar40 = pbVar35 + 3;
                uVar17 = (uint)*pbVar35 << 0x10 | (uint)pbVar35[1] << 8;
                lVar29 = 2;
              }
              uVar33 = uVar33 - 1;
              puVar32[1] = uVar17 | pbVar35[lVar29];
              puVar32 = puVar32 + 4;
            } while (uVar33 != 0);
          }
        }
        else if ((bVar3 >> 2 & 1) == 0) {
          puVar32 = (uint *)(uVar39 + 8);
          uVar17 = *(uint *)((long)param_2 + 0x1d4);
          do {
            pbVar30 = pbVar40 + 3;
            if ((bVar3 & 8) == 0) {
              pbVar30 = pbVar40 + 2;
            }
            puVar32[-2] = (uint)CONCAT11(*pbVar40,pbVar40[1]);
            puVar32[-1] = uVar17;
            if ((bVar3 & 0x10) == 0) {
              pbVar35 = pbVar30 + 1;
              *puVar32 = (uint)*pbVar30;
              if ((bVar3 & 0x20) != 0) goto LAB_0108c534;
LAB_0108c508:
              pbVar40 = pbVar35 + 2;
              lVar29 = 1;
              uVar20 = (uint)*pbVar35 << 8;
            }
            else {
              pbVar35 = pbVar30 + 2;
              *puVar32 = (uint)CONCAT11(*pbVar30,pbVar30[1]);
              if ((bVar3 & 0x20) == 0) goto LAB_0108c508;
LAB_0108c534:
              pbVar40 = pbVar35 + 3;
              uVar20 = (uint)*pbVar35 << 0x10 | (uint)pbVar35[1] << 8;
              lVar29 = 2;
            }
            uVar33 = uVar33 - 1;
            puVar32[1] = uVar20 | pbVar35[lVar29];
            puVar32 = puVar32 + 4;
          } while (uVar33 != 0);
        }
        else {
          puVar32 = (uint *)(uVar39 + 8);
          do {
            puVar32[-2] = (uint)CONCAT11(*pbVar40,pbVar40[1]);
            puVar32[-1] = (int)CONCAT11(pbVar40[2],pbVar40[3]);
            pbVar30 = pbVar40 + 5;
            if ((bVar3 & 8) == 0) {
              pbVar30 = pbVar40 + 4;
            }
            if ((bVar3 & 0x10) == 0) {
              pbVar35 = pbVar30 + 1;
              *puVar32 = (uint)*pbVar30;
              if ((bVar3 & 0x20) != 0) goto LAB_0108c408;
LAB_0108c3dc:
              pbVar40 = pbVar35 + 2;
              lVar29 = 1;
              uVar17 = (uint)*pbVar35 << 8;
            }
            else {
              pbVar35 = pbVar30 + 2;
              *puVar32 = (uint)CONCAT11(*pbVar30,pbVar30[1]);
              if ((bVar3 & 0x20) == 0) goto LAB_0108c3dc;
LAB_0108c408:
              pbVar40 = pbVar35 + 3;
              uVar17 = (uint)*pbVar35 << 0x10 | (uint)pbVar35[1] << 8;
              lVar29 = 2;
            }
            uVar33 = uVar33 - 1;
            puVar32[1] = uVar17 | pbVar35[lVar29];
            puVar32 = puVar32 + 4;
          } while (uVar33 != 0);
        }
      }
    }
  }
LAB_0108bdd4:
  local_64 = uVar19;
  FT_Stream_ExitFrame(param_1);
  uVar39 = FT_Stream_Pos(param_1);
  param_2[0x4f] = uVar39;
  param_2[0x50] = 0;
  local_68 = local_64;
  if (local_64 != 0) {
    return (ulong)local_64;
  }
  uVar19 = (uint)param_2[0x49];
  uVar39 = param_2[2] | 1;
  param_2[4] = (ulong)(uVar19 + 1);
  uVar17 = 0;
  param_2[1] = (long)(int)param_3;
  param_2[2] = uVar39;
  if (uVar19 != 0) {
    piVar27 = (int *)(param_2[0x4b] + 0xc);
    do {
      if (*piVar27 != 0) break;
      uVar17 = uVar17 + 1;
      piVar27 = piVar27 + 4;
    } while (uVar17 < uVar19);
  }
  if (uVar17 == uVar19) {
    if ((int)param_2[0x44] == 0) {
      return 3;
    }
    uVar39 = 0;
    param_2[2] = 0;
  }
  uVar17 = (uint)param_2[0x3a];
  if ((uVar17 >> 2 & 1) == 0) {
    uVar39 = uVar39 | 4;
                    /* try { // try from 0108be68 to 0118be6f has its CatchHandler @ 0108bf64 */
    param_2[2] = uVar39;
  }
  iVar43 = (int)param_2[0x44];
                    /* try { // try from 0108be70 to 0118bf3b has its CatchHandler @ 0108bcc4 */
  uVar39 = uVar39 | (uVar17 & 1) * 0x10 + 0x10;
  param_2[2] = uVar39;
  if (iVar43 != 0) {
    uVar39 = uVar39 | 2;
    param_2[2] = uVar39;
  }
  if ((int)param_2[0x4c] != 0) {
    param_2[2] = uVar39 | 0x40;
  }
  param_2[5] = param_2[0x42];
  if (param_2[0x42] == 0) {
    param_2[5] = param_2[0x41];
  }
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[6] = param_2[0x43];
  uVar19 = (uint)param_2[0x35];
  param_2[0x10] = param_2[0x39];
  param_2[0xf] = param_2[0x38];
  *(short *)(param_2 + 0x11) = (short)uVar19;
  param_2[0xe] = SUB168(*(undefined1 (*) [16])(param_2 + 0x36),8);
  param_2[0xd] = SUB168(*(undefined1 (*) [16])(param_2 + 0x36),0);
  uVar20 = ((uVar19 & 0xffff) + (uVar19 & 0xffff) * 2) * 4;
  *(short *)((long)param_2 + 0x8a) = (short)param_2[0x39];
  uVar19 = (int)(short)param_2[0x39] - (int)(short)param_2[0x37];
  if ((int)uVar19 <= (int)(short)((ulong)uVar20 * 0x19999999a000 >> 0x30)) {
    uVar19 = uVar20 / 10;
  }
  *(short *)((long)param_2 + 0x8c) = (short)param_2[0x37];
  *(short *)((long)param_2 + 0x8e) = (short)uVar19;
  if (iVar43 != 0) {
                    /* try { // try from 0108bf3c to 0118bf43 has its CatchHandler @ 0108bf48 */
    puVar22 = (undefined2 *)
              ft_mem_realloc(*(undefined8 *)(param_2[0x18] + 0x38),0x20,0,iVar43,0,&local_68);
                    /* try { // try from 0108bf44 to 0118bfeb has its CatchHandler @ 0108bcc4 */
    param_2[8] = (ulong)puVar22;
                    /* catch() { ... } // from try @ 0108bf3c with catch @ 0108bf48 */
                    /* catch() { ... } // from try @ 0108bdb4 with catch @ 0108bf4c */
    if (local_68 != 0) {
      return (ulong)local_68;
    }
                    /* catch() { ... } // from try @ 0108bd38 with catch @ 0108bf5c */
    piVar27 = (int *)(param_2[0x45] + 4);
    iVar28 = iVar43;
    do {
      iVar1 = *piVar27;
                    /* catch() { ... } // from try @ 0108be68 with catch @ 0108bf64 */
      iVar28 = iVar28 + -1;
      *puVar22 = (short)iVar1;
      iVar2 = piVar27[-1];
      uVar39 = (ulong)(uint)(iVar1 << 6);
      piVar27 = piVar27 + 10;
                    /* catch() { ... } // from try @ 0108bdd0 with catch @ 0108bf78 */
      *(ulong *)(puVar22 + 4) = uVar39;
      puVar22[1] = (short)iVar2;
      *(ulong *)(puVar22 + 8) = (ulong)(uint)(iVar2 << 6);
      *(ulong *)(puVar22 + 0xc) = uVar39;
      puVar22 = puVar22 + 0x10;
    } while (iVar28 != 0);
    uVar17 = (uint)param_2[0x3a];
    *(int *)(param_2 + 7) = iVar43;
  }
  if ((uVar17 >> 2 & 1) == 0) {
    iVar43 = *(int *)((long)param_2 + 0x1d4);
    goto LAB_0108c060;
  }
  uVar17 = (uint)param_2[0x49];
  if (uVar17 == 0) {
    iVar43 = 0;
    goto LAB_0108c060;
  }
  uVar33 = param_2[0x4b];
  uVar39 = (ulong)(uVar17 - 1) + 1;
  if (uVar39 < 8) {
LAB_0108c044:
    iVar43 = 0;
    uVar39 = uVar33;
  }
  else {
                    /* catch() { ... } // from try @ 0108c010 with catch @ 0108bfec */
    uVar41 = 8;
    if ((uVar17 & 7) != 0) {
      uVar41 = (ulong)(uVar17 & 7);
    }
    lVar29 = uVar39 - uVar41;
    if (lVar29 == 0) goto LAB_0108c044;
    uVar39 = uVar33 + lVar29 * 0x10;
    uVar17 = uVar17 - (int)lVar29;
    puVar34 = (undefined4 *)(uVar33 + 0x44);
                    /* try { // try from 0108c008 to 0118c00f has its CatchHandler @ 0108c020 */
    auVar44 = ZEXT816(0);
    auVar47 = ZEXT816(0);
    do {
                    /* try { // try from 0108c010 to 0118c07f has its CatchHandler @ 0108bfec */
      puVar36 = puVar34 + -0x10;
      uVar18 = *puVar34;
      uVar7 = puVar34[4];
      uVar8 = puVar34[8];
      uVar9 = puVar34[0xc];
      puVar14 = puVar34 + -0xc;
      puVar15 = puVar34 + -8;
      puVar16 = puVar34 + -4;
      lVar29 = lVar29 + -8;
                    /* catch() { ... } // from try @ 0108c008 with catch @ 0108c020 */
      puVar34 = puVar34 + 0x20;
      auVar5[4] = (char)uVar7;
      auVar5._0_4_ = uVar18;
      auVar5[5] = (char)((uint)uVar7 >> 8);
      auVar5[6] = (char)((uint)uVar7 >> 0x10);
      auVar5[7] = (char)((uint)uVar7 >> 0x18);
      auVar5[8] = (char)uVar8;
      auVar5[9] = (char)((uint)uVar8 >> 8);
      auVar5[10] = (char)((uint)uVar8 >> 0x10);
      auVar5[0xb] = (char)((uint)uVar8 >> 0x18);
      auVar5[0xc] = (char)uVar9;
      auVar5[0xd] = (char)((uint)uVar9 >> 8);
      auVar5[0xe] = (char)((uint)uVar9 >> 0x10);
      auVar5[0xf] = (char)((uint)uVar9 >> 0x18);
      auVar47 = NEON_smax(auVar47,auVar5,4);
      auVar10._4_4_ = *puVar14;
      auVar10._0_4_ = *puVar36;
      auVar10._8_4_ = *puVar15;
      auVar10._12_4_ = *puVar16;
      auVar44 = NEON_smax(auVar44,auVar10,4);
    } while (lVar29 != 0);
    auVar44 = NEON_smax(auVar44,auVar47,4);
    iVar43 = NEON_smaxv(auVar44,4);
    if (uVar41 == 0) goto LAB_0108c060;
  }
  piVar27 = (int *)(uVar39 + 4);
  iVar28 = iVar43;
  do {
    uVar17 = uVar17 - 1;
    iVar43 = *piVar27;
    if (*piVar27 <= iVar28) {
      iVar43 = iVar28;
    }
    piVar27 = piVar27 + 4;
    iVar28 = iVar43;
  } while (uVar17 != 0);
LAB_0108c060:
  *(short *)(param_2 + 0x12) = (short)iVar43;
  *(undefined2 *)((long)param_2 + 0x92) = *(undefined2 *)((long)param_2 + 0x8e);
                    /* catch() { ... } // from try @ 0108c184 with catch @ 0108c080 */
  lVar29 = (ulong)(ushort)param_2[0x11] * -0x66666667;
  *(ushort *)((long)param_2 + 0x96) = (ushort)param_2[0x11] / 0x1e;
  *(short *)((long)param_2 + 0x94) = (short)(uint)((ulong)lVar29 >> 0x22) - (short)(lVar29 >> 0x3f);
  uStack_70 = 0x10003756e6963;
  local_78 = param_2;
  uVar39 = FT_CMap_New(pfr_cmap_class_rec,0,&local_78,0);
                    /* try { // try from 0108c0dc to 0118c0e7 has its CatchHandler @ 0108c268 */
  if ((int)param_2[0x4c] != 0) {
    param_2[2] = param_2[2] | 0x40;
  }
                    /* catch() { ... } // from try @ 0108b324 with catch @ 0108b80c */
  return uVar39 & 0xffffffff;
}

