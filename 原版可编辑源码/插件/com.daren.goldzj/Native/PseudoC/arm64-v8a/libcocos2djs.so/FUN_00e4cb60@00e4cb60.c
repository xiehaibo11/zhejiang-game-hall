
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e4cb60(long param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  short *psVar16;
  undefined8 uVar17;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined1 *puVar18;
  ushort *puVar19;
  undefined *puVar20;
  ulong uVar21;
  ushort uVar22;
  undefined2 uVar23;
  undefined4 uVar24;
  uint uVar25;
  ulong uVar26;
  short *psVar27;
  ulong *puVar28;
  long lVar29;
  ushort uVar30;
  uint uVar31;
  ulong uVar32;
  long *plVar33;
  ulong *puVar34;
  ulong uVar35;
  long *plVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 *puVar40;
  char *pcVar41;
  ushort uVar42;
  long lVar43;
  undefined8 *puVar44;
  size_t __n_02;
  undefined8 *puVar45;
  long lVar46;
  undefined1 *puVar47;
  short *psVar48;
  char *pcVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  ulong uVar52;
  char *local_a8;
  char *local_a0;
  int local_94;
  undefined8 local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  int local_64;
  
  uVar38 = param_2[0x17];
  local_64 = FUN_00e1bb5c(param_1,0);
  if (local_64 != 0) {
    return 3;
  }
  local_64 = FUN_00e1dd74(param_1,&DAT_019776e4,param_2 + 0x2c);
  if (local_64 != 0) {
    return 3;
  }
  if (param_2[0x2c] != 0x70636601) {
    return 3;
  }
  uVar21 = param_2[0x2d];
  if (uVar21 == 0) {
    return 3;
  }
  uVar26 = *(ulong *)(param_1 + 8);
  if (uVar26 < 0x10) {
    return 3;
  }
  uVar32 = uVar26 >> 4;
  if ((9 < uVar21) || (uVar32 < uVar21)) {
    if (0x8f < uVar26) {
      uVar32 = 9;
    }
    param_2[0x2d] = uVar32;
    uVar21 = uVar32;
  }
  lVar15 = FUN_00e13bcc(uVar38,0x20,0,uVar21,0,&local_64);
  param_2[0x2e] = lVar15;
  if (local_64 != 0) {
    return 3;
  }
  if (param_2[0x2d] == 0) {
    uVar21 = 0;
LAB_00e4ccd8:
    uVar26 = 0;
    do {
      if (uVar21 == uVar26 + 1) {
        uVar26 = *(ulong *)(param_1 + 8);
        lVar43 = param_2[0x2e];
        goto LAB_00e4cf4c;
      }
      bVar1 = false;
      uVar32 = 0;
      uVar52 = *(ulong *)(lVar15 + 0x18);
      uVar35 = 1;
      do {
        puVar28 = (ulong *)(lVar15 + uVar32 * 0x20);
        puVar34 = (ulong *)(lVar15 + uVar35 * 0x20);
        uVar37 = puVar34[3];
        if (uVar37 < uVar52) {
          uStack_88 = puVar28[1];
          local_90 = *puVar28;
          uStack_78 = puVar28[3];
          local_80 = puVar28[2];
          bVar1 = true;
          uVar21 = *puVar34;
          uVar52 = puVar34[3];
          uVar32 = puVar34[2];
          puVar28[1] = puVar34[1];
          *puVar28 = uVar21;
          puVar28[3] = uVar52;
          puVar28[2] = uVar32;
          puVar34[1] = uStack_88;
          *puVar34 = local_90;
          puVar34[3] = uStack_78;
          puVar34[2] = local_80;
          uVar37 = puVar34[3];
        }
        if ((uVar37 < puVar28[2]) || (uVar37 - puVar28[2] < puVar28[3])) {
          local_64 = 9;
          goto LAB_00e4cda4;
        }
        uVar21 = param_2[0x2d];
        bVar4 = uVar35 < uVar21 + ~uVar26;
        uVar32 = uVar35;
        uVar52 = uVar37;
        uVar35 = (ulong)((int)uVar35 + 1);
      } while (bVar4);
    } while ((bVar1) && (uVar26 = (ulong)((int)uVar26 + 1), uVar26 < uVar21 - 1));
    lVar15 = param_2[0x2e];
    uVar26 = *(ulong *)(param_1 + 8);
    lVar43 = lVar15;
    if (uVar21 != 1) {
LAB_00e4cf4c:
      lVar15 = lVar43;
      uVar32 = 1;
      do {
        if ((uVar26 < *(ulong *)(lVar15 + 0x10)) ||
           (uVar26 - *(ulong *)(lVar15 + 0x10) < *(ulong *)(lVar15 + 0x18))) goto LAB_00e4cccc;
        lVar15 = lVar15 + 0x20;
        bVar1 = uVar32 < uVar21 - 1;
        uVar32 = (ulong)((int)uVar32 + 1);
      } while (bVar1);
    }
  }
  else {
    uVar26 = 1;
    do {
      local_64 = FUN_00e1dd74(param_1,&DAT_019776f4,lVar15);
      if (local_64 != 0) goto LAB_00e4cda4;
      uVar21 = param_2[0x2d];
      lVar15 = lVar15 + 0x20;
      bVar1 = uVar26 < uVar21;
      local_64 = 0;
      uVar26 = (ulong)((int)uVar26 + 1);
    } while (bVar1);
    lVar15 = param_2[0x2e];
    local_64 = 0;
    if (uVar21 != 1) goto LAB_00e4ccd8;
    uVar26 = *(ulong *)(param_1 + 8);
    lVar43 = lVar15;
  }
  uVar21 = uVar26 - *(ulong *)(lVar15 + 0x18);
  if (uVar26 < *(ulong *)(lVar15 + 0x18)) {
LAB_00e4cccc:
    local_64 = 8;
LAB_00e4cda4:
    FUN_00e139fc(uVar38,param_2[0x2e]);
    param_2[0x2e] = 0;
    if (local_64 != 0) {
      return 3;
    }
    lVar43 = 0;
    param_2[1] = 0;
    *param_2 = 1;
    local_64 = 0;
  }
  else {
    if (uVar21 < *(ulong *)(lVar15 + 0x10)) {
      *(ulong *)(lVar15 + 0x10) = uVar21;
    }
    param_2[1] = 0;
    *param_2 = 1;
  }
  local_94 = 0;
  if (param_3 < 0) {
    return 0;
  }
  uVar39 = param_2[0x17];
  if (param_2[0x2d] != 0) {
    uVar21 = 0;
    puVar28 = (ulong *)(lVar43 + 0x10);
    do {
      if (puVar28[-2] == 1) {
        if ((puVar28[1] < *(ulong *)(param_1 + 0x10)) ||
           (iVar12 = FUN_00e1bc6c(param_1,puVar28[1] - *(ulong *)(param_1 + 0x10)), iVar12 != 0)) {
          uVar24 = 0x53;
          goto LAB_00e4ce58;
        }
        uVar21 = *puVar28;
        local_90 = local_90 & 0xffffffff00000000;
        uVar13 = FUN_00e1dcb4(param_1,&local_90);
        lVar15 = 0;
        if ((int)local_90 != 0) {
          lVar43 = 0;
          goto LAB_00e4ce64;
        }
        lVar43 = lVar15;
        if ((uVar13 & 0xffffff00) != 0) goto LAB_00e4ce64;
        if ((uVar13 >> 2 & 1) == 0) {
          uVar26 = FUN_00e1dcb4();
        }
        else {
          uVar26 = FUN_00e1c3a4(param_1,&local_90);
        }
        if ((int)local_90 != 0) {
          lVar15 = 0;
          lVar43 = 0;
          goto LAB_00e4ce64;
        }
        if (uVar21 / 9 < uVar26) {
          lVar43 = 0;
          goto LAB_00e4cff4;
        }
        uVar32 = uVar26;
        if (0xff < uVar26) {
          uVar32 = 0x100;
        }
        *(int *)(param_2 + 0x3f) = (int)uVar32;
        lVar43 = FUN_00e13bcc(uVar39,0x18,0,uVar32,0,&local_90);
        if ((int)local_90 != 0) goto LAB_00e4d0ac;
        if (uVar32 == 0) goto LAB_00e4d12c;
        uVar52 = 0;
        lVar15 = lVar43;
        if ((uVar13 >> 2 & 1) != 0) goto LAB_00e4d0fc;
        goto LAB_00e4d0c8;
      }
      uVar21 = uVar21 + 1;
      puVar28 = puVar28 + 4;
    } while (uVar21 < (ulong)param_2[0x2d]);
  }
  uVar24 = 3;
LAB_00e4ce58:
  lVar15 = 0;
  lVar43 = 0;
  goto LAB_00e4ce60;
  while( true ) {
    uVar52 = uVar52 + 1;
    lVar15 = lVar15 + 0x18;
    if (uVar32 <= uVar52) break;
LAB_00e4d0c8:
    iVar12 = FUN_00e1dd74(param_1,&DAT_01977720,lVar15);
    local_90 = CONCAT44(local_90._4_4_,iVar12);
    if (iVar12 != 0) goto LAB_00e4d0ac;
  }
  goto LAB_00e4d12c;
LAB_00e4d3a4:
  FUN_00e139fc(uVar39,param_2[0x42]);
  param_2[0x42] = 0;
  if (local_64 != 0) {
    return 3;
  }
  uVar21 = param_2[0x2d];
  goto joined_r0x00e4d3c4;
  while( true ) {
    uVar52 = uVar52 + 1;
    lVar15 = lVar15 + 0x18;
    if (uVar32 <= uVar52) break;
LAB_00e4d0fc:
    iVar12 = FUN_00e1dd74(param_1,&DAT_0197770c,lVar15);
    local_90 = CONCAT44(local_90._4_4_,iVar12);
    if (iVar12 != 0) goto LAB_00e4d0ac;
  }
LAB_00e4d12c:
  iVar12 = FUN_00e1bc6c(param_1,(uVar26 - uVar32) * 9);
  local_90 = CONCAT44(local_90._4_4_,iVar12);
  if (iVar12 == 0) {
    if ((uVar26 & 3) != 0) {
      iVar12 = FUN_00e1bc6c(param_1,4 - (uVar26 & 3));
      local_90 = CONCAT44(local_90._4_4_,iVar12);
      if (iVar12 != 0) goto LAB_00e4d148;
    }
    if ((uVar13 >> 2 & 1) == 0) {
      uVar52 = FUN_00e1dcb4();
    }
    else {
      uVar52 = FUN_00e1c3a4(param_1,&local_90);
    }
    if ((int)local_90 == 0) {
      if (uVar21 + uVar26 * -9 < uVar52) {
LAB_00e4cff4:
        lVar15 = 0;
        uVar24 = 8;
        goto LAB_00e4ce60;
      }
      if (0x10000ff < uVar52) {
        uVar52 = 0x1000100;
      }
      lVar15 = FUN_00e13bcc(uVar39,1,0,uVar52 + 1,0,&local_90);
      if ((int)local_90 == 0) {
        iVar12 = FUN_00e1bbd0(param_1,lVar15,uVar52);
        local_90 = CONCAT44(local_90._4_4_,iVar12);
        if (iVar12 == 0) {
          lVar29 = FUN_00e13bcc(uVar39,0x18,0,uVar32,0,&local_90);
          if ((int)local_90 == 0) {
            param_2[0x40] = lVar29;
            if (uVar32 != 0) {
              lVar46 = 0;
              uVar21 = 0;
              do {
                uVar26 = *(ulong *)(lVar43 + lVar46);
                if (((long)uVar26 < 0) || (uVar52 < uVar26)) {
LAB_00e4d680:
                  uVar24 = 9;
                  goto LAB_00e4ce60;
                }
                uVar17 = FUN_00e1eb6c(uVar39,lVar15 + uVar26,&local_90);
                *(undefined8 *)(lVar29 + lVar46) = uVar17;
                if ((int)local_90 != 0) goto LAB_00e4ce64;
                cVar2 = *(char *)(lVar43 + lVar46 + 8);
                *(char *)(lVar29 + lVar46 + 8) = cVar2;
                uVar26 = *(ulong *)(lVar43 + lVar46 + 0x10);
                if (cVar2 == '\0') {
                  *(ulong *)(lVar29 + lVar46 + 0x10) = uVar26;
                }
                else {
                  if (((long)uVar26 < 0) || (uVar52 < uVar26)) goto LAB_00e4d680;
                  uVar17 = FUN_00e1eb6c(uVar39,lVar15 + uVar26,&local_90);
                  *(undefined8 *)(lVar29 + lVar46 + 0x10) = uVar17;
                  if ((int)local_90 != 0) goto LAB_00e4ce64;
                }
                uVar21 = uVar21 + 1;
                lVar46 = lVar46 + 0x18;
              } while (uVar21 < uVar32);
            }
            local_90 = local_90 & 0xffffffff00000000;
          }
        }
      }
    }
    else {
LAB_00e4d0ac:
      lVar15 = 0;
    }
  }
  else {
LAB_00e4d148:
    uVar24 = 0x53;
    lVar15 = 0;
LAB_00e4ce60:
    local_90 = CONCAT44(local_90._4_4_,uVar24);
  }
LAB_00e4ce64:
  FUN_00e139fc(uVar39,lVar43);
  FUN_00e139fc(uVar39,lVar15);
  local_94 = (int)local_90;
  if ((int)local_90 != 0) {
    return 3;
  }
  uVar21 = param_2[0x2d];
  if (uVar21 != 0) {
    plVar33 = (long *)param_2[0x2e];
    uVar26 = 0;
    plVar36 = plVar33;
    do {
      if (*plVar36 == 0x100) {
        bVar1 = true;
        goto LAB_00e4cee8;
      }
      uVar26 = uVar26 + 1;
      plVar36 = plVar36 + 4;
    } while (uVar26 < uVar21);
  }
  iVar12 = FUN_00e4e51c(param_1,param_2,2);
  if (iVar12 != 0) {
    return 3;
  }
  uVar21 = param_2[0x2d];
  if (uVar21 == 0) {
    return 3;
  }
  plVar33 = (long *)param_2[0x2e];
  bVar1 = false;
  local_94 = 0;
LAB_00e4cee8:
  uVar39 = param_2[0x17];
  uVar26 = 0;
  puVar28 = (ulong *)(plVar33 + 2);
  while (puVar28[-2] != 4) {
    uVar26 = uVar26 + 1;
    puVar28 = puVar28 + 4;
    if (uVar21 <= uVar26) {
      return 3;
    }
  }
  if (puVar28[1] < *(ulong *)(param_1 + 0x10)) {
    return 3;
  }
  iVar12 = FUN_00e1bc6c(param_1,puVar28[1] - *(ulong *)(param_1 + 0x10));
  if (iVar12 != 0) {
    return 3;
  }
  uVar21 = *puVar28;
  local_64 = 0;
  uVar13 = FUN_00e1dcb4(param_1,&local_64);
  if (local_64 != 0) {
    return 3;
  }
  uVar31 = uVar13 & 0xffffff00;
  if ((uVar31 | 0x100) != 0x100) {
    return 3;
  }
  if (uVar31 == 0) {
    if ((uVar13 >> 2 & 1) == 0) {
      uVar26 = FUN_00e1dcb4(param_1,&local_64);
    }
    else {
      uVar26 = FUN_00e1c3a4();
    }
  }
  else {
    if ((uVar13 >> 2 & 1) == 0) {
      uVar26 = FUN_00e1db58();
    }
    else {
      uVar26 = FUN_00e1bcf8();
    }
    uVar26 = uVar26 & 0xffff;
  }
  if (local_64 != 0) {
    return 3;
  }
  if (uVar31 == 0) {
    if (uVar21 / 0xc <= uVar26 - 1) {
      return 3;
    }
  }
  else if (uVar21 / 5 <= uVar26 - 1) {
    return 3;
  }
  if (0xffff < uVar26) {
    uVar26 = 0x10000;
  }
  param_2[0x41] = uVar26;
  psVar16 = (short *)FUN_00e13bcc(uVar39,0x18,0,uVar26,0,&local_64);
  param_2[0x42] = psVar16;
  if (local_64 != 0) {
    return 3;
  }
  puVar20 = &DAT_019777bc;
  if ((uVar13 & 4) != 0) {
    puVar20 = &DAT_0197779c;
  }
  if (uVar31 == 0) {
    uVar21 = 0;
    psVar48 = psVar16 + 4;
    do {
      local_64 = FUN_00e1dd74(param_1,puVar20,psVar48 + -4);
      psVar48[4] = 0;
      psVar48[5] = 0;
      psVar48[6] = 0;
      psVar48[7] = 0;
      if (local_64 != 0) goto LAB_00e4d3a4;
      psVar27 = psVar48;
      if (psVar48[-3] < psVar48[-4]) {
LAB_00e4d370:
        psVar48[-4] = 0;
        psVar48[-3] = 0;
        psVar48[-2] = 0;
        psVar48[-1] = 0;
        *psVar27 = 0;
      }
      else if ((int)psVar48[-1] < -(int)*psVar48) {
        psVar27 = psVar16 + 4;
        goto LAB_00e4d370;
      }
      uVar21 = uVar21 + 1;
      psVar16 = psVar48 + 8;
      local_64 = 0;
      psVar48 = psVar48 + 0xc;
    } while (uVar21 < uVar26);
  }
  else {
    uVar21 = 0;
    do {
      local_64 = FUN_00e1dd74(param_1,&DAT_019777dc,&local_90);
      if (local_64 != 0) {
        psVar16[8] = 0;
        psVar16[9] = 0;
        psVar16[10] = 0;
        psVar16[0xb] = 0;
        goto LAB_00e4d3a4;
      }
      *psVar16 = (short)((byte)local_90 - 0x80);
      psVar16[1] = (short)(local_90._1_1_ - 0x80);
      psVar16[2] = local_90._2_1_ - 0x80;
      psVar16[3] = (short)(local_90._3_1_ - 0x80);
      psVar16[5] = 0;
      psVar16[4] = local_90._4_1_ - 0x80;
      local_64 = 0;
      psVar16[8] = 0;
      psVar16[9] = 0;
      psVar16[10] = 0;
      psVar16[0xb] = 0;
      if (((int)(local_90._1_1_ - 0x80) < (int)((byte)local_90 - 0x80)) ||
         ((int)(local_90._3_1_ - 0x80) < (int)(0x80 - (uint)local_90._4_1_))) {
        psVar16[4] = 0;
        psVar16[0] = 0;
        psVar16[1] = 0;
        psVar16[2] = 0;
        psVar16[3] = 0;
      }
      uVar21 = uVar21 + 1;
      psVar16 = psVar16 + 0xc;
    } while (uVar21 < uVar26);
  }
  uVar21 = param_2[0x2d];
joined_r0x00e4d3c4:
  local_64 = 0;
  local_94 = 0;
  if (uVar21 == 0) {
    return 3;
  }
  uVar39 = param_2[0x17];
  uVar26 = 0;
  puVar28 = (ulong *)(param_2[0x2e] + 0x10);
  while (puVar28[-2] != 8) {
    uVar26 = uVar26 + 1;
    puVar28 = puVar28 + 4;
    if (uVar21 <= uVar26) {
      return 3;
    }
  }
  if (puVar28[1] < *(ulong *)(param_1 + 0x10)) {
    return 3;
  }
  iVar12 = FUN_00e1bc6c(param_1,puVar28[1] - *(ulong *)(param_1 + 0x10));
  if (iVar12 != 0) {
    return 3;
  }
  uVar21 = *puVar28;
  iVar12 = FUN_00e1d718(param_1,8);
  local_90 = CONCAT44(local_90._4_4_,iVar12);
  if (iVar12 != 0) {
    return 3;
  }
  uVar26 = FUN_00e1da70(param_1);
  uVar13 = (uint)uVar26;
  if ((uVar13 >> 2 & 1) == 0) {
    uVar32 = FUN_00e1da70(param_1);
  }
  else {
    uVar32 = FUN_00e1da20(param_1);
  }
  FUN_00e1d90c(param_1);
  if ((uVar26 & 0xffffff00) != 0) {
    return 3;
  }
  if (0xffff < uVar32) {
    uVar32 = 0x10000;
  }
  if (uVar32 != param_2[0x41]) {
    return 3;
  }
  lVar15 = FUN_00e13bcc(uVar39,8,0,uVar32,0,&local_90);
  if ((int)local_90 != 0) {
    return 3;
  }
  if (uVar32 == 0) {
LAB_00e4d628:
    if ((uVar13 >> 2 & 1) == 0) {
      FUN_00e1dcb4();
      if ((int)local_90 == 0) {
        FUN_00e1dcb4(param_1,&local_90);
        if ((int)local_90 == 0) {
          FUN_00e1dcb4(param_1,&local_90);
          if ((int)local_90 == 0) {
            FUN_00e1dcb4(param_1,&local_90);
joined_r0x00e4d6cc:
            if ((int)local_90 == 0) {
              if (uVar32 != 0) {
                uVar52 = 0;
                lVar43 = 0x10;
                do {
                  uVar35 = *(ulong *)(lVar15 + uVar52 * 8);
                  if (uVar35 <= uVar21) {
                    *(ulong *)(param_2[0x42] + lVar43) = *(long *)(param_1 + 0x10) + uVar35;
                  }
                  uVar52 = uVar52 + 1;
                  lVar43 = lVar43 + 0x18;
                } while (uVar52 < uVar32);
              }
              param_2[0x46] = uVar26;
            }
          }
        }
      }
    }
    else {
      FUN_00e1c3a4(param_1,&local_90);
      if ((int)local_90 == 0) {
        FUN_00e1c3a4(param_1,&local_90);
        if ((int)local_90 == 0) {
          FUN_00e1c3a4(param_1,&local_90);
          if ((int)local_90 == 0) {
            FUN_00e1c3a4(param_1,&local_90);
            goto joined_r0x00e4d6cc;
          }
        }
      }
    }
  }
  else {
    uVar52 = 0;
    if ((uVar13 >> 2 & 1) == 0) {
      do {
        uVar17 = FUN_00e1dcb4(param_1,&local_90);
        *(undefined8 *)(lVar15 + uVar52 * 8) = uVar17;
        uVar52 = uVar52 + 1;
      } while (uVar52 < uVar32);
    }
    else {
      do {
        uVar17 = FUN_00e1c3a4(param_1,&local_90);
        *(undefined8 *)(lVar15 + uVar52 * 8) = uVar17;
        uVar52 = uVar52 + 1;
      } while (uVar52 < uVar32);
    }
    if ((int)local_90 == 0) goto LAB_00e4d628;
  }
  FUN_00e139fc(uVar39,lVar15);
  local_94 = (int)local_90;
  if ((int)local_90 != 0) {
    return 3;
  }
  if (param_2[0x2d] == 0) {
    return 3;
  }
  uVar39 = param_2[0x17];
  plVar36 = (long *)param_2[0x2e];
  uVar21 = 0;
  puVar19 = (ushort *)(param_2 + 0x43);
  while (*plVar36 != 0x20) {
    uVar21 = uVar21 + 1;
    plVar36 = plVar36 + 4;
    if ((ulong)param_2[0x2d] <= uVar21) {
      return 3;
    }
  }
  if ((ulong)plVar36[3] < *(ulong *)(param_1 + 0x10)) {
    return 3;
  }
  iVar12 = FUN_00e1bc6c(param_1,plVar36[3] - *(ulong *)(param_1 + 0x10));
  if (iVar12 != 0) {
    return 3;
  }
  local_64 = 0;
  uVar13 = FUN_00e1dcb4(param_1,&local_64);
  if (local_64 != 0) {
    return 3;
  }
  if ((uVar13 & 0xffffff00) != 0) {
    return 3;
  }
  if ((uVar13 >> 2 & 1) == 0) {
    puVar20 = &DAT_01977814;
  }
  else {
    puVar20 = &DAT_019777f8;
  }
  local_64 = FUN_00e1dd74(param_1,puVar20,puVar19);
  if (local_64 != 0) {
    return 3;
  }
  uVar11 = *(ushort *)((long)param_2 + 0x21a);
  if (uVar11 < *(ushort *)(param_2 + 0x43)) {
    return 3;
  }
  if (0xff < uVar11) {
    return 3;
  }
  uVar30 = *(ushort *)((long)param_2 + 0x21e);
  if (uVar30 < *(ushort *)((long)param_2 + 0x21c)) {
    return 3;
  }
  if (0xff < uVar30) {
    return 3;
  }
  lVar15 = ((1 - (ulong)*(ushort *)((long)param_2 + 0x21c)) + (ulong)uVar30) *
           ((1 - (ulong)*(ushort *)(param_2 + 0x43)) + (ulong)uVar11);
  uVar17 = FUN_00e13bcc(uVar39,2,0,lVar15,0,&local_64);
  param_2[0x45] = uVar17;
  if (local_64 != 0) {
    return 3;
  }
  local_64 = FUN_00e1d718(param_1,lVar15 * 2);
  if (local_64 == 0) {
    uVar11 = *(ushort *)((long)param_2 + 0x21c);
    uVar31 = (uint)(*(ushort *)(param_2 + 0x44) >> 8);
    if ((uVar31 < uVar11) || (*(ushort *)((long)param_2 + 0x21e) < uVar31)) {
LAB_00e4d8b4:
      uVar30 = *(ushort *)(param_2 + 0x43);
      uVar22 = *(ushort *)((long)param_2 + 0x21a);
      uVar25 = (uint)uVar30;
      *(ushort *)(param_2 + 0x44) = uVar30 + uVar11 * 0x100;
      uVar31 = (uint)uVar11;
    }
    else {
      uVar30 = *puVar19;
      uVar25 = *(ushort *)(param_2 + 0x44) & 0xff;
      if ((uVar25 < uVar30) || (uVar22 = *(ushort *)((long)param_2 + 0x21a), uVar22 < uVar25))
      goto LAB_00e4d8b4;
    }
    puVar18 = (undefined1 *)
              (*(long *)(param_1 + 0x40) +
              (long)(int)(((uVar25 - uVar30) +
                          (uVar31 - uVar11) * ((1 - (uint)uVar30) + (uint)uVar22)) * 2));
    if ((uVar13 & 4) == 0) {
      puVar47 = puVar18 + 1;
    }
    else {
      puVar47 = puVar18;
      puVar18 = puVar18 + 1;
    }
    uVar31 = (uint)CONCAT11(*puVar47,*puVar18);
    if ((ulong)param_2[0x41] <= (ulong)CONCAT11(*puVar47,*puVar18)) {
      uVar31 = 0;
    }
    if (uVar31 != 0) {
      puVar28 = (ulong *)param_2[0x42];
      puVar34 = puVar28 + (ulong)uVar31 * 3;
      local_80 = puVar34[2];
      uStack_88 = puVar34[1];
      local_90 = *puVar34;
      uVar26 = puVar28[1];
      uVar21 = *puVar28;
      puVar34[2] = puVar28[2];
      puVar34[1] = uVar26;
      *puVar34 = uVar21;
      puVar28 = (ulong *)param_2[0x42];
      puVar28[2] = local_80;
      puVar28[1] = uStack_88;
      *puVar28 = local_90;
      uVar11 = *(ushort *)((long)param_2 + 0x21c);
    }
    uVar30 = *(ushort *)((long)param_2 + 0x21e);
    if (uVar11 <= uVar30) {
      puVar50 = (undefined2 *)param_2[0x45];
      uVar22 = *(ushort *)((long)param_2 + 0x21a);
      if ((uVar13 >> 2 & 1) == 0) {
        do {
          uVar42 = *puVar19;
          puVar51 = puVar50;
          if (uVar42 <= uVar22) {
            do {
              uVar13 = FUN_00e1d9a8(param_1);
              if ((~uVar13 & 0xffff) == 0) {
                uVar23 = 0xffff;
              }
              else if (uVar31 == (uVar13 & 0xffff)) {
                uVar23 = 0;
              }
              else {
                uVar25 = uVar31;
                if ((uVar13 & 0xffff) != 0) {
                  uVar25 = uVar13;
                }
                uVar23 = (undefined2)uVar25;
              }
              puVar50 = puVar51 + 1;
              *puVar51 = uVar23;
              uVar22 = *(ushort *)((long)param_2 + 0x21a);
              uVar42 = uVar42 + 1;
              puVar51 = puVar50;
            } while (uVar42 <= uVar22);
            uVar30 = *(ushort *)((long)param_2 + 0x21e);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar30);
      }
      else {
        do {
          uVar42 = *puVar19;
          puVar51 = puVar50;
          if (uVar42 <= uVar22) {
            do {
              uVar13 = FUN_00e1d970(param_1);
              if ((~uVar13 & 0xffff) == 0) {
                uVar23 = 0xffff;
              }
              else if (uVar31 == (uVar13 & 0xffff)) {
                uVar23 = 0;
              }
              else {
                uVar25 = uVar31;
                if ((uVar13 & 0xffff) != 0) {
                  uVar25 = uVar13;
                }
                uVar23 = (undefined2)uVar25;
              }
              puVar50 = puVar51 + 1;
              *puVar51 = uVar23;
              uVar22 = *(ushort *)((long)param_2 + 0x21a);
              uVar42 = uVar42 + 1;
              puVar51 = puVar50;
            } while (uVar42 <= uVar22);
            uVar30 = *(ushort *)((long)param_2 + 0x21e);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar30);
      }
    }
    FUN_00e1d90c(param_1);
    local_94 = local_64;
  }
  else {
    FUN_00e139fc(uVar39,param_2[0x45]);
    param_2[0x45] = 0;
    local_94 = local_64;
  }
  if (local_94 != 0) {
    return 3;
  }
  iVar12 = 0;
  local_64 = local_94;
  if ((bVar1) && (iVar12 = FUN_00e4e51c(param_1,param_2,0x100), iVar12 != 0)) {
    return 3;
  }
  local_94 = iVar12;
  uVar21 = param_2[2];
  param_2[2] = uVar21 | 0x12;
  if (*(char *)((long)param_2 + 0x17b) != '\0') {
    param_2[2] = uVar21 | 0x16;
  }
  local_90 = local_90 & 0xffffffff00000000;
  lVar15 = (long)*(int *)(param_2 + 0x3f);
  uVar39 = param_2[0x17];
  param_2[3] = 0;
  if (*(int *)(param_2 + 0x3f) < 1) {
    __n_01 = 0;
    __n = 0;
    pcVar41 = (char *)0x0;
    __n_00 = 0;
    local_a8 = (char *)0x0;
    local_a0 = (char *)0x0;
    bVar1 = true;
LAB_00e4dc0c:
    pcVar49 = "Regular";
    lVar15 = 8;
    __n_02 = 7;
  }
  else {
    puVar44 = (undefined8 *)param_2[0x40];
    lVar43 = 1;
    puVar45 = puVar44 + -1;
    do {
      puVar40 = puVar45;
      iVar12 = strcmp((char *)puVar40[1],"SLANT");
      puVar45 = puVar40 + 3;
      if (lVar15 <= lVar43) break;
      lVar43 = lVar43 + 1;
    } while (iVar12 != 0);
    if ((iVar12 == 0) && (*(char *)(puVar40 + 2) != '\0')) {
      uVar17 = 2;
      local_a0 = (char *)0x0;
      if ((*(byte *)*puVar45 - 0x49 < 0x27) &&
         ((1L << ((ulong)(*(byte *)*puVar45 - 0x49) & 0x3f) & 0x4100000041U) != 0)) {
        param_2[3] = 1;
        uVar17 = 3;
        local_a0 = "Oblique";
        if ((*(byte *)*puVar45 | 0x20) != 0x6f) {
          local_a0 = "Italic";
        }
      }
    }
    else {
      local_a0 = (char *)0x0;
      uVar17 = 2;
    }
    lVar43 = 1;
    puVar45 = puVar44;
    do {
      puVar40 = puVar45;
      iVar12 = strcmp((char *)*puVar40,"WEIGHT_NAME");
      if (lVar15 <= lVar43) break;
      lVar43 = lVar43 + 1;
      puVar45 = puVar40 + 3;
    } while (iVar12 != 0);
    if (((iVar12 == 0) && (*(char *)(puVar40 + 1) != '\0')) &&
       ((*(byte *)puVar40[2] | 0x20) == 0x62)) {
      param_2[3] = uVar17;
      local_a8 = "Bold";
    }
    else {
      local_a8 = (char *)0x0;
    }
    lVar43 = 1;
    puVar45 = puVar44;
    do {
      puVar40 = puVar45;
      iVar12 = strcmp((char *)*puVar40,"SETWIDTH_NAME");
      if (lVar15 <= lVar43) break;
      lVar43 = lVar43 + 1;
      puVar45 = puVar40 + 3;
    } while (iVar12 != 0);
    if ((iVar12 == 0) && (*(char *)(puVar40 + 1) != '\0')) {
      pcVar41 = (char *)0x0;
      cVar2 = *(char *)puVar40[2];
      if (((cVar2 != '\0') && (cVar2 != 'N')) && (cVar2 != 'n')) {
        pcVar41 = (char *)puVar40[2];
      }
    }
    else {
      pcVar41 = (char *)0x0;
    }
    lVar43 = 1;
    do {
      puVar45 = puVar44;
      iVar12 = strcmp((char *)*puVar45,"ADD_STYLE_NAME");
      if (lVar15 <= lVar43) break;
      lVar43 = lVar43 + 1;
      puVar44 = puVar45 + 3;
    } while (iVar12 != 0);
    if ((iVar12 == 0) && (*(char *)(puVar45 + 1) != '\0')) {
      pcVar49 = (char *)puVar45[2];
      cVar2 = *pcVar49;
      if ((cVar2 == '\0') || (cVar2 == 'N')) {
        __n_02 = 0;
        lVar15 = 0;
        pcVar49 = (char *)0x0;
      }
      else {
        if ((cVar2 == 'n') || (pcVar49 == (char *)0x0)) goto LAB_00e4db94;
        __n_02 = strlen(pcVar49);
        lVar15 = __n_02 + 1;
      }
      if (local_a8 == (char *)0x0) goto LAB_00e4df3c;
LAB_00e4db9c:
      __n = strlen(local_a8);
      lVar15 = lVar15 + __n + 1;
      bVar1 = false;
      if (local_a0 == (char *)0x0) goto LAB_00e4df50;
LAB_00e4dbbc:
      __n_00 = strlen(local_a0);
      lVar15 = lVar15 + __n_00 + 1;
      if (pcVar41 == (char *)0x0) goto LAB_00e4df58;
LAB_00e4dbd4:
      __n_01 = strlen(pcVar41);
      lVar15 = lVar15 + __n_01 + 1;
    }
    else {
LAB_00e4db94:
      lVar15 = 0;
      __n_02 = 0;
      pcVar49 = (char *)0x0;
      if (local_a8 != (char *)0x0) goto LAB_00e4db9c;
LAB_00e4df3c:
      __n = 0;
      bVar1 = true;
      if (local_a0 != (char *)0x0) goto LAB_00e4dbbc;
LAB_00e4df50:
      __n_00 = 0;
      if (pcVar41 != (char *)0x0) goto LAB_00e4dbd4;
LAB_00e4df58:
      __n_01 = 0;
    }
    if (lVar15 == 0) goto LAB_00e4dc0c;
  }
  puVar18 = (undefined1 *)FUN_00e1388c(uVar39,lVar15,&local_90);
  param_2[6] = puVar18;
  if ((int)local_90 != 0) {
    return 3;
  }
  if (pcVar49 != (char *)0x0) {
    memcpy(puVar18,pcVar49,__n_02);
    if (__n_02 != 0) {
      if (__n_02 < 8) {
        uVar26 = 0;
      }
      else {
        uVar26 = __n_02 & 0xfffffffffffffff8;
        puVar47 = puVar18 + 3;
        uVar21 = uVar26;
        do {
          while( true ) {
            uVar39 = *(undefined8 *)(puVar47 + -3);
            bVar4 = (char)((ulong)uVar39 >> 8) == ' ';
            bVar5 = (char)((ulong)uVar39 >> 0x10) != ' ';
            bVar6 = (char)((ulong)uVar39 >> 0x18) == ' ';
            bVar7 = (char)((ulong)uVar39 >> 0x20) != ' ';
            bVar8 = (char)((ulong)uVar39 >> 0x28) == ' ';
            bVar10 = (char)((ulong)uVar39 >> 0x30) != ' ';
            bVar9 = (char)((ulong)uVar39 >> 0x38) == ' ';
            if ((char)uVar39 != ' ') break;
            puVar47[-3] = 0x2d;
            if (bVar4) goto LAB_00e4de10;
LAB_00e4ddbc:
            if (bVar5) goto LAB_00e4de1c;
LAB_00e4ddc4:
            puVar47[-1] = 0x2d;
            if (bVar6) goto LAB_00e4de24;
LAB_00e4ddd0:
            if (bVar7) goto LAB_00e4de30;
LAB_00e4ddd8:
            puVar47[1] = 0x2d;
            if (bVar8) goto LAB_00e4de38;
LAB_00e4dde4:
            if (bVar10) goto LAB_00e4de44;
LAB_00e4ddec:
            puVar47[3] = 0x2d;
            if (bVar9) goto LAB_00e4de4c;
LAB_00e4ddf8:
            uVar21 = uVar21 - 8;
            puVar47 = puVar47 + 8;
            if (uVar21 == 0) goto LAB_00e4de5c;
          }
          if (!bVar4) goto LAB_00e4ddbc;
LAB_00e4de10:
          puVar47[-2] = 0x2d;
          if (!bVar5) goto LAB_00e4ddc4;
LAB_00e4de1c:
          if (!bVar6) goto LAB_00e4ddd0;
LAB_00e4de24:
          *puVar47 = 0x2d;
          if (!bVar7) goto LAB_00e4ddd8;
LAB_00e4de30:
          if (!bVar8) goto LAB_00e4dde4;
LAB_00e4de38:
          puVar47[2] = 0x2d;
          if (!bVar10) goto LAB_00e4ddec;
LAB_00e4de44:
          if (!bVar9) goto LAB_00e4ddf8;
LAB_00e4de4c:
          puVar47[4] = 0x2d;
          uVar21 = uVar21 - 8;
          puVar47 = puVar47 + 8;
        } while (uVar21 != 0);
LAB_00e4de5c:
        if (__n_02 == uVar26) goto LAB_00e4de8c;
      }
      lVar15 = __n_02 - uVar26;
      pcVar49 = puVar18 + uVar26;
      do {
        if (*pcVar49 == ' ') {
          *pcVar49 = '-';
        }
        lVar15 = lVar15 + -1;
        pcVar49 = pcVar49 + 1;
      } while (lVar15 != 0);
    }
LAB_00e4de8c:
    puVar18 = puVar18 + __n_02;
  }
  if (!bVar1) {
    puVar47 = puVar18;
    if (puVar18 != (undefined1 *)param_2[6]) {
      puVar47 = puVar18 + 1;
      *puVar18 = 0x20;
    }
    memcpy(puVar47,local_a8,__n);
    puVar18 = puVar47 + __n;
  }
  if (local_a0 != (char *)0x0) {
    puVar47 = puVar18;
    if (puVar18 != (undefined1 *)param_2[6]) {
      puVar47 = puVar18 + 1;
      *puVar18 = 0x20;
    }
    memcpy(puVar47,local_a0,__n_00);
    puVar18 = puVar47 + __n_00;
  }
  if (pcVar41 != (char *)0x0) {
    puVar47 = puVar18;
    if (puVar18 != (undefined1 *)param_2[6]) {
      puVar47 = puVar18 + 1;
      *puVar18 = 0x20;
    }
    memcpy(puVar47,pcVar41,__n_01);
    if (__n_01 != 0) {
      if (__n_01 < 8) {
        uVar26 = 0;
      }
      else {
        uVar26 = __n_01 & 0xfffffffffffffff8;
        puVar18 = puVar47 + 3;
        uVar21 = uVar26;
        do {
          while( true ) {
            uVar39 = *(undefined8 *)(puVar18 + -3);
            bVar1 = (char)((ulong)uVar39 >> 8) == ' ';
            bVar4 = (char)((ulong)uVar39 >> 0x10) != ' ';
            bVar5 = (char)((ulong)uVar39 >> 0x18) == ' ';
            bVar6 = (char)((ulong)uVar39 >> 0x20) != ' ';
            bVar7 = (char)((ulong)uVar39 >> 0x28) == ' ';
            bVar8 = (char)((ulong)uVar39 >> 0x30) != ' ';
            bVar10 = (char)((ulong)uVar39 >> 0x38) == ' ';
            if ((char)uVar39 != ' ') break;
            puVar18[-3] = 0x2d;
            if (bVar1) goto LAB_00e4dfe8;
LAB_00e4df94:
            if (bVar4) goto LAB_00e4dff4;
LAB_00e4df9c:
            puVar18[-1] = 0x2d;
            if (bVar5) goto LAB_00e4dffc;
LAB_00e4dfa8:
            if (bVar6) goto LAB_00e4e008;
LAB_00e4dfb0:
            puVar18[1] = 0x2d;
            if (bVar7) goto LAB_00e4e010;
LAB_00e4dfbc:
            if (bVar8) goto LAB_00e4e01c;
LAB_00e4dfc4:
            puVar18[3] = 0x2d;
            if (bVar10) goto LAB_00e4e024;
LAB_00e4dfd0:
            uVar21 = uVar21 - 8;
            puVar18 = puVar18 + 8;
            if (uVar21 == 0) goto LAB_00e4e034;
          }
          if (!bVar1) goto LAB_00e4df94;
LAB_00e4dfe8:
          puVar18[-2] = 0x2d;
          if (!bVar4) goto LAB_00e4df9c;
LAB_00e4dff4:
          if (!bVar5) goto LAB_00e4dfa8;
LAB_00e4dffc:
          *puVar18 = 0x2d;
          if (!bVar6) goto LAB_00e4dfb0;
LAB_00e4e008:
          if (!bVar7) goto LAB_00e4dfbc;
LAB_00e4e010:
          puVar18[2] = 0x2d;
          if (!bVar8) goto LAB_00e4dfc4;
LAB_00e4e01c:
          if (!bVar10) goto LAB_00e4dfd0;
LAB_00e4e024:
          puVar18[4] = 0x2d;
          uVar21 = uVar21 - 8;
          puVar18 = puVar18 + 8;
        } while (uVar21 != 0);
LAB_00e4e034:
        if (__n_01 == uVar26) goto LAB_00e4e064;
      }
      lVar15 = __n_01 - uVar26;
      pcVar41 = puVar47 + uVar26;
      do {
        if (*pcVar41 == ' ') {
          *pcVar41 = '-';
        }
        lVar15 = lVar15 + -1;
        pcVar41 = pcVar41 + 1;
      } while (lVar15 != 0);
    }
LAB_00e4e064:
    puVar18 = puVar47 + __n_01;
  }
  *puVar18 = 0;
  local_94 = (int)local_90;
  if ((int)local_90 != 0) {
    return 3;
  }
  iVar12 = *(int *)(param_2 + 0x3f);
  if (iVar12 < 1) {
LAB_00e4e0b4:
    param_2[5] = 0;
  }
  else {
    lVar15 = 1;
    puVar45 = (undefined8 *)param_2[0x40];
    do {
      puVar44 = puVar45;
      iVar14 = strcmp((char *)*puVar44,"FAMILY_NAME");
      if (iVar12 <= lVar15) break;
      lVar15 = lVar15 + 1;
      puVar45 = puVar44 + 3;
    } while (iVar14 != 0);
    if ((iVar14 != 0) || (*(char *)(puVar44 + 1) == '\0')) goto LAB_00e4e0b4;
    uVar39 = FUN_00e1eb6c(uVar38,puVar44[2],&local_94);
    param_2[5] = uVar39;
    if (local_94 != 0) {
      return 3;
    }
  }
  param_2[4] = param_2[0x41];
  *(undefined4 *)(param_2 + 7) = 1;
  puVar19 = (ushort *)FUN_00e13bcc(uVar38,0x20,0,1,0,&local_94);
  param_2[8] = puVar19;
  if (local_94 != 0) {
    return 3;
  }
  puVar19[4] = 0;
  puVar19[5] = 0;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[0] = 0;
  puVar19[1] = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  puVar19[0xc] = 0;
  puVar19[0xd] = 0;
  puVar19[0xe] = 0;
  puVar19[0xf] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[10] = 0;
  puVar19[0xb] = 0;
  lVar15 = param_2[0x31] + param_2[0x30];
  lVar43 = -lVar15;
  if (-1 < lVar15) {
    lVar43 = lVar15;
  }
  if (lVar43 < 0x8000) {
    uVar11 = -((ushort)((uint)lVar15 >> 0xf) & 1);
    uVar11 = uVar11 + (short)lVar15 ^ uVar11;
    *puVar19 = uVar11;
    iVar12 = *(int *)(param_2 + 0x3f);
    uVar30 = uVar11;
    if (0 < iVar12) goto LAB_00e4e16c;
LAB_00e4e1a4:
    uVar11 = FT_MulDiv((long)(short)uVar11,2,3);
    puVar19[1] = uVar11;
    puVar45 = (undefined8 *)param_2[0x40];
    iVar12 = *(int *)(param_2 + 0x3f);
joined_r0x00e4e1c4:
    if (iVar12 < 1) goto LAB_00e4e30c;
LAB_00e4e1c8:
    lVar15 = 1;
    puVar44 = puVar45;
    do {
      puVar40 = puVar44;
      iVar14 = strcmp((char *)*puVar40,"POINT_SIZE");
      if (iVar12 <= lVar15) break;
      lVar15 = lVar15 + 1;
      puVar44 = puVar40 + 3;
    } while (iVar14 != 0);
    if (iVar14 == 0) {
      lVar43 = puVar40[2];
      lVar15 = -lVar43;
      if (-1 < lVar43) {
        lVar15 = lVar43;
      }
      if (lVar15 < 0x504c3) {
        uVar39 = FT_MulDiv(lVar15,0x70800,0x11a4e);
        *(undefined8 *)(puVar19 + 4) = uVar39;
        iVar12 = *(int *)(param_2 + 0x3f);
        puVar45 = (undefined8 *)param_2[0x40];
      }
      else {
        puVar19[4] = 0x7fff;
        puVar19[5] = 0;
        puVar19[6] = 0;
        puVar19[7] = 0;
      }
    }
    if (iVar12 < 1) goto LAB_00e4e30c;
    lVar43 = (long)iVar12;
    lVar15 = 1;
    puVar44 = puVar45;
    do {
      puVar40 = puVar44;
      iVar12 = strcmp((char *)*puVar40,"PIXEL_SIZE");
      if (lVar43 <= lVar15) break;
      lVar15 = lVar15 + 1;
      puVar44 = puVar40 + 3;
    } while (iVar12 != 0);
    if (iVar12 == 0) {
      lVar29 = puVar40[2];
      lVar15 = -lVar29;
      if (-1 < lVar29) {
        lVar15 = lVar29;
      }
      if (lVar15 < 0x8000) {
        uVar13 = -((uint)lVar29 >> 0xf & 1);
        uVar21 = (ulong)((uVar13 + (int)(short)lVar29 ^ uVar13) << 6);
      }
      else {
        uVar21 = 0x1fffc0;
      }
      *(ulong *)(puVar19 + 0xc) = uVar21;
    }
    lVar15 = 1;
    puVar44 = puVar45;
    do {
      puVar40 = puVar44;
      iVar12 = strcmp((char *)*puVar40,"RESOLUTION_X");
      if (lVar43 <= lVar15) break;
      lVar15 = lVar15 + 1;
      puVar44 = puVar40 + 3;
    } while (iVar12 != 0);
    if (iVar12 == 0) {
      lVar29 = puVar40[2];
      lVar15 = -lVar29;
      if (-1 < lVar29) {
        lVar15 = lVar29;
      }
      if (lVar15 < 0x8000) {
        uVar13 = -((uint)lVar29 >> 0xf & 1);
        uVar13 = uVar13 + (int)(short)lVar29 ^ uVar13;
      }
      else {
        uVar13 = 0x7fff;
      }
    }
    else {
      uVar13 = 0;
    }
    lVar15 = 1;
    do {
      puVar44 = puVar45;
      iVar12 = strcmp((char *)*puVar44,"RESOLUTION_Y");
      if (lVar43 <= lVar15) break;
      lVar15 = lVar15 + 1;
      puVar45 = puVar44 + 3;
    } while (iVar12 != 0);
    if (iVar12 == 0) {
      lVar43 = puVar44[2];
      lVar15 = -lVar43;
      if (-1 < lVar43) {
        lVar15 = lVar43;
      }
      if (lVar15 < 0x8000) {
        uVar31 = -((uint)lVar43 >> 0xf & 1);
        uVar31 = uVar31 + (int)(short)lVar43 ^ uVar31;
        lVar15 = *(long *)(puVar19 + 0xc);
        goto joined_r0x00e4e404;
      }
      uVar31 = 0x7fff;
      lVar15 = *(long *)(puVar19 + 0xc);
      goto joined_r0x00e4e3ec;
    }
    uVar31 = 0;
    lVar15 = *(long *)(puVar19 + 0xc);
joined_r0x00e4e404:
    if (lVar15 == 0) goto LAB_00e4e408;
LAB_00e4e428:
    if (((uVar13 & 0xffff) != 0) && ((uVar31 & 0xffff) != 0)) {
      lVar15 = FT_MulDiv(lVar15,(long)(short)uVar13,(long)(short)uVar31);
    }
  }
  else {
    uVar11 = 0x7fff;
    *puVar19 = 0x7fff;
    iVar12 = *(int *)(param_2 + 0x3f);
    uVar30 = 0x7fff;
    if (iVar12 < 1) goto LAB_00e4e1a4;
LAB_00e4e16c:
    uVar11 = uVar30;
    puVar45 = (undefined8 *)param_2[0x40];
    lVar15 = 1;
    puVar44 = puVar45;
    do {
      puVar40 = puVar44;
      iVar14 = strcmp((char *)*puVar40,"AVERAGE_WIDTH");
      if (iVar12 <= lVar15) break;
      lVar15 = lVar15 + 1;
      puVar44 = puVar40 + 3;
    } while (iVar14 != 0);
    if (iVar14 != 0) goto LAB_00e4e1a4;
    lVar43 = puVar40[2];
    lVar15 = -lVar43;
    if (-1 < lVar43) {
      lVar15 = lVar43;
    }
    if (lVar15 < 0x4fff2) {
      auVar3 = SEXT816(lVar43 + 5) * SEXT816(0x6666666666666667);
      uVar13 = (int)(auVar3._8_8_ >> 2) - (auVar3._12_4_ >> 0x1f);
      uVar11 = -((ushort)(uVar13 >> 0xf) & 1);
      puVar19[1] = (short)uVar13 + uVar11 ^ uVar11;
      goto joined_r0x00e4e1c4;
    }
    puVar19[1] = 0x7fff;
    if (0 < iVar12) goto LAB_00e4e1c8;
LAB_00e4e30c:
    uVar13 = 0;
    uVar31 = 0;
    lVar15 = *(long *)(puVar19 + 0xc);
joined_r0x00e4e3ec:
    if (lVar15 != 0) goto LAB_00e4e428;
LAB_00e4e408:
    lVar15 = *(long *)(puVar19 + 4);
    *(long *)(puVar19 + 0xc) = lVar15;
    if ((uVar31 & 0xffff) != 0) {
      lVar15 = FT_MulDiv(lVar15,(long)(short)uVar31,0x48);
      *(long *)(puVar19 + 0xc) = lVar15;
      goto LAB_00e4e428;
    }
  }
  *(long *)(puVar19 + 8) = lVar15;
  iVar12 = *(int *)(param_2 + 0x3f);
  lVar15 = param_2[0x40];
  if (iVar12 < 1) {
LAB_00e4e488:
    puVar45 = (undefined8 *)0x0;
  }
  else {
    puVar45 = (undefined8 *)(lVar15 + -0x18);
    lVar43 = 1;
    do {
      puVar45 = puVar45 + 3;
      iVar14 = strcmp((char *)*puVar45,"CHARSET_REGISTRY");
      if (iVar12 <= lVar43) break;
      lVar43 = lVar43 + 1;
    } while (iVar14 != 0);
    if (iVar14 != 0) goto LAB_00e4e488;
  }
  if (0 < iVar12) {
    puVar44 = (undefined8 *)(lVar15 + -0x18);
    lVar15 = 1;
    do {
      puVar44 = puVar44 + 3;
      iVar14 = strcmp((char *)*puVar44,"CHARSET_ENCODING");
      if (iVar12 <= lVar15) break;
      lVar15 = lVar15 + 1;
    } while (iVar14 != 0);
    if (iVar14 == 0) goto LAB_00e4e4c8;
  }
  puVar44 = (undefined8 *)0x0;
LAB_00e4e4c8:
  if ((((puVar45 != (undefined8 *)0x0) && (puVar44 != (undefined8 *)0x0)) &&
      (*(char *)(puVar45 + 1) != '\0')) && (*(char *)(puVar44 + 1) != '\0')) {
    uVar39 = FUN_00e1eb6c(uVar38,puVar44[2],&local_94);
    param_2[0x2a] = uVar39;
    if (local_94 != 0) {
      return 3;
    }
    uVar38 = FUN_00e1eb6c(uVar38,puVar45[2],&local_94);
    param_2[0x2b] = uVar38;
  }
  if (local_94 != 0) {
    return 3;
  }
  return 0;
}

