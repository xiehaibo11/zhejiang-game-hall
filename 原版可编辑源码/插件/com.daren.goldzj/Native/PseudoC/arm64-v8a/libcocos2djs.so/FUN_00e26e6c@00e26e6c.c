
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e26e6c(long param_1,long *param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  short sVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte bVar20;
  code *pcVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 local_240;
  undefined2 local_234 [2];
  undefined8 local_230;
  undefined8 uStack_228;
  long local_220;
  long local_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulong local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_90;
  long lStack_88;
  long local_80;
  long local_78;
  
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_2 == (long *)0x0) {
    return 0x24;
  }
  lVar27 = *(long *)(param_1 + 8);
  if (lVar27 == 0) {
    return 0x23;
  }
  if ((*(uint *)(lVar27 + 0x20) <= param_3) && (*(long *)(*(long *)(lVar27 + 0xf0) + 0x68) == 0)) {
    return 6;
  }
  if ((param_4 >> 1 & 1) != 0) {
    if ((*(byte *)(lVar27 + 0x11) & 0x20) != 0) {
      param_4 = param_4 & 0xfffffffd;
    }
    param_4 = param_4 >> 0xe & 2 | param_4;
  }
  if ((param_4 & 0x401) != 0) {
    uVar16 = 0xb;
    if ((*(byte *)(lVar27 + 0x11) & 0x20) != 0) {
      uVar16 = 9;
    }
    param_4 = uVar16 | param_4;
  }
  plVar22 = param_2 + 0xc;
  if ((param_4 & 2) != 0) {
    plVar22 = param_2 + 3;
  }
  param_2[0xb] = (long)plVar22;
  if (((((param_4 >> 3 & 1) == 0) && (param_2[0x1d] != 0xffffffff)) &&
      ((*(ushort *)(lVar27 + 10) & 0x7fff) == 0)) && (-1 < *(char *)(lVar27 + 0x11))) {
    lVar24 = param_2[4];
    lVar29 = param_2[5];
    uVar15 = (**(code **)(*(long *)(lVar27 + 0x370) + 0x90))
                       (lVar27,param_2[0x1d],param_3,param_4,*(undefined8 *)(lVar27 + 0xc0),
                        param_1 + 0x98,&local_230);
    if (uVar15 == 0) {
      *(undefined4 *)(param_1 + 200) = 0;
      bVar12 = (param_4 & 0x10) != 0;
      *(ulong *)(param_1 + 0x30) = (local_230 >> 0x10 & 0xffff) << 6;
      *(ulong *)(param_1 + 0x38) = (local_230 & 0xffff) << 6;
      *(long *)(param_1 + 0x40) = (long)local_230._4_2_ << 6;
      *(long *)(param_1 + 0x48) = (long)local_230._6_2_ << 6;
      *(ulong *)(param_1 + 0x50) = ((ulong)uStack_228 & 0xffff) << 6;
      *(long *)(param_1 + 0x58) = (long)uStack_228._2_2_ << 6;
      if (bVar12) {
        local_230._4_2_ = uStack_228._2_2_;
      }
      *(long *)(param_1 + 0x60) = (long)uStack_228._4_2_ << 6;
      lVar27 = *(long *)(param_1 + 8);
      if (bVar12) {
        local_230._6_2_ = uStack_228._4_2_;
      }
      *(undefined4 *)(param_1 + 0x90) = 0x62697473;
      *(ulong *)(param_1 + 0x68) = ((ulong)uStack_228 >> 0x30) << 6;
      *(int *)(param_1 + 0xc0) = (int)local_230._4_2_;
      *(int *)(param_1 + 0xc4) = (int)local_230._6_2_;
      if ((*(byte *)(lVar27 + 0x10) & 1) != 0) {
        local_200 = *(undefined8 *)(lVar27 + 0xc0);
        uStack_d0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_108 = 0;
        uStack_210 = (ulong)(int)param_4;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        local_140 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_158 = 0;
        local_160 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_178 = 0;
        local_180 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        local_1a0 = 0;
        uStack_1a8 = 0;
        local_1b0 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        lStack_1d8 = 0;
        lStack_1e0 = 0;
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1f8 = 0;
        uStack_208 = 0;
        local_218 = 0;
        local_120 = 0;
        uStack_128 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_230 = lVar27;
        uStack_228 = param_2;
        local_220 = param_1;
        FUN_00e31ea8(&local_230,param_3,0,1);
        FT_List_Finalize(&local_c8,0,*(undefined8 *)(local_230 + 0xb8),0);
        *(long *)(param_1 + 0x70) = (long)(int)uStack_1c8;
        *(long *)(param_1 + 0x78) = (long)local_100._4_4_;
        if (((int)uStack_1c8 != 0) && (*(long *)(param_1 + 0x50) == 0)) {
          uVar19 = FT_MulFix((long)(int)uStack_1c8,lVar24);
          *(undefined8 *)(param_1 + 0x50) = uVar19;
        }
        if ((*(long *)(param_1 + 0x68) == 0) && (*(long *)(param_1 + 0x78) != 0)) {
          uVar19 = FT_MulFix(*(long *)(param_1 + 0x78),lVar29);
          *(undefined8 *)(param_1 + 0x68) = uVar19;
          return 0;
        }
        return 0;
      }
      return 0;
    }
    lVar27 = *(long *)(param_1 + 8);
    if ((uVar15 & 0xff) == 0x9d) {
      if ((*(ulong *)(lVar27 + 0x10) & 1) == 0) {
        local_230 = local_230 & 0xffffffffffff0000;
        local_90 = local_90 & 0xffffffffffff0000;
        local_b0 = local_b0 & 0xffffffffffff0000;
        local_234[0] = 0;
        if (*(long *)(lVar27 + 0x4e0) != 0) {
          (**(code **)(*(long *)(lVar27 + 0x370) + 0x118))(lVar27,0,param_3,&local_230,&local_b0);
          if (*(char *)(lVar27 + 0x1f0) == '\0') {
            if (*(short *)(lVar27 + 0x268) == -1) {
              sVar14 = *(short *)(lVar27 + 0x198);
              sVar6 = *(short *)(lVar27 + 0x19a);
            }
            else {
              sVar14 = *(short *)(lVar27 + 0x2c2);
              sVar6 = *(short *)(lVar27 + 0x2c4);
            }
            local_90 = CONCAT62(local_90._2_6_,sVar14);
            iVar7 = (int)sVar14 - (int)sVar6;
            iVar2 = -iVar7;
            if (-1 < iVar7) {
              iVar2 = iVar7;
            }
            local_234[0] = (undefined2)iVar2;
          }
          else {
            (**(code **)(*(long *)(lVar27 + 0x370) + 0x118))(lVar27,1,param_3,&local_90,local_234);
          }
          *(undefined4 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          uVar19 = FT_MulFix((long)(short)local_230,lVar24);
          *(undefined8 *)(param_1 + 0x40) = uVar19;
          *(undefined8 *)(param_1 + 0x48) = 0;
          uVar19 = FT_MulFix(local_b0 & 0xffff,lVar24);
          *(undefined8 *)(param_1 + 0x50) = uVar19;
          *(undefined8 *)(param_1 + 0x58) = 0;
          uVar19 = FT_MulFix((long)(short)local_90,lVar29);
          *(undefined8 *)(param_1 + 0x60) = uVar19;
          uVar19 = FT_MulFix(local_234[0],lVar29);
          *(undefined8 *)(param_1 + 0x68) = uVar19;
          *(undefined4 *)(param_1 + 0x90) = 0x62697473;
          *(undefined1 *)(param_1 + 0xb2) = 1;
          *(undefined8 *)(param_1 + 0xc0) = 0;
          return 0;
        }
        return (ulong)(uint)uVar15;
      }
    }
    else if ((*(ulong *)(lVar27 + 0x10) & 1) == 0) {
      return (ulong)(uint)uVar15;
    }
  }
  uVar30 = (ulong)(int)param_4;
  if (((uVar30 & 1) == 0) && ((char)param_2[0x1c] == '\0')) {
    return 0x24;
  }
  if ((param_4 >> 0xe & 1) != 0) {
    return 6;
  }
  lVar24 = *(long *)(lVar27 + 0xb0);
  uVar19 = *(undefined8 *)(lVar27 + 0xc0);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  lStack_1e8 = 0;
  local_1f0 = 0;
  lStack_1d8 = 0;
  lStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_228 = (long *)0x0;
  local_230 = 0;
  local_218 = 0;
  local_220 = 0;
  if ((param_4 >> 1 & 1) == 0) {
    uVar16 = *(uint *)(param_2 + 0x43);
    uVar30 = (ulong)uVar16;
    uVar8 = param_4 >> 7;
    if ((int)uVar16 < 0) {
      lVar29 = *param_2;
      lVar28 = *(long *)(lVar29 + 0xb8);
      FUN_00e139fc(lVar28,param_2[0x20]);
      param_2[0x20] = 0;
      FUN_00e139fc(lVar28,param_2[0x22]);
      param_2[0x22] = 0;
      FUN_00e139fc(lVar28,param_2[0x37]);
      param_2[0x37] = 0;
      FUN_00e139fc(lVar28,param_2[0x39]);
      puVar32 = (undefined8 *)param_2[0x42];
      param_2[0x39] = 0;
      if (puVar32 != (undefined8 *)0x0) {
        uVar17 = puVar32[2];
        *(undefined4 *)(puVar32 + 0x60) = 0;
        FUN_00e139fc(uVar17,puVar32[6]);
        puVar32[6] = 0;
        puVar32[5] = 0;
        FUN_00e139fc(uVar17,puVar32[0x5f]);
        puVar32[0x5f] = 0;
        puVar32[0x5e] = 0;
        FUN_00e139fc(uVar17,puVar32[0x58]);
        puVar32[0x58] = 0;
        *(undefined4 *)(puVar32 + 0x57) = 0;
        *puVar32 = 0;
        puVar32[1] = 0;
        FUN_00e139fc(uVar17,puVar32);
      }
      lVar33 = param_2[0x3a];
      plVar22 = param_2 + 0x3a;
      if (lVar33 != 0) {
        FUN_00e139fc(lVar33,param_2[0x40]);
        param_2[0x40] = 0;
        FUN_00e139fc(lVar33,param_2[0x3f]);
        param_2[0x3f] = 0;
        FUN_00e139fc(lVar33,param_2[0x3d]);
        param_2[0x3d] = 0;
        FUN_00e139fc(lVar33,param_2[0x3c]);
        param_2[0x3c] = 0;
        FUN_00e139fc(lVar33,param_2[0x3e]);
        param_2[0x3e] = 0;
        *plVar22 = 0;
        param_2[0x3b] = 0;
      }
      param_2[0x43] = -1;
      lVar33 = TT_New_Context(*(undefined8 *)(lVar29 + 0xb0));
      param_2[0x42] = lVar33;
      uVar5 = *(ushort *)(lVar29 + 0x1e0);
      *(uint *)((long)param_2 + 0xfc) = (uint)uVar5;
      uVar3 = *(ushort *)(lVar29 + 0x1e2);
      *(undefined4 *)(param_2 + 0x1f) = 0;
      *(undefined4 *)(param_2 + 0x21) = 0;
      param_2[0x23] = 0;
      *(uint *)((long)param_2 + 0x10c) = (uint)uVar3;
      param_2[0x36] = *(long *)(lVar29 + 0x478);
      uVar4 = *(undefined2 *)(lVar29 + 0x1de);
      *(undefined2 *)((long)param_2 + 0xe1) = 0;
      param_2[0x19] = 0;
      param_2[0x18] = 0;
      param_2[0x1b] = 0;
      param_2[0x1a] = 0;
      *(undefined2 *)(param_2 + 0x38) = uVar4;
      lVar33 = FUN_00e13bcc(lVar28,0x28,0,uVar5,0,&local_b0);
      param_2[0x20] = lVar33;
      if ((int)local_b0 == 0) {
        lVar33 = FUN_00e13bcc(lVar28,0x28,0,*(undefined4 *)((long)param_2 + 0x10c),0,&local_b0);
        param_2[0x22] = lVar33;
        if ((int)local_b0 == 0) {
          lVar33 = FUN_00e13bcc(lVar28,8,0,param_2[0x36],0,&local_b0);
          param_2[0x37] = lVar33;
          if ((int)local_b0 == 0) {
            lVar33 = FUN_00e13bcc(lVar28,8,0,(short)param_2[0x38],0,&local_b0);
            param_2[0x39] = lVar33;
            if ((int)local_b0 == 0) {
              sVar14 = *(short *)(lVar29 + 0x1dc) + 4;
              param_2[0x41] = 0;
              param_2[0x40] = 0;
              param_2[0x3f] = 0;
              param_2[0x3e] = 0;
              param_2[0x3d] = 0;
              param_2[0x3c] = 0;
              param_2[0x3b] = 0;
              param_2[0x3a] = lVar28;
              lVar33 = FUN_00e13bcc(lVar28,0x10,0,sVar14,0,&local_90);
              param_2[0x3c] = lVar33;
              if ((int)local_90 == 0) {
                lVar33 = FUN_00e13bcc(lVar28,0x10,0,sVar14,0,&local_90);
                param_2[0x3d] = lVar33;
                if ((int)local_90 != 0) goto LAB_00e27be4;
                lVar33 = FUN_00e13bcc(lVar28,0x10,0,sVar14,0,&local_90);
                param_2[0x3e] = lVar33;
                if ((int)local_90 != 0) goto LAB_00e27be4;
                lVar33 = FUN_00e13bcc(lVar28,1,0,sVar14,0,&local_90);
                param_2[0x3f] = lVar33;
                if ((int)local_90 != 0) goto LAB_00e27be4;
                lVar28 = FUN_00e13bcc(lVar28,2,0,0,0,&local_90);
                param_2[0x40] = lVar28;
                if ((int)local_90 != 0) goto LAB_00e27be4;
                *(short *)(param_2 + 0x3b) = sVar14;
                *(undefined2 *)((long)param_2 + 0x1da) = 0;
                local_b0 = local_b0 & 0xffffffff00000000;
LAB_00e27c4c:
                param_2[0x2b] = 0x4000000040000000;
                param_2[0x2a] = 0x4000000000000000;
                param_2[0x2d] = 1;
                param_2[0x2c] = 0;
                param_2[0x33] = 0x30009;
                param_2[0x32] = 0;
                param_2[0x35] = 1;
                param_2[0x34] = 0x1000100000000;
                param_2[0x2f] = 0x100000001;
                param_2[0x2e] = 0x40;
                param_2[0x31] = 0;
                param_2[0x30] = 0x44;
                *(short *)((long)param_2 + 0x1dc) = sVar14;
                pcVar21 = *(code **)(*(long *)(*(long *)(lVar29 + 0xb0) + 8) + 0x138);
                pcVar1 = TT_RunIns;
                if (pcVar21 != (code *)0x0) {
                  pcVar1 = pcVar21;
                }
                *(code **)(lVar29 + 0x488) = pcVar1;
                lVar28 = *param_2;
                lVar29 = param_2[0x42];
                uVar15 = FUN_00e33214(lVar29,lVar28,param_2);
                uVar30 = (ulong)(uint)uVar15;
                if (uVar15 == 0) {
                  *(byte *)(lVar29 + 0x3c9) = (byte)uVar8 & 1;
                  *(undefined4 *)(lVar29 + 0x2f0) = 0;
                  *(undefined8 *)(lVar29 + 0x20) = 0;
                  *(undefined1 *)(lVar29 + 0x360) = 0;
                  *(undefined4 *)(lVar29 + 400) = 0;
                  *(undefined2 *)(lVar29 + 0x1d8) = 0;
                  *(undefined8 *)(lVar29 + 0x198) = 0;
                  *(undefined8 *)(lVar29 + 0x1a0) = 0;
                  *(undefined8 *)(lVar29 + 0x348) = 0x40;
                  *(undefined8 *)(lVar29 + 0x358) = 0;
                  *(undefined8 *)(lVar29 + 0x350) = 0;
                  *(undefined8 *)(lVar29 + 0x3d0) = 0x4000;
                  *(undefined8 *)(lVar29 + 0x1e0) = 0x10000;
                  *(undefined8 *)(lVar29 + 0x1e8) = 0;
                  uVar23 = *(undefined8 *)(lVar28 + 0x460);
                  uVar17 = *(undefined8 *)(lVar28 + 0x458);
                  *(undefined8 *)(lVar29 + 0x308) = uVar23;
                  *(undefined8 *)(lVar29 + 0x310) = uVar17;
                  *(undefined8 *)(lVar29 + 0x330) = 0;
                  *(undefined8 *)(lVar29 + 0x328) = 0;
                  *(undefined8 *)(lVar29 + 800) = 0;
                  *(undefined8 *)(lVar29 + 0x318) = 0;
                  if (*(long *)(lVar28 + 0x458) == 0) {
                    *(undefined4 *)(param_2 + 0x43) = 0;
                  }
                  else {
                    *(undefined8 *)(lVar29 + 0x290) = uVar17;
                    *(undefined8 *)(lVar29 + 0x280) = uVar23;
                    *(undefined8 *)(lVar29 + 0x288) = 0;
                    *(undefined4 *)(lVar29 + 0x278) = 1;
                    uVar15 = (**(code **)(lVar28 + 0x488))(lVar29);
                    uVar30 = (ulong)(uint)uVar15;
                    *(undefined4 *)(param_2 + 0x43) = uVar15;
                    if (uVar15 != 0) goto LAB_00e27e18;
                  }
                  uVar30 = 0;
                  *(undefined4 *)(param_2 + 0x1f) = *(undefined4 *)(lVar29 + 0x2c8);
                  *(undefined4 *)(param_2 + 0x21) = *(undefined4 *)(lVar29 + 0x2d8);
                  param_2[0x23] = *(long *)(lVar29 + 0x2e8);
                  lVar28 = *(long *)(lVar29 + 0x308);
                  param_2[0x25] = *(long *)(lVar29 + 0x310);
                  param_2[0x24] = lVar28;
                  lVar28 = *(long *)(lVar29 + 0x318);
                  param_2[0x27] = *(long *)(lVar29 + 800);
                  param_2[0x26] = lVar28;
                  lVar28 = *(long *)(lVar29 + 0x328);
                  param_2[0x29] = *(long *)(lVar29 + 0x330);
                  param_2[0x28] = lVar28;
                }
LAB_00e27e18:
                local_b0 = CONCAT44(local_b0._4_4_,(int)uVar30);
                goto LAB_00e27444;
              }
LAB_00e27be4:
              lVar28 = *plVar22;
              if (lVar28 == 0) {
                local_b0 = CONCAT44(local_b0._4_4_,(int)local_90);
              }
              else {
                FUN_00e139fc(lVar28,param_2[0x40]);
                param_2[0x40] = 0;
                FUN_00e139fc(lVar28,param_2[0x3f]);
                param_2[0x3f] = 0;
                FUN_00e139fc(lVar28,param_2[0x3d]);
                param_2[0x3d] = 0;
                FUN_00e139fc(lVar28,param_2[0x3c]);
                param_2[0x3c] = 0;
                FUN_00e139fc(lVar28,param_2[0x3e]);
                param_2[0x3e] = 0;
                *plVar22 = 0;
                param_2[0x3b] = 0;
                local_b0 = CONCAT44(local_b0._4_4_,(int)local_90);
                if ((int)local_90 == 0) goto LAB_00e27c4c;
              }
            }
          }
        }
      }
      FUN_00e335f0(param_2);
      uVar30 = local_b0 & 0xffffffff;
LAB_00e27444:
      if ((int)uVar30 != 0) {
        return uVar30;
      }
      uVar30 = (ulong)*(uint *)((long)param_2 + 0x21c);
      if ((int)*(uint *)((long)param_2 + 0x21c) < 0) {
        if (param_2[0x36] != 0) {
          lVar29 = *param_2;
          uVar30 = 1;
          uVar34 = 0;
          do {
            uVar18 = uVar30;
            uVar17 = FT_MulFix((long)*(short *)(*(long *)(lVar29 + 0x480) + uVar34 * 2),
                               param_2[0x17]);
            *(undefined8 *)(param_2[0x37] + uVar34 * 8) = uVar17;
            uVar30 = (ulong)((int)uVar18 + 1);
            uVar34 = uVar18;
          } while (uVar18 < (ulong)param_2[0x36]);
        }
        uVar30 = (ulong)*(ushort *)((long)param_2 + 0x1dc);
        if (uVar30 != 0) {
          puVar32 = (undefined8 *)param_2[0x3c];
          puVar25 = (undefined8 *)param_2[0x3d];
          do {
            *puVar32 = 0;
            puVar32[1] = 0;
            *puVar25 = 0;
            puVar25[1] = 0;
            uVar30 = uVar30 - 1;
            puVar32 = puVar32 + 2;
            puVar25 = puVar25 + 2;
          } while (uVar30 != 0);
        }
        uVar5 = *(ushort *)(param_2 + 0x38);
        if (uVar5 != 0) {
          uVar16 = (uint)uVar5;
          if (uVar5 < 2) {
            uVar16 = 1;
          }
          memset((void *)param_2[0x39],0,(ulong)(uVar16 << 3));
        }
        param_2[0x2b] = 0x4000000040000000;
        param_2[0x2a] = 0x4000000000000000;
        param_2[0x2d] = 1;
        param_2[0x2c] = 0;
        param_2[0x33] = 0x30009;
        param_2[0x32] = 0;
        param_2[0x35] = 1;
        param_2[0x34] = 0x1000100000000;
        param_2[0x2f] = 0x100000001;
        param_2[0x2e] = 0x40;
        param_2[0x31] = 0;
        param_2[0x30] = 0x44;
        uVar30 = FUN_00e334a4(param_2,uVar8 & 1);
        uVar30 = uVar30 & 0xffffffff;
      }
      uVar31 = (uint)uVar30;
    }
    else {
      uVar31 = *(uint *)((long)param_2 + 0x21c);
      if ((int)uVar31 < 0) goto LAB_00e27444;
      if (uVar16 != 0) {
        return uVar30;
      }
      uVar30 = (ulong)uVar31;
    }
    if (uVar31 != 0) {
      return uVar30;
    }
    lVar29 = param_2[0x42];
    if (lVar29 == 0) {
      return 0x99;
    }
    uVar16 = param_4 & 0xf0000;
    bVar12 = *(int *)(lVar24 + 0x78) != 0x28;
    if (bVar12) {
      bVar20 = 0;
      bVar9 = false;
    }
    else {
      bVar9 = uVar16 != 0x20000 && (param_4 & 0x70000) == 0;
      bVar20 = uVar16 != 0x20000 & (byte)((param_4 & 0x40000) >> 0x12);
    }
    bVar10 = bVar12 && uVar16 != 0x20000;
    bVar12 = !bVar12 && uVar16 != 0x20000;
    *(byte *)(lVar29 + 0x42a) = bVar20;
    uVar15 = FUN_00e33214(lVar29,lVar27,param_2);
    if (uVar15 != 0) {
      return (ulong)(uint)uVar15;
    }
    if (*(int *)(lVar24 + 0x78) == 0x28) {
      bVar13 = bVar12 != (bool)*(char *)(lVar29 + 0x429);
      if (bVar13) {
        *(bool *)(lVar29 + 0x429) = bVar12;
      }
      bVar12 = bVar9 != (bool)*(char *)(lVar29 + 0x42e);
      if (bVar12) {
        *(bool *)(lVar29 + 0x42e) = bVar9;
      }
      bVar12 = bVar12 || bVar13;
      if ((bool)*(char *)(lVar29 + 0x428) != bVar10) goto LAB_00e27600;
LAB_00e27644:
      if (bVar12) {
        lVar24 = param_2[0x36];
        goto joined_r0x00e27608;
      }
    }
    else {
      bVar12 = false;
      if ((bool)*(char *)(lVar29 + 0x428) == bVar10) goto LAB_00e27644;
LAB_00e27600:
      *(bool *)(lVar29 + 0x428) = bVar10;
      lVar24 = param_2[0x36];
joined_r0x00e27608:
      if (lVar24 != 0) {
        uVar30 = 1;
        uVar34 = 0;
        do {
          uVar18 = uVar30;
          uVar17 = FT_MulFix((long)*(short *)(*(long *)(lVar27 + 0x480) + uVar34 * 2),param_2[0x17])
          ;
          *(undefined8 *)(param_2[0x37] + uVar34 * 8) = uVar17;
          uVar30 = (ulong)((int)uVar18 + 1);
          uVar34 = uVar18;
        } while (uVar18 < (ulong)param_2[0x36]);
      }
      uVar15 = FUN_00e334a4(param_2,uVar8 & 1);
      if (uVar15 != 0) {
        return (ulong)(uint)uVar15;
      }
    }
    if ((*(byte *)(lVar29 + 0x264) >> 1 & 1) != 0) {
      *(undefined8 *)(lVar29 + 0x230) = 1;
      *(undefined8 *)(lVar29 + 0x228) = 0;
      *(undefined8 *)(lVar29 + 0x220) = 0x4000000040000000;
      *(undefined8 *)(lVar29 + 0x218) = 0x4000000000000000;
      *(undefined8 *)(lVar29 + 0x270) = 1;
      *(undefined8 *)(lVar29 + 0x268) = 0x1000100000000;
      *(undefined8 *)(lVar29 + 0x260) = 0x30009;
      *(undefined8 *)(lVar29 + 600) = 0;
      *(undefined8 *)(lVar29 + 0x250) = 0;
      *(undefined8 *)(lVar29 + 0x248) = 0x44;
      *(undefined8 *)(lVar29 + 0x240) = 0x100000001;
      *(undefined8 *)(lVar29 + 0x238) = 0x40;
    }
    *(byte *)(lVar29 + 0x3c9) = (byte)(param_4 >> 7) & 1;
    uStack_118 = *(undefined8 *)(lVar29 + 0x2c0);
    uVar30 = (ulong)(int)(param_4 | (*(byte *)(lVar29 + 0x264) & 1) << 1);
    local_120 = lVar29;
  }
  lVar24 = **(long **)(param_1 + 0x128);
  FUN_00e13908(lVar24);
  local_c8 = 0;
  local_c0 = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  local_230 = lVar27;
  uStack_228 = param_2;
  local_220 = param_1;
  local_218 = lVar24;
  uStack_210 = uVar30;
  local_200 = uVar19;
  uVar15 = FUN_00e31ea8(&local_230,param_3,0,0);
  uVar30 = (ulong)(uint)uVar15;
  if (uVar15 != 0) goto LAB_00e27a40;
  lVar27 = local_230;
  plVar22 = uStack_228;
  lVar24 = local_220;
  if (*(int *)(param_1 + 0x90) == 0x636f6d70) {
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(local_218 + 0x50);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(local_218 + 0x58);
  }
  else {
    uVar17 = *(undefined8 *)(local_218 + 0x20);
    uVar19 = *(undefined8 *)(local_218 + 0x18);
    uVar35 = *(undefined8 *)(local_218 + 0x30);
    uVar23 = *(undefined8 *)(local_218 + 0x28);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(local_218 + 0x38);
    *(undefined8 *)(param_1 + 0xd0) = uVar17;
    *(undefined8 *)(param_1 + 200) = uVar19;
    *(undefined8 *)(param_1 + 0xe0) = uVar35;
    *(undefined8 *)(param_1 + 0xd8) = uVar23;
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xfffffdff;
    if (local_1c0 != 0) {
      FT_Outline_Translate((undefined8 *)(param_1 + 200),-local_1c0,0);
      lVar27 = local_230;
      plVar22 = uStack_228;
      lVar24 = local_220;
    }
  }
  if ((param_4 >> 1 & 1) == 0) {
    if (*(char *)(local_120 + 0x265) == '\0') {
switchD_00e277f4_caseD_2:
      uVar16 = *(uint *)(param_1 + 0xe8) | 8;
    }
    else {
      switch(*(undefined4 *)(local_120 + 0x268)) {
      case 0:
        uVar16 = *(uint *)(param_1 + 0xe8) | 0x20;
        break;
      case 1:
        goto switchD_00e277f4_caseD_1;
      default:
        goto switchD_00e277f4_caseD_2;
      case 4:
        uVar16 = *(uint *)(param_1 + 0xe8) | 0x30;
        break;
      case 5:
        uVar16 = *(uint *)(param_1 + 0xe8) | 0x10;
      }
    }
    *(uint *)(param_1 + 0xe8) = uVar16;
  }
switchD_00e277f4_caseD_1:
  lVar29 = *(long *)(lVar27 + 0xb0);
  if ((uStack_210 & 1) == 0) {
    local_240 = *(undefined8 *)(plVar22[0xb] + 0x10);
    iVar2 = *(int *)(lVar24 + 0x90);
  }
  else {
    local_240 = 0x10000;
    iVar2 = *(int *)(lVar24 + 0x90);
  }
  local_230 = lVar27;
  uStack_228 = plVar22;
  local_220 = lVar24;
  uVar30 = local_1f0;
  lVar28 = lStack_1e8;
  lVar33 = lStack_1e0;
  lVar11 = lStack_1d8;
  if (iVar2 != 0x636f6d70) {
    FT_Outline_Get_CBox(lVar24 + 200,&local_90);
    uVar30 = local_90;
    lVar28 = lStack_88;
    lVar33 = local_80;
    lVar11 = local_78;
  }
  local_78 = lVar11;
  local_80 = lVar33;
  lStack_88 = lVar28;
  local_90 = uVar30;
  *(long *)(lVar24 + 0x70) = (long)(int)uStack_1c8;
  *(ulong *)(lVar24 + 0x40) = local_90;
  *(long *)(lVar24 + 0x48) = local_78;
  *(long *)(lVar24 + 0x50) = local_1b0 - local_1c0;
  if ((((*(int *)(lVar29 + 0x78) != 0x28) || (local_120 == 0)) ||
      (*(char *)(local_120 + 0x42b) == '\0')) &&
     (((*(long *)(lVar27 + 0x308) == 0 && ((uStack_210 & 0x200002) == 0)) &&
      (*(uint *)(lVar27 + 0x510) != 0)))) {
    uVar16 = 0;
    pbVar26 = (byte *)(*(long *)(lVar27 + 0x500) + (ulong)(param_3 + 2) + 8);
    do {
      if ((ushort)*(byte *)(*(long *)(lVar27 + 0x520) + (ulong)uVar16) == *(ushort *)plVar22[0xb]) {
        if ((ulong)(param_3 + 2) < *(ulong *)(lVar27 + 0x518)) {
          *(ulong *)(lVar24 + 0x50) = (ulong)*pbVar26 << 6;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      pbVar26 = pbVar26 + *(ulong *)(lVar27 + 0x518);
    } while (uVar16 < *(uint *)(lVar27 + 0x510));
  }
  *(ulong *)(lVar24 + 0x30) = local_80 - local_90;
  *(long *)(lVar24 + 0x38) = local_78 - lStack_88;
  if ((*(char *)(lVar27 + 0x1f0) == '\0') || (*(short *)(lVar27 + 0x21e) == 0)) {
    sVar14 = FT_DivFix(local_78 - lStack_88,local_240);
    bVar12 = *(short *)(lVar27 + 0x268) != -1;
    lVar29 = 0x19a;
    if (bVar12) {
      lVar29 = 0x2c4;
    }
    lVar28 = 0x198;
    if (bVar12) {
      lVar28 = 0x2c2;
    }
    uVar30 = (long)*(short *)(lVar27 + lVar28) - (long)*(short *)(lVar27 + lVar29);
    lVar29 = uVar30 - (long)sVar14;
    if (lVar29 < 0) {
      lVar29 = lVar29 + 1;
    }
    plVar22 = *(long **)(*(long *)(lVar27 + 0xf0) + 0x68);
    lVar29 = lVar29 >> 1;
    lVar27 = local_a8;
    uVar34 = local_a0;
  }
  else {
    sVar14 = FT_DivFix(local_f0 - local_78,local_240);
    lVar29 = (long)sVar14;
    if (local_f0 - local_e0 == 0 || local_f0 < local_e0) {
      plVar22 = *(long **)(*(long *)(lVar27 + 0xf0) + 0x68);
      uVar30 = 0;
      lVar27 = local_a8;
      uVar34 = local_a0;
    }
    else {
      uVar30 = FT_DivFix(local_f0 - local_e0,local_240);
      plVar22 = *(long **)(*(long *)(lVar27 + 0xf0) + 0x68);
      uVar30 = uVar30 & 0xffff;
      lVar27 = local_a8;
      uVar34 = local_a0;
    }
  }
  local_a0 = uVar30;
  local_a8 = lVar29;
  lVar29 = local_a8;
  uVar18 = local_a0;
  if ((plVar22 != (long *)0x0) && (*(code **)(*plVar22 + 0x10) != (code *)0x0)) {
    local_b0 = 0;
    uVar16 = (**(code **)(*plVar22 + 0x10))(plVar22[1],param_3,1,&local_b0);
    lVar29 = local_a8;
    uVar18 = local_a0;
    lVar27 = local_a8;
    uVar34 = local_a0;
    if (uVar16 != 0) {
      uVar30 = (ulong)uVar16;
      goto LAB_00e27a40;
    }
  }
  local_a0 = uVar34;
  local_a8 = lVar27;
  *(ulong *)(lVar24 + 0x78) = uVar18;
  if ((uStack_210 & 1) == 0) {
    lVar29 = FT_MulFix(lVar29,local_240);
    uVar18 = FT_MulFix(uVar18,local_240);
  }
  lVar27 = *(long *)(lVar24 + 0x50);
  uVar30 = 0;
  *(ulong *)(lVar24 + 0x68) = uVar18;
  if (lVar27 < 0) {
    lVar27 = lVar27 + 1;
  }
  *(long *)(lVar24 + 0x58) = *(long *)(lVar24 + 0x40) - (lVar27 >> 1);
  *(long *)(lVar24 + 0x60) = lVar29;
LAB_00e27a40:
  FT_List_Finalize(&local_c8,0,*(undefined8 *)(local_230 + 0xb8),0);
  if (((param_4 & 1) == 0) && (*(ushort *)(param_2[0xb] + 2) < 0x18)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
  }
  return uVar30;
}

