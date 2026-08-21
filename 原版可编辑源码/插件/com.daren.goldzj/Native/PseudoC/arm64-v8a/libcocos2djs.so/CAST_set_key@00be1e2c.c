
void CAST_set_key(CAST_KEY *key,int len,uchar *data)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  byte *pbVar33;
  ulong uVar34;
  long lVar35;
  uint *puVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  uint uVar44;
  long lVar45;
  uint local_12c;
  uint local_120 [19];
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0 [8];
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar1 = len;
  if (0xf < len) {
    iVar1 = 0x10;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  if (len < 1) {
    uVar25 = 0;
    local_80._4_4_ = 0;
    uStack_78._0_4_ = 0;
    uVar30 = 0;
    local_68._0_4_ = 0;
    local_70._0_4_ = 0;
    uVar28 = 0;
    local_68._4_4_ = 0;
    uVar26 = 0;
    local_70._4_4_ = 0;
    uVar44 = 0;
    uVar29 = 0;
    uVar41 = 0;
    uVar39 = 0;
    local_a0[7] = 0;
    local_a0[6] = 0;
    local_a0[5] = 0;
    local_a0[4] = 0;
    local_a0[3] = 0;
    local_a0[2] = 0;
    local_a0[1] = 0;
    local_a0[0] = 0;
    goto LAB_00be1f98;
  }
  uVar28 = (ulong)iVar1;
  uVar25 = uVar28;
  if ((long)uVar28 < 2) {
    uVar25 = 1;
  }
  if (uVar25 < 2) {
    uVar30 = 0;
LAB_00be1f1c:
    do {
      local_a0[uVar30] = (uint)data[uVar30];
      uVar30 = uVar30 + 1;
    } while ((long)uVar30 < (long)uVar28);
  }
  else {
    uVar30 = uVar25 & 0x7ffffffffffffffe;
    if (uVar30 == 0) goto LAB_00be1f1c;
    puVar36 = (uint *)((ulong)local_a0 | 4);
    pbVar33 = data + 1;
    uVar31 = uVar30;
    do {
      bVar23 = *pbVar33;
      uVar31 = uVar31 - 2;
      puVar36[-1] = (uint)pbVar33[-1];
      *puVar36 = (uint)bVar23;
      puVar36 = puVar36 + 2;
      pbVar33 = pbVar33 + 2;
    } while (uVar31 != 0);
    if (uVar25 != uVar30) goto LAB_00be1f1c;
  }
  uVar30 = local_80 & 0xffffffff;
  uVar28 = (ulong)local_70._4_4_;
  uVar25 = uStack_78 >> 0x20;
  local_a0[0] = local_a0[0] << 0x18;
  local_a0[1] = local_a0[1] << 0x10;
  local_a0[2] = local_a0[2] << 8;
  local_a0[4] = local_a0[4] << 0x18;
  local_a0[5] = local_a0[5] << 0x10;
  local_a0[6] = local_a0[6] << 8;
  uVar39 = (int)local_80 << 0x18;
  uVar41 = local_80._4_4_ << 0x10;
  uVar29 = (uint)uStack_78 << 8;
  uVar44 = (uint)local_70 << 0x18;
  local_70._4_4_ = local_70._4_4_ << 0x10;
  uVar26 = (uint)local_68 << 8;
LAB_00be1f98:
  local_12c = local_a0[5] | local_a0[4] | local_a0[6] | local_a0[7];
  uVar40 = (&CAST_S_table5)[local_68._4_4_];
  uVar42 = (&CAST_S_table6)[uVar30];
  key->short_key = (uint)(iVar1 < 0xb);
  uVar27 = local_a0[1] | local_a0[0] | local_a0[2] | local_a0[3];
  uVar39 = uVar41 | uVar39 | uVar29 | (uint)uVar25;
  uVar41 = local_70._4_4_ | uVar44 | uVar26 | local_68._4_4_;
  uVar30 = (ulong)(uint)uStack_78;
  lVar37 = 0;
  uVar44 = local_80._4_4_;
  uVar29 = (uint)local_70;
  uVar26 = (uint)local_68;
  do {
    uVar42 = *(uint *)(CAST_S_table4 + uVar28 * 4) ^ uVar27 ^ uVar40 ^ (&CAST_S_table6)[uVar29] ^
             *(uint *)(CAST_S_table7 + (ulong)uVar26 * 4) ^ uVar42;
    uVar34 = (ulong)(uVar42 >> 8 & 0xff);
    lVar43 = (ulong)(uVar42 >> 0x18) * 4;
    uVar28 = (ulong)(uVar42 >> 0x10 & 0xff);
    lVar35 = uVar34 * 4;
    uVar31 = (ulong)(uVar42 & 0xff);
    uVar27 = (&CAST_S_table6)[uVar28];
    uVar39 = *(uint *)(CAST_S_table4 + lVar43) ^ uVar39 ^ (&CAST_S_table5)[uVar34] ^ uVar27 ^
             *(uint *)(CAST_S_table7 + uVar31 * 4) ^ *(uint *)(CAST_S_table7 + uVar30 * 4);
    uVar30 = (ulong)(uVar39 & 0xff);
    uVar40 = *(uint *)(CAST_S_table7 + lVar35);
    uVar34 = (ulong)(uVar39 >> 8 & 0xff);
    uVar2 = *(uint *)(CAST_S_table7 + lVar43);
    uVar26 = *(uint *)(CAST_S_table4 + uVar28 * 4);
    uVar28 = (ulong)(uVar39 >> 0x10 & 0xff);
    uVar3 = (&CAST_S_table5)[uVar34];
    uVar4 = (&CAST_S_table6)[uVar28];
    uVar5 = *(uint *)(CAST_S_table7 + (ulong)(uVar39 >> 0x18) * 4);
    uVar6 = (&CAST_S_table6)[uVar31];
    uVar41 = *(uint *)(CAST_S_table4 + uVar30 * 4) ^ uVar41 ^ uVar3 ^ uVar4 ^ uVar5 ^
             *(uint *)(CAST_S_table4 + (ulong)uVar44 * 4);
    uVar24 = uVar41 >> 0x10 & 0xff;
    uVar7 = *(uint *)(CAST_S_table4 + (ulong)(uVar41 >> 8 & 0xff) * 4);
    lVar45 = (ulong)(uVar41 >> 0x18) * 4;
    uVar8 = (&CAST_S_table5)[uVar41 & 0xff];
    uVar29 = *(uint *)(CAST_S_table4 + uVar28 * 4) ^ uVar41 ^ (&CAST_S_table5)[uVar30] ^
             (&CAST_S_table6)[uVar39 >> 0x18] ^ *(uint *)(CAST_S_table7 + uVar34 * 4) ^
             (&CAST_S_table6)[uVar42 >> 0x18];
    uVar9 = (&CAST_S_table6)[uVar24];
    uVar28 = (ulong)(uVar29 >> 0x10 & 0xff);
    lVar43 = (ulong)(uVar29 & 0xff) * 4;
    uVar10 = (&CAST_S_table5)[uVar29 >> 8 & 0xff];
    uVar44 = *(uint *)(CAST_S_table4 + (ulong)(uVar29 >> 0x18) * 4);
    uVar11 = *(uint *)(CAST_S_table7 + lVar43);
    uVar12 = *(uint *)(CAST_S_table4 + lVar43);
    uVar13 = (&CAST_S_table5)[uVar29 >> 0x18];
    uVar14 = (&CAST_S_table6)[uVar29 & 0xff];
    uVar41 = uVar7 ^ local_12c ^ (&CAST_S_table5)[uVar24] ^ (&CAST_S_table6)[uVar41 & 0xff] ^
             *(uint *)(CAST_S_table7 + lVar45) ^ (&CAST_S_table5)[uVar25];
    uVar15 = (&CAST_S_table6)[uVar28];
    uVar16 = *(uint *)(CAST_S_table4 + uVar28 * 4);
    *(uint *)((long)local_120 + lVar37) =
         *(uint *)(CAST_S_table4 + lVar45) ^ (&CAST_S_table5)[uVar24] ^ (&CAST_S_table6)[uVar30] ^
         *(uint *)(CAST_S_table7 + uVar34 * 4) ^ *(uint *)(CAST_S_table4 + lVar35);
    lVar35 = (ulong)(uVar41 >> 0x18) * 4;
    uVar24 = *(uint *)(CAST_S_table4 + (ulong)(uVar41 >> 8 & 0xff) * 4);
    uVar17 = (&CAST_S_table5)[uVar41 & 0xff];
    uVar18 = (&CAST_S_table5)[uVar41 >> 0x10 & 0xff];
    uVar19 = *(uint *)(CAST_S_table4 + lVar35);
    uVar20 = *(uint *)(CAST_S_table7 + lVar35);
    uVar44 = uVar44 ^ uVar42 ^ uVar10 ^ uVar15 ^ uVar11 ^ uVar40;
    lVar45 = (ulong)(uVar44 & 0xff) * 4;
    uVar28 = (ulong)(uVar44 >> 0x10 & 0xff);
    uVar11 = *(uint *)(CAST_S_table4 + lVar45);
    uVar15 = (&CAST_S_table5)[uVar44 >> 8 & 0xff];
    uVar42 = (&CAST_S_table6)[uVar28];
    uVar21 = *(uint *)(CAST_S_table7 + (ulong)(uVar44 >> 0x18) * 4);
    *(uint *)((long)local_120 + lVar37 + 4) = uVar8 ^ uVar7 ^ uVar4 ^ uVar5 ^ uVar3;
    *(uint *)((long)local_120 + lVar37 + 8) = uVar18 ^ uVar19 ^ uVar6 ^ uVar40 ^ uVar9;
    uVar26 = uVar11 ^ uVar39 ^ uVar15 ^ uVar42 ^ uVar21 ^ uVar26;
    uVar30 = (ulong)(uVar26 & 0xff);
    uVar34 = (ulong)(uVar26 >> 8 & 0xff);
    uVar25 = (ulong)(uVar26 >> 0x10 & 0xff);
    lVar38 = uVar34 * 4;
    lVar35 = uVar25 * 4;
    uVar3 = (&CAST_S_table5)[uVar30];
    lVar43 = (ulong)(uVar26 >> 0x18) * 4;
    uVar4 = *(uint *)(CAST_S_table4 + lVar43);
    uVar42 = (&CAST_S_table6)[uVar26 >> 0x18];
    uVar5 = *(uint *)(CAST_S_table7 + lVar35);
    uVar39 = *(uint *)(CAST_S_table4 + lVar38) ^ uVar41 ^ (&CAST_S_table5)[uVar25] ^
             (&CAST_S_table6)[uVar30] ^ *(uint *)(CAST_S_table7 + lVar43) ^ (&CAST_S_table5)[uVar31]
    ;
    uVar41 = *(uint *)(CAST_S_table7 + lVar38);
    uVar40 = *(uint *)(CAST_S_table4 + lVar35);
    *(uint *)((long)local_120 + lVar37 + 0x1c) =
         (&CAST_S_table5)[uVar44 >> 0x18] ^ *(uint *)(CAST_S_table4 + uVar28 * 4) ^
         (&CAST_S_table6)[uVar34] ^ *(uint *)(CAST_S_table7 + uVar30 * 4) ^
         *(uint *)(CAST_S_table7 + lVar45);
    uVar25 = (ulong)(uVar39 >> 8 & 0xff);
    uVar28 = (ulong)(uVar39 >> 0x10 & 0xff);
    uVar6 = (&CAST_S_table6)[uVar39 >> 0x18];
    lVar35 = uVar28 * 4;
    uVar7 = *(uint *)(CAST_S_table7 + lVar35);
    uVar8 = (&CAST_S_table6)[uVar25];
    uVar9 = (&CAST_S_table5)[uVar28];
    uVar18 = *(uint *)(CAST_S_table4 + lVar35);
    uVar19 = *(uint *)(CAST_S_table7 + (ulong)(uVar39 & 0xff) * 4);
    uVar21 = (&CAST_S_table5)[uVar39 & 0xff];
    uVar22 = *(uint *)(CAST_S_table7 + uVar25 * 4);
    *(uint *)((long)local_120 + lVar37 + 0xc) = uVar17 ^ uVar24 ^ uVar27 ^ uVar2 ^ uVar20;
    *(uint *)((long)local_120 + lVar37 + 0x10) = uVar10 ^ uVar12 ^ uVar6 ^ uVar7 ^ uVar4;
    *(uint *)((long)local_120 + lVar37 + 0x14) = uVar13 ^ uVar16 ^ uVar8 ^ uVar19 ^ uVar9;
    *(uint *)((long)local_120 + lVar37 + 0x18) = uVar15 ^ uVar11 ^ uVar42 ^ uVar5 ^ uVar14;
    uVar42 = uVar18 ^ uVar29 ^ uVar21 ^ uVar6 ^ uVar22 ^ uVar42;
    uVar32 = (ulong)(uVar42 >> 0x18);
    uVar31 = (ulong)(uVar42 >> 8 & 0xff);
    uVar34 = (ulong)(uVar42 >> 0x10 & 0xff);
    lVar35 = (ulong)(uVar42 & 0xff) * 4;
    uVar29 = (&CAST_S_table5)[uVar31];
    uVar2 = *(uint *)(CAST_S_table4 + lVar35);
    uVar41 = *(uint *)(CAST_S_table4 + uVar32 * 4) ^ uVar26 ^ uVar29 ^ (&CAST_S_table6)[uVar34] ^
             *(uint *)(CAST_S_table7 + lVar35) ^ uVar41;
    uVar25 = (ulong)(uVar41 >> 8 & 0xff);
    uVar28 = (ulong)(uVar41 >> 0x10 & 0xff);
    uVar30 = (ulong)(uVar41 >> 0x18);
    local_12c = *(uint *)(CAST_S_table7 + uVar31 * 4);
    uVar26 = *(uint *)(CAST_S_table4 + uVar34 * 4);
    uVar4 = *(uint *)(CAST_S_table4 + uVar28 * 4);
    uVar5 = (&CAST_S_table5)[uVar30];
    uVar40 = *(uint *)(CAST_S_table4 + (ulong)(uVar41 & 0xff) * 4) ^ uVar39 ^
             (&CAST_S_table5)[uVar25] ^ (&CAST_S_table6)[uVar28] ^
             *(uint *)(CAST_S_table7 + uVar30 * 4) ^ uVar40;
    uVar28 = (ulong)(uVar40 >> 8 & 0xff);
    uVar6 = (&CAST_S_table5)[uVar32];
    uVar39 = *(uint *)(CAST_S_table7 + uVar25 * 4);
    uVar34 = (ulong)(uVar40 >> 0x10 & 0xff);
    lVar43 = uVar34 * 4;
    uVar7 = *(uint *)(CAST_S_table4 + lVar43);
    uVar8 = (&CAST_S_table6)[uVar28];
    uVar9 = *(uint *)(CAST_S_table7 + (ulong)(uVar40 & 0xff) * 4);
    uVar27 = uVar4 ^ uVar40 ^ (&CAST_S_table5)[uVar41 & 0xff] ^ (&CAST_S_table6)[uVar30] ^ uVar39 ^
             (&CAST_S_table6)[uVar32];
    uVar32 = (ulong)(uVar27 >> 8 & 0xff);
    lVar45 = (ulong)(uVar27 >> 0x18) * 4;
    uVar10 = *(uint *)(CAST_S_table4 + lVar45);
    uVar11 = (&CAST_S_table5)[uVar32];
    uVar12 = (&CAST_S_table6)[uVar27 >> 0x10 & 0xff];
    lVar35 = (ulong)(uVar27 & 0xff) * 4;
    uVar13 = *(uint *)(CAST_S_table7 + lVar35);
    uVar3 = *(uint *)(CAST_S_table4 + uVar28 * 4) ^ uVar44 ^ (&CAST_S_table5)[uVar34] ^
            (&CAST_S_table6)[uVar40 & 0xff] ^ *(uint *)(CAST_S_table7 + (ulong)(uVar40 >> 0x18) * 4)
            ^ uVar3;
    *(uint *)((long)local_120 + lVar37 + 0x28) =
         (&CAST_S_table5)[uVar25] ^ *(uint *)(CAST_S_table4 + (ulong)(uVar41 & 0xff) * 4) ^
         (&CAST_S_table6)[uVar40 >> 0x18] ^ *(uint *)(CAST_S_table7 + lVar43) ^
         (&CAST_S_table6)[uVar31];
    *(uint *)((long)local_120 + lVar37 + 0x2c) = uVar5 ^ uVar4 ^ uVar8 ^ uVar9 ^ uVar39;
    uVar44 = (&CAST_S_table6)[uVar3 >> 8 & 0xff];
    uVar40 = *(uint *)(CAST_S_table7 + (ulong)(uVar3 & 0xff) * 4);
    local_12c = uVar10 ^ uVar42 ^ uVar11 ^ uVar12 ^ uVar13 ^ local_12c;
    uVar34 = (ulong)(local_12c & 0xff);
    uVar31 = (ulong)(local_12c >> 8 & 0xff);
    uVar4 = (&CAST_S_table6)[local_12c >> 0x10 & 0xff];
    uVar5 = *(uint *)(CAST_S_table7 + (ulong)(local_12c >> 0x18) * 4);
    uVar8 = (&CAST_S_table5)[uVar3 >> 0x18];
    uVar39 = *(uint *)(CAST_S_table4 + uVar34 * 4) ^ uVar41 ^ (&CAST_S_table5)[uVar31] ^ uVar4 ^
             uVar5 ^ uVar26;
    *(uint *)((long)local_120 + lVar37 + 0x20) =
         uVar2 ^ uVar29 ^ (&CAST_S_table6)[uVar3 >> 0x18] ^
         *(uint *)(CAST_S_table7 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^ uVar7;
    *(uint *)((long)local_120 + lVar37 + 0x24) = uVar6 ^ uVar26 ^ uVar44 ^ uVar40 ^ uVar8;
    uVar30 = (ulong)(uVar39 >> 8 & 0xff);
    uVar25 = (ulong)(uVar39 & 0xff);
    uVar44 = uVar39 >> 0x10 & 0xff;
    uVar26 = *(uint *)(CAST_S_table4 + uVar30 * 4);
    lVar43 = (ulong)(uVar39 >> 0x18) * 4;
    uVar40 = (&CAST_S_table5)[uVar25];
    uVar2 = (&CAST_S_table5)[uVar34];
    uVar41 = uVar26 ^ uVar3 ^ (&CAST_S_table5)[uVar44] ^ (&CAST_S_table6)[uVar25] ^
             *(uint *)(CAST_S_table7 + lVar43) ^ (&CAST_S_table5)[uVar42 & 0xff];
    uVar28 = (ulong)(uVar41 >> 0x10 & 0xff);
    uVar29 = uVar41 >> 0x18;
    uVar3 = *(uint *)(CAST_S_table4 + (ulong)uVar29 * 4);
    *(uint *)((long)local_120 + lVar37 + 0x30) =
         (&CAST_S_table5)[uVar44] ^ *(uint *)(CAST_S_table4 + lVar43) ^ (&CAST_S_table6)[uVar34] ^
         *(uint *)(CAST_S_table7 + uVar31 * 4) ^ *(uint *)(CAST_S_table4 + lVar35);
    *(uint *)((long)local_120 + lVar37 + 0x34) = uVar40 ^ uVar26 ^ uVar4 ^ uVar5 ^ uVar2;
    uVar26 = uVar41 >> 8 & 0xff;
    uVar2 = *(uint *)(CAST_S_table4 + (ulong)uVar26 * 4);
    uVar40 = (&CAST_S_table5)[uVar41 & 0xff];
    uVar42 = (&CAST_S_table6)[uVar39 >> 0x18];
    uVar4 = *(uint *)(CAST_S_table7 + lVar45);
    uVar5 = *(uint *)(CAST_S_table7 + uVar28 * 4);
    lVar35 = lVar37 + 0x40;
    *(uint *)((long)local_120 + lVar37 + 0x38) =
         (&CAST_S_table5)[uVar28] ^ uVar3 ^ (&CAST_S_table6)[uVar27 & 0xff] ^
         *(uint *)(CAST_S_table7 + uVar32 * 4) ^ uVar42;
    *(uint *)((long)local_120 + lVar37 + 0x3c) = uVar40 ^ uVar2 ^ uVar12 ^ uVar4 ^ uVar5;
    lVar37 = lVar35;
  } while (lVar35 == 0x40);
  key->data[0] = local_120[0];
  key->data[1] = local_120[0x10] + 0x10 & 0x1f;
  key->data[2] = local_120[1];
  key->data[3] = local_120[0x11] + 0x10 & 0x1f;
  key->data[4] = local_120[2];
  key->data[5] = local_120[0x12] + 0x10 & 0x1f;
  key->data[6] = local_120[3];
  key->data[7] = local_d4 + 0x10U & 0x1f;
  key->data[8] = local_120[4];
  key->data[9] = local_d0 + 0x10U & 0x1f;
  key->data[10] = local_120[5];
  key->data[0xb] = local_cc + 0x10U & 0x1f;
  key->data[0xc] = local_120[6];
  key->data[0xd] = local_c8 + 0x10U & 0x1f;
  key->data[0xe] = local_120[7];
  key->data[0xf] = local_c4 + 0x10U & 0x1f;
  key->data[0x10] = local_120[8];
  key->data[0x11] = local_c0 + 0x10U & 0x1f;
  key->data[0x12] = local_120[9];
  key->data[0x13] = local_bc + 0x10U & 0x1f;
  key->data[0x14] = local_120[10];
  key->data[0x15] = local_b8 + 0x10U & 0x1f;
  key->data[0x16] = local_120[0xb];
  key->data[0x17] = local_b4 + 0x10U & 0x1f;
  key->data[0x18] = local_120[0xc];
  key->data[0x19] = local_b0 + 0x10U & 0x1f;
  key->data[0x1a] = local_120[0xd];
  key->data[0x1b] = local_ac + 0x10U & 0x1f;
  key->data[0x1c] = local_120[0xe];
  key->data[0x1d] = local_a8 + 0x10U & 0x1f;
  key->data[0x1e] = local_120[0xf];
  key->data[0x1f] = local_a4 + 0x10U & 0x1f;
  return;
}

