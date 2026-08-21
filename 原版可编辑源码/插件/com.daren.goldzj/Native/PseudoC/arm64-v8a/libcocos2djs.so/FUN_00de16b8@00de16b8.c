
void FUN_00de16b8(long param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar54;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined1 auVar62 [16];
  byte bVar69;
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  
  lVar15 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  if (lVar15 < param_3) {
    uVar1 = lVar15 - 4;
    lVar14 = param_3 - lVar15;
    if (uVar1 == 0) {
      lVar21 = (lVar15 + -1) - param_3;
      if (lVar21 < -4) {
        lVar21 = -5;
      }
      bVar44 = *param_2;
      bVar43 = param_2[1];
      uVar18 = (uint)bVar43;
      bVar53 = param_2[2];
      bVar69 = param_2[3];
      uVar16 = (lVar21 + param_3 + 4) - lVar15;
      uVar1 = (uVar16 >> 2) + 1;
      pbVar19 = param_2;
      if (0xf < uVar1) {
        uVar17 = uVar1 & 0xf;
        lVar21 = uVar1 - uVar17;
        if (lVar21 != 0) {
          pbVar19 = param_2 + lVar21 * 4;
          uVar28 = (uint)bVar43;
          uVar30 = (uint)bVar43;
          lVar14 = ((param_3 + uVar17 * 4 + -4) - lVar15) - (uVar16 & 0xfffffffffffffffc);
          param_2 = param_2 + 4;
          bVar43 = bVar69;
          bVar22 = bVar69;
          bVar23 = bVar69;
          bVar24 = bVar69;
          bVar25 = bVar53;
          bVar26 = bVar53;
          bVar27 = bVar53;
          bVar31 = bVar53;
          uVar29 = uVar28;
          uVar18 = uVar30;
          bVar32 = bVar44;
          bVar33 = bVar44;
          bVar34 = bVar44;
          bVar35 = bVar44;
          do {
            bVar36 = param_2[4];
            bVar41 = param_2[5];
            bVar51 = param_2[6];
            bVar64 = param_2[7];
            bVar37 = param_2[0x24];
            bVar42 = param_2[0x25];
            bVar52 = param_2[0x26];
            bVar65 = param_2[0x27];
            bVar57 = param_2[0x2a];
            bVar58 = param_2[0x2e];
            bVar38 = param_2[0x30];
            bVar59 = param_2[0x32];
            bVar66 = param_2[0x33];
            bVar39 = param_2[0x34];
            bVar48 = param_2[0x35];
            bVar60 = param_2[0x36];
            bVar67 = param_2[0x37];
            bVar40 = param_2[0x38];
            bVar49 = param_2[0x39];
            bVar61 = param_2[0x3a];
            bVar68 = param_2[0x3b];
            bVar44 = param_2[0x3c];
            bVar50 = param_2[0x3d];
            bVar53 = param_2[0x3e];
            bVar69 = param_2[0x3f];
            lVar21 = lVar21 + -0x10;
            auVar46._6_2_ = 0;
            auVar46._0_6_ =
                 (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)*param_2)) & 0xffff0000ffff;
            auVar46[8] = param_2[8];
            auVar46._9_3_ = 0;
            auVar46[0xc] = param_2[0xc];
            auVar46._13_3_ = 0;
            auVar63._1_3_ = 0;
            auVar63[0] = param_2[0x10];
            auVar63[4] = param_2[0x14];
            auVar63._5_3_ = 0;
            auVar63[8] = param_2[0x18];
            auVar63._9_3_ = 0;
            auVar63[0xc] = param_2[0x1c];
            auVar63._13_3_ = 0;
            uVar54 = (uint)CONCAT12(bVar52,(ushort)param_2[0x22]);
            auVar56._6_2_ = 0;
            auVar56._0_6_ =
                 (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)param_2[0x20])) &
                 0xffff0000ffff;
            auVar56[8] = param_2[0x28];
            auVar56._9_3_ = 0;
            auVar56[0xc] = param_2[0x2c];
            auVar56._13_3_ = 0;
            auVar10._1_3_ = 0;
            auVar10[0] = bVar32;
            auVar10[4] = bVar33;
            auVar10._5_3_ = 0;
            auVar10[8] = bVar34;
            auVar10._9_3_ = 0;
            auVar10[0xc] = bVar35;
            auVar10._13_3_ = 0;
            auVar90 = NEON_ext(auVar10,auVar46,0xc,1);
            auVar55 = NEON_ext(auVar46,auVar63,0xc,1);
            auVar45 = NEON_ext(auVar63,auVar56,0xc,1);
            auVar11._1_3_ = 0;
            auVar11[0] = bVar38;
            auVar11[4] = bVar39;
            auVar11._5_3_ = 0;
            auVar11[8] = bVar40;
            auVar11._9_3_ = 0;
            auVar11[0xc] = bVar44;
            auVar11._13_3_ = 0;
            auVar91 = NEON_ext(auVar56,auVar11,0xc,1);
            auVar72._6_2_ = 0;
            auVar72._0_6_ =
                 (uint6)CONCAT14(bVar41,(uint)CONCAT12(bVar41,(ushort)param_2[1])) & 0xffff0000ffff;
            auVar72[8] = param_2[9];
            auVar72._9_3_ = 0;
            auVar72[0xc] = param_2[0xd];
            auVar72._13_3_ = 0;
            auVar87._6_2_ = 0;
            auVar87._0_6_ =
                 (uint6)CONCAT14(bVar42,(uint)CONCAT12(bVar42,(ushort)param_2[0x21])) &
                 0xffff0000ffff;
            auVar87[8] = param_2[0x29];
            auVar87._9_3_ = 0;
            auVar87[0xc] = param_2[0x2d];
            auVar87._13_3_ = 0;
            auVar77._1_3_ = 0;
            auVar77[0] = param_2[0x11];
            auVar77[4] = param_2[0x15];
            auVar77._5_3_ = 0;
            auVar77[8] = param_2[0x19];
            auVar77._9_3_ = 0;
            auVar77[0xc] = param_2[0x1d];
            auVar77._13_3_ = 0;
            auVar89._6_2_ = 0;
            auVar89._0_6_ =
                 (uint6)CONCAT14(bVar51,(uint)CONCAT12(bVar51,(ushort)param_2[2])) & 0xffff0000ffff;
            auVar89[8] = param_2[10];
            auVar89._9_3_ = 0;
            auVar89[0xc] = param_2[0xe];
            auVar89._13_3_ = 0;
            auVar79._1_3_ = 0;
            auVar79[0] = param_2[0x12];
            auVar79[4] = param_2[0x16];
            auVar79._5_3_ = 0;
            auVar79[8] = param_2[0x1a];
            auVar79._9_3_ = 0;
            auVar79[0xc] = param_2[0x1e];
            auVar79._13_3_ = 0;
            auVar8._4_4_ = uVar29;
            auVar8._0_4_ = uVar28;
            auVar8._8_4_ = uVar30;
            auVar8._12_4_ = uVar18;
            auVar86 = NEON_ext(auVar8,auVar72,0xc,1);
            uVar28 = CONCAT31(0,param_2[0x31]);
            uVar29 = (uint)bVar48;
            uVar30 = (uint)bVar49;
            uVar18 = (uint)bVar50;
            auVar78 = NEON_ext(auVar72,auVar77,0xc,1);
            auVar70 = NEON_ext(auVar77,auVar87,0xc,1);
            auVar47._6_2_ = 0;
            auVar47._0_6_ =
                 (uint6)CONCAT14(bVar64,(uint)CONCAT12(bVar64,(ushort)param_2[3])) & 0xffff0000ffff;
            auVar47[8] = param_2[0xb];
            auVar47._9_3_ = 0;
            auVar47[0xc] = param_2[0xf];
            auVar47._13_3_ = 0;
            auVar9[4] = bVar48;
            auVar9._0_4_ = uVar28;
            auVar9._5_3_ = 0;
            auVar9[8] = bVar49;
            auVar9._9_3_ = 0;
            auVar9[0xc] = bVar50;
            auVar9._13_3_ = 0;
            auVar62 = NEON_ext(auVar87,auVar9,0xc,1);
            auVar4._1_3_ = 0;
            auVar4[0] = bVar25;
            auVar4[4] = bVar26;
            auVar4._5_3_ = 0;
            auVar4[8] = bVar27;
            auVar4._9_3_ = 0;
            auVar4[0xc] = bVar31;
            auVar4._13_3_ = 0;
            auVar85 = NEON_ext(auVar4,auVar89,0xc,1);
            auVar81 = NEON_ext(auVar89,auVar79,0xc,1);
            auVar75._1_3_ = 0;
            auVar75[0] = param_2[0x13];
            auVar75[4] = param_2[0x17];
            auVar75._5_3_ = 0;
            auVar75[8] = param_2[0x1b];
            auVar75._9_3_ = 0;
            auVar75[0xc] = param_2[0x1f];
            auVar75._13_3_ = 0;
            auVar12._5_3_ = 0;
            auVar12._0_5_ = CONCAT14(bVar52,uVar54) & 0xff0000ffff;
            auVar12[8] = bVar57;
            auVar12._9_3_ = 0;
            auVar12[0xc] = bVar58;
            auVar12._13_3_ = 0;
            auVar80 = NEON_ext(auVar79,auVar12,0xc,1);
            auVar84._1_3_ = 0;
            auVar84[0] = bVar43;
            auVar84[4] = bVar22;
            auVar84._5_3_ = 0;
            auVar84[8] = bVar23;
            auVar84._9_3_ = 0;
            auVar84[0xc] = bVar24;
            auVar84._13_3_ = 0;
            auVar82 = NEON_ext(auVar84,auVar47,0xc,1);
            auVar73._6_2_ = 0;
            auVar73._0_6_ =
                 (uint6)CONCAT14(bVar65,(uint)CONCAT12(bVar65,(ushort)param_2[0x23])) &
                 0xffff0000ffff;
            auVar73[8] = param_2[0x2b];
            auVar73._9_3_ = 0;
            auVar73[0xc] = param_2[0x2f];
            auVar73._13_3_ = 0;
            auVar74 = NEON_ext(auVar47,auVar75,0xc,1);
            auVar5._1_3_ = 0;
            auVar5[0] = bVar59;
            auVar5[4] = bVar60;
            auVar5._5_3_ = 0;
            auVar5[8] = bVar61;
            auVar5._9_3_ = 0;
            auVar5[0xc] = bVar53;
            auVar5._13_3_ = 0;
            auVar13._5_3_ = 0;
            auVar13._0_5_ = CONCAT14(bVar52,uVar54) & 0xff0000ffff;
            auVar13[8] = bVar57;
            auVar13._9_3_ = 0;
            auVar13[0xc] = bVar58;
            auVar13._13_3_ = 0;
            auVar83 = NEON_ext(auVar13,auVar5,0xc,1);
            auVar76 = NEON_ext(auVar75,auVar73,0xc,1);
            auVar88._5_3_ = 0;
            auVar88._0_5_ = CONCAT14(bVar67,(uint)CONCAT12(bVar67,(ushort)bVar66)) & 0xff0000ffff;
            auVar88[8] = bVar68;
            auVar88._9_3_ = 0;
            auVar88[0xc] = bVar69;
            auVar88._13_3_ = 0;
            auVar71 = NEON_ext(auVar73,auVar88,0xc,1);
            *param_2 = *param_2 - auVar90[0];
            param_2[1] = param_2[1] - auVar86[0];
            param_2[2] = param_2[2] - auVar85[0];
            param_2[3] = param_2[3] - auVar82[0];
            param_2[4] = bVar36 - auVar90[4];
            param_2[5] = bVar41 - auVar86[4];
            param_2[6] = bVar51 - auVar85[4];
            param_2[7] = bVar64 - auVar82[4];
            param_2[8] = param_2[8] - auVar90[8];
            param_2[9] = param_2[9] - auVar86[8];
            param_2[10] = param_2[10] - auVar85[8];
            param_2[0xb] = param_2[0xb] - auVar82[8];
            param_2[0xc] = param_2[0xc] - auVar90[0xc];
            param_2[0xd] = param_2[0xd] - auVar86[0xc];
            param_2[0xe] = param_2[0xe] - auVar85[0xc];
            param_2[0xf] = param_2[0xf] - auVar82[0xc];
            param_2[0x10] = param_2[0x10] - auVar55[0];
            param_2[0x11] = param_2[0x11] - auVar78[0];
            param_2[0x12] = param_2[0x12] - auVar81[0];
            param_2[0x13] = param_2[0x13] - auVar74[0];
            param_2[0x14] = param_2[0x14] - auVar55[4];
            param_2[0x15] = param_2[0x15] - auVar78[4];
            param_2[0x16] = param_2[0x16] - auVar81[4];
            param_2[0x17] = param_2[0x17] - auVar74[4];
            param_2[0x18] = param_2[0x18] - auVar55[8];
            param_2[0x19] = param_2[0x19] - auVar78[8];
            param_2[0x1a] = param_2[0x1a] - auVar81[8];
            param_2[0x1b] = param_2[0x1b] - auVar74[8];
            param_2[0x1c] = param_2[0x1c] - auVar55[0xc];
            param_2[0x1d] = param_2[0x1d] - auVar78[0xc];
            param_2[0x1e] = param_2[0x1e] - auVar81[0xc];
            param_2[0x1f] = param_2[0x1f] - auVar74[0xc];
            param_2[0x20] = param_2[0x20] - auVar45[0];
            param_2[0x21] = param_2[0x21] - auVar70[0];
            param_2[0x22] = param_2[0x22] - auVar80[0];
            param_2[0x23] = param_2[0x23] - auVar76[0];
            param_2[0x24] = bVar37 - auVar45[4];
            param_2[0x25] = bVar42 - auVar70[4];
            param_2[0x26] = bVar52 - auVar80[4];
            param_2[0x27] = bVar65 - auVar76[4];
            param_2[0x28] = param_2[0x28] - auVar45[8];
            param_2[0x29] = param_2[0x29] - auVar70[8];
            param_2[0x2a] = bVar57 - auVar80[8];
            param_2[0x2b] = param_2[0x2b] - auVar76[8];
            param_2[0x2c] = param_2[0x2c] - auVar45[0xc];
            param_2[0x2d] = param_2[0x2d] - auVar70[0xc];
            param_2[0x2e] = bVar58 - auVar80[0xc];
            param_2[0x2f] = param_2[0x2f] - auVar76[0xc];
            param_2[0x30] = bVar38 - auVar91[0];
            param_2[0x31] = param_2[0x31] - auVar62[0];
            param_2[0x32] = bVar59 - auVar83[0];
            param_2[0x33] = bVar66 - auVar71[0];
            param_2[0x34] = bVar39 - auVar91[4];
            param_2[0x35] = bVar48 - auVar62[4];
            param_2[0x36] = bVar60 - auVar83[4];
            param_2[0x37] = bVar67 - auVar71[4];
            param_2[0x38] = bVar40 - auVar91[8];
            param_2[0x39] = bVar49 - auVar62[8];
            param_2[0x3a] = bVar61 - auVar83[8];
            param_2[0x3b] = bVar68 - auVar71[8];
            param_2[0x3c] = bVar44 - auVar91[0xc];
            param_2[0x3d] = bVar50 - auVar62[0xc];
            param_2[0x3e] = bVar53 - auVar83[0xc];
            param_2[0x3f] = bVar69 - auVar71[0xc];
            param_2 = param_2 + 0x40;
            bVar43 = bVar66;
            bVar22 = bVar67;
            bVar23 = bVar68;
            bVar24 = bVar69;
            bVar25 = bVar59;
            bVar26 = bVar60;
            bVar27 = bVar61;
            bVar31 = bVar53;
            bVar32 = bVar38;
            bVar33 = bVar39;
            bVar34 = bVar40;
            bVar35 = bVar44;
          } while (lVar21 != 0);
          if (uVar17 == 0) {
            return;
          }
        }
      }
      lVar14 = lVar14 + 4;
      pbVar19 = pbVar19 + 7;
      do {
        bVar22 = pbVar19[-3];
        bVar23 = pbVar19[-2];
        bVar43 = *pbVar19;
        lVar14 = lVar14 + -4;
        pbVar19[-3] = bVar22 - bVar44;
        bVar24 = pbVar19[-1];
        pbVar19[-2] = bVar23 - (char)uVar18;
        pbVar19[-1] = bVar24 - bVar53;
        *pbVar19 = bVar43 - bVar69;
        pbVar19 = pbVar19 + 4;
        uVar18 = (uint)bVar23;
        bVar44 = bVar22;
        bVar53 = bVar24;
        bVar69 = bVar43;
      } while (4 < lVar14);
    }
    else if (lVar15 == 3) {
      lVar15 = 2 - param_3;
      if (lVar15 < -3) {
        lVar15 = -4;
      }
      bVar44 = *param_2;
      uVar18 = (uint)bVar44;
      bVar43 = param_2[1];
      bVar53 = param_2[2];
      uVar16 = (ulong)(lVar15 + param_3) / 3;
      uVar1 = uVar16 + 1;
      pbVar19 = param_2;
      if (0xf < uVar1) {
        uVar17 = uVar1 & 0xf;
        lVar15 = uVar1 - uVar17;
        if (lVar15 != 0) {
          pbVar19 = param_2 + lVar15 * 3;
          uVar28 = (uint)bVar44;
          uVar30 = (uint)bVar44;
          lVar14 = uVar17 * 3 + param_3 + -6 + uVar16 * -3;
          param_2 = param_2 + 3;
          bVar44 = bVar53;
          bVar69 = bVar53;
          bVar22 = bVar53;
          bVar23 = bVar53;
          bVar24 = bVar43;
          bVar25 = bVar43;
          bVar26 = bVar43;
          bVar27 = bVar43;
          uVar29 = uVar28;
          uVar18 = uVar30;
          do {
            bVar31 = param_2[3];
            bVar38 = param_2[4];
            bVar48 = param_2[5];
            bVar32 = param_2[6];
            bVar33 = param_2[9];
            bVar34 = param_2[0x1b];
            bVar39 = param_2[0x1c];
            bVar49 = param_2[0x1d];
            bVar40 = param_2[0x25];
            bVar50 = param_2[0x26];
            bVar35 = param_2[0x27];
            bVar41 = param_2[0x28];
            bVar51 = param_2[0x29];
            bVar36 = param_2[0x2a];
            bVar42 = param_2[0x2b];
            bVar52 = param_2[0x2c];
            bVar37 = param_2[0x2d];
            bVar43 = param_2[0x2e];
            bVar53 = param_2[0x2f];
            lVar15 = lVar15 + -0x10;
            uVar54 = (uint)CONCAT12(bVar31,(ushort)*param_2);
            auVar85._1_3_ = 0;
            auVar85[0] = param_2[0xc];
            auVar85[4] = param_2[0xf];
            auVar85._5_3_ = 0;
            auVar85[8] = param_2[0x12];
            auVar85._9_3_ = 0;
            auVar85[0xc] = param_2[0x15];
            auVar85._13_3_ = 0;
            auVar76._6_2_ = 0;
            auVar76._0_6_ =
                 (uint6)CONCAT14(bVar34,(uint)CONCAT12(bVar34,(ushort)param_2[0x18])) &
                 0xffff0000ffff;
            auVar76[8] = param_2[0x1e];
            auVar76._9_3_ = 0;
            auVar76[0xc] = param_2[0x21];
            auVar76._13_3_ = 0;
            auVar55._4_4_ = uVar29;
            auVar55._0_4_ = uVar28;
            auVar55._8_4_ = uVar30;
            auVar55._12_4_ = uVar18;
            auVar62._5_3_ = 0;
            auVar62._0_5_ = CONCAT14(bVar31,uVar54) & 0xff0000ffff;
            auVar62[8] = bVar32;
            auVar62._9_3_ = 0;
            auVar62[0xc] = bVar33;
            auVar62._13_3_ = 0;
            auVar84 = NEON_ext(auVar55,auVar62,0xc,1);
            uVar28 = CONCAT31(0,param_2[0x24]);
            uVar29 = (uint)bVar35;
            uVar30 = (uint)bVar36;
            uVar18 = (uint)bVar37;
            auVar71._5_3_ = 0;
            auVar71._0_5_ = CONCAT14(bVar31,uVar54) & 0xff0000ffff;
            auVar71[8] = bVar32;
            auVar71._9_3_ = 0;
            auVar71[0xc] = bVar33;
            auVar71._13_3_ = 0;
            auVar62 = NEON_ext(auVar71,auVar85,0xc,1);
            auVar82._6_2_ = 0;
            auVar82._0_6_ =
                 (uint6)CONCAT14(bVar38,(uint)CONCAT12(bVar38,(ushort)param_2[1])) & 0xffff0000ffff;
            auVar82[8] = param_2[7];
            auVar82._9_3_ = 0;
            auVar82[0xc] = param_2[10];
            auVar82._13_3_ = 0;
            auVar80._1_3_ = 0;
            auVar80[0] = param_2[0xd];
            auVar80[4] = param_2[0x10];
            auVar80._5_3_ = 0;
            auVar80[8] = param_2[0x13];
            auVar80._9_3_ = 0;
            auVar80[0xc] = param_2[0x16];
            auVar80._13_3_ = 0;
            auVar55 = NEON_ext(auVar85,auVar76,0xc,1);
            auVar83._6_2_ = 0;
            auVar83._0_6_ =
                 (uint6)CONCAT14(bVar39,(uint)CONCAT12(bVar39,(ushort)param_2[0x19])) &
                 0xffff0000ffff;
            auVar83[8] = param_2[0x1f];
            auVar83._9_3_ = 0;
            auVar83[0xc] = param_2[0x22];
            auVar83._13_3_ = 0;
            auVar90._6_2_ = 0;
            auVar90._0_6_ =
                 (uint6)CONCAT14(bVar48,(uint)CONCAT12(bVar48,(ushort)param_2[2])) & 0xffff0000ffff;
            auVar90[8] = param_2[8];
            auVar90._9_3_ = 0;
            auVar90[0xc] = param_2[0xb];
            auVar90._13_3_ = 0;
            auVar81._1_3_ = 0;
            auVar81[0] = param_2[0xe];
            auVar81[4] = param_2[0x11];
            auVar81._5_3_ = 0;
            auVar81[8] = param_2[0x14];
            auVar81._9_3_ = 0;
            auVar81[0xc] = param_2[0x17];
            auVar81._13_3_ = 0;
            auVar45._1_3_ = 0;
            auVar45[0] = bVar24;
            auVar45[4] = bVar25;
            auVar45._5_3_ = 0;
            auVar45[8] = bVar26;
            auVar45._9_3_ = 0;
            auVar45[0xc] = bVar27;
            auVar45._13_3_ = 0;
            auVar88 = NEON_ext(auVar45,auVar82,0xc,1);
            auVar71 = NEON_ext(auVar82,auVar80,0xc,1);
            auVar70[4] = bVar35;
            auVar70._0_4_ = uVar28;
            auVar70._5_3_ = 0;
            auVar70[8] = bVar36;
            auVar70._9_3_ = 0;
            auVar70[0xc] = bVar37;
            auVar70._13_3_ = 0;
            auVar45 = NEON_ext(auVar76,auVar70,0xc,1);
            auVar91._6_2_ = 0;
            auVar91._0_6_ =
                 (uint6)CONCAT14(bVar49,(uint)CONCAT12(bVar49,(ushort)param_2[0x1a])) &
                 0xffff0000ffff;
            auVar91[8] = param_2[0x20];
            auVar91._9_3_ = 0;
            auVar91[0xc] = param_2[0x23];
            auVar91._13_3_ = 0;
            auVar70 = NEON_ext(auVar80,auVar83,0xc,1);
            auVar74._1_3_ = 0;
            auVar74[0] = bVar44;
            auVar74[4] = bVar69;
            auVar74._5_3_ = 0;
            auVar74[8] = bVar22;
            auVar74._9_3_ = 0;
            auVar74[0xc] = bVar23;
            auVar74._13_3_ = 0;
            auVar85 = NEON_ext(auVar74,auVar90,0xc,1);
            auVar76 = NEON_ext(auVar90,auVar81,0xc,1);
            auVar74 = NEON_ext(auVar81,auVar91,0xc,1);
            auVar78._1_3_ = 0;
            auVar78[0] = bVar40;
            auVar78[4] = bVar41;
            auVar78._5_3_ = 0;
            auVar78[8] = bVar42;
            auVar78._9_3_ = 0;
            auVar78[0xc] = bVar43;
            auVar78._13_3_ = 0;
            auVar78 = NEON_ext(auVar83,auVar78,0xc,1);
            auVar86._5_3_ = 0;
            auVar86._0_5_ = CONCAT14(bVar51,(uint)CONCAT12(bVar51,(ushort)bVar50)) & 0xff0000ffff;
            auVar86[8] = bVar52;
            auVar86._9_3_ = 0;
            auVar86[0xc] = bVar53;
            auVar86._13_3_ = 0;
            auVar86 = NEON_ext(auVar91,auVar86,0xc,1);
            *param_2 = *param_2 - auVar84[0];
            param_2[1] = param_2[1] - auVar88[0];
            param_2[2] = param_2[2] - auVar85[0];
            param_2[3] = bVar31 - auVar84[4];
            param_2[4] = bVar38 - auVar88[4];
            param_2[5] = bVar48 - auVar85[4];
            param_2[6] = bVar32 - auVar84[8];
            param_2[7] = param_2[7] - auVar88[8];
            param_2[8] = param_2[8] - auVar85[8];
            param_2[9] = bVar33 - auVar84[0xc];
            param_2[10] = param_2[10] - auVar88[0xc];
            param_2[0xb] = param_2[0xb] - auVar85[0xc];
            param_2[0xc] = param_2[0xc] - auVar62[0];
            param_2[0xd] = param_2[0xd] - auVar71[0];
            param_2[0xe] = param_2[0xe] - auVar76[0];
            param_2[0xf] = param_2[0xf] - auVar62[4];
            param_2[0x10] = param_2[0x10] - auVar71[4];
            param_2[0x11] = param_2[0x11] - auVar76[4];
            param_2[0x12] = param_2[0x12] - auVar62[8];
            param_2[0x13] = param_2[0x13] - auVar71[8];
            param_2[0x14] = param_2[0x14] - auVar76[8];
            param_2[0x15] = param_2[0x15] - auVar62[0xc];
            param_2[0x16] = param_2[0x16] - auVar71[0xc];
            param_2[0x17] = param_2[0x17] - auVar76[0xc];
            param_2[0x18] = param_2[0x18] - auVar55[0];
            param_2[0x19] = param_2[0x19] - auVar70[0];
            param_2[0x1a] = param_2[0x1a] - auVar74[0];
            param_2[0x1b] = bVar34 - auVar55[4];
            param_2[0x1c] = bVar39 - auVar70[4];
            param_2[0x1d] = bVar49 - auVar74[4];
            param_2[0x1e] = param_2[0x1e] - auVar55[8];
            param_2[0x1f] = param_2[0x1f] - auVar70[8];
            param_2[0x20] = param_2[0x20] - auVar74[8];
            param_2[0x21] = param_2[0x21] - auVar55[0xc];
            param_2[0x22] = param_2[0x22] - auVar70[0xc];
            param_2[0x23] = param_2[0x23] - auVar74[0xc];
            param_2[0x24] = param_2[0x24] - auVar45[0];
            param_2[0x25] = bVar40 - auVar78[0];
            param_2[0x26] = bVar50 - auVar86[0];
            param_2[0x27] = bVar35 - auVar45[4];
            param_2[0x28] = bVar41 - auVar78[4];
            param_2[0x29] = bVar51 - auVar86[4];
            param_2[0x2a] = bVar36 - auVar45[8];
            param_2[0x2b] = bVar42 - auVar78[8];
            param_2[0x2c] = bVar52 - auVar86[8];
            param_2[0x2d] = bVar37 - auVar45[0xc];
            param_2[0x2e] = bVar43 - auVar78[0xc];
            param_2[0x2f] = bVar53 - auVar86[0xc];
            param_2 = param_2 + 0x30;
            bVar44 = bVar50;
            bVar69 = bVar51;
            bVar22 = bVar52;
            bVar23 = bVar53;
            bVar24 = bVar40;
            bVar25 = bVar41;
            bVar26 = bVar42;
            bVar27 = bVar43;
          } while (lVar15 != 0);
          if (uVar17 == 0) {
            return;
          }
        }
      }
      lVar14 = lVar14 + 3;
      pbVar19 = pbVar19 + 5;
      do {
        bVar69 = pbVar19[-2];
        bVar22 = pbVar19[-1];
        bVar44 = *pbVar19;
        lVar14 = lVar14 + -3;
        pbVar19[-2] = bVar69 - (char)uVar18;
        pbVar19[-1] = bVar22 - bVar43;
        *pbVar19 = bVar44 - bVar53;
        pbVar19 = pbVar19 + 3;
        uVar18 = (uint)bVar69;
        bVar53 = bVar44;
        bVar43 = bVar22;
      } while (3 < lVar14);
    }
    else {
      uVar16 = uVar1 & 0xf;
      param_2 = param_2 + lVar14 + -1;
      do {
        if (lVar15 != 0) {
          if (lVar15 != 1) {
            if (lVar15 != 2) {
              if (4 < lVar15) {
                pbVar19 = param_2;
                uVar17 = uVar1;
                if ((uVar1 < 0x10) || (uVar1 == uVar16)) {
LAB_00de1ae0:
                  lVar21 = uVar17 + 1;
                  do {
                    lVar21 = lVar21 + -1;
                    pbVar19[lVar15] = pbVar19[lVar15] - *pbVar19;
                    pbVar19 = pbVar19 + -1;
                  } while (1 < lVar21);
                }
                else {
                  pbVar19 = param_2 + (4 - lVar15) + uVar16;
                  pbVar20 = param_2 + -0xf;
                  lVar21 = uVar16 + 4;
                  do {
                    uVar3 = *(undefined8 *)(pbVar20 + 8);
                    uVar2 = *(undefined8 *)pbVar20;
                    uVar7 = *(undefined8 *)(pbVar20 + lVar15 + 8);
                    uVar6 = *(undefined8 *)(pbVar20 + lVar15);
                    lVar21 = lVar21 + 0x10;
                    *(ulong *)(pbVar20 + lVar15 + 8) =
                         CONCAT17((char)((ulong)uVar7 >> 0x38) - (char)((ulong)uVar3 >> 0x38),
                                  CONCAT16((char)((ulong)uVar7 >> 0x30) -
                                           (char)((ulong)uVar3 >> 0x30),
                                           CONCAT15((char)((ulong)uVar7 >> 0x28) -
                                                    (char)((ulong)uVar3 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar7 >> 0x20) -
                                                             (char)((ulong)uVar3 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar7 >> 0x18) -
                                                                      (char)((ulong)uVar3 >> 0x18),
                                                                      CONCAT12((char)((ulong)uVar7
                                                                                     >> 0x10) -
                                                                               (char)((ulong)uVar3
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar7 >> 8) - (char)((ulong)uVar3 >> 8),
                                                  (char)uVar7 - (char)uVar3)))))));
                    *(ulong *)(pbVar20 + lVar15) =
                         CONCAT17((char)((ulong)uVar6 >> 0x38) - (char)((ulong)uVar2 >> 0x38),
                                  CONCAT16((char)((ulong)uVar6 >> 0x30) -
                                           (char)((ulong)uVar2 >> 0x30),
                                           CONCAT15((char)((ulong)uVar6 >> 0x28) -
                                                    (char)((ulong)uVar2 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar6 >> 0x20) -
                                                             (char)((ulong)uVar2 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar6 >> 0x18) -
                                                                      (char)((ulong)uVar2 >> 0x18),
                                                                      CONCAT12((char)((ulong)uVar6
                                                                                     >> 0x10) -
                                                                               (char)((ulong)uVar2
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar6 >> 8) - (char)((ulong)uVar2 >> 8),
                                                  (char)uVar6 - (char)uVar2)))))));
                    pbVar20 = pbVar20 + -0x10;
                  } while (lVar15 != lVar21);
                  uVar17 = uVar16;
                  if (uVar16 != 0) goto LAB_00de1ae0;
                }
                param_2 = param_2 + (4 - lVar15);
              }
              param_2[lVar15] = param_2[lVar15] - *param_2;
              pbVar19 = param_2 + -1;
              pbVar19[lVar15] = pbVar19[lVar15] - *pbVar19;
              param_2 = param_2 + -2;
            }
            param_2[lVar15] = param_2[lVar15] - *param_2;
            param_2 = param_2 + -1;
          }
          param_2[lVar15] = param_2[lVar15] - *param_2;
          param_2 = param_2 + -1;
        }
        lVar14 = lVar14 - lVar15;
      } while (0 < lVar14);
    }
  }
  return;
}

