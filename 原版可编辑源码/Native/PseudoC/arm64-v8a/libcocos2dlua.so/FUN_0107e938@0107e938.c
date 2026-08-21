
/* WARNING: Type propagation algorithm not settling */

uint FUN_0107e938(long param_1,long *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  uint uVar23;
  byte *pbVar24;
  short *psVar25;
  undefined1 *puVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long local_7f0;
  long local_7e8;
  ulong local_7d8;
  long local_7d0;
  ulong local_7c8;
  long local_7c0;
  long local_7b8;
  long lStack_7b0;
  long local_7a8;
  ulong local_7a0;
  long lStack_798;
  long local_790;
  long lStack_788;
  undefined8 local_780;
  undefined8 local_778;
  long local_770;
  long local_768;
  undefined8 *local_760;
  long local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  ulong local_740;
  undefined8 uStack_738;
  long local_730;
  long lStack_728;
  undefined1 local_6ff;
  undefined1 local_6fe;
  long local_6f8;
  undefined8 local_6f0;
  long local_6e8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a7;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  uint local_74;
  long local_68;
  
  if (param_1 == 0) {
    return 0x25;
  }
  uVar1 = param_4 | 3;
  if (param_2 != (long *)0x0) {
    uVar1 = param_4;
  }
  plVar2 = param_2;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x0;
  }
  if (plVar2 == (long *)0x0) {
    lVar28 = *(long *)(param_1 + 8);
  }
  else {
    lVar28 = *(long *)(param_1 + 8);
    if (*param_2 != lVar28) {
      return 0x23;
    }
  }
  lVar29 = *(long *)(lVar28 + 0x428);
  if ((*(int *)(lVar29 + 0x6f4) == 0xffff) || (*(long *)(lVar29 + 0x4f8) == 0)) {
    if (*(uint *)(lVar29 + 0x14) <= param_3) {
      return 6;
    }
  }
  else if (param_3 != 0) {
    if (*(uint *)(lVar29 + 0x500) < param_3) {
      return 6;
    }
    param_3 = (uint)*(ushort *)(*(long *)(lVar29 + 0x4f8) + (ulong)param_3 * 2);
    if (param_3 == 0) {
      return 6;
    }
  }
  if ((uVar1 & 0x400) != 0) {
    uVar1 = param_4 | 3;
  }
  *(undefined8 *)(param_1 + 0x140) = 0x10000;
  *(long *)(param_1 + 0x138) = 0x10000;
  if (plVar2 != (long *)0x0) {
    lVar17 = plVar2[4];
    *(long *)(param_1 + 0x140) = plVar2[5];
    *(long *)(param_1 + 0x138) = lVar17;
    if (plVar2[0xb] != 0xffffffff) {
      lVar17 = *(long *)(*plVar2 + 0x360);
      if (((*(long *)(lVar17 + 0xc0) != 0) && ((uVar1 >> 3 & 1) == 0)) &&
         (iVar12 = (**(code **)(lVar17 + 0x90))
                             (lVar28,plVar2[0xb],param_3,uVar1,*(undefined8 *)(*plVar2 + 0xc0),
                              param_1 + 0x98,&local_780), iVar12 == 0)) {
        *(undefined4 *)(param_1 + 200) = 0;
        bVar11 = (uVar1 & 0x10) != 0;
        *(ulong *)(param_1 + 0x30) = (local_780 >> 0x10 & 0xffff) << 6;
        *(ulong *)(param_1 + 0x38) = (local_780 & 0xffff) << 6;
        *(long *)(param_1 + 0x40) = (long)local_780._4_2_ << 6;
        *(long *)(param_1 + 0x48) = (long)local_780._6_2_ << 6;
        *(ulong *)(param_1 + 0x50) = (local_778 & 0xffff) << 6;
        *(long *)(param_1 + 0x58) = (long)local_778._2_2_ << 6;
        if (bVar11) {
          local_780._4_2_ = local_778._2_2_;
        }
        *(long *)(param_1 + 0x60) = (long)local_778._4_2_ << 6;
        if (bVar11) {
          local_780._6_2_ = local_778._4_2_;
        }
        *(undefined4 *)(param_1 + 0x90) = 0x62697473;
        *(int *)(param_1 + 0xc0) = (int)local_780._4_2_;
        *(int *)(param_1 + 0xc4) = (int)local_780._6_2_;
        *(ulong *)(param_1 + 0x68) = (local_778 >> 0x30) << 6;
        (**(code **)(*(long *)(lVar28 + 0x360) + 0xe0))(lVar28,0,param_3,&local_7c8,&local_7a0);
        *(ulong *)(param_1 + 0x70) = local_7a0 & 0xffff;
        if ((*(char *)(lVar28 + 0x1f0) == '\0') || (*(short *)(lVar28 + 0x21e) == 0)) {
          if (*(short *)(lVar28 + 600) == -1) {
            sVar6 = *(short *)(lVar28 + 0x198);
            sVar5 = *(short *)(lVar28 + 0x19a);
          }
          else {
            sVar6 = *(short *)(lVar28 + 0x2b2);
            sVar5 = *(short *)(lVar28 + 0x2b4);
          }
          local_7a0 = (long)sVar6 - (long)sVar5;
        }
        else {
          (**(code **)(*(long *)(lVar28 + 0x360) + 0xe0))(lVar28,1,param_3,&local_7c8,&local_7a0);
          local_7a0 = local_7a0 & 0xffff;
        }
        *(ulong *)(param_1 + 0x78) = local_7a0;
        return 0;
      }
    }
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    return 6;
  }
  uVar30 = *(uint *)(lVar29 + 0xa50);
  if (uVar30 == 0) {
    lStack_788 = *(long *)(lVar29 + 0x668);
    local_790 = *(long *)(lVar29 + 0x660);
    lStack_798 = *(long *)(lVar29 + 0x658);
    local_7a0 = *(ulong *)(lVar29 + 0x650);
    local_7f0 = *(long *)(lVar29 + 0x680);
    local_7e8 = *(long *)(lVar29 + 0x688);
LAB_0107eb84:
    bVar11 = false;
  }
  else {
    if (*(char *)(lVar29 + 0x1258) == '\x03') {
      if (*(uint *)(lVar29 + 0x1270) <= param_3 - *(int *)(lVar29 + 0x126c)) {
        puVar26 = *(undefined1 **)(lVar29 + 0x1260);
        pbVar24 = puVar26 + 2;
        uVar13 = (uint)CONCAT11(*puVar26,puVar26[1]);
        do {
          if (param_3 < uVar13) break;
          uVar27 = (uint)CONCAT11(pbVar24[1],pbVar24[2]);
          if (param_3 < uVar27) {
            bVar4 = *pbVar24;
            uVar23 = (uint)bVar4;
            *(uint *)(lVar29 + 0x1270) = uVar27 - uVar13;
            *(uint *)(lVar29 + 0x126c) = uVar13;
            *(byte *)(lVar29 + 0x1274) = bVar4;
            goto LAB_0107eb44;
          }
          pbVar24 = pbVar24 + 3;
          uVar13 = uVar27;
        } while (pbVar24 < puVar26 + *(uint *)(lVar29 + 0x1268));
        goto LAB_0107eb40;
      }
      uVar23 = (uint)*(byte *)(lVar29 + 0x1274);
    }
    else if (*(char *)(lVar29 + 0x1258) == '\0') {
      uVar23 = (uint)*(byte *)(*(long *)(lVar29 + 0x1260) + (ulong)param_3);
    }
    else {
LAB_0107eb40:
      uVar23 = 0;
    }
LAB_0107eb44:
    if (uVar30 <= uVar23) {
      uVar23 = uVar30 + 0xff;
    }
    lVar18 = *(long *)(lVar29 + (ulong)(byte)uVar23 * 8 + 0xa58);
    lVar31 = *(long *)(lVar29 + 0x678);
    lStack_788 = *(long *)(lVar18 + 0x58);
    local_790 = *(long *)(lVar18 + 0x50);
    lVar17 = *(long *)(lVar18 + 0x68);
    local_7f0 = *(long *)(lVar18 + 0x70);
    lStack_798 = *(long *)(lVar18 + 0x48);
    local_7a0 = *(ulong *)(lVar18 + 0x40);
                    /* try { // try from 0107eb6c to 0117ebd3 has its CatchHandler @ 0107ec6c */
    local_7e8 = *(long *)(lVar18 + 0x78);
    if (lVar31 == lVar17) goto LAB_0107eb84;
    uVar15 = FT_MulDiv(*(undefined8 *)(param_1 + 0x138),lVar31,lVar17);
    *(undefined8 *)(param_1 + 0x138) = uVar15;
    uVar15 = FT_MulDiv(*(undefined8 *)(param_1 + 0x140),lVar31,lVar17);
    *(undefined8 *)(param_1 + 0x140) = uVar15;
    bVar11 = true;
  }
                    /* try { // try from 0107ebd4 to 0117ec83 has its CatchHandler @ 0107e934 */
  puVar19 = (undefined2 *)(param_1 + 200);
  *puVar19 = 0;
  uVar30 = (uVar1 >> 1 ^ 0xffffffff) & 1;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(char *)(param_1 + 0x130) = (char)uVar30;
  *(byte *)(param_1 + 0x131) = (byte)(uVar1 & 1) ^ 1;
  *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
  lVar17 = *(long *)(lVar28 + 0x428);
  memset(&local_750,0,0x6f0);
  local_6ff = 1;
  local_780 = *(undefined8 *)(lVar28 + 0xb8);
  local_768 = **(long **)(param_1 + 0x128);
  local_760 = (undefined8 *)(local_768 + 0x18);
  local_758 = local_768 + 0x60;
  local_778 = lVar28;
  local_770 = param_1;
  FT_GlyphLoader_Rewind();
  local_6f8 = 0;
  local_6f0 = 0;
  if ((plVar2 != (long *)0x0) && (uVar30 != 0)) {
    local_6f0 = *(undefined8 *)plVar2[10];
    local_6f8 = *(long *)(*(long *)(param_1 + 0x128) + 0x40);
  }
  uStack_738 = 0;
  local_740 = 0;
  lStack_728 = 0;
  local_730 = 0;
                    /* catch() { ... } // from try @ 0107eb6c with catch @ 0107ec6c */
  uStack_748 = 0;
  local_750 = 0;
  local_9c = *(uint *)(lVar17 + 0xa0);
  local_88 = *(undefined8 *)(lVar17 + 0x5f0);
  local_74 = uVar1 >> 0x10 & 0xf;
  if (*(int *)(lVar17 + 0x64c) == 1) {
    local_94 = 0;
  }
  else if (local_9c < 0x4d8) {
    local_94 = 0x6b;
  }
  else {
    local_94 = 0x46b;
    if (0x846b < local_9c) {
      local_94 = 0x8000;
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    local_1a7 = 1;
  }
  local_6fe = 0;
  puVar20 = *(undefined8 **)(*(long *)(lVar28 + 0xf0) + 0x60);
  local_6e8 = lVar17;
  if (puVar20 == (undefined8 *)0x0) {
    uVar13 = FUN_01080bdc(*(long *)(lVar28 + 0x428) + 0x508,param_3,&local_7d8,&local_7a8);
    lVar17 = local_7a8;
  }
  else {
    uVar13 = (**(code **)*puVar20)(puVar20[1],param_3,&local_7c8);
    lVar17 = (long)(int)local_7c0;
    local_7d8 = local_7c8;
  }
  if (uVar13 != 0) {
    return uVar13;
  }
  local_68 = *(long *)(local_778 + 0x428);
  uVar13 = *(uint *)(local_68 + 0xa50);
  if (uVar13 == 0) {
    local_68 = local_68 + 0x610;
  }
  else {
    if (*(char *)(local_68 + 0x1258) == '\x03') {
      if (*(uint *)(local_68 + 0x1270) <= param_3 - *(int *)(local_68 + 0x126c)) {
        puVar26 = *(undefined1 **)(local_68 + 0x1260);
        pbVar24 = puVar26 + 2;
        uVar27 = (uint)CONCAT11(*puVar26,puVar26[1]);
        do {
          if (param_3 < uVar27) break;
          uVar23 = (uint)CONCAT11(pbVar24[1],pbVar24[2]);
          if (param_3 < uVar23) {
            bVar4 = *pbVar24;
            uVar22 = (ulong)bVar4;
            *(uint *)(local_68 + 0x1270) = uVar23 - uVar27;
            *(uint *)(local_68 + 0x126c) = uVar27;
            *(byte *)(local_68 + 0x1274) = bVar4;
            if (uVar13 < bVar4 || uVar13 == bVar4) {
              return 3;
            }
            goto LAB_0107eeec;
          }
          pbVar24 = pbVar24 + 3;
          uVar27 = uVar23;
        } while (pbVar24 < puVar26 + *(uint *)(local_68 + 0x1268));
        goto LAB_0107eee0;
      }
      bVar4 = *(byte *)(local_68 + 0x1274);
joined_r0x0107ed64:
      uVar22 = (ulong)bVar4;
      if (uVar13 <= bVar4) {
        return 3;
      }
    }
    else {
      if (*(char *)(local_68 + 0x1258) == '\0') {
        bVar4 = *(byte *)(*(long *)(local_68 + 0x1260) + (ulong)param_3);
        goto joined_r0x0107ed64;
      }
LAB_0107eee0:
      uVar22 = 0;
      if (uVar13 == 0) {
        return 3;
      }
    }
LAB_0107eeec:
    local_68 = *(long *)(local_68 + uVar22 * 8 + 0xa58);
    if ((plVar2 != (long *)0x0) && (local_6f8 != 0)) {
      local_6f0 = *(undefined8 *)(plVar2[10] + uVar22 * 8 + 8);
    }
  }
  local_a0 = *(uint *)(local_68 + 0x410);
  local_90 = *(undefined8 *)(local_68 + 0x438);
  if (*(int *)(local_6e8 + 0x64c) == 1) {
    local_98 = 0;
  }
  else if (local_a0 < 0x4d8) {
    local_98 = 0x6b;
  }
  else {
    local_98 = 0x46b;
    if (0x846b < local_a0) {
      local_98 = 0x8000;
    }
  }
  uStack_1b0 = *(undefined8 *)(local_68 + 0x3f8);
  local_1b8 = *(undefined8 *)(local_68 + 0x3f0);
  local_7a8 = lVar17;
  uVar13 = FUN_0107ffe8(&local_780,local_7d8,lVar17);
  if ((uVar13 & 0xff) == 0xa4) {
    *(undefined1 *)(param_1 + 0x130) = 0;
    uVar13 = FUN_0107ffe8(&local_780,local_7d8,lVar17);
    uVar30 = 0;
    bVar11 = true;
  }
  plVar21 = *(long **)(*(long *)(lVar28 + 0xf0) + 0x60);
  if (plVar21 == (long *)0x0) {
    uVar22 = local_7c8;
    lVar18 = local_7b8;
    lVar31 = lStack_7b0;
    uVar8 = local_740;
    lVar9 = local_730;
    lVar10 = lStack_728;
    if (*(long *)(*(long *)(lVar28 + 0x428) + 0x538) == 0) {
      FT_Stream_ReleaseFrame(*(undefined8 *)(*(long *)(lVar28 + 0x428) + 0x508),&local_7d8);
      uVar22 = local_7c8;
      lVar18 = local_7b8;
      lVar31 = lStack_7b0;
      uVar8 = local_740;
      lVar9 = local_730;
      lVar10 = lStack_728;
    }
  }
  else {
    local_7c0 = CONCAT44(local_7c0._4_4_,(int)lVar17);
    local_7c8 = local_7d8;
    (**(code **)(*plVar21 + 8))(plVar21[1],&local_7c8);
    uVar22 = local_7c8;
    lVar18 = local_7b8;
    lVar31 = lStack_7b0;
    uVar8 = local_740;
    lVar9 = local_730;
    lVar10 = lStack_728;
  }
  lStack_7b0 = lVar10;
  local_7b8 = lVar9;
  local_7c8 = uVar8;
  if (uVar13 != 0) {
    return uVar13;
  }
  plVar21 = *(long **)(*(long *)(lVar28 + 0xf0) + 0x60);
  if (plVar21 == (long *)0x0) {
    if (*(long *)(lVar29 + 0x530) == 0) goto LAB_0107f03c;
    lVar29 = *(long *)(lVar29 + 0x538) + *(long *)(*(long *)(lVar29 + 0x530) + (ulong)param_3 * 8) +
             -1;
  }
  else {
    lVar29 = 0;
    lVar17 = 0;
  }
  *(long *)(param_1 + 0x100) = lVar29;
  *(long *)(param_1 + 0x108) = lVar17;
LAB_0107f03c:
  if (local_770 != 0) {
    *(undefined8 *)(local_770 + 0xe8) = local_760[4];
    uVar15 = local_760[2];
    *(undefined8 *)(local_770 + 0xe0) = local_760[3];
    *(undefined8 *)(local_770 + 0xd8) = uVar15;
    uVar15 = *local_760;
    *(undefined8 *)(local_770 + 0xd0) = local_760[1];
    *(undefined8 *)(local_770 + 200) = uVar15;
    plVar21 = *(long **)(*(long *)(lVar28 + 0xf0) + 0x60);
  }
  local_740 = local_7c8;
  local_730 = local_7b8;
  lStack_728 = lStack_7b0;
  if ((plVar21 != (long *)0x0) && (*(code **)(*plVar21 + 0x10) != (code *)0x0)) {
    local_7c0 = 0;
    uVar13 = (**(code **)(*plVar21 + 0x10))(plVar21[1],param_3,0,&local_7c8);
    local_740 = local_7c8;
    lStack_728 = lStack_7b0;
    local_730 = local_7b8;
    uVar22 = local_7c8;
    lVar18 = local_7b8;
    lVar31 = lStack_7b0;
    if (uVar13 != 0) {
      return uVar13;
    }
  }
  lStack_7b0 = lVar31;
  local_7b8 = lVar18;
  local_7c8 = uVar22;
  if ((uVar1 >> 10 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x50) = local_1b8;
    *(undefined8 *)(param_1 + 0x70) = local_1b8;
    *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
    if ((*(char *)(lVar28 + 0x1f0) == '\0') || (*(short *)(lVar28 + 0x21e) == 0)) {
      if (*(short *)(lVar28 + 600) == -1) {
        sVar6 = *(short *)(lVar28 + 0x198);
        psVar25 = (short *)(lVar28 + 0x19a);
      }
      else {
        sVar6 = *(short *)(lVar28 + 0x2b2);
        psVar25 = (short *)(lVar28 + 0x2b4);
      }
      uVar22 = (long)sVar6 - (long)*psVar25;
      bVar7 = false;
      *(ulong *)(param_1 + 0x68) = uVar22;
    }
    else {
      local_7c8 = local_7c8 & 0xffffffffffff0000;
      local_7d8 = local_7d8 & 0xffffffffffff0000;
      bVar7 = true;
      (**(code **)(*(long *)(lVar28 + 0x360) + 0xe0))(lVar28,1,param_3,&local_7c8,&local_7d8);
      *(long *)(param_1 + 0x60) = (long)(short)local_7c8;
      uVar22 = local_7d8 & 0xffff;
      *(ulong *)(param_1 + 0x68) = uVar22;
    }
    *(ulong *)(param_1 + 0x78) = uVar22;
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if ((plVar2 == (long *)0x0) || (0x17 < *(ushort *)((long)plVar2 + 0x1a))) {
      uVar16 = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0xe8) = 0x100;
      uVar16 = 0x104;
    }
    *(undefined4 *)(param_1 + 0xe8) = uVar16;
    if ((((local_7a0 != 0x10000) || (lStack_788 != 0x10000)) || (lStack_798 != 0)) ||
       (local_790 != 0)) {
      FT_Outline_Transform(puVar19,&local_7a0);
    }
    if (local_7e8 != 0 || local_7f0 != 0) {
      FT_Outline_Translate(puVar19,local_7f0,local_7e8);
    }
    local_7d8 = *(ulong *)(param_1 + 0x50);
    local_7d0 = 0;
    FT_Vector_Transform(&local_7d8,&local_7a0);
    *(ulong *)(param_1 + 0x50) = local_7d8 + local_7f0;
    local_7d0 = *(long *)(param_1 + 0x68);
    local_7d8 = 0;
    FT_Vector_Transform(&local_7d8,&local_7a0);
    *(long *)(param_1 + 0x68) = local_7d0 + local_7e8;
    if (((uVar1 & 1) == 0) || (bVar11)) {
      puVar20 = *(undefined8 **)(param_1 + 0xd0);
      uVar15 = *(undefined8 *)(param_1 + 0x138);
      uVar3 = *(undefined8 *)(param_1 + 0x140);
      if (((uVar30 == 0) || (local_6f8 == 0)) && (0 < *(short *)(param_1 + 0xca))) {
        iVar12 = *(short *)(param_1 + 0xca) + 1;
        do {
          uVar14 = FT_MulFix(*puVar20,uVar15);
          *puVar20 = uVar14;
          uVar14 = FT_MulFix(puVar20[1],uVar3);
          iVar12 = iVar12 + -1;
          puVar20[1] = uVar14;
          puVar20 = puVar20 + 2;
        } while (1 < iVar12);
      }
      uVar15 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),uVar15);
      *(undefined8 *)(param_1 + 0x50) = uVar15;
      uVar15 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),uVar3);
      *(undefined8 *)(param_1 + 0x68) = uVar15;
    }
    FT_Outline_Get_CBox(puVar19,&local_7c8);
    *(ulong *)(param_1 + 0x30) = local_7b8 - local_7c8;
    *(long *)(param_1 + 0x38) = lStack_7b0 - local_7c0;
    *(ulong *)(param_1 + 0x40) = local_7c8;
    *(long *)(param_1 + 0x48) = lStack_7b0;
    if (bVar7) {
      lVar28 = *(long *)(param_1 + 0x50);
      if (lVar28 < 0) {
        lVar28 = lVar28 + 1;
      }
      *(ulong *)(param_1 + 0x58) = local_7c8 - (lVar28 >> 1);
    }
    else if ((uVar1 >> 4 & 1) != 0) {
      ft_synthesize_vertical_metrics(param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
    }
    return 0;
  }
  lVar28 = *(long *)(param_1 + 0x128);
  *(ulong *)(param_1 + 0x40) = local_740;
  *(undefined8 *)(param_1 + 0x50) = local_1b8;
  *(long *)(lVar28 + 0x28) = lStack_788;
  *(long *)(lVar28 + 0x20) = local_790;
  *(long *)(lVar28 + 0x30) = local_7f0;
  *(long *)(lVar28 + 0x18) = lStack_798;
  *(ulong *)(lVar28 + 0x10) = local_7a0;
  *(undefined1 *)(lVar28 + 0xc) = 1;
  *(long *)(lVar28 + 0x38) = local_7e8;
  return 0;
}

