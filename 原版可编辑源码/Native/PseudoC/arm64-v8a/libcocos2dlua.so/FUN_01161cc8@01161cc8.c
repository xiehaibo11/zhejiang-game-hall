
void FUN_01161cc8(char *param_1,uint param_2,int param_3,int param_4,char *param_5)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  uint3 uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  long lVar32;
  char *pcVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  char *pcVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  char cVar50;
  char cVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  char cVar56;
  byte bVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  
  pcVar29 = param_1 + 1;
  pcVar30 = param_5 + 1;
  *param_5 = *param_1;
  if ((int)param_2 < 2) goto LAB_01161d44;
  uVar3 = param_2 - 1;
  uVar27 = (ulong)uVar3;
  if (uVar3 < 0x10) {
LAB_01161d14:
    lVar32 = 0;
  }
  else {
    lVar32 = uVar27 - (uVar3 & 0xf);
    if (lVar32 != 0) {
      lVar28 = lVar32;
      if ((pcVar30 < param_1 + uVar27 + 1) && (param_1 < param_5 + uVar27 + 1)) goto LAB_01161d14;
      do {
        uVar47 = *(undefined8 *)(pcVar29 + 8);
        uVar46 = *(undefined8 *)pcVar29;
        uVar49 = *(undefined8 *)(pcVar29 + 7);
        uVar48 = *(undefined8 *)(pcVar29 + -1);
        lVar28 = lVar28 + -0x10;
        pcVar29 = pcVar29 + 0x10;
        *(ulong *)(pcVar30 + 8) =
             CONCAT17((char)((ulong)uVar47 >> 0x38) - (char)((ulong)uVar49 >> 0x38),
                      CONCAT16((char)((ulong)uVar47 >> 0x30) - (char)((ulong)uVar49 >> 0x30),
                               CONCAT15((char)((ulong)uVar47 >> 0x28) -
                                        (char)((ulong)uVar49 >> 0x28),
                                        CONCAT14((char)((ulong)uVar47 >> 0x20) -
                                                 (char)((ulong)uVar49 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar47 >> 0x18) -
                                                          (char)((ulong)uVar49 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar47 >> 0x10) -
                                                                   (char)((ulong)uVar49 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar47 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar49 >>
                                                                                  8),(char)uVar47 -
                                                                                     (char)uVar49)))
                                                ))));
        *(ulong *)pcVar30 =
             CONCAT17((char)((ulong)uVar46 >> 0x38) - (char)((ulong)uVar48 >> 0x38),
                      CONCAT16((char)((ulong)uVar46 >> 0x30) - (char)((ulong)uVar48 >> 0x30),
                               CONCAT15((char)((ulong)uVar46 >> 0x28) -
                                        (char)((ulong)uVar48 >> 0x28),
                                        CONCAT14((char)((ulong)uVar46 >> 0x20) -
                                                 (char)((ulong)uVar48 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar46 >> 0x18) -
                                                          (char)((ulong)uVar48 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar46 >> 0x10) -
                                                                   (char)((ulong)uVar48 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar46 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar48 >>
                                                                                  8),(char)uVar46 -
                                                                                     (char)uVar48)))
                                                ))));
        pcVar30 = pcVar30 + 0x10;
      } while (lVar28 != 0);
      if ((uVar3 & 0xf) == 0) goto LAB_01161d44;
    }
  }
  lVar28 = uVar27 - lVar32;
  pcVar29 = param_1 + lVar32 + 1;
  pcVar30 = param_5 + lVar32 + 1;
  do {
    cVar2 = *pcVar29;
    pcVar31 = pcVar29 + -1;
    lVar28 = lVar28 + -1;
    pcVar29 = pcVar29 + 1;
    *pcVar30 = cVar2 - *pcVar31;
    pcVar30 = pcVar30 + 1;
  } while (lVar28 != 0);
LAB_01161d44:
  if (1 < param_3) {
    lVar32 = (long)param_4;
    if ((int)param_2 < 2) {
      param_3 = param_3 + -1;
      do {
        cVar2 = *param_1;
        param_1 = param_1 + lVar32;
        param_5 = param_5 + lVar32;
        param_3 = param_3 + -1;
        *param_5 = *param_1 - cVar2;
      } while (param_3 != 0);
    }
    else {
      uVar27 = (ulong)param_2;
      uVar3 = param_2 + 0xf & 0xf;
      lVar26 = (uVar27 - 1) - (ulong)uVar3;
      lVar28 = 0;
      pcVar29 = param_1 + 1;
      iVar34 = 1;
      pcVar30 = param_1;
      pcVar39 = param_5;
      pcVar31 = param_1;
      pcVar33 = param_5;
      do {
        pcVar33 = pcVar33 + lVar32;
        pcVar31 = pcVar31 + lVar32;
        pcVar39[lVar32] = *pcVar31 - pcVar31[-lVar32];
        uVar37 = 1;
        if ((uVar27 - 1 < 0x10) || (lVar26 == 0)) {
LAB_01161f48:
          do {
            uVar38 = ((uint)(byte)pcVar30[uVar37] + (uint)(byte)pcVar31[uVar37 - 1]) -
                     (uint)(byte)(pcVar30 + uVar37)[-1];
            if (0xff < uVar38) {
              uVar38 = ((int)uVar38 >> 0x1f & 0xffffff01U) + 0xff;
            }
            pcVar33[uVar37] = pcVar31[uVar37] - (char)uVar38;
            uVar37 = uVar37 + 1;
          } while (uVar27 != uVar37);
        }
        else {
          lVar35 = lVar28 * lVar32;
          lVar36 = lVar32 + uVar27 + lVar35;
          if (param_5 + lVar32 + 1 + lVar35 < param_1 + lVar36 &&
              param_1 + lVar35 + lVar32 < param_5 + lVar36) {
            uVar37 = 1;
            goto LAB_01161f48;
          }
          uVar37 = 1;
          if (param_5 + lVar32 + 1 + lVar35 < param_1 + lVar35 + uVar27 &&
              param_1 + lVar35 < param_5 + lVar36) goto LAB_01161f48;
          lVar36 = 0;
          do {
            uVar47 = *(undefined8 *)(pcVar29 + lVar36 + lVar32 + 7);
            uVar46 = *(undefined8 *)(pcVar29 + lVar36 + lVar32 + -1);
            pcVar1 = pcVar29 + lVar36;
            uVar49 = *(undefined8 *)(pcVar1 + 8);
            uVar48 = *(undefined8 *)pcVar1;
            uVar19 = *(undefined8 *)(pcVar1 + 7);
            uVar16 = *(undefined8 *)(pcVar1 + -1);
            bVar40 = (byte)((ulong)uVar47 >> 8);
            bVar43 = (byte)((ulong)uVar46 >> 0x28);
            bVar41 = (byte)((ulong)uVar49 >> 8);
            bVar44 = (byte)((ulong)uVar48 >> 0x28);
            bVar42 = (byte)((ulong)uVar16 >> 8);
            bVar45 = (byte)((ulong)uVar19 >> 0x28);
            auVar58._0_4_ =
                 ((CONCAT12(bVar41,(ushort)(byte)uVar49) & 0xffff) +
                 (CONCAT12(bVar40,(ushort)(byte)uVar47) & 0xffff)) - (uint)(byte)uVar19;
            auVar58._4_4_ = ((uint)bVar41 + (uint)bVar40) - (uint)(byte)((ulong)uVar19 >> 8);
            auVar58._8_4_ =
                 ((uint)(byte)((ulong)uVar49 >> 0x10) + (uint)(byte)((ulong)uVar47 >> 0x10)) -
                 (uint)(byte)((ulong)uVar19 >> 0x10);
            auVar58._12_4_ =
                 ((uint)(byte)((ulong)uVar49 >> 0x18) + (uint)(byte)((ulong)uVar47 >> 0x18)) -
                 (uint)(byte)((ulong)uVar19 >> 0x18);
            uVar10 = ((uint)(byte)((ulong)uVar49 >> 0x20) + (uint)(byte)((ulong)uVar47 >> 0x20)) -
                     (CONCAT12(bVar45,(ushort)(byte)((ulong)uVar19 >> 0x20)) & 0xffff);
            uVar11 = ((uint)(byte)((ulong)uVar49 >> 0x28) + (uint)(byte)((ulong)uVar47 >> 0x28)) -
                     (uint)bVar45;
            cVar51 = (char)(uVar11 >> 0x18);
            uVar12 = ((uint)(byte)((ulong)uVar49 >> 0x30) + (uint)(byte)((ulong)uVar47 >> 0x30)) -
                     (uint)(byte)((ulong)uVar19 >> 0x30);
            bVar41 = (byte)(uVar12 >> 0x18);
            uVar13 = ((uint)(byte)((ulong)uVar49 >> 0x38) + (uint)(byte)((ulong)uVar47 >> 0x38)) -
                     (uint)(byte)((ulong)uVar19 >> 0x38);
            bVar45 = (byte)(uVar13 >> 0x18);
            uVar15 = ((CONCAT12(bVar44,(ushort)(byte)((ulong)uVar48 >> 0x20)) & 0xffff) +
                     (CONCAT12(bVar43,(ushort)(byte)((ulong)uVar46 >> 0x20)) & 0xffff)) -
                     (uint)(byte)((ulong)uVar16 >> 0x20);
            uVar17 = ((uint)bVar44 + (uint)bVar43) - (uint)(byte)((ulong)uVar16 >> 0x28);
            cVar56 = (char)(uVar17 >> 0x18);
            uVar18 = ((uint)(byte)((ulong)uVar48 >> 0x30) + (uint)(byte)((ulong)uVar46 >> 0x30)) -
                     (uint)(byte)((ulong)uVar16 >> 0x30);
            bVar44 = (byte)(uVar18 >> 0x18);
            uVar20 = ((uint)(byte)((ulong)uVar48 >> 0x38) + (uint)(byte)((ulong)uVar46 >> 0x38)) -
                     (uint)(byte)((ulong)uVar16 >> 0x38);
            bVar57 = (byte)(uVar20 >> 0x18);
            auVar65._0_4_ = -(uint)(auVar58._0_4_ < 0x100);
            auVar65._4_4_ = -(uint)(auVar58._4_4_ < 0x100);
            auVar65._8_4_ = -(uint)(auVar58._8_4_ < 0x100);
            auVar65._12_4_ = -(uint)(auVar58._12_4_ < 0x100);
            bVar40 = 0xff - (char)((int)auVar58._0_4_ >> 0x1f);
            cVar2 = -1 - (char)((int)auVar58._4_4_ >> 0x1f);
            iVar24 = 0xff - ((int)auVar58._8_4_ >> 0x1f);
            uVar52 = (undefined1)iVar24;
            uVar53 = (undefined1)((uint)iVar24 >> 8);
            iVar24 = 0xff - ((int)auVar58._12_4_ >> 0x1f);
            uVar54 = (undefined1)iVar24;
            uVar55 = (undefined1)((uint)iVar24 >> 8);
            auVar21._1_3_ = 0;
            auVar21[0] = bVar40;
            auVar21[4] = cVar2;
            auVar21._5_3_ = 0;
            auVar21[8] = uVar52;
            auVar21[9] = uVar53;
            auVar21._10_2_ = 0;
            auVar21[0xc] = uVar54;
            auVar21[0xd] = uVar55;
            auVar21._14_2_ = 0;
            auVar66._1_3_ = 0;
            auVar66[0] = bVar40;
            auVar66[4] = cVar2;
            auVar66._5_3_ = 0;
            auVar66[8] = uVar52;
            auVar66[9] = uVar53;
            auVar66._10_2_ = 0;
            auVar66[0xc] = uVar54;
            auVar66[0xd] = uVar55;
            auVar66._14_2_ = 0;
            auVar66 = auVar66 ^ (auVar21 ^ auVar58) & auVar65;
            uVar49 = *(undefined8 *)(pcVar29 + lVar36 + lVar32 + 8);
            uVar47 = *(undefined8 *)(pcVar29 + lVar36 + lVar32);
            uVar38 = ((uint)(byte)uVar48 + (uint)(byte)uVar46) -
                     (CONCAT12(bVar42,(ushort)(byte)uVar16) & 0xffff);
            uVar5 = ((uint)(byte)((ulong)uVar48 >> 8) + (uint)(byte)((ulong)uVar46 >> 8)) -
                    (uint)bVar42;
            cVar50 = (char)(uVar5 >> 0x18);
            uVar6 = ((uint)(byte)((ulong)uVar48 >> 0x10) + (uint)(byte)((ulong)uVar46 >> 0x10)) -
                    (uint)(byte)((ulong)uVar16 >> 0x10);
            bVar42 = (byte)(uVar6 >> 0x18);
            uVar7 = ((uint)(byte)((ulong)uVar48 >> 0x18) + (uint)(byte)((ulong)uVar46 >> 0x18)) -
                    (uint)(byte)((ulong)uVar16 >> 0x18);
            bVar43 = (byte)(uVar7 >> 0x18);
            auVar59._0_4_ = -(uint)(uVar10 < 0x100);
            auVar59._4_4_ = -(uint)(uVar11 < 0x100);
            auVar59._8_4_ = -(uint)(uVar12 < 0x100);
            auVar59._12_4_ = -(uint)(uVar13 < 0x100);
            bVar40 = 0xff - (char)((int)uVar10 >> 0x1f);
            cVar2 = -1 - (cVar51 >> 7);
            iVar24 = (bVar41 >> 7) + 0xff;
            uVar52 = (undefined1)iVar24;
            uVar53 = (undefined1)((uint)iVar24 >> 8);
            iVar24 = (bVar45 >> 7) + 0xff;
            uVar54 = (undefined1)iVar24;
            uVar55 = (undefined1)((uint)iVar24 >> 8);
            auVar8[4] = (char)uVar11;
            auVar8._0_4_ = uVar10;
            auVar8._5_2_ = 0;
            auVar8[7] = cVar51;
            auVar8[8] = (char)uVar12;
            auVar8[9] = (char)(uVar12 >> 8);
            auVar8[10] = (char)(uVar12 >> 0x10);
            auVar8[0xb] = bVar41;
            auVar8[0xc] = (char)uVar13;
            auVar8[0xd] = (char)(uVar13 >> 8);
            auVar8[0xe] = (char)(uVar13 >> 0x10);
            auVar8[0xf] = bVar45;
            auVar22._1_3_ = 0;
            auVar22[0] = bVar40;
            auVar22[4] = cVar2;
            auVar22._5_3_ = 0;
            auVar22[8] = uVar52;
            auVar22[9] = uVar53;
            auVar22._10_2_ = 0;
            auVar22[0xc] = uVar54;
            auVar22[0xd] = uVar55;
            auVar22._14_2_ = 0;
            auVar60._1_3_ = 0;
            auVar60[0] = bVar40;
            auVar60[4] = cVar2;
            auVar60._5_3_ = 0;
            auVar60[8] = uVar52;
            auVar60[9] = uVar53;
            auVar60._10_2_ = 0;
            auVar60[0xc] = uVar54;
            auVar60[0xd] = uVar55;
            auVar60._14_2_ = 0;
            auVar60 = auVar60 ^ (auVar22 ^ auVar8) & auVar59;
            uVar25 = CONCAT12((char)((ulong)uVar47 >> 8),(short)uVar47) & 0xff00ff;
            auVar61._0_4_ = -(uint)(uVar15 < 0x100);
            auVar61._4_4_ = -(uint)(uVar17 < 0x100);
            auVar61._8_4_ = -(uint)(uVar18 < 0x100);
            auVar61._12_4_ = -(uint)(uVar20 < 0x100);
            auVar63._0_4_ = -(uint)(uVar38 < 0x100);
            auVar63._4_4_ = -(uint)(uVar5 < 0x100);
            auVar63._8_4_ = -(uint)(uVar6 < 0x100);
            auVar63._12_4_ = -(uint)(uVar7 < 0x100);
            bVar40 = 0xff - (char)((int)uVar15 >> 0x1f);
            cVar2 = -1 - (cVar56 >> 7);
            iVar24 = (bVar44 >> 7) + 0xff;
            uVar52 = (undefined1)iVar24;
            uVar53 = (undefined1)((uint)iVar24 >> 8);
            iVar24 = (bVar57 >> 7) + 0xff;
            uVar54 = (undefined1)iVar24;
            uVar55 = (undefined1)((uint)iVar24 >> 8);
            bVar41 = 0xff - (char)((int)uVar38 >> 0x1f);
            cVar51 = -1 - (cVar50 >> 7);
            iVar24 = (bVar42 >> 7) + 0xff;
            uVar67 = (undefined1)iVar24;
            uVar68 = (undefined1)((uint)iVar24 >> 8);
            iVar24 = (bVar43 >> 7) + 0xff;
            uVar69 = (undefined1)iVar24;
            uVar70 = (undefined1)((uint)iVar24 >> 8);
            auVar4[4] = (char)uVar5;
            auVar4._0_4_ = uVar38;
            auVar4._5_2_ = 0;
            auVar4[7] = cVar50;
            auVar4[8] = (char)uVar6;
            auVar4[9] = (char)(uVar6 >> 8);
            auVar4[10] = (char)(uVar6 >> 0x10);
            auVar4[0xb] = bVar42;
            auVar4[0xc] = (char)uVar7;
            auVar4[0xd] = (char)(uVar7 >> 8);
            auVar4[0xe] = (char)(uVar7 >> 0x10);
            auVar4[0xf] = bVar43;
            auVar23._1_3_ = 0;
            auVar23[0] = bVar41;
            auVar23[4] = cVar51;
            auVar23._5_3_ = 0;
            auVar23[8] = uVar67;
            auVar23[9] = uVar68;
            auVar23._10_2_ = 0;
            auVar23[0xc] = uVar69;
            auVar23[0xd] = uVar70;
            auVar23._14_2_ = 0;
            auVar64._1_3_ = 0;
            auVar64[0] = bVar41;
            auVar64[4] = cVar51;
            auVar64._5_3_ = 0;
            auVar64[8] = uVar67;
            auVar64[9] = uVar68;
            auVar64._10_2_ = 0;
            auVar64[0xc] = uVar69;
            auVar64[0xd] = uVar70;
            auVar64._14_2_ = 0;
            auVar64 = auVar64 ^ (auVar23 ^ auVar4) & auVar63;
            auVar9._1_3_ = 0;
            auVar9[0] = bVar40;
            auVar9[4] = cVar2;
            auVar9._5_3_ = 0;
            auVar9[8] = uVar52;
            auVar9[9] = uVar53;
            auVar9._10_2_ = 0;
            auVar9[0xc] = uVar54;
            auVar9[0xd] = uVar55;
            auVar9._14_2_ = 0;
            auVar14[4] = (char)uVar17;
            auVar14._0_4_ = uVar15;
            auVar14._5_2_ = 0;
            auVar14[7] = cVar56;
            auVar14[8] = (char)uVar18;
            auVar14[9] = (char)(uVar18 >> 8);
            auVar14[10] = (char)(uVar18 >> 0x10);
            auVar14[0xb] = bVar44;
            auVar14[0xc] = (char)uVar20;
            auVar14[0xd] = (char)(uVar20 >> 8);
            auVar14[0xe] = (char)(uVar20 >> 0x10);
            auVar14[0xf] = bVar57;
            auVar62._1_3_ = 0;
            auVar62[0] = bVar40;
            auVar62[4] = cVar2;
            auVar62._5_3_ = 0;
            auVar62[8] = uVar52;
            auVar62[9] = uVar53;
            auVar62._10_2_ = 0;
            auVar62[0xc] = uVar54;
            auVar62[0xd] = uVar55;
            auVar62._14_2_ = 0;
            auVar62 = auVar62 ^ (auVar9 ^ auVar14) & auVar61;
            lVar35 = lVar36 + lVar32;
            lVar36 = lVar36 + 0x10;
            *(ulong *)(pcVar39 + lVar35 + 9) =
                 CONCAT17((char)((ulong)uVar49 >> 0x38) - auVar60[0xc],
                          CONCAT16((char)((ulong)uVar49 >> 0x30) - auVar60[8],
                                   CONCAT15((char)((ulong)uVar49 >> 0x28) - auVar60[4],
                                            CONCAT14((char)((ulong)uVar49 >> 0x20) - auVar60[0],
                                                     CONCAT13((char)((ulong)uVar49 >> 0x18) -
                                                              auVar66[0xc],
                                                              CONCAT12((char)((ulong)uVar49 >> 0x10)
                                                                       - auVar66[8],
                                                                       CONCAT11((char)((ulong)uVar49
                                                                                      >> 8) -
                                                                                auVar66[4],
                                                                                (char)uVar49 -
                                                                                auVar66[0])))))));
            *(ulong *)(pcVar39 + lVar35 + 1) =
                 CONCAT17((char)((ulong)uVar47 >> 0x38) - auVar62[0xc],
                          CONCAT16((char)((ulong)uVar47 >> 0x30) - auVar62[8],
                                   CONCAT15((char)((ulong)uVar47 >> 0x28) - auVar62[4],
                                            CONCAT14((char)((ulong)uVar47 >> 0x20) - auVar62[0],
                                                     CONCAT13((char)((ulong)uVar47 >> 0x18) -
                                                              auVar64[0xc],
                                                              CONCAT12((char)((ulong)uVar47 >> 0x10)
                                                                       - auVar64[8],
                                                                       CONCAT11((char)(uVar25 >>
                                                                                      0x10) -
                                                                                auVar64[4],
                                                                                (char)uVar25 -
                                                                                auVar64[0])))))));
          } while (lVar26 != lVar36);
          uVar37 = lVar26 + 1;
          if (uVar3 != 0) goto LAB_01161f48;
        }
        iVar34 = iVar34 + 1;
        lVar28 = lVar28 + 1;
        pcVar29 = pcVar29 + lVar32;
        pcVar30 = pcVar30 + lVar32;
        pcVar39 = pcVar39 + lVar32;
      } while (iVar34 != param_3);
    }
  }
  return;
}

