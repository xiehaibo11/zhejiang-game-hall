
void FUN_010f48f4(long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  
                    /* try { // try from 010f4900 to 011f4907 has its CatchHandler @ 010f495c */
                    /* try { // try from 010f4908 to 011f4977 has its CatchHandler @ 010f48c4 */
  if (0 < param_5) {
    uVar6 = *(uint *)(param_1 + 0x30);
    uVar10 = (ulong)uVar6;
    if (uVar6 != 0) {
      uVar5 = uVar6 & 0x1f;
      lVar11 = uVar10 - uVar5;
      do {
        lVar12 = (ulong)param_4 * 8;
        puVar16 = (undefined1 *)*param_2;
        puVar15 = *(undefined1 **)(*param_3 + lVar12);
        puVar14 = *(undefined1 **)(param_3[1] + lVar12);
        puVar13 = *(undefined1 **)(param_3[2] + lVar12);
        if ((uVar6 < 0x20) || (lVar11 == 0)) {
LAB_010f4a50:
          lVar12 = 0;
LAB_010f4a54:
          lVar18 = uVar10 - lVar12;
          puVar13 = puVar13 + lVar12;
          puVar14 = puVar14 + lVar12;
          puVar15 = puVar15 + lVar12;
          do {
            lVar18 = lVar18 + -1;
            *puVar15 = *puVar16;
            *puVar14 = puVar16[1];
            puVar17 = puVar16 + 2;
            puVar16 = puVar16 + 3;
            *puVar13 = *puVar17;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar18 != 0);
        }
        else {
                    /* catch() { ... } // from try @ 010f4900 with catch @ 010f495c */
          puVar17 = puVar14 + uVar10;
          puVar2 = puVar15 + uVar10;
          puVar3 = puVar13 + uVar10;
          puVar4 = puVar16 + uVar10 * 3;
          if (((puVar15 < puVar17 && puVar14 < puVar2) ||
              (((puVar15 < puVar3 && puVar13 < puVar2 || (puVar15 < puVar4 && puVar16 < puVar2)) ||
               (puVar14 < puVar3 && puVar13 < puVar17)))) ||
             ((puVar14 < puVar4 && puVar16 < puVar17 || (puVar13 < puVar4 && puVar16 < puVar3))))
          goto LAB_010f4a50;
          puVar7 = (undefined8 *)(puVar13 + 0x10);
          puVar8 = (undefined8 *)(puVar15 + 0x10);
          puVar9 = (undefined8 *)(puVar14 + 0x10);
          lVar12 = lVar11;
          puVar17 = puVar16;
          do {
            uVar19 = *puVar17;
            uVar27 = puVar17[1];
            uVar43 = puVar17[2];
            uVar20 = puVar17[3];
            uVar28 = puVar17[4];
            uVar44 = puVar17[5];
            uVar21 = puVar17[6];
            uVar29 = puVar17[7];
            uVar45 = puVar17[8];
            uVar22 = puVar17[9];
            uVar30 = puVar17[10];
            uVar46 = puVar17[0xb];
            uVar23 = puVar17[0xc];
            uVar31 = puVar17[0xd];
            uVar47 = puVar17[0xe];
            uVar24 = puVar17[0xf];
            uVar32 = puVar17[0x10];
            uVar48 = puVar17[0x11];
            uVar25 = puVar17[0x12];
            uVar33 = puVar17[0x13];
            uVar49 = puVar17[0x14];
            uVar26 = puVar17[0x15];
            uVar34 = puVar17[0x16];
            uVar50 = puVar17[0x17];
            uVar35 = puVar17[0x19];
            uVar51 = puVar17[0x1a];
            uVar36 = puVar17[0x1c];
            uVar52 = puVar17[0x1d];
            uVar37 = puVar17[0x1f];
            uVar53 = puVar17[0x20];
            uVar38 = puVar17[0x22];
            uVar54 = puVar17[0x23];
            uVar39 = puVar17[0x25];
            uVar55 = puVar17[0x26];
            uVar40 = puVar17[0x28];
            uVar56 = puVar17[0x29];
            uVar41 = puVar17[0x2b];
            uVar57 = puVar17[0x2c];
            uVar42 = puVar17[0x2e];
            uVar58 = puVar17[0x2f];
            lVar12 = lVar12 + -0x20;
            uVar59 = puVar17[0x30];
            uVar75 = puVar17[0x31];
            uVar91 = puVar17[0x32];
            uVar60 = puVar17[0x33];
            uVar76 = puVar17[0x34];
            uVar92 = puVar17[0x35];
            uVar61 = puVar17[0x36];
            uVar77 = puVar17[0x37];
            uVar93 = puVar17[0x38];
            uVar62 = puVar17[0x39];
            uVar78 = puVar17[0x3a];
            uVar94 = puVar17[0x3b];
            uVar63 = puVar17[0x3c];
            uVar79 = puVar17[0x3d];
            uVar95 = puVar17[0x3e];
            uVar64 = puVar17[0x3f];
            uVar80 = puVar17[0x40];
            uVar96 = puVar17[0x41];
            uVar65 = puVar17[0x42];
            uVar81 = puVar17[0x43];
            uVar97 = puVar17[0x44];
            uVar66 = puVar17[0x45];
            uVar82 = puVar17[0x46];
            uVar98 = puVar17[0x47];
            uVar67 = puVar17[0x48];
            uVar83 = puVar17[0x49];
            uVar99 = puVar17[0x4a];
            uVar68 = puVar17[0x4b];
            uVar84 = puVar17[0x4c];
            uVar100 = puVar17[0x4d];
            uVar69 = puVar17[0x4e];
            uVar85 = puVar17[0x4f];
            uVar101 = puVar17[0x50];
            uVar70 = puVar17[0x51];
            uVar86 = puVar17[0x52];
            uVar102 = puVar17[0x53];
            uVar71 = puVar17[0x54];
            uVar87 = puVar17[0x55];
            uVar103 = puVar17[0x56];
            uVar72 = puVar17[0x57];
            uVar88 = puVar17[0x58];
            uVar104 = puVar17[0x59];
            uVar73 = puVar17[0x5a];
            uVar89 = puVar17[0x5b];
            uVar105 = puVar17[0x5c];
            uVar74 = puVar17[0x5d];
            uVar90 = puVar17[0x5e];
            uVar106 = puVar17[0x5f];
            puVar8[-1] = CONCAT17(puVar17[0x2d],
                                  CONCAT16(puVar17[0x2a],
                                           CONCAT15(puVar17[0x27],
                                                    CONCAT14(puVar17[0x24],
                                                             CONCAT13(puVar17[0x21],
                                                                      CONCAT12(puVar17[0x1e],
                                                                               CONCAT11(puVar17[0x1b
                                                  ],puVar17[0x18])))))));
            puVar8[-2] = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(
                                                  uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))
                                                 ));
            puVar8[1] = CONCAT17(uVar74,CONCAT16(uVar73,CONCAT15(uVar72,CONCAT14(uVar71,CONCAT13(
                                                  uVar70,CONCAT12(uVar69,CONCAT11(uVar68,uVar67)))))
                                                ));
            *puVar8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                              ));
            puVar9[-1] = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,CONCAT13(
                                                  uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))))
                                                 ));
            puVar9[-2] = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(
                                                  uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))))
                                                 ));
            puVar9[1] = CONCAT17(uVar90,CONCAT16(uVar89,CONCAT15(uVar88,CONCAT14(uVar87,CONCAT13(
                                                  uVar86,CONCAT12(uVar85,CONCAT11(uVar84,uVar83)))))
                                                ));
            *puVar9 = CONCAT17(uVar82,CONCAT16(uVar81,CONCAT15(uVar80,CONCAT14(uVar79,CONCAT13(
                                                  uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75)))))
                                              ));
            puVar7[-1] = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                                 ));
            puVar7[-2] = CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(uVar47,CONCAT13(
                                                  uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                 ));
            puVar7[1] = CONCAT17(uVar106,CONCAT16(uVar105,CONCAT15(uVar104,CONCAT14(uVar103,CONCAT13
                                                  (uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)
                                                                   ))))));
            *puVar7 = CONCAT17(uVar98,CONCAT16(uVar97,CONCAT15(uVar96,CONCAT14(uVar95,CONCAT13(
                                                  uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)))))
                                              ));
            puVar7 = puVar7 + 4;
            puVar8 = puVar8 + 4;
            puVar9 = puVar9 + 4;
            puVar17 = puVar17 + 0x60;
          } while (lVar12 != 0);
          lVar12 = lVar11;
          puVar16 = puVar16 + uVar10 * 3 + (ulong)uVar5 * -3;
          if (uVar5 != 0) goto LAB_010f4a54;
        }
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}

