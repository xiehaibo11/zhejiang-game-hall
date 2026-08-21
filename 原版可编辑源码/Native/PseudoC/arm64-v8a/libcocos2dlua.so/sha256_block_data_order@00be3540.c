
void sha256_block_data_order(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int *piVar28;
  undefined1 (*pauVar29) [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  int *piVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  
  if ((OPENSSL_armcap_P & 0x10) == 0) {
    uVar45 = *(uint *)*param_1;
    uVar46 = *(uint *)(*param_1 + 4);
    uVar47 = *(uint *)(*param_1 + 8);
    iVar68 = *(int *)(*param_1 + 0xc);
    uVar49 = *(uint *)param_1[1];
    uVar50 = *(uint *)(param_1[1] + 4);
    pauVar29 = param_2 + param_3 * 4;
    uVar51 = *(uint *)(param_1[1] + 8);
    iVar69 = *(int *)(param_1[1] + 0xc);
    piVar54 = &DAT_00be4380;
    do {
      uVar35 = (*(uint *)*param_2 & 0xff00ff00) >> 8 | (*(uint *)*param_2 & 0xff00ff) << 8;
      uVar2 = uVar35 >> 0x10 | uVar35 << 0x10;
      uVar35 = uVar49 ^ (uVar49 >> 0xe | uVar49 << 0x12);
      uVar52 = uVar45 ^ (uVar45 >> 9 | uVar45 << 0x17);
      iVar69 = iVar69 + *piVar54 + uVar2 + (uVar50 & uVar49 | uVar51 & (uVar49 ^ 0xffffffff)) +
               ((uVar49 >> 6 | uVar49 << 0x1a) ^ (uVar35 >> 0xb | uVar35 << 0x15));
      uVar35 = iVar68 + iVar69;
      uVar3 = (*(uint *)(*param_2 + 4) & 0xff00ff00) >> 8 |
              (*(uint *)(*param_2 + 4) & 0xff00ff) << 8;
      uVar36 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar52 = iVar69 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
               ((uVar45 >> 2 | uVar45 << 0x1e) ^ (uVar52 >> 0xd | uVar52 << 0x13));
      uVar48 = uVar35 ^ (uVar35 >> 0xe | uVar35 * 0x40000);
      uVar38 = uVar52 ^ (uVar52 >> 9 | uVar52 * 0x800000);
      iVar68 = uVar51 + piVar54[1] + uVar36 + (uVar49 & uVar35 | uVar50 & (uVar35 ^ 0xffffffff)) +
               ((uVar35 >> 6 | uVar35 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar47 = uVar47 + iVar68;
      uVar51 = (*(uint *)(*param_2 + 8) & 0xff00ff00) >> 8 |
               (*(uint *)(*param_2 + 8) & 0xff00ff) << 8;
      uVar37 = uVar51 >> 0x10 | uVar51 << 0x10;
      uVar51 = iVar68 + ((uVar45 ^ uVar46) & (uVar52 ^ uVar45) ^ uVar45) +
               ((uVar52 >> 2 | uVar52 * 0x40000000) ^ (uVar38 >> 0xd | uVar38 << 0x13));
      uVar48 = uVar47 ^ (uVar47 >> 0xe | uVar47 * 0x40000);
      uVar39 = uVar51 ^ (uVar51 >> 9 | uVar51 * 0x800000);
      iVar68 = uVar50 + piVar54[2] + uVar37 + (uVar35 & uVar47 | uVar49 & (uVar47 ^ 0xffffffff)) +
               ((uVar47 >> 6 | uVar47 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar46 = uVar46 + iVar68;
      uVar50 = (*(uint *)(*param_2 + 0xc) & 0xff00ff00) >> 8 |
               (*(uint *)(*param_2 + 0xc) & 0xff00ff) << 8;
      uVar38 = uVar50 >> 0x10 | uVar50 << 0x10;
      uVar50 = iVar68 + ((uVar52 ^ uVar45) & (uVar51 ^ uVar52) ^ uVar52) +
               ((uVar51 >> 2 | uVar51 * 0x40000000) ^ (uVar39 >> 0xd | uVar39 << 0x13));
      uVar48 = uVar46 ^ (uVar46 >> 0xe | uVar46 * 0x40000);
      uVar40 = uVar50 ^ (uVar50 >> 9 | uVar50 * 0x800000);
      iVar68 = uVar49 + piVar54[3] + uVar38 + (uVar47 & uVar46 | uVar35 & (uVar46 ^ 0xffffffff)) +
               ((uVar46 >> 6 | uVar46 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar45 = uVar45 + iVar68;
      uVar49 = (*(uint *)param_2[1] & 0xff00ff00) >> 8 | (*(uint *)param_2[1] & 0xff00ff) << 8;
      uVar39 = uVar49 >> 0x10 | uVar49 << 0x10;
      uVar49 = iVar68 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
               ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar40 >> 0xd | uVar40 << 0x13));
      uVar48 = uVar45 ^ (uVar45 >> 0xe | uVar45 * 0x40000);
      uVar40 = uVar49 ^ (uVar49 >> 9 | uVar49 * 0x800000);
      iVar68 = uVar35 + piVar54[4] + uVar39 + (uVar46 & uVar45 | uVar47 & (uVar45 ^ 0xffffffff)) +
               ((uVar45 >> 6 | uVar45 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar52 = uVar52 + iVar68;
      uVar35 = (*(uint *)(param_2[1] + 4) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[1] + 4) & 0xff00ff) << 8;
      local_8c = uVar35 >> 0x10 | uVar35 << 0x10;
      uVar35 = iVar68 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 2 | uVar49 * 0x40000000) ^ (uVar40 >> 0xd | uVar40 << 0x13));
      uVar48 = uVar52 ^ (uVar52 >> 0xe | uVar52 * 0x40000);
      uVar40 = uVar35 ^ (uVar35 >> 9 | uVar35 * 0x800000);
      iVar68 = uVar47 + piVar54[5] + local_8c + (uVar45 & uVar52 | uVar46 & (uVar52 ^ 0xffffffff)) +
               ((uVar52 >> 6 | uVar52 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar51 = uVar51 + iVar68;
      uVar47 = (*(uint *)(param_2[1] + 8) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[1] + 8) & 0xff00ff) << 8;
      local_88 = uVar47 >> 0x10 | uVar47 << 0x10;
      uVar47 = iVar68 + ((uVar49 ^ uVar50) & (uVar35 ^ uVar49) ^ uVar49) +
               ((uVar35 >> 2 | uVar35 * 0x40000000) ^ (uVar40 >> 0xd | uVar40 << 0x13));
      uVar48 = uVar51 ^ (uVar51 >> 0xe | uVar51 * 0x40000);
      uVar40 = uVar47 ^ (uVar47 >> 9 | uVar47 * 0x800000);
      iVar68 = uVar46 + piVar54[6] + local_88 + (uVar52 & uVar51 | uVar45 & (uVar51 ^ 0xffffffff)) +
               ((uVar51 >> 6 | uVar51 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar50 = uVar50 + iVar68;
      uVar46 = (*(uint *)(param_2[1] + 0xc) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[1] + 0xc) & 0xff00ff) << 8;
      local_84 = uVar46 >> 0x10 | uVar46 << 0x10;
      uVar46 = iVar68 + ((uVar35 ^ uVar49) & (uVar47 ^ uVar35) ^ uVar35) +
               ((uVar47 >> 2 | uVar47 * 0x40000000) ^ (uVar40 >> 0xd | uVar40 << 0x13));
      uVar48 = uVar50 ^ (uVar50 >> 0xe | uVar50 * 0x40000);
      uVar41 = uVar46 ^ (uVar46 >> 9 | uVar46 * 0x800000);
      iVar68 = uVar45 + piVar54[7] + local_84 + (uVar51 & uVar50 | uVar52 & (uVar50 ^ 0xffffffff)) +
               ((uVar50 >> 6 | uVar50 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar49 = uVar49 + iVar68;
      uVar45 = (*(uint *)param_2[2] & 0xff00ff00) >> 8 | (*(uint *)param_2[2] & 0xff00ff) << 8;
      uVar40 = uVar45 >> 0x10 | uVar45 << 0x10;
      uVar45 = iVar68 + ((uVar47 ^ uVar35) & (uVar46 ^ uVar47) ^ uVar47) +
               ((uVar46 >> 2 | uVar46 * 0x40000000) ^ (uVar41 >> 0xd | uVar41 << 0x13));
      uVar48 = uVar49 ^ (uVar49 >> 0xe | uVar49 * 0x40000);
      uVar42 = uVar45 ^ (uVar45 >> 9 | uVar45 * 0x800000);
      iVar68 = uVar52 + piVar54[8] + uVar40 + (uVar50 & uVar49 | uVar51 & (uVar49 ^ 0xffffffff)) +
               ((uVar49 >> 6 | uVar49 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar35 = uVar35 + iVar68;
      uVar52 = (*(uint *)(param_2[2] + 4) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[2] + 4) & 0xff00ff) << 8;
      uVar41 = uVar52 >> 0x10 | uVar52 << 0x10;
      uVar52 = iVar68 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
               ((uVar45 >> 2 | uVar45 * 0x40000000) ^ (uVar42 >> 0xd | uVar42 << 0x13));
      uVar48 = uVar35 ^ (uVar35 >> 0xe | uVar35 * 0x40000);
      uVar43 = uVar52 ^ (uVar52 >> 9 | uVar52 * 0x800000);
      iVar68 = uVar51 + piVar54[9] + uVar41 + (uVar49 & uVar35 | uVar50 & (uVar35 ^ 0xffffffff)) +
               ((uVar35 >> 6 | uVar35 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar47 = uVar47 + iVar68;
      uVar51 = (*(uint *)(param_2[2] + 8) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[2] + 8) & 0xff00ff) << 8;
      uVar42 = uVar51 >> 0x10 | uVar51 << 0x10;
      uVar51 = iVar68 + ((uVar45 ^ uVar46) & (uVar52 ^ uVar45) ^ uVar45) +
               ((uVar52 >> 2 | uVar52 * 0x40000000) ^ (uVar43 >> 0xd | uVar43 << 0x13));
      uVar48 = uVar47 ^ (uVar47 >> 0xe | uVar47 * 0x40000);
      uVar44 = uVar51 ^ (uVar51 >> 9 | uVar51 * 0x800000);
      iVar68 = uVar50 + piVar54[10] + uVar42 + (uVar35 & uVar47 | uVar49 & (uVar47 ^ 0xffffffff)) +
               ((uVar47 >> 6 | uVar47 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar46 = uVar46 + iVar68;
      uVar50 = (*(uint *)(param_2[2] + 0xc) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[2] + 0xc) & 0xff00ff) << 8;
      uVar43 = uVar50 >> 0x10 | uVar50 << 0x10;
      uVar50 = iVar68 + ((uVar52 ^ uVar45) & (uVar51 ^ uVar52) ^ uVar52) +
               ((uVar51 >> 2 | uVar51 * 0x40000000) ^ (uVar44 >> 0xd | uVar44 << 0x13));
      uVar48 = uVar46 ^ (uVar46 >> 0xe | uVar46 * 0x40000);
      uVar32 = uVar50 ^ (uVar50 >> 9 | uVar50 * 0x800000);
      iVar68 = uVar49 + piVar54[0xb] + uVar43 + (uVar47 & uVar46 | uVar35 & (uVar46 ^ 0xffffffff)) +
               ((uVar46 >> 6 | uVar46 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar45 = uVar45 + iVar68;
      uVar49 = (*(uint *)param_2[3] & 0xff00ff00) >> 8 | (*(uint *)param_2[3] & 0xff00ff) << 8;
      uVar44 = uVar49 >> 0x10 | uVar49 << 0x10;
      uVar49 = iVar68 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
               ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 << 0x13));
      uVar48 = uVar45 ^ (uVar45 >> 0xe | uVar45 * 0x40000);
      uVar33 = uVar49 ^ (uVar49 >> 9 | uVar49 * 0x800000);
      iVar68 = uVar35 + piVar54[0xc] + uVar44 + (uVar46 & uVar45 | uVar47 & (uVar45 ^ 0xffffffff)) +
               ((uVar45 >> 6 | uVar45 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 << 0x15));
      uVar52 = uVar52 + iVar68;
      uVar35 = (*(uint *)(param_2[3] + 4) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[3] + 4) & 0xff00ff) << 8;
      uVar32 = uVar35 >> 0x10 | uVar35 << 0x10;
      uVar48 = iVar68 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 2 | uVar49 * 0x40000000) ^ (uVar33 >> 0xd | uVar33 << 0x13));
      uVar35 = uVar52 ^ (uVar52 >> 0xe | uVar52 * 0x40000);
      uVar34 = uVar48 ^ (uVar48 >> 9 | uVar48 * 0x800000);
      iVar68 = uVar47 + piVar54[0xd] + uVar32 + (uVar45 & uVar52 | uVar46 & (uVar52 ^ 0xffffffff)) +
               ((uVar52 >> 6 | uVar52 * 0x4000000) ^ (uVar35 >> 0xb | uVar35 << 0x15));
      uVar51 = uVar51 + iVar68;
      uVar4 = (*(uint *)(param_2[3] + 8) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2[3] + 8) & 0xff00ff) << 8;
      uVar33 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar47 = iVar68 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
               ((uVar48 >> 2 | uVar48 * 0x40000000) ^ (uVar34 >> 0xd | uVar34 << 0x13));
      uVar35 = uVar51 ^ (uVar51 >> 0xe | uVar51 * 0x40000);
      uVar53 = uVar47 ^ (uVar47 >> 9 | uVar47 * 0x800000);
      iVar68 = uVar46 + piVar54[0xe] + uVar33 + (uVar52 & uVar51 | uVar45 & (uVar51 ^ 0xffffffff)) +
               ((uVar51 >> 6 | uVar51 * 0x4000000) ^ (uVar35 >> 0xb | uVar35 << 0x15));
      uVar50 = uVar50 + iVar68;
      uVar46 = (*(uint *)(param_2[3] + 0xc) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2[3] + 0xc) & 0xff00ff) << 8;
      uVar34 = uVar46 >> 0x10 | uVar46 << 0x10;
      uVar46 = iVar68 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 2 | uVar47 * 0x40000000) ^ (uVar53 >> 0xd | uVar53 << 0x13));
      uVar53 = uVar46 ^ uVar47;
      iVar68 = uVar45 + piVar54[0xf] + uVar34 + (uVar51 & uVar50 | uVar52 & (uVar50 ^ 0xffffffff)) +
               ((uVar50 >> 6 | uVar50 * 0x4000000) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 0x19 | uVar50 * 0x80));
      uVar49 = uVar49 + iVar68;
      iVar69 = piVar54[0x10];
      uVar45 = iVar68 + ((uVar47 ^ uVar48) & uVar53 ^ uVar47) +
               ((uVar46 >> 2 | uVar46 * 0x40000000) ^ (uVar46 >> 0xd | uVar46 * 0x80000) ^
               (uVar46 >> 0x16 | uVar46 * 0x400));
      uVar35 = uVar2 + uVar41 +
               ((uVar36 >> 7 | (uVar3 >> 0x10) << 0x19) ^ ((uVar3 & 0xffff) >> 2 | uVar36 << 0xe) ^
               uVar36 >> 3) +
               (((uVar4 & 0xffff) >> 1 | uVar33 << 0xf) ^ ((uVar4 & 0xffff) >> 3 | uVar33 << 0xd) ^
               uVar33 >> 10);
      piVar28 = piVar54 + 0x11;
      do {
        piVar54 = piVar28;
        iVar68 = uVar52 + iVar69 + uVar35 + (uVar50 & uVar49 | uVar51 & (uVar49 ^ 0xffffffff)) +
                 ((uVar49 >> 6 | uVar49 << 0x1a) ^ (uVar49 >> 0xb | uVar49 << 0x15) ^
                 (uVar49 >> 0x19 | uVar49 << 7));
        uVar48 = uVar48 + iVar68;
        uVar52 = iVar68 + (uVar53 & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 2 | uVar45 << 0x1e) ^ (uVar45 >> 0xd | uVar45 << 0x13) ^
                 (uVar45 >> 0x16 | uVar45 << 10));
        uVar36 = uVar36 + uVar42 +
                 ((uVar37 >> 7 | uVar37 << 0x19) ^ (uVar37 >> 0x12 | uVar37 << 0xe) ^ uVar37 >> 3) +
                 ((uVar34 >> 0x11 | uVar34 << 0xf) ^ (uVar34 >> 0x13 | uVar34 << 0xd) ^ uVar34 >> 10
                 );
        iVar68 = uVar51 + *piVar54 + uVar36 + (uVar49 & uVar48 | uVar50 & (uVar48 ^ 0xffffffff)) +
                 ((uVar48 >> 6 | uVar48 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 0x19 | uVar48 * 0x80));
        uVar47 = uVar47 + iVar68;
        uVar51 = iVar68 + ((uVar45 ^ uVar46) & (uVar52 ^ uVar45) ^ uVar45) +
                 ((uVar52 >> 2 | uVar52 * 0x40000000) ^ (uVar52 >> 0xd | uVar52 * 0x80000) ^
                 (uVar52 >> 0x16 | uVar52 * 0x400));
        uVar37 = uVar37 + uVar43 +
                 ((uVar38 >> 7 | uVar38 << 0x19) ^ (uVar38 >> 0x12 | uVar38 << 0xe) ^ uVar38 >> 3) +
                 ((uVar35 >> 0x11 | uVar35 << 0xf) ^ (uVar35 >> 0x13 | uVar35 << 0xd) ^ uVar35 >> 10
                 );
        iVar68 = uVar50 + piVar54[1] + uVar37 + (uVar48 & uVar47 | uVar49 & (uVar47 ^ 0xffffffff)) +
                 ((uVar47 >> 6 | uVar47 * 0x4000000) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 0x19 | uVar47 * 0x80));
        uVar46 = uVar46 + iVar68;
        uVar50 = iVar68 + ((uVar52 ^ uVar45) & (uVar51 ^ uVar52) ^ uVar52) +
                 ((uVar51 >> 2 | uVar51 * 0x40000000) ^ (uVar51 >> 0xd | uVar51 * 0x80000) ^
                 (uVar51 >> 0x16 | uVar51 * 0x400));
        uVar38 = uVar38 + uVar44 +
                 ((uVar39 >> 7 | uVar39 << 0x19) ^ (uVar39 >> 0x12 | uVar39 << 0xe) ^ uVar39 >> 3) +
                 ((uVar36 >> 0x11 | uVar36 * 0x8000) ^ (uVar36 >> 0x13 | uVar36 * 0x2000) ^
                 uVar36 >> 10);
        iVar68 = uVar49 + piVar54[2] + uVar38 + (uVar47 & uVar46 | uVar48 & (uVar46 ^ 0xffffffff)) +
                 ((uVar46 >> 6 | uVar46 * 0x4000000) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
                 (uVar46 >> 0x19 | uVar46 * 0x80));
        uVar45 = uVar45 + iVar68;
        uVar49 = iVar68 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
                 ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar50 >> 0xd | uVar50 * 0x80000) ^
                 (uVar50 >> 0x16 | uVar50 * 0x400));
        uVar39 = uVar39 + uVar32 +
                 ((local_8c >> 7 | local_8c << 0x19) ^ (local_8c >> 0x12 | local_8c << 0xe) ^
                 local_8c >> 3) +
                 ((uVar37 >> 0x11 | uVar37 * 0x8000) ^ (uVar37 >> 0x13 | uVar37 * 0x2000) ^
                 uVar37 >> 10);
        iVar68 = uVar48 + piVar54[3] + uVar39 + (uVar46 & uVar45 | uVar47 & (uVar45 ^ 0xffffffff)) +
                 ((uVar45 >> 6 | uVar45 * 0x4000000) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                 (uVar45 >> 0x19 | uVar45 * 0x80));
        uVar52 = uVar52 + iVar68;
        uVar48 = iVar68 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
                 ((uVar49 >> 2 | uVar49 * 0x40000000) ^ (uVar49 >> 0xd | uVar49 * 0x80000) ^
                 (uVar49 >> 0x16 | uVar49 * 0x400));
        local_8c = local_8c + uVar33 +
                   ((local_88 >> 7 | local_88 << 0x19) ^ (local_88 >> 0x12 | local_88 << 0xe) ^
                   local_88 >> 3) +
                   ((uVar38 >> 0x11 | uVar38 * 0x8000) ^ (uVar38 >> 0x13 | uVar38 * 0x2000) ^
                   uVar38 >> 10);
        iVar68 = uVar47 + piVar54[4] + local_8c + (uVar45 & uVar52 | uVar46 & (uVar52 ^ 0xffffffff))
                 + ((uVar52 >> 6 | uVar52 * 0x4000000) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
                   (uVar52 >> 0x19 | uVar52 * 0x80));
        uVar51 = uVar51 + iVar68;
        uVar47 = iVar68 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
                 ((uVar48 >> 2 | uVar48 * 0x40000000) ^ (uVar48 >> 0xd | uVar48 * 0x80000) ^
                 (uVar48 >> 0x16 | uVar48 * 0x400));
        local_88 = local_88 + uVar34 +
                   ((local_84 >> 7 | local_84 << 0x19) ^ (local_84 >> 0x12 | local_84 << 0xe) ^
                   local_84 >> 3) +
                   ((uVar39 >> 0x11 | uVar39 * 0x8000) ^ (uVar39 >> 0x13 | uVar39 * 0x2000) ^
                   uVar39 >> 10);
        iVar68 = uVar46 + piVar54[5] + local_88 + (uVar52 & uVar51 | uVar45 & (uVar51 ^ 0xffffffff))
                 + ((uVar51 >> 6 | uVar51 * 0x4000000) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
                   (uVar51 >> 0x19 | uVar51 * 0x80));
        uVar50 = uVar50 + iVar68;
        uVar46 = iVar68 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 2 | uVar47 * 0x40000000) ^ (uVar47 >> 0xd | uVar47 * 0x80000) ^
                 (uVar47 >> 0x16 | uVar47 * 0x400));
        local_84 = local_84 + uVar35 +
                   ((uVar40 >> 7 | uVar40 << 0x19) ^ (uVar40 >> 0x12 | uVar40 << 0xe) ^ uVar40 >> 3)
                   + ((local_8c >> 0x11 | local_8c * 0x8000) ^
                      (local_8c >> 0x13 | local_8c * 0x2000) ^ local_8c >> 10);
        iVar68 = uVar45 + piVar54[6] + local_84 + (uVar51 & uVar50 | uVar52 & (uVar50 ^ 0xffffffff))
                 + ((uVar50 >> 6 | uVar50 * 0x4000000) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
                   (uVar50 >> 0x19 | uVar50 * 0x80));
        uVar49 = uVar49 + iVar68;
        uVar45 = iVar68 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
                 ((uVar46 >> 2 | uVar46 * 0x40000000) ^ (uVar46 >> 0xd | uVar46 * 0x80000) ^
                 (uVar46 >> 0x16 | uVar46 * 0x400));
        uVar40 = uVar40 + uVar36 +
                 ((uVar41 >> 7 | uVar41 << 0x19) ^ (uVar41 >> 0x12 | uVar41 << 0xe) ^ uVar41 >> 3) +
                 ((local_88 >> 0x11 | local_88 * 0x8000) ^ (local_88 >> 0x13 | local_88 * 0x2000) ^
                 local_88 >> 10);
        iVar68 = uVar52 + piVar54[7] + uVar40 + (uVar50 & uVar49 | uVar51 & (uVar49 ^ 0xffffffff)) +
                 ((uVar49 >> 6 | uVar49 * 0x4000000) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
                 (uVar49 >> 0x19 | uVar49 * 0x80));
        uVar48 = uVar48 + iVar68;
        uVar52 = iVar68 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 2 | uVar45 * 0x40000000) ^ (uVar45 >> 0xd | uVar45 * 0x80000) ^
                 (uVar45 >> 0x16 | uVar45 * 0x400));
        uVar41 = uVar41 + uVar37 +
                 ((uVar42 >> 7 | uVar42 << 0x19) ^ (uVar42 >> 0x12 | uVar42 << 0xe) ^ uVar42 >> 3) +
                 ((local_84 >> 0x11 | local_84 * 0x8000) ^ (local_84 >> 0x13 | local_84 * 0x2000) ^
                 local_84 >> 10);
        iVar68 = uVar51 + piVar54[8] + uVar41 + (uVar49 & uVar48 | uVar50 & (uVar48 ^ 0xffffffff)) +
                 ((uVar48 >> 6 | uVar48 * 0x4000000) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 0x19 | uVar48 * 0x80));
        uVar47 = uVar47 + iVar68;
        uVar51 = iVar68 + ((uVar45 ^ uVar46) & (uVar52 ^ uVar45) ^ uVar45) +
                 ((uVar52 >> 2 | uVar52 * 0x40000000) ^ (uVar52 >> 0xd | uVar52 * 0x80000) ^
                 (uVar52 >> 0x16 | uVar52 * 0x400));
        uVar42 = uVar42 + uVar38 +
                 ((uVar43 >> 7 | uVar43 << 0x19) ^ (uVar43 >> 0x12 | uVar43 << 0xe) ^ uVar43 >> 3) +
                 ((uVar40 >> 0x11 | uVar40 * 0x8000) ^ (uVar40 >> 0x13 | uVar40 * 0x2000) ^
                 uVar40 >> 10);
        iVar68 = uVar50 + piVar54[9] + uVar42 + (uVar48 & uVar47 | uVar49 & (uVar47 ^ 0xffffffff)) +
                 ((uVar47 >> 6 | uVar47 * 0x4000000) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 0x19 | uVar47 * 0x80));
        uVar46 = uVar46 + iVar68;
        uVar50 = iVar68 + ((uVar52 ^ uVar45) & (uVar51 ^ uVar52) ^ uVar52) +
                 ((uVar51 >> 2 | uVar51 * 0x40000000) ^ (uVar51 >> 0xd | uVar51 * 0x80000) ^
                 (uVar51 >> 0x16 | uVar51 * 0x400));
        uVar43 = uVar43 + uVar39 +
                 ((uVar44 >> 7 | uVar44 << 0x19) ^ (uVar44 >> 0x12 | uVar44 << 0xe) ^ uVar44 >> 3) +
                 ((uVar41 >> 0x11 | uVar41 * 0x8000) ^ (uVar41 >> 0x13 | uVar41 * 0x2000) ^
                 uVar41 >> 10);
        iVar68 = uVar49 + piVar54[10] + uVar43 + (uVar47 & uVar46 | uVar48 & (uVar46 ^ 0xffffffff))
                 + ((uVar46 >> 6 | uVar46 * 0x4000000) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
                   (uVar46 >> 0x19 | uVar46 * 0x80));
        uVar45 = uVar45 + iVar68;
        uVar49 = iVar68 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
                 ((uVar50 >> 2 | uVar50 * 0x40000000) ^ (uVar50 >> 0xd | uVar50 * 0x80000) ^
                 (uVar50 >> 0x16 | uVar50 * 0x400));
        uVar44 = uVar44 + local_8c +
                 ((uVar32 >> 7 | uVar32 << 0x19) ^ (uVar32 >> 0x12 | uVar32 << 0xe) ^ uVar32 >> 3) +
                 ((uVar42 >> 0x11 | uVar42 * 0x8000) ^ (uVar42 >> 0x13 | uVar42 * 0x2000) ^
                 uVar42 >> 10);
        iVar68 = uVar48 + piVar54[0xb] + uVar44 + (uVar46 & uVar45 | uVar47 & (uVar45 ^ 0xffffffff))
                 + ((uVar45 >> 6 | uVar45 * 0x4000000) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                   (uVar45 >> 0x19 | uVar45 * 0x80));
        uVar52 = uVar52 + iVar68;
        uVar48 = iVar68 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
                 ((uVar49 >> 2 | uVar49 * 0x40000000) ^ (uVar49 >> 0xd | uVar49 * 0x80000) ^
                 (uVar49 >> 0x16 | uVar49 * 0x400));
        uVar32 = uVar32 + local_88 +
                 ((uVar33 >> 7 | uVar33 << 0x19) ^ (uVar33 >> 0x12 | uVar33 << 0xe) ^ uVar33 >> 3) +
                 ((uVar43 >> 0x11 | uVar43 * 0x8000) ^ (uVar43 >> 0x13 | uVar43 * 0x2000) ^
                 uVar43 >> 10);
        iVar68 = uVar47 + piVar54[0xc] + uVar32 + (uVar45 & uVar52 | uVar46 & (uVar52 ^ 0xffffffff))
                 + ((uVar52 >> 6 | uVar52 * 0x4000000) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
                   (uVar52 >> 0x19 | uVar52 * 0x80));
        uVar51 = uVar51 + iVar68;
        uVar47 = iVar68 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
                 ((uVar48 >> 2 | uVar48 * 0x40000000) ^ (uVar48 >> 0xd | uVar48 * 0x80000) ^
                 (uVar48 >> 0x16 | uVar48 * 0x400));
        uVar33 = uVar33 + local_84 +
                 ((uVar34 >> 7 | uVar34 << 0x19) ^ (uVar34 >> 0x12 | uVar34 << 0xe) ^ uVar34 >> 3) +
                 ((uVar44 >> 0x11 | uVar44 * 0x8000) ^ (uVar44 >> 0x13 | uVar44 * 0x2000) ^
                 uVar44 >> 10);
        iVar68 = uVar46 + piVar54[0xd] + uVar33 + (uVar52 & uVar51 | uVar45 & (uVar51 ^ 0xffffffff))
                 + ((uVar51 >> 6 | uVar51 * 0x4000000) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
                   (uVar51 >> 0x19 | uVar51 * 0x80));
        uVar50 = uVar50 + iVar68;
        uVar46 = iVar68 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 2 | uVar47 * 0x40000000) ^ (uVar47 >> 0xd | uVar47 * 0x80000) ^
                 (uVar47 >> 0x16 | uVar47 * 0x400));
        uVar34 = uVar34 + uVar40 +
                 ((uVar35 >> 7 | uVar35 << 0x19) ^ (uVar35 >> 0x12 | uVar35 << 0xe) ^ uVar35 >> 3) +
                 ((uVar32 >> 0x11 | uVar32 * 0x8000) ^ (uVar32 >> 0x13 | uVar32 * 0x2000) ^
                 uVar32 >> 10);
        uVar53 = uVar46 ^ uVar47;
        iVar68 = uVar45 + piVar54[0xe] + uVar34 + (uVar51 & uVar50 | uVar52 & (uVar50 ^ 0xffffffff))
                 + ((uVar50 >> 6 | uVar50 * 0x4000000) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
                   (uVar50 >> 0x19 | uVar50 * 0x80));
        uVar49 = uVar49 + iVar68;
        iVar69 = piVar54[0xf];
        uVar45 = iVar68 + ((uVar47 ^ uVar48) & uVar53 ^ uVar47) +
                 ((uVar46 >> 2 | uVar46 * 0x40000000) ^ (uVar46 >> 0xd | uVar46 * 0x80000) ^
                 (uVar46 >> 0x16 | uVar46 * 0x400));
        uVar35 = uVar35 + uVar41 +
                 ((uVar36 >> 7 | uVar36 * 0x2000000) ^ (uVar36 >> 0x12 | uVar36 * 0x4000) ^
                 uVar36 >> 3) +
                 ((uVar33 >> 0x11 | uVar33 * 0x8000) ^ (uVar33 >> 0x13 | uVar33 * 0x2000) ^
                 uVar33 >> 10);
        piVar28 = piVar54 + 0x10;
      } while (iVar69 != 0);
      piVar54 = piVar54 + -0x31;
      param_2 = param_2 + 4;
      iVar70 = *(int *)param_1[1];
      iVar1 = *(int *)(param_1[1] + 4);
      uVar45 = uVar45 + *(int *)*param_1;
      iVar71 = *(int *)(param_1[1] + 8);
      iVar69 = *(int *)(param_1[1] + 0xc);
      uVar46 = uVar46 + *(int *)(*param_1 + 4);
      uVar47 = uVar47 + *(int *)(*param_1 + 8);
      iVar68 = uVar48 + *(int *)(*param_1 + 0xc);
      *(uint *)*param_1 = uVar45;
      *(uint *)(*param_1 + 4) = uVar46;
      uVar49 = uVar49 + iVar70;
      uVar50 = uVar50 + iVar1;
      *(uint *)(*param_1 + 8) = uVar47;
      *(int *)(*param_1 + 0xc) = iVar68;
      uVar51 = uVar51 + iVar71;
      iVar69 = uVar52 + iVar69;
      *(uint *)param_1[1] = uVar49;
      *(uint *)(param_1[1] + 4) = uVar50;
      *(uint *)(param_1[1] + 8) = uVar51;
      *(int *)(param_1[1] + 0xc) = iVar69;
    } while (param_2 != pauVar29);
    return;
  }
  auVar55 = *param_1;
  auVar58 = param_1[1];
  do {
    auVar61 = *param_2;
    pauVar29 = param_2 + 1;
    pauVar30 = param_2 + 2;
    pauVar31 = param_2 + 3;
    param_2 = param_2 + 4;
    param_3 = param_3 + -1;
    auVar61 = NEON_rev32(auVar61,1);
    auVar64 = NEON_rev32(*pauVar29,1);
    auVar66 = NEON_rev32(*pauVar30,1);
    auVar67 = NEON_rev32(*pauVar31,1);
    iVar68 = auVar61._0_4_ + 0x428a2f98;
    iVar69 = auVar61._4_4_ + 0x71374491;
    iVar70 = auVar61._8_4_ + -0x4a3f0431;
    iVar71 = auVar61._12_4_ + -0x164a245b;
    auVar62 = NEON_sha256su0(auVar61,auVar64,4);
    auVar61._4_4_ = iVar69;
    auVar61._0_4_ = iVar68;
    auVar61._8_4_ = iVar70;
    auVar61._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar55,auVar58,auVar61,4);
    auVar56._4_4_ = iVar69;
    auVar56._0_4_ = iVar68;
    auVar56._8_4_ = iVar70;
    auVar56._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar58,auVar55,auVar56,4);
    auVar63 = NEON_sha256su1(auVar62,auVar66,auVar67,4);
    iVar68 = auVar64._0_4_ + 0x3956c25b;
    iVar69 = auVar64._4_4_ + 0x59f111f1;
    iVar70 = auVar64._8_4_ + -0x6dc07d5c;
    iVar71 = auVar64._12_4_ + -0x54e3a12b;
    auVar62 = NEON_sha256su0(auVar64,auVar66,4);
    auVar12._4_4_ = iVar69;
    auVar12._0_4_ = iVar68;
    auVar12._8_4_ = iVar70;
    auVar12._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar12,4);
    auVar13._4_4_ = iVar69;
    auVar13._0_4_ = iVar68;
    auVar13._8_4_ = iVar70;
    auVar13._12_4_ = iVar71;
    auVar64 = NEON_sha256h2(auVar59,auVar61,auVar13,4);
    auVar65 = NEON_sha256su1(auVar62,auVar67,auVar63,4);
    iVar68 = auVar66._0_4_ + -0x27f85568;
    iVar69 = auVar66._4_4_ + 0x12835b01;
    iVar70 = auVar66._8_4_ + 0x243185be;
    iVar71 = auVar66._12_4_ + 0x550c7dc3;
    auVar66 = NEON_sha256su0(auVar66,auVar67,4);
    auVar59._4_4_ = iVar69;
    auVar59._0_4_ = iVar68;
    auVar59._8_4_ = iVar70;
    auVar59._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar56,auVar64,auVar59,4);
    auVar62._4_4_ = iVar69;
    auVar62._0_4_ = iVar68;
    auVar62._8_4_ = iVar70;
    auVar62._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar64,auVar56,auVar62,4);
    auVar66 = NEON_sha256su1(auVar66,auVar63,auVar65,4);
    iVar68 = auVar67._0_4_ + 0x72be5d74;
    iVar69 = auVar67._4_4_ + -0x7f214e02;
    iVar70 = auVar67._8_4_ + -0x6423f959;
    iVar71 = auVar67._12_4_ + -0x3e640e8c;
    auVar62 = NEON_sha256su0(auVar67,auVar63,4);
    auVar14._4_4_ = iVar69;
    auVar14._0_4_ = iVar68;
    auVar14._8_4_ = iVar70;
    auVar14._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar14,4);
    auVar15._4_4_ = iVar69;
    auVar15._0_4_ = iVar68;
    auVar15._8_4_ = iVar70;
    auVar15._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar61,auVar15,4);
    auVar67 = NEON_sha256su1(auVar62,auVar65,auVar66,4);
    iVar68 = auVar63._0_4_ + -0x1b64963f;
    iVar69 = auVar63._4_4_ + -0x1041b87a;
    iVar70 = auVar63._8_4_ + 0xfc19dc6;
    iVar71 = auVar63._12_4_ + 0x240ca1cc;
    auVar62 = NEON_sha256su0(auVar63,auVar65,4);
    auVar64._4_4_ = iVar69;
    auVar64._0_4_ = iVar68;
    auVar64._8_4_ = iVar70;
    auVar64._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar56,auVar59,auVar64,4);
    auVar63._4_4_ = iVar69;
    auVar63._0_4_ = iVar68;
    auVar63._8_4_ = iVar70;
    auVar63._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar56,auVar63,4);
    auVar62 = NEON_sha256su1(auVar62,auVar66,auVar67,4);
    iVar68 = auVar65._0_4_ + 0x2de92c6f;
    iVar69 = auVar65._4_4_ + 0x4a7484aa;
    iVar70 = auVar65._8_4_ + 0x5cb0a9dc;
    iVar71 = auVar65._12_4_ + 0x76f988da;
    auVar64 = NEON_sha256su0(auVar65,auVar66,4);
    auVar16._4_4_ = iVar69;
    auVar16._0_4_ = iVar68;
    auVar16._8_4_ = iVar70;
    auVar16._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar16,4);
    auVar17._4_4_ = iVar69;
    auVar17._0_4_ = iVar68;
    auVar17._8_4_ = iVar70;
    auVar17._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar61,auVar17,4);
    auVar64 = NEON_sha256su1(auVar64,auVar67,auVar62,4);
    iVar68 = auVar66._0_4_ + -0x67c1aeae;
    iVar69 = auVar66._4_4_ + -0x57ce3993;
    iVar70 = auVar66._8_4_ + -0x4ffcd838;
    iVar71 = auVar66._12_4_ + -0x40a68039;
    auVar63 = NEON_sha256su0(auVar66,auVar67,4);
    auVar65._4_4_ = iVar69;
    auVar65._0_4_ = iVar68;
    auVar65._8_4_ = iVar70;
    auVar65._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar56,auVar59,auVar65,4);
    auVar66._4_4_ = iVar69;
    auVar66._0_4_ = iVar68;
    auVar66._8_4_ = iVar70;
    auVar66._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar56,auVar66,4);
    auVar63 = NEON_sha256su1(auVar63,auVar62,auVar64,4);
    iVar68 = auVar67._0_4_ + -0x391ff40d;
    iVar69 = auVar67._4_4_ + -0x2a586eb9;
    iVar70 = auVar67._8_4_ + 0x6ca6351;
    iVar71 = auVar67._12_4_ + 0x14292967;
    auVar65 = NEON_sha256su0(auVar67,auVar62,4);
    auVar18._4_4_ = iVar69;
    auVar18._0_4_ = iVar68;
    auVar18._8_4_ = iVar70;
    auVar18._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar18,4);
    auVar19._4_4_ = iVar69;
    auVar19._0_4_ = iVar68;
    auVar19._8_4_ = iVar70;
    auVar19._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar61,auVar19,4);
    auVar65 = NEON_sha256su1(auVar65,auVar64,auVar63,4);
    iVar68 = auVar62._0_4_ + 0x27b70a85;
    iVar69 = auVar62._4_4_ + 0x2e1b2138;
    iVar70 = auVar62._8_4_ + 0x4d2c6dfc;
    iVar71 = auVar62._12_4_ + 0x53380d13;
    auVar62 = NEON_sha256su0(auVar62,auVar64,4);
    auVar67._4_4_ = iVar69;
    auVar67._0_4_ = iVar68;
    auVar67._8_4_ = iVar70;
    auVar67._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar56,auVar59,auVar67,4);
    auVar5._4_4_ = iVar69;
    auVar5._0_4_ = iVar68;
    auVar5._8_4_ = iVar70;
    auVar5._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar56,auVar5,4);
    auVar62 = NEON_sha256su1(auVar62,auVar63,auVar65,4);
    iVar68 = auVar64._0_4_ + 0x650a7354;
    iVar69 = auVar64._4_4_ + 0x766a0abb;
    iVar70 = auVar64._8_4_ + -0x7e3d36d2;
    iVar71 = auVar64._12_4_ + -0x6d8dd37b;
    auVar64 = NEON_sha256su0(auVar64,auVar63,4);
    auVar20._4_4_ = iVar69;
    auVar20._0_4_ = iVar68;
    auVar20._8_4_ = iVar70;
    auVar20._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar20,4);
    auVar21._4_4_ = iVar69;
    auVar21._0_4_ = iVar68;
    auVar21._8_4_ = iVar70;
    auVar21._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar61,auVar21,4);
    auVar64 = NEON_sha256su1(auVar64,auVar65,auVar62,4);
    iVar68 = auVar63._0_4_ + -0x5d40175f;
    iVar69 = auVar63._4_4_ + -0x57e599b5;
    iVar70 = auVar63._8_4_ + -0x3db47490;
    iVar71 = auVar63._12_4_ + -0x3893ae5d;
    auVar63 = NEON_sha256su0(auVar63,auVar65,4);
    auVar6._4_4_ = iVar69;
    auVar6._0_4_ = iVar68;
    auVar6._8_4_ = iVar70;
    auVar6._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar56,auVar59,auVar6,4);
    auVar7._4_4_ = iVar69;
    auVar7._0_4_ = iVar68;
    auVar7._8_4_ = iVar70;
    auVar7._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar56,auVar7,4);
    auVar63 = NEON_sha256su1(auVar63,auVar62,auVar64,4);
    iVar68 = auVar65._0_4_ + -0x2e6d17e7;
    iVar69 = auVar65._4_4_ + -0x2966f9dc;
    iVar70 = auVar65._8_4_ + -0xbf1ca7b;
    iVar71 = auVar65._12_4_ + 0x106aa070;
    auVar65 = NEON_sha256su0(auVar65,auVar62,4);
    auVar22._4_4_ = iVar69;
    auVar22._0_4_ = iVar68;
    auVar22._8_4_ = iVar70;
    auVar22._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar22,4);
    auVar23._4_4_ = iVar69;
    auVar23._0_4_ = iVar68;
    auVar23._8_4_ = iVar70;
    auVar23._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar61,auVar23,4);
    auVar65 = NEON_sha256su1(auVar65,auVar64,auVar63,4);
    iVar68 = auVar62._0_4_ + 0x19a4c116;
    iVar69 = auVar62._4_4_ + 0x1e376c08;
    iVar70 = auVar62._8_4_ + 0x2748774c;
    iVar71 = auVar62._12_4_ + 0x34b0bcb5;
    auVar8._4_4_ = iVar69;
    auVar8._0_4_ = iVar68;
    auVar8._8_4_ = iVar70;
    auVar8._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar56,auVar59,auVar8,4);
    auVar9._4_4_ = iVar69;
    auVar9._0_4_ = iVar68;
    auVar9._8_4_ = iVar70;
    auVar9._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar56,auVar9,4);
    iVar68 = auVar64._0_4_ + 0x391c0cb3;
    iVar69 = auVar64._4_4_ + 0x4ed8aa4a;
    iVar70 = auVar64._8_4_ + 0x5b9cca4f;
    iVar71 = auVar64._12_4_ + 0x682e6ff3;
    auVar24._4_4_ = iVar69;
    auVar24._0_4_ = iVar68;
    auVar24._8_4_ = iVar70;
    auVar24._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar24,4);
    auVar25._4_4_ = iVar69;
    auVar25._0_4_ = iVar68;
    auVar25._8_4_ = iVar70;
    auVar25._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar61,auVar25,4);
    iVar68 = auVar63._0_4_ + 0x748f82ee;
    iVar69 = auVar63._4_4_ + 0x78a5636f;
    iVar70 = auVar63._8_4_ + -0x7b3787ec;
    iVar71 = auVar63._12_4_ + -0x7338fdf8;
    auVar10._4_4_ = iVar69;
    auVar10._0_4_ = iVar68;
    auVar10._8_4_ = iVar70;
    auVar10._12_4_ = iVar71;
    auVar61 = NEON_sha256h(auVar56,auVar59,auVar10,4);
    auVar11._4_4_ = iVar69;
    auVar11._0_4_ = iVar68;
    auVar11._8_4_ = iVar70;
    auVar11._12_4_ = iVar71;
    auVar59 = NEON_sha256h2(auVar59,auVar56,auVar11,4);
    iVar68 = auVar65._0_4_ + -0x6f410006;
    iVar69 = auVar65._4_4_ + -0x5baf9315;
    iVar70 = auVar65._8_4_ + -0x41065c09;
    iVar71 = auVar65._12_4_ + -0x398e870e;
    auVar26._4_4_ = iVar69;
    auVar26._0_4_ = iVar68;
    auVar26._8_4_ = iVar70;
    auVar26._12_4_ = iVar71;
    auVar56 = NEON_sha256h(auVar61,auVar59,auVar26,4);
    auVar27._4_4_ = iVar69;
    auVar27._0_4_ = iVar68;
    auVar27._8_4_ = iVar70;
    auVar27._12_4_ = iVar71;
    auVar61 = NEON_sha256h2(auVar59,auVar61,auVar27,4);
    auVar57._0_4_ = auVar56._0_4_ + auVar55._0_4_;
    auVar57._4_4_ = auVar56._4_4_ + auVar55._4_4_;
    auVar57._8_4_ = auVar56._8_4_ + auVar55._8_4_;
    auVar57._12_4_ = auVar56._12_4_ + auVar55._12_4_;
    auVar60._0_4_ = auVar61._0_4_ + auVar58._0_4_;
    auVar60._4_4_ = auVar61._4_4_ + auVar58._4_4_;
    auVar60._8_4_ = auVar61._8_4_ + auVar58._8_4_;
    auVar60._12_4_ = auVar61._12_4_ + auVar58._12_4_;
    auVar55 = auVar57;
    auVar58 = auVar60;
  } while (param_3 != 0);
  *(int *)*param_1 = auVar57._0_4_;
  *(int *)(*param_1 + 4) = auVar57._4_4_;
  *(int *)(*param_1 + 8) = auVar57._8_4_;
  *(int *)(*param_1 + 0xc) = auVar57._12_4_;
  *(int *)param_1[1] = auVar60._0_4_;
  *(int *)(param_1[1] + 4) = auVar60._4_4_;
  *(int *)(param_1[1] + 8) = auVar60._8_4_;
  *(int *)(param_1[1] + 0xc) = auVar60._12_4_;
  return;
}

