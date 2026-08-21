
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00e31ea8(long *param_1,uint param_2,uint param_3,char param_4)

{
  long *plVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  bool bVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  void *__dest;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  void *__src;
  short sVar20;
  ushort uVar21;
  short sVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  undefined8 local_160;
  undefined8 local_158;
  ulong local_150;
  uint local_144;
  undefined8 local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint local_94;
  undefined4 local_90;
  undefined8 *local_88;
  uint *local_80;
  ulong *local_78;
  
  local_94 = 0;
  lVar29 = *param_1;
  lVar30 = param_1[3];
  if (*(ushort *)(lVar29 + 0x1ea) < param_3) {
    *(short *)(lVar29 + 0x1ea) = (short)param_3;
  }
  *(uint *)(param_1 + 5) = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_160 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
    local_158 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
    puVar24 = *(undefined8 **)(*(long *)(lVar29 + 0xf0) + 0x68);
    if (puVar24 == (undefined8 *)0x0) goto LAB_00e31ff8;
LAB_00e31f18:
    local_94 = (**(code **)*puVar24)(puVar24[1],param_2,&local_100);
    if (local_94 != 0) {
      return local_94;
    }
    *(int *)(param_1 + 7) = local_f8;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    FUN_00e14c44(&local_f0,local_100);
    lVar37 = 0;
    param_1[6] = (long)&local_f0;
    bVar9 = true;
    iVar14 = (int)param_1[7];
    if (iVar14 < 1) goto LAB_00e32028;
LAB_00e31f80:
    if ((*(long *)(lVar29 + 0x4b0) == 0) && (*(long *)(*(long *)(lVar29 + 0xf0) + 0x68) == 0)) {
      local_94 = 8;
      uVar15 = local_94;
      goto joined_r0x00e323f8;
    }
    local_94 = (**(code **)(lVar29 + 0x348))(param_1,param_2,*(long *)(lVar29 + 0x4b0) + lVar37);
    uVar15 = local_94;
    if (local_94 != 0) goto joined_r0x00e323f8;
    local_94 = (**(code **)(lVar29 + 0x358))(param_1);
    (**(code **)(lVar29 + 0x350))(param_1);
    uVar15 = local_94;
    if (local_94 != 0) goto joined_r0x00e323f8;
    if ((int)param_1[7] != 0) goto LAB_00e32030;
    goto LAB_00e32038;
  }
  local_158 = 0x10000;
  local_160 = 0x10000;
  puVar24 = *(undefined8 **)(*(long *)(lVar29 + 0xf0) + 0x68);
  if (puVar24 != (undefined8 *)0x0) goto LAB_00e31f18;
LAB_00e31ff8:
  lVar37 = FUN_00e31c8c(lVar29,param_2,param_1 + 7);
  bVar9 = false;
  iVar14 = (int)param_1[7];
  if (0 < iVar14) goto LAB_00e31f80;
LAB_00e32028:
  if (iVar14 == 0) {
LAB_00e32038:
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
  }
  else {
LAB_00e32030:
    if (*(short *)((long)param_1 + 0x3c) == 0) goto LAB_00e32038;
  }
  plVar26 = param_1 + 7;
  lVar31 = param_1[6];
  lVar33 = *param_1;
  local_140 = local_140 & 0xffffffffffff0000;
  local_90 = local_90 & 0xffff0000;
  local_150 = local_150 & 0xffffffffffff0000;
  local_144 = local_144 & 0xffff0000;
  uVar16 = FUN_00e1d4a0(lVar31);
  (**(code **)(*(long *)(lVar33 + 0x370) + 0x118))(lVar33,0,param_2,&local_140,&local_150);
  if (*(char *)(lVar33 + 0x1f0) == '\0') {
    if (*(short *)(lVar33 + 0x268) == -1) {
      sVar22 = *(short *)(lVar33 + 0x198);
      sVar6 = sVar22 - (short)param_1[0xb];
      sVar20 = *(short *)(lVar33 + 0x19a);
    }
    else {
      sVar22 = *(short *)(lVar33 + 0x2c2);
      sVar6 = sVar22 - (short)param_1[0xb];
      sVar20 = *(short *)(lVar33 + 0x2c4);
    }
    local_90 = CONCAT22(local_90._2_2_,sVar6);
    iVar7 = (int)sVar22 - (int)sVar20;
    iVar14 = -iVar7;
    if (-1 < iVar7) {
      iVar14 = iVar7;
    }
    local_144 = CONCAT22(local_144._2_2_,(short)iVar14);
  }
  else {
    (**(code **)(*(long *)(lVar33 + 0x370) + 0x118))(lVar33,1,param_2,&local_90,&local_144);
  }
  local_94 = FUN_00e1bb5c(lVar31,uVar16);
  if (local_94 == 0) {
    *(int *)(param_1 + 0xc) = (int)(short)local_140;
    *(uint *)((long)param_1 + 100) = (uint)(ushort)local_150;
    *(int *)(param_1 + 0x26) = (int)(short)local_90;
    *(uint *)((long)param_1 + 0x134) = local_144 & 0xffff;
    if (*(char *)((long)param_1 + 0x6c) == '\0') {
      *(undefined1 *)((long)param_1 + 0x6c) = 1;
      *(uint *)(param_1 + 0xd) = (uint)(ushort)local_150;
    }
  }
  uVar15 = local_94;
  if ((param_4 != '\0') || (local_94 != 0)) goto joined_r0x00e323f8;
  iVar14 = (int)*plVar26;
  plVar1 = param_1 + 0x27;
  if ((iVar14 == 0) || (*(short *)((long)param_1 + 0x3c) == 0)) {
    if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
       (lVar30 = param_1[0x22], lVar30 != 0)) {
      bVar11 = *(char *)(lVar30 + 0x429) != '\0';
      bVar12 = *(char *)(lVar30 + 0x42e) != '\0';
    }
    else {
      bVar12 = false;
      bVar11 = false;
    }
    uVar15 = *(uint *)((long)param_1 + 100);
    lVar30 = (long)(int)uVar15;
    lVar37 = 0;
    lVar31 = param_1[8] - (long)(int)param_1[0xc];
    param_1[0xe] = lVar31;
    param_1[0xf] = 0;
    param_1[0x10] = lVar31 + lVar30;
    param_1[0x11] = 0;
    if ((bool)(bVar12 & bVar11)) {
      uVar23 = uVar15;
      if ((int)uVar15 < 0) {
        uVar23 = uVar15 + 1;
      }
      lVar37 = (long)((ulong)uVar23 << 0x20) >> 0x21;
    }
    lVar31 = param_1[0xb] + (long)(int)param_1[0x26];
    param_1[0x27] = lVar37;
    param_1[0x28] = lVar31;
    if ((bool)(bVar12 & bVar11)) {
      if ((int)uVar15 < 0) {
        uVar15 = uVar15 + 1;
      }
      lVar37 = (long)((ulong)uVar15 << 0x20) >> 0x21;
    }
    else {
      lVar37 = 0;
    }
    param_1[0x29] = lVar37;
    param_1[0x2a] = lVar31 - *(int *)((long)param_1 + 0x134);
    plVar26 = *(long **)(*(long *)(*param_1 + 0xf0) + 0x68);
    if ((plVar26 != (long *)0x0) && (*(code **)(*plVar26 + 0x10) != (code *)0x0)) {
      lStack_138 = 0;
      lStack_128 = 0;
      local_140 = (long)(int)param_1[0xc];
      local_130 = lVar30;
      iVar14 = (**(code **)(*plVar26 + 0x10))(plVar26[1],param_2,0,&local_140);
      if (iVar14 == 0) {
        param_1[0x26] = 0;
        *(int *)(param_1 + 0xc) = (int)(short)local_140;
        *(uint *)((long)param_1 + 100) = (uint)(ushort)local_130;
        if (*(char *)((long)param_1 + 0x6c) == '\0') {
          *(undefined1 *)((long)param_1 + 0x6c) = 1;
          *(uint *)(param_1 + 0xd) = (uint)(ushort)local_130;
        }
      }
    }
    if (((*(ushort *)(lVar29 + 10) & 0x7fff) != 0) || (*(char *)(lVar29 + 0x11) < '\0')) {
      local_144 = 0x1010101;
      local_150 = 0x3000200010000;
      lStack_138 = param_1[0xf];
      local_140 = param_1[0xe];
      lStack_128 = param_1[0x11];
      local_130 = param_1[0x10];
      lStack_118 = param_1[0x28];
      local_120 = *plVar1;
      lStack_108 = param_1[0x2a];
      local_110 = param_1[0x29];
      local_90 = 0x40004;
      local_88 = &local_140;
      local_80 = &local_144;
      local_78 = &local_150;
      uVar15 = FUN_00e33738(*param_1,param_2,&local_90,4);
      if (uVar15 != 0) goto joined_r0x00e323f8;
      param_1[0xf] = lStack_138;
      param_1[0xe] = local_140;
      param_1[0x11] = lStack_128;
      param_1[0x10] = local_130;
      param_1[0x28] = lStack_118;
      *plVar1 = local_120;
      param_1[0x2a] = lStack_108;
      param_1[0x29] = local_110;
      uVar15 = *(uint *)(*param_1 + 0x4c8);
      if ((uVar15 >> 1 & 1) == 0) {
        *(int *)(param_1 + 0xd) = (int)local_130 - (int)local_140;
      }
      local_94 = 0;
      if ((uVar15 >> 4 & 1) == 0) {
        *(int *)((long)param_1 + 0x134) = (int)local_110 - (int)local_120;
      }
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      lVar30 = FT_MulFix(param_1[0xe],local_160);
      param_1[0xe] = lVar30;
      lVar30 = FT_MulFix(param_1[0x10],local_160);
      param_1[0x10] = lVar30;
      lVar30 = FT_MulFix(param_1[0x27],local_160);
      param_1[0x27] = lVar30;
      lVar30 = FT_MulFix(param_1[0x28],local_158);
      param_1[0x28] = lVar30;
      lVar30 = FT_MulFix(param_1[0x29],local_160);
      param_1[0x29] = lVar30;
      lVar30 = FT_MulFix(param_1[0x2a],local_158);
      param_1[0x2a] = lVar30;
    }
    local_94 = 0;
    uVar15 = local_94;
    goto joined_r0x00e323f8;
  }
  if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) && (lVar31 = param_1[0x22], lVar31 != 0)
     ) {
    bVar11 = *(char *)(lVar31 + 0x429) != '\0';
    bVar12 = *(char *)(lVar31 + 0x42e) != '\0';
  }
  else {
    bVar12 = false;
    bVar11 = false;
  }
  uVar15 = *(uint *)((long)param_1 + 100);
  lVar31 = (long)(int)uVar15;
  lVar33 = 0;
  lVar28 = param_1[8] - (long)(int)param_1[0xc];
  param_1[0xe] = lVar28;
  param_1[0xf] = 0;
  param_1[0x10] = lVar28 + lVar31;
  param_1[0x11] = 0;
  if ((bool)(bVar12 & bVar11)) {
    uVar23 = uVar15;
    if ((int)uVar15 < 0) {
      uVar23 = uVar15 + 1;
    }
    lVar33 = (long)((ulong)uVar23 << 0x20) >> 0x21;
  }
  lVar28 = param_1[0xb] + (long)(int)param_1[0x26];
  param_1[0x27] = lVar33;
  param_1[0x28] = lVar28;
  if ((bool)(bVar12 & bVar11)) {
    if ((int)uVar15 < 0) {
      uVar15 = uVar15 + 1;
    }
    lVar33 = (long)((ulong)uVar15 << 0x20) >> 0x21;
  }
  else {
    lVar33 = 0;
  }
  param_1[0x29] = lVar33;
  param_1[0x2a] = lVar28 - *(int *)((long)param_1 + 0x134);
  plVar27 = *(long **)(*(long *)(*param_1 + 0xf0) + 0x68);
  if ((plVar27 != (long *)0x0) && (*(code **)(*plVar27 + 0x10) != (code *)0x0)) {
    lStack_138 = 0;
    lStack_128 = 0;
    local_140 = (long)(int)param_1[0xc];
    local_130 = lVar31;
    iVar14 = (**(code **)(*plVar27 + 0x10))(plVar27[1],param_2,0,&local_140);
    if (iVar14 == 0) {
      param_1[0x26] = 0;
      *(int *)(param_1 + 0xc) = (int)(short)local_140;
      *(uint *)((long)param_1 + 100) = (uint)(ushort)local_130;
      if (*(char *)((long)param_1 + 0x6c) == '\0') {
        *(undefined1 *)((long)param_1 + 0x6c) = 1;
        *(uint *)(param_1 + 0xd) = (uint)(ushort)local_130;
      }
    }
    iVar14 = (int)*plVar26;
  }
  local_94 = (**(code **)(lVar29 + 0x348))
                       (param_1,param_2,lVar37 + *(long *)(lVar29 + 0x4b0) + 10,iVar14 + -10);
  uVar15 = local_94;
  if (local_94 != 0) goto joined_r0x00e323f8;
  if (*(short *)((long)param_1 + 0x3c) < 1) {
    if (*(short *)((long)param_1 + 0x3c) < 0) {
      lVar37 = param_1[0x2d];
      uVar16 = *(undefined8 *)(lVar29 + 0xb8);
      *(undefined2 *)((long)param_1 + 0x3c) = 0xffff;
      if (lVar37 != 0) {
        uVar15 = ~param_3;
        do {
          uVar15 = uVar15 + 1;
          lVar31 = lVar37;
          if (uVar15 == 0) goto LAB_00e327b0;
          lVar37 = *(long *)(lVar37 + 8);
        } while (lVar37 != 0);
      }
      bVar11 = true;
      goto LAB_00e327c0;
    }
  }
  else {
    local_94 = (**(code **)(lVar29 + 0x360))(param_1);
    if (local_94 == 0) {
      (**(code **)(lVar29 + 0x350))(param_1);
      lVar34 = param_1[3];
      lVar31 = param_1[0xe];
      lVar35 = (long)*(short *)(lVar34 + 0x62);
      lVar37 = lVar35 + 1;
      plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar35 * 0x10);
      plVar26[1] = param_1[0xf];
      *plVar26 = lVar31;
      lVar28 = param_1[0x10];
      lVar31 = lVar35 + 2;
      lVar33 = lVar35 + 3;
      uVar32 = lVar35 + 4;
      plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar37 * 0x10);
      plVar26[1] = param_1[0x11];
      *plVar26 = lVar28;
      lVar28 = param_1[0x27];
      plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar31 * 0x10);
      plVar26[1] = param_1[0x28];
      *plVar26 = lVar28;
      lVar28 = param_1[0x29];
      plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar33 * 0x10);
      plVar26[1] = param_1[0x2a];
      *plVar26 = lVar28;
      *(undefined1 *)(*(long *)(lVar34 + 0x70) + lVar35) = 0;
      *(undefined1 *)(*(long *)(lVar34 + 0x70) + lVar37) = 0;
      *(undefined1 *)(*(long *)(lVar34 + 0x70) + lVar31) = 0;
      *(undefined1 *)(*(long *)(lVar34 + 0x70) + lVar33) = 0;
      lVar28 = *param_1;
      if (((*(ushort *)(lVar28 + 10) & 0x7fff) != 0) || (*(char *)(lVar28 + 0x11) < '\0')) {
        uVar15 = FUN_00e33738(lVar28,(int)param_1[5],lVar34 + 0x60,uVar32 & 0xffffffff);
        uVar23 = *(uint *)(*param_1 + 0x4c8);
        if ((uVar23 >> 1 & 1) == 0) {
          *(int *)(param_1 + 0xd) =
               *(int *)(*(long *)(lVar34 + 0x68) + lVar37 * 0x10) -
               *(int *)(*(long *)(lVar34 + 0x68) + lVar35 * 0x10);
        }
        if ((uVar23 >> 4 & 1) == 0) {
          *(int *)((long)param_1 + 0x134) =
               *(int *)(*(long *)(lVar34 + 0x68) + lVar33 * 0x10) -
               *(int *)(*(long *)(lVar34 + 0x68) + lVar31 * 0x10);
        }
        if (uVar15 != 0) goto joined_r0x00e323f8;
      }
      uVar25 = param_1[4];
      if (((uint)uVar25 >> 1 & 1) == 0) {
        uVar21 = *(ushort *)(lVar34 + 0x62);
        *(ushort *)((long)param_1 + 0xdc) = uVar21;
        *(undefined2 *)((long)param_1 + 0xde) = *(undefined2 *)(lVar34 + 0x60);
        param_1[0x1c] = *(long *)(lVar34 + 0x88);
        __src = *(void **)(lVar34 + 0x68);
        param_1[0x1d] = (long)__src;
        __dest = *(void **)(lVar34 + 0x90);
        param_1[0x1e] = (long)__dest;
        lVar18 = *(long *)(lVar34 + 0x78);
        lVar28 = *(long *)(lVar34 + 0x70);
        *(undefined2 *)(param_1 + 0x21) = 0;
        param_1[0x20] = lVar18;
        param_1[0x1f] = lVar28;
        memcpy(__dest,__src,(ulong)uVar21 * 0x10 + 0x40);
        uVar25 = param_1[4];
      }
      if (((uVar25 & 1) == 0) && (0 < (int)uVar32)) {
        puVar24 = *(undefined8 **)(lVar34 + 0x68);
        puVar8 = puVar24 + uVar32 * 2;
        uVar16 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
        uVar38 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
        do {
          uVar17 = FT_MulFix(*puVar24,uVar16);
          *puVar24 = uVar17;
          uVar17 = FT_MulFix(puVar24[1],uVar38);
          puVar24[1] = uVar17;
          puVar24 = puVar24 + 2;
        } while (puVar24 < puVar8);
      }
      uVar15 = *(uint *)(*param_1 + 0x4c8);
      uVar23 = (uint)param_1[4];
      if (((uVar15 >> 1 & 1) == 0) || ((uVar23 >> 1 & 1) != 0)) {
        plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar35 * 0x10);
        lVar28 = *plVar26;
        param_1[0xf] = plVar26[1];
        param_1[0xe] = lVar28;
        plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar37 * 0x10);
        lVar37 = *plVar26;
        param_1[0x11] = plVar26[1];
        param_1[0x10] = lVar37;
        uVar15 = *(uint *)(*param_1 + 0x4c8);
      }
      if (((uVar15 >> 4 & 1) == 0) || ((uVar23 >> 1 & 1) != 0)) {
        plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar31 * 0x10);
        lVar37 = *plVar26;
        param_1[0x28] = plVar26[1];
        param_1[0x27] = lVar37;
        plVar26 = (long *)(*(long *)(lVar34 + 0x68) + lVar33 * 0x10);
        lVar37 = *plVar26;
        param_1[0x2a] = plVar26[1];
        param_1[0x29] = lVar37;
      }
      if ((uVar23 >> 1 & 1) == 0) {
        *(short *)((long)param_1 + 0xdc) = *(short *)((long)param_1 + 0xdc) + 4;
        local_94 = FUN_00e347b0(param_1,0);
        uVar15 = local_94;
        if (local_94 != 0) goto joined_r0x00e323f8;
      }
      else {
        local_94 = 0;
      }
      FUN_00e1436c(lVar30);
      uVar15 = local_94;
      goto joined_r0x00e323f8;
    }
  }
  goto LAB_00e32844;
LAB_00e327b0:
  do {
    *(undefined8 *)(lVar31 + 0x10) = 0xffffffffffffffff;
    plVar27 = (long *)(lVar31 + 8);
    lVar31 = *plVar27;
  } while (*plVar27 != 0);
  bVar11 = false;
LAB_00e327c0:
  uVar32 = (ulong)param_2;
  lVar31 = FT_List_Find(param_1 + 0x2d,uVar32);
  if (lVar31 == 0) {
    if (bVar11) {
      lVar37 = FUN_00e1388c(uVar16,0x18,&local_94);
      if (local_94 != 0) goto LAB_00e32844;
      *(ulong *)(lVar37 + 0x10) = uVar32;
      FT_List_Add(param_1 + 0x2d,lVar37);
    }
    else {
      *(ulong *)(lVar37 + 0x10) = uVar32;
    }
    uVar21 = *(ushort *)(lVar30 + 0x1a);
    sVar22 = *(short *)(lVar30 + 0x18);
    local_94 = (**(code **)(lVar29 + 0x368))(param_1);
    if (local_94 == 0) {
      lVar37 = param_1[0x24];
      (**(code **)(lVar29 + 0x350))(param_1);
      if (((*(ushort *)(lVar29 + 10) & 0x7fff) != 0) || (*(char *)(lVar29 + 0x11) < '\0')) {
        iVar14 = *(int *)(lVar30 + 0x98);
        sVar6 = (short)iVar14;
        sVar20 = sVar6 + 4;
        uVar32 = (ulong)sVar20;
        local_140 = CONCAT62(CONCAT42(local_140._4_4_,sVar20),sVar20);
        local_130 = 0;
        lStack_128 = 0;
        lStack_138 = 0;
        lVar31 = FUN_00e13bcc(uVar16,0x10,0,uVar32,0,&local_94);
        lVar33 = 0;
        lVar28 = 0;
        lVar34 = 0;
        if (local_94 == 0) {
          lVar35 = FUN_00e13bcc(uVar16,1,0,uVar32,0,&local_94);
          lVar33 = 0;
          lVar28 = 0;
          lVar34 = 0;
          if (local_94 == 0) {
            lVar18 = FUN_00e13bcc(uVar16,2,0,uVar32,0,&local_94);
            lVar33 = 0;
            lVar28 = 0;
            lVar34 = 0;
            if (local_94 == 0) {
              iVar14 = iVar14 * 0x10000;
              sVar20 = 0;
              if (0 < iVar14) {
                puVar24 = (undefined8 *)(*(long *)(lVar30 + 0xa0) + 8);
                do {
                  uVar38 = *puVar24;
                  lVar33 = (long)sVar20;
                  plVar27 = (long *)(lVar31 + lVar33 * 0x10);
                  plVar27[1] = (long)(int)((ulong)uVar38 >> 0x20);
                  *plVar27 = (long)(int)uVar38;
                  *(undefined1 *)(lVar35 + lVar33) = 1;
                  *(short *)(lVar18 + lVar33 * 2) = sVar20;
                  sVar20 = sVar20 + 1;
                  puVar24 = puVar24 + 6;
                } while ((int)sVar20 < (int)sVar6);
              }
              lVar28 = param_1[0xe];
              lVar33 = (long)sVar20;
              plVar27 = (long *)(lVar31 + lVar33 * 0x10);
              plVar27[1] = param_1[0xf];
              *plVar27 = lVar28;
              *(undefined1 *)(lVar35 + lVar33) = 1;
              *(short *)(lVar18 + lVar33 * 2) = sVar20;
              lVar28 = param_1[0x10];
              lVar33 = (long)(short)(sVar20 + 1);
              plVar27 = (long *)(lVar31 + lVar33 * 0x10);
              plVar27[1] = param_1[0x11];
              *plVar27 = lVar28;
              *(undefined1 *)(lVar35 + lVar33) = 1;
              *(short *)(lVar18 + lVar33 * 2) = sVar20 + 1;
              lVar28 = *plVar1;
              lVar33 = (long)(short)(sVar20 + 2);
              plVar27 = (long *)(lVar31 + lVar33 * 0x10);
              plVar27[1] = param_1[0x28];
              *plVar27 = lVar28;
              *(undefined1 *)(lVar35 + lVar33) = 1;
              *(short *)(lVar18 + lVar33 * 2) = sVar20 + 2;
              lVar28 = param_1[0x29];
              lVar33 = (long)(short)(sVar20 + 3);
              plVar27 = (long *)(lVar31 + lVar33 * 0x10);
              plVar27[1] = param_1[0x2a];
              *plVar27 = lVar28;
              *(undefined1 *)(lVar35 + lVar33) = 1;
              *(short *)(lVar18 + lVar33 * 2) = sVar20 + 3;
              lStack_138 = lVar31;
              local_130 = lVar35;
              lStack_128 = lVar18;
              local_94 = FUN_00e33738(lVar29,param_2,&local_140,uVar32 & 0xffffffff);
              lVar33 = lVar31;
              lVar28 = lVar18;
              lVar34 = lVar35;
              if (local_94 == 0) {
                if (iVar14 < 1) {
                  sVar20 = 0;
                  iVar14 = 0;
                }
                else {
                  sVar20 = 0;
                  puVar24 = (undefined8 *)(*(long *)(lVar30 + 0xa0) + 8);
                  do {
                    if ((*(byte *)((long)puVar24 + -4) >> 1 & 1) != 0) {
                      puVar8 = (undefined8 *)(lVar31 + (long)sVar20 * 0x10);
                      *puVar24 = CONCAT44((int)(short)puVar8[1],(int)(short)*puVar8);
                    }
                    sVar20 = sVar20 + 1;
                    iVar14 = (int)sVar20;
                    puVar24 = puVar24 + 6;
                  } while (iVar14 < sVar6);
                }
                plVar27 = (long *)(lVar31 + (long)sVar20 * 0x10);
                lVar39 = *plVar27;
                lVar31 = lVar31 + (long)iVar14 * 0x10;
                param_1[0xf] = plVar27[1];
                param_1[0xe] = lVar39;
                lVar40 = *(long *)(lVar31 + 0x10);
                param_1[0x11] = *(long *)(lVar31 + 0x18);
                param_1[0x10] = lVar40;
                lVar35 = *(long *)(lVar31 + 0x20);
                param_1[0x28] = *(long *)(lVar31 + 0x28);
                *plVar1 = lVar35;
                lVar18 = *(long *)(lVar31 + 0x30);
                param_1[0x2a] = *(long *)(lVar31 + 0x38);
                param_1[0x29] = lVar18;
                uVar15 = *(uint *)(lVar29 + 0x4c8);
                if ((uVar15 >> 1 & 1) == 0) {
                  *(int *)(param_1 + 0xd) = (int)lVar40 - (int)lVar39;
                }
                if ((uVar15 >> 4 & 1) == 0) {
                  *(int *)((long)param_1 + 0x134) = (int)lVar18 - (int)lVar35;
                }
              }
            }
          }
        }
        FUN_00e139fc(uVar16,lVar33);
        FUN_00e139fc(uVar16,lVar34);
        FUN_00e139fc(uVar16,lVar28);
        uVar15 = local_94;
        if (local_94 != 0) goto joined_r0x00e323f8;
      }
      uVar15 = (uint)param_1[4];
      if ((param_1[4] & 1U) == 0) {
        lVar31 = FT_MulFix(param_1[0xe],local_160);
        param_1[0xe] = lVar31;
        lVar31 = FT_MulFix(param_1[0x10],local_160);
        param_1[0x10] = lVar31;
        lVar31 = FT_MulFix(param_1[0x27],local_160);
        param_1[0x27] = lVar31;
        lVar31 = FT_MulFix(param_1[0x28],local_158);
        param_1[0x28] = lVar31;
        lVar31 = FT_MulFix(param_1[0x29],local_160);
        param_1[0x29] = lVar31;
        lVar31 = FT_MulFix(param_1[0x2a],local_158);
        uVar15 = (uint)param_1[4];
        param_1[0x2a] = lVar31;
      }
      if ((uVar15 >> 10 & 1) == 0) {
        lVar33 = param_1[6];
        lVar31 = param_1[7];
        uVar15 = *(uint *)(lVar30 + 0x98);
        uVar23 = *(uint *)(lVar30 + 0x50);
        FUN_00e1436c();
        if (uVar15 == 0) {
          lVar30 = 0;
          uVar13 = uVar21;
        }
        else {
          uVar32 = 0;
          lVar28 = (ulong)uVar23 * 0x30;
          do {
            lStack_138 = param_1[0xf];
            local_140 = param_1[0xe];
            lStack_128 = param_1[0x11];
            local_130 = param_1[0x10];
            lStack_118 = param_1[0x28];
            local_120 = param_1[0x27];
            lStack_108 = param_1[0x2a];
            local_110 = param_1[0x29];
            lVar34 = param_1[0xd];
            uVar3 = *(undefined4 *)((long)param_1 + 0x134);
            uVar5 = *(ushort *)(lVar30 + 0x1a);
            local_94 = FUN_00e31ea8(param_1,*(undefined4 *)(*(long *)(lVar30 + 0x58) + lVar28),
                                    param_3 + 1,0);
            if (local_94 != 0) {
LAB_00e32f68:
              if (!bVar9) {
                return local_94;
              }
              goto LAB_00e32854;
            }
            lVar18 = *(long *)(lVar30 + 0x58);
            lVar35 = lVar18 + lVar28;
            if ((*(byte *)(lVar35 + 5) >> 1 & 1) == 0) {
              param_1[0xf] = lStack_138;
              param_1[0xe] = local_140;
              param_1[0x11] = lStack_128;
              param_1[0x10] = local_130;
              param_1[0x28] = lStack_118;
              param_1[0x27] = local_120;
              param_1[0x2a] = lStack_108;
              param_1[0x29] = local_110;
              *(int *)(param_1 + 0xd) = (int)lVar34;
              *(undefined4 *)((long)param_1 + 0x134) = uVar3;
            }
            uVar13 = *(ushort *)(lVar30 + 0x1a);
            if (uVar13 != uVar5) {
              lVar34 = param_1[3];
              local_88 = (undefined8 *)
                         (*(long *)(lVar34 + 0x20) + (ulong)(uint)(int)(short)uVar5 * 0x10);
              local_90 = CONCAT22(*(short *)(lVar34 + 0x1a) - uVar5,(short)local_90);
              uVar4 = *(ushort *)(lVar35 + 4);
              uVar10 = uVar4 & 200;
              if ((uVar4 & 200) != 0) {
                FT_Outline_Transform(&local_90,lVar18 + lVar28 + 0x10);
                uVar4 = *(ushort *)(lVar35 + 4);
              }
              lVar39 = lVar18 + lVar28;
              iVar14 = *(int *)(lVar39 + 8);
              uVar25 = (ulong)iVar14;
              if ((uVar4 >> 1 & 1) == 0) {
                if (((uint)(int)(short)uVar5 <= (uint)(iVar14 + (short)uVar21)) ||
                   (uVar23 = *(int *)(lVar39 + 0xc) + (int)(short)uVar5,
                   (uint)(int)*(short *)(lVar34 + 0x1a) <= uVar23)) {
                  local_94 = 0x15;
                  goto LAB_00e32f68;
                }
                plVar1 = (long *)(*(long *)(lVar34 + 0x20) +
                                 (ulong)(uint)(iVar14 + (short)uVar21) * 0x10);
                plVar27 = (long *)(*(long *)(lVar34 + 0x20) + (ulong)uVar23 * 0x10);
                uVar25 = *plVar1 - *plVar27;
                uVar36 = plVar1[1] - plVar27[1];
                if (uVar25 != 0 || uVar36 != 0) {
LAB_00e32e7c:
                  FT_Outline_Translate(&local_90,uVar25,uVar36);
                }
              }
              else {
                uVar36 = (ulong)*(int *)(lVar39 + 0xc);
                if (*(int *)(lVar39 + 0xc) != 0 || iVar14 != 0) {
                  if (((uVar4 >> 0xb & 1) != 0) && (uVar10 != 0)) {
                    lVar34 = lVar18 + lVar28;
                    uVar16 = FUN_00e12a84(*(undefined8 *)(lVar34 + 0x10),
                                          *(undefined8 *)(lVar34 + 0x18));
                    uVar38 = FUN_00e12a84(*(undefined8 *)(lVar34 + 0x28),
                                          *(undefined8 *)(lVar34 + 0x20));
                    uVar25 = FT_MulFix(uVar25,uVar16);
                    uVar36 = FT_MulFix(uVar36,uVar38);
                  }
                  if ((*(byte *)(param_1 + 4) & 1) == 0) {
                    uVar16 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
                    uVar19 = FT_MulFix(uVar25,*(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8));
                    uVar36 = FT_MulFix(uVar36,uVar16);
                    uVar25 = uVar19;
                    if (((*(byte *)(lVar35 + 4) >> 2 & 1) != 0) &&
                       ((*(byte *)(param_1 + 4) >> 1 & 1) == 0)) {
                      uVar36 = uVar36 + 0x20 & 0xffffffffffffffc0;
                      uVar25 = uVar19 + 0x20 & 0xffffffffffffffc0;
                      if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x23) {
                        uVar25 = uVar19;
                      }
                    }
                  }
                  if (uVar25 != 0 || uVar36 != 0) goto LAB_00e32e7c;
                }
              }
              local_94 = 0;
            }
            uVar32 = uVar32 + 1;
            lVar28 = lVar28 + 0x30;
          } while (uVar32 < uVar15);
          lVar30 = lVar18 + lVar28 + -0x30;
        }
        param_1[6] = lVar33;
        *(int *)(param_1 + 7) = (int)lVar31;
        param_1[0x24] = lVar37;
        uVar15 = local_94;
        if ((((*(byte *)(param_1 + 4) >> 1 & 1) == 0) && (uVar21 < uVar13)) &&
           ((*(ushort *)(lVar30 + 4) >> 8 & 1) != 0)) {
          lVar30 = param_1[3];
          sVar20 = *(short *)(lVar30 + 0x1a);
          iVar14 = sVar20 + 4;
          if ((iVar14 != 0) &&
             (*(uint *)(lVar30 + 8) < (uint)(iVar14 + sVar20 + (int)*(short *)(lVar30 + 0x62)))) {
            local_90 = FUN_00e13cd0(lVar30,iVar14,0);
            uVar15 = local_90;
            if (local_90 != 0) goto joined_r0x00e323f8;
            sVar20 = *(short *)(lVar30 + 0x1a);
          }
          local_90 = 0;
          lVar37 = param_1[0xe];
          plVar1 = (long *)(*(long *)(lVar30 + 0x20) + (long)sVar20 * 0x10);
          plVar1[1] = param_1[0xf];
          *plVar1 = lVar37;
          lVar31 = param_1[0x10];
          lVar37 = *(long *)(lVar30 + 0x20) + (long)*(short *)(lVar30 + 0x1a) * 0x10;
          *(long *)(lVar37 + 0x18) = param_1[0x11];
          *(long *)(lVar37 + 0x10) = lVar31;
          lVar31 = param_1[0x27];
          lVar37 = *(long *)(lVar30 + 0x20) + (long)*(short *)(lVar30 + 0x1a) * 0x10;
          *(long *)(lVar37 + 0x28) = param_1[0x28];
          *(long *)(lVar37 + 0x20) = lVar31;
          lVar31 = param_1[0x29];
          lVar37 = *(long *)(lVar30 + 0x20) + (long)*(short *)(lVar30 + 0x1a) * 0x10;
          *(long *)(lVar37 + 0x38) = param_1[0x2a];
          *(long *)(lVar37 + 0x30) = lVar31;
          *(undefined1 *)(*(long *)(lVar30 + 0x28) + (long)*(short *)(lVar30 + 0x1a)) = 0;
          *(undefined1 *)(*(long *)(lVar30 + 0x28) + (long)*(short *)(lVar30 + 0x1a) + 1) = 0;
          *(undefined1 *)(*(long *)(lVar30 + 0x28) + (long)*(short *)(lVar30 + 0x1a) + 2) = 0;
          *(undefined1 *)(*(long *)(lVar30 + 0x28) + (long)*(short *)(lVar30 + 0x1a) + 3) = 0;
          lVar30 = param_1[6];
          local_90 = FUN_00e1bb5c(lVar30,param_1[0x24]);
          uVar15 = local_90;
          if ((local_90 == 0) &&
             (uVar13 = FUN_00e1bcf8(lVar30,&local_90), uVar15 = local_90, local_90 == 0)) {
            if (*(ushort *)(*param_1 + 0x1e6) < uVar13) {
              if ((int)*plVar26 < (int)(uint)uVar13) {
                local_94 = 0x16;
                uVar15 = local_94;
                goto joined_r0x00e323f8;
              }
              lVar37 = param_1[0x22];
              uVar15 = *(uint *)(lVar37 + 0x2b8);
              if (uVar15 < uVar13) {
                uVar16 = FUN_00e13bcc(*(undefined8 *)(lVar37 + 0x10),1,uVar15,(uint)uVar13,
                                      *(undefined8 *)(lVar37 + 0x2c0),&local_140);
                *(undefined8 *)(lVar37 + 0x2c0) = uVar16;
                lVar37 = param_1[0x22];
                uVar23 = (uint)uVar13;
                if ((uint)local_140 != 0) {
                  uVar23 = uVar15;
                }
                local_90 = (uint)local_140;
                *(uint *)(lVar37 + 0x2b8) = uVar23 & 0xffff;
                uVar15 = (uint)local_140;
                if ((uint)local_140 != 0) goto joined_r0x00e323f8;
              }
              else {
                local_90 = 0;
                *(uint *)(lVar37 + 0x2b8) = uVar15 & 0xffff;
              }
            }
            else {
              if (uVar13 == 0) {
                local_94 = 0;
                uVar15 = local_94;
                goto joined_r0x00e323f8;
              }
              lVar37 = param_1[0x22];
            }
            local_90 = FUN_00e1bbd0(lVar30,*(undefined8 *)(lVar37 + 0x2c0),(ulong)uVar13);
            uVar15 = local_90;
            if (local_90 == 0) {
              lVar30 = param_1[2];
              *(undefined8 *)(lVar30 + 0x100) = *(undefined8 *)(param_1[0x22] + 0x2c0);
              *(ulong *)(lVar30 + 0x108) = (ulong)uVar13;
              lVar30 = param_1[3];
              lVar37 = (long)(short)uVar21 * 0x10;
              sVar20 = *(short *)(lVar30 + 0x1a) - uVar21;
              *(short *)((long)param_1 + 0xdc) = sVar20;
              *(short *)((long)param_1 + 0xde) = *(short *)(lVar30 + 0x18) - sVar22;
              param_1[0x1c] = *(long *)(lVar30 + 0x40) + lVar37;
              param_1[0x1d] = *(long *)(lVar30 + 0x20) + lVar37;
              param_1[0x1e] = *(long *)(lVar30 + 0x48) + lVar37;
              pbVar2 = (byte *)(*(long *)(lVar30 + 0x28) + (long)(short)uVar21);
              param_1[0x1f] = (long)pbVar2;
              lVar30 = *(long *)(lVar30 + 0x30);
              *(ushort *)(param_1 + 0x21) = uVar21;
              param_1[0x20] = lVar30 + ((long)sVar22 & 0xffffffffU) * 2;
              if (sVar20 == 0) {
                sVar22 = 4;
              }
              else {
                *pbVar2 = *pbVar2 & 0xe7;
                uVar21 = *(ushort *)((long)param_1 + 0xdc);
                if (1 < uVar21) {
                  uVar32 = 1;
                  do {
                    *(byte *)(param_1[0x1f] + uVar32) = *(byte *)(param_1[0x1f] + uVar32) & 0xe7;
                    uVar21 = *(ushort *)((long)param_1 + 0xdc);
                    uVar32 = uVar32 + 1;
                  } while (uVar32 < uVar21);
                }
                sVar22 = uVar21 + 4;
              }
              *(short *)((long)param_1 + 0xdc) = sVar22;
              uVar15 = FUN_00e347b0(param_1,1);
            }
          }
        }
      }
      else {
        FUN_00e1436c(lVar30);
        *(undefined4 *)(param_1[2] + 0x90) = 0x636f6d70;
        uVar15 = local_94;
      }
      goto joined_r0x00e323f8;
    }
  }
  else {
    local_94 = 0x15;
  }
LAB_00e32844:
  (**(code **)(lVar29 + 0x350))(param_1);
  uVar15 = local_94;
joined_r0x00e323f8:
  local_94 = uVar15;
  if (bVar9) {
LAB_00e32854:
    plVar26 = *(long **)(*(long *)(lVar29 + 0xf0) + 0x68);
    (**(code **)(*plVar26 + 8))(plVar26[1],&local_100);
  }
  return local_94;
}

