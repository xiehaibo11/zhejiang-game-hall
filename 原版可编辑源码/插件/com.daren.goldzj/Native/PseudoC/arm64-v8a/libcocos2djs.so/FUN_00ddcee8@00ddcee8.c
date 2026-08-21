
void FUN_00ddcee8(long param_1,undefined2 *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [13];
  undefined1 auVar20 [16];
  undefined1 auVar21 [13];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  if (0 < (long)param_3) {
    puVar11 = *(uint **)(param_1 + 0x10);
    uVar1 = 0xfffffffffffffffe;
    if (-2 < (long)~param_3) {
      uVar1 = ~param_3;
    }
    uVar1 = uVar1 + param_3 + 2;
    if ((3 < uVar1) && (uVar14 = uVar1 & 0xfffffffffffffffc, uVar14 != 0)) {
      param_3 = param_3 - uVar14;
      auVar17 = NEON_fmov(0x3fe0000000000000,8);
      puVar10 = param_2 + uVar14 * 3;
      puVar12 = puVar11;
      uVar15 = uVar14;
      do {
        uVar3 = *(undefined1 *)((long)puVar12 + 3);
        uVar4 = *(undefined1 *)((long)puVar12 + 6);
        uVar5 = *(undefined1 *)((long)puVar12 + 7);
        uVar6 = *(undefined1 *)((long)puVar12 + 10);
        uVar7 = *(undefined1 *)((long)puVar12 + 0xb);
        uVar8 = *(undefined1 *)((long)puVar12 + 0xe);
        uVar9 = *(undefined1 *)((long)puVar12 + 0xf);
        uVar15 = uVar15 - 4;
        auVar21._0_8_ =
             CONCAT35(0,CONCAT14(*(undefined1 *)((long)puVar12 + 5),
                                 (uint)*(byte *)((long)puVar12 + 1)));
        auVar21[8] = *(undefined1 *)((long)puVar12 + 9);
        auVar21._9_3_ = 0;
        auVar21[0xc] = *(undefined1 *)((long)puVar12 + 0xd);
        auVar19._0_8_ = CONCAT35(0,CONCAT14((char)puVar12[1],(uint)(byte)*puVar12));
        auVar19[8] = (char)puVar12[2];
        auVar19._9_3_ = 0;
        auVar19[0xc] = (char)puVar12[3];
        auVar25._0_8_ = (ulong)auVar21._8_5_ & 0xffffffff;
        auVar25._8_5_ = auVar21._8_5_ >> 0x20;
        auVar25._13_3_ = 0;
        auVar26._0_8_ = auVar21._0_8_ & 0xffffffff;
        auVar26[8] = *(undefined1 *)((long)puVar12 + 5);
        auVar26._9_7_ = 0;
        auVar23._0_8_ = (ulong)auVar19._8_5_ & 0xffffffff;
        auVar23._8_5_ = auVar19._8_5_ >> 0x20;
        auVar23._13_3_ = 0;
        auVar20._0_8_ = auVar19._0_8_ & 0xffffffff;
        auVar20[8] = (char)puVar12[1];
        auVar20._9_7_ = 0;
        auVar22 = NEON_ucvtf(auVar26,8);
        auVar20 = NEON_ucvtf(auVar20,8);
        auVar26 = NEON_ucvtf(auVar25,8);
        dVar16 = auVar17._0_8_;
        dVar18 = auVar17._8_8_;
        auVar23 = NEON_ucvtf(auVar23,8);
        auVar28._0_8_ = (auVar22._0_8_ + dVar16) * 0.0024390243902439024;
        auVar28._8_8_ = (auVar22._8_8_ + dVar18) * 0.0024390243902439024;
        auVar22._0_8_ = (auVar20._0_8_ + dVar16) * 0.0024390243902439024;
        auVar22._8_8_ = (auVar20._8_8_ + dVar18) * 0.0024390243902439024;
        auVar27._0_8_ = (auVar26._0_8_ + dVar16) * 0.0024390243902439024;
        auVar27._8_8_ = (auVar26._8_8_ + dVar18) * 0.0024390243902439024;
        auVar26 = NEON_fcvtzs(auVar28,0xf,8);
        auVar24._0_8_ = (auVar23._0_8_ + dVar16) * 0.0024390243902439024;
        auVar24._8_8_ = (auVar23._8_8_ + dVar18) * 0.0024390243902439024;
        auVar20 = NEON_fcvtzs(auVar22,0xf,8);
        auVar28 = NEON_fcvtzs(auVar27,0xf,8);
        auVar22 = NEON_fcvtzs(auVar24,0xf,8);
        *(undefined1 *)param_2 = *(undefined1 *)((long)puVar12 + 2);
        *(undefined1 *)((long)param_2 + 1) = uVar3;
        param_2[1] = auVar26._0_2_;
        param_2[2] = auVar20._0_2_;
        *(undefined1 *)(param_2 + 3) = uVar4;
        *(undefined1 *)((long)param_2 + 7) = uVar5;
        param_2[4] = auVar26._8_2_;
        param_2[5] = auVar20._8_2_;
        *(undefined1 *)(param_2 + 6) = uVar6;
        *(undefined1 *)((long)param_2 + 0xd) = uVar7;
        param_2[7] = auVar28._0_2_;
        param_2[8] = auVar22._0_2_;
        *(undefined1 *)(param_2 + 9) = uVar8;
        *(undefined1 *)((long)param_2 + 0x13) = uVar9;
        param_2[10] = auVar28._8_2_;
        param_2[0xb] = auVar22._8_2_;
        param_2 = param_2 + 0xc;
        puVar12 = puVar12 + 4;
      } while (uVar15 != 0);
      puVar11 = puVar11 + uVar14;
      param_2 = puVar10;
      if (uVar1 == uVar14) {
        return;
      }
    }
    lVar13 = param_3 + 1;
    do {
      uVar2 = *puVar11;
      lVar13 = lVar13 + -1;
      *param_2 = (short)(uVar2 >> 0x10);
      param_2[1] = (short)(int)(((double)(uVar2 >> 8 & 0xff) + 0.5) * 0.0024390243902439024 *
                               32768.0);
      param_2[2] = (short)(int)(((double)(uVar2 & 0xff) + 0.5) * 0.0024390243902439024 * 32768.0);
      param_2 = param_2 + 3;
      puVar11 = puVar11 + 1;
    } while (1 < lVar13);
  }
  return;
}

