
undefined8 * FUN_00c1a990(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  uint uVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  
  pbVar18 = (byte *)*param_1;
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uint)((int)param_1[1] - (int)pbVar18) < uVar4) {
    pbVar18 = (byte *)FUN_00c1a4a8(param_1,uVar4);
  }
  pbVar1 = pbVar18 + uVar4;
  pbVar23 = (byte *)(param_2 + 0x18);
  if (pbVar18 < pbVar1) {
    pbVar2 = pbVar18 + 1;
    pbVar21 = pbVar18;
    if ((pbVar1 + (1 - (long)pbVar2) < (byte *)0x10) ||
       (pbVar23 < pbVar18 + 0x10 && pbVar18 < (byte *)(param_2 + 0x28))) {
      do {
        bVar25 = *pbVar23;
        bVar24 = bVar25 + 0x20;
        if (0x19 < bVar25 - 0x41) {
          bVar24 = bVar25;
        }
        pbVar22 = pbVar21 + 1;
        *pbVar21 = bVar24;
        pbVar21 = pbVar22;
        pbVar23 = pbVar23 + 1;
      } while (pbVar22 != pbVar1);
    }
    else {
      uVar3 = ((ulong)(pbVar1 + (-0xf - (long)pbVar2)) >> 4) + 1;
      pbVar20 = (byte *)(uVar3 * 0x10);
      uVar19 = 0;
      pbVar22 = pbVar23;
      do {
        uVar8 = *(undefined8 *)(pbVar22 + 8);
        bVar35 = (byte)((ulong)uVar8 >> 0x38);
        uVar7 = *(undefined8 *)pbVar22;
        bVar34 = (byte)((ulong)uVar7 >> 0x38);
        uVar19 = uVar19 + 1;
        bVar24 = (byte)((ulong)uVar7 >> 8);
        bVar26 = (byte)((ulong)uVar7 >> 0x10);
        bVar28 = (byte)((ulong)uVar7 >> 0x18);
        bVar30 = (byte)((ulong)uVar7 >> 0x28);
        bVar32 = (byte)((ulong)uVar7 >> 0x30);
        bVar25 = (byte)((ulong)uVar8 >> 8);
        bVar27 = (byte)((ulong)uVar8 >> 0x10);
        bVar29 = (byte)((ulong)uVar8 >> 0x18);
        bVar31 = (byte)((ulong)uVar8 >> 0x28);
        bVar33 = (byte)((ulong)uVar8 >> 0x30);
        uVar9 = (uint)CONCAT12(bVar24,(ushort)(byte)uVar7);
        uVar45 = uVar9 & 0xffff;
        uVar4 = (uint)CONCAT12(bVar25,(ushort)(byte)uVar8);
        uVar44 = uVar4 & 0xffff;
        uVar11 = (uint)CONCAT12(bVar30,(ushort)(byte)((ulong)uVar7 >> 0x20));
        uVar6 = (uint)CONCAT12(bVar31,(ushort)(byte)((ulong)uVar8 >> 0x20));
        iVar54 = (uVar11 & 0xffff) + 0x20;
        iVar55 = (ushort)bVar30 + 0x20;
        iVar56 = (ushort)bVar32 + 0x20;
        iVar57 = (ushort)bVar34 + 0x20;
        iVar46 = (uVar6 & 0xffff) + 0x20;
        iVar47 = (ushort)bVar31 + 0x20;
        iVar48 = (ushort)bVar33 + 0x20;
        iVar49 = (ushort)bVar35 + 0x20;
        iVar58 = uVar45 + 0x20;
        iVar59 = bVar24 + 0x20;
        iVar60 = bVar26 + 0x20;
        iVar61 = bVar28 + 0x20;
        auVar42._0_4_ = -(uint)(0x19 < uVar45 - 0x41);
        auVar42._4_4_ = -(uint)(0x19 < bVar24 - 0x41);
        auVar42._8_4_ = -(uint)(0x19 < bVar26 - 0x41);
        auVar42._12_4_ = -(uint)(0x19 < bVar28 - 0x41);
        auVar40._0_4_ = -(uint)(0x19 < (uVar11 & 0xffff) - 0x41);
        auVar40._4_4_ = -(uint)(0x19 < (ushort)bVar30 - 0x41);
        auVar40._8_4_ = -(uint)(0x19 < (ushort)bVar32 - 0x41);
        auVar40._12_4_ = -(uint)(0x19 < (ushort)bVar34 - 0x41);
        iVar50 = uVar44 + 0x20;
        iVar51 = bVar25 + 0x20;
        iVar52 = bVar27 + 0x20;
        iVar53 = bVar29 + 0x20;
        auVar38._0_4_ = -(uint)(0x19 < uVar44 - 0x41);
        auVar38._4_4_ = -(uint)(0x19 < bVar25 - 0x41);
        auVar38._8_4_ = -(uint)(0x19 < bVar27 - 0x41);
        auVar38._12_4_ = -(uint)(0x19 < bVar29 - 0x41);
        auVar36._0_4_ = -(uint)(0x19 < (uVar6 & 0xffff) - 0x41);
        auVar36._4_4_ = -(uint)(0x19 < (ushort)bVar31 - 0x41);
        auVar36._8_4_ = -(uint)(0x19 < (ushort)bVar33 - 0x41);
        auVar36._12_4_ = -(uint)(0x19 < (ushort)bVar35 - 0x41);
        auVar10._5_3_ = 0;
        auVar10._0_5_ = CONCAT14(bVar30,uVar11) & 0xff0000ffff;
        auVar10[8] = bVar32;
        auVar10._9_3_ = 0;
        auVar10[0xc] = bVar34;
        auVar10._13_3_ = 0;
        auVar16._4_4_ = iVar55;
        auVar16._0_4_ = iVar54;
        auVar16._8_4_ = iVar56;
        auVar16._12_4_ = iVar57;
        auVar41._4_4_ = iVar55;
        auVar41._0_4_ = iVar54;
        auVar41._8_4_ = iVar56;
        auVar41._12_4_ = iVar57;
        auVar41 = auVar41 ^ (auVar16 ^ auVar10) & auVar40;
        auVar13._6_2_ = 0;
        auVar13._0_6_ = (uint6)CONCAT14(bVar24,uVar9) & 0xffff0000ffff;
        auVar13[8] = bVar26;
        auVar13._9_3_ = 0;
        auVar13[0xc] = bVar28;
        auVar13._13_3_ = 0;
        auVar17._4_4_ = iVar59;
        auVar17._0_4_ = iVar58;
        auVar17._8_4_ = iVar60;
        auVar17._12_4_ = iVar61;
        auVar43._4_4_ = iVar59;
        auVar43._0_4_ = iVar58;
        auVar43._8_4_ = iVar60;
        auVar43._12_4_ = iVar61;
        auVar43 = auVar43 ^ (auVar17 ^ auVar13) & auVar42;
        auVar12._6_2_ = 0;
        auVar12._0_6_ = (uint6)CONCAT14(bVar25,uVar4) & 0xffff0000ffff;
        auVar12[8] = bVar27;
        auVar12._9_3_ = 0;
        auVar12[0xc] = bVar29;
        auVar12._13_3_ = 0;
        auVar15._4_4_ = iVar51;
        auVar15._0_4_ = iVar50;
        auVar15._8_4_ = iVar52;
        auVar15._12_4_ = iVar53;
        auVar39._4_4_ = iVar51;
        auVar39._0_4_ = iVar50;
        auVar39._8_4_ = iVar52;
        auVar39._12_4_ = iVar53;
        auVar39 = auVar39 ^ (auVar15 ^ auVar12) & auVar38;
        auVar5._5_3_ = 0;
        auVar5._0_5_ = CONCAT14(bVar31,uVar6) & 0xff0000ffff;
        auVar5[8] = bVar33;
        auVar5._9_3_ = 0;
        auVar5[0xc] = bVar35;
        auVar5._13_3_ = 0;
        auVar14._4_4_ = iVar47;
        auVar14._0_4_ = iVar46;
        auVar14._8_4_ = iVar48;
        auVar14._12_4_ = iVar49;
        auVar37._4_4_ = iVar47;
        auVar37._0_4_ = iVar46;
        auVar37._8_4_ = iVar48;
        auVar37._12_4_ = iVar49;
        auVar37 = auVar37 ^ (auVar14 ^ auVar5) & auVar36;
        *(ulong *)(pbVar21 + 8) =
             CONCAT17(auVar37[0xc],
                      CONCAT16(auVar37[8],
                               CONCAT15(auVar37[4],
                                        CONCAT14(auVar37[0],
                                                 CONCAT13(auVar39[0xc],
                                                          CONCAT12(auVar39[8],
                                                                   CONCAT11(auVar39[4],auVar39[0])))
                                                ))));
        *(ulong *)pbVar21 =
             CONCAT17(auVar41[0xc],
                      CONCAT16(auVar41[8],
                               CONCAT15(auVar41[4],
                                        CONCAT14(auVar41[0],
                                                 CONCAT13(auVar43[0xc],
                                                          CONCAT12(auVar43[8],
                                                                   CONCAT11(auVar43[4],auVar43[0])))
                                                ))));
        pbVar21 = pbVar21 + 0x10;
        pbVar22 = pbVar22 + 0x10;
      } while (uVar19 < uVar3);
      if (pbVar1 + (1 - (long)pbVar2) != pbVar20) {
        bVar25 = pbVar23[(long)pbVar20];
        bVar24 = bVar25 + 0x20;
        if (0x19 < bVar25 - 0x41) {
          bVar24 = bVar25;
        }
        pbVar18[(long)pbVar20] = bVar24;
        if (pbVar18 + (long)(pbVar20 + 1) < pbVar1) {
          bVar25 = pbVar23[(long)(pbVar20 + 1)];
          bVar24 = bVar25 + 0x20;
          if (0x19 < bVar25 - 0x41) {
            bVar24 = bVar25;
          }
          pbVar18[(long)(pbVar20 + 1)] = bVar24;
          if (pbVar18 + (long)(pbVar20 + 2) < pbVar1) {
            bVar25 = pbVar23[(long)(pbVar20 + 2)];
            bVar24 = bVar25 + 0x20;
            if (0x19 < bVar25 - 0x41) {
              bVar24 = bVar25;
            }
            pbVar18[(long)(pbVar20 + 2)] = bVar24;
            if (pbVar18 + (long)(pbVar20 + 3) < pbVar1) {
              bVar25 = pbVar23[(long)(pbVar20 + 3)];
              bVar24 = bVar25 + 0x20;
              if (0x19 < bVar25 - 0x41) {
                bVar24 = bVar25;
              }
              pbVar18[(long)(pbVar20 + 3)] = bVar24;
              if (pbVar18 + (long)(pbVar20 + 4) < pbVar1) {
                bVar25 = pbVar23[(long)(pbVar20 + 4)];
                bVar24 = bVar25 + 0x20;
                if (0x19 < bVar25 - 0x41) {
                  bVar24 = bVar25;
                }
                pbVar18[(long)(pbVar20 + 4)] = bVar24;
                if (pbVar18 + (long)(pbVar20 + 5) < pbVar1) {
                  bVar25 = pbVar23[(long)(pbVar20 + 5)];
                  bVar24 = bVar25 + 0x20;
                  if (0x19 < bVar25 - 0x41) {
                    bVar24 = bVar25;
                  }
                  pbVar18[(long)(pbVar20 + 5)] = bVar24;
                  if (pbVar18 + (long)(pbVar20 + 6) < pbVar1) {
                    bVar25 = pbVar23[(long)(pbVar20 + 6)];
                    bVar24 = bVar25 + 0x20;
                    if (0x19 < bVar25 - 0x41) {
                      bVar24 = bVar25;
                    }
                    pbVar18[(long)(pbVar20 + 6)] = bVar24;
                    if (pbVar18 + (long)(pbVar20 + 7) < pbVar1) {
                      bVar25 = pbVar23[(long)(pbVar20 + 7)];
                      bVar24 = bVar25 + 0x20;
                      if (0x19 < bVar25 - 0x41) {
                        bVar24 = bVar25;
                      }
                      pbVar18[(long)(pbVar20 + 7)] = bVar24;
                      if (pbVar18 + (long)(pbVar20 + 8) < pbVar1) {
                        bVar25 = pbVar23[(long)(pbVar20 + 8)];
                        bVar24 = bVar25 + 0x20;
                        if (0x19 < bVar25 - 0x41) {
                          bVar24 = bVar25;
                        }
                        pbVar18[(long)(pbVar20 + 8)] = bVar24;
                        if (pbVar18 + (long)(pbVar20 + 9) < pbVar1) {
                          bVar25 = pbVar23[(long)(pbVar20 + 9)];
                          bVar24 = bVar25 + 0x20;
                          if (0x19 < bVar25 - 0x41) {
                            bVar24 = bVar25;
                          }
                          pbVar18[(long)(pbVar20 + 9)] = bVar24;
                          if (pbVar18 + (long)(pbVar20 + 10) < pbVar1) {
                            bVar25 = pbVar23[(long)(pbVar20 + 10)];
                            bVar24 = bVar25 + 0x20;
                            if (0x19 < bVar25 - 0x41) {
                              bVar24 = bVar25;
                            }
                            pbVar18[(long)(pbVar20 + 10)] = bVar24;
                            if (pbVar18 + (long)(pbVar20 + 0xb) < pbVar1) {
                              bVar25 = pbVar23[(long)(pbVar20 + 0xb)];
                              bVar24 = bVar25 + 0x20;
                              if (0x19 < bVar25 - 0x41) {
                                bVar24 = bVar25;
                              }
                              pbVar18[(long)(pbVar20 + 0xb)] = bVar24;
                              if (pbVar18 + (long)(pbVar20 + 0xc) < pbVar1) {
                                bVar25 = pbVar23[(long)(pbVar20 + 0xc)];
                                bVar24 = bVar25 + 0x20;
                                if (0x19 < bVar25 - 0x41) {
                                  bVar24 = bVar25;
                                }
                                pbVar18[(long)(pbVar20 + 0xc)] = bVar24;
                                if (pbVar18 + (long)(pbVar20 + 0xd) < pbVar1) {
                                  bVar25 = pbVar23[(long)(pbVar20 + 0xd)];
                                  bVar24 = bVar25 + 0x20;
                                  if (0x19 < bVar25 - 0x41) {
                                    bVar24 = bVar25;
                                  }
                                  pbVar18[(long)(pbVar20 + 0xd)] = bVar24;
                                  if (pbVar18 + (long)(pbVar20 + 0xe) < pbVar1) {
                                    bVar25 = pbVar23[(long)(pbVar20 + 0xe)];
                                    bVar24 = bVar25 + 0x20;
                                    if (0x19 < bVar25 - 0x41) {
                                      bVar24 = bVar25;
                                    }
                                    pbVar18[(long)(pbVar20 + 0xe)] = bVar24;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pbVar18 = pbVar18 + (long)(pbVar1 + (1 - (long)pbVar2));
  }
  *param_1 = pbVar18;
  return param_1;
}

