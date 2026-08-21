
void FUN_00bd54e0(ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  bool bVar21;
  bool bVar22;
  bool bVar23;
  ulong in_x4;
  ulong in_x5;
  ulong in_x6;
  ulong in_x7;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong in_x12;
  ulong in_x13;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  
  uVar30 = in_x5 * in_x4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_x5;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = in_x4;
  uVar26 = SUB168(auVar1 * auVar11,8);
  uVar31 = in_x6 * in_x4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_x6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = in_x4;
  uVar28 = SUB168(auVar2 * auVar12,8);
  uVar33 = in_x7 * in_x4;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = in_x7;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = in_x4;
  uVar25 = uVar31 + uVar26;
  uVar24 = in_x6 * in_x5;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_x6;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = in_x5;
  uVar27 = SUB168(auVar4 * auVar14,8);
  uVar34 = uVar33 + uVar28 + (ulong)CARRY8(uVar31,uVar26);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = in_x7;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = in_x5;
  uVar31 = SUB168(auVar3 * auVar13,8) +
           (ulong)(CARRY8(uVar33,uVar28) || CARRY8(uVar33 + uVar28,(ulong)CARRY8(uVar31,uVar26)));
  uVar37 = in_x7 * in_x6;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = in_x7;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = in_x6;
  uVar26 = uVar27 + in_x7 * in_x5;
  uVar29 = in_x4 * in_x4;
  uVar33 = SUB168(auVar5 * auVar15,8) + (ulong)CARRY8(uVar27,in_x7 * in_x5);
  uVar27 = uVar34 + uVar24;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = in_x4;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = in_x4;
  uVar28 = SUB168(auVar7 * auVar17,8);
  bVar21 = CARRY8(uVar31,uVar26) || CARRY8(uVar31 + uVar26,(ulong)CARRY8(uVar34,uVar24));
  uVar36 = uVar31 + uVar26 + (ulong)CARRY8(uVar34,uVar24);
  uVar34 = in_x5 * in_x5;
  uVar38 = uVar37 + uVar33 + (ulong)bVar21;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = in_x5;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_x5;
  uVar31 = SUB168(auVar8 * auVar18,8);
  uVar24 = SUB168(auVar6 * auVar16,8) +
           (ulong)(CARRY8(uVar37,uVar33) || CARRY8(uVar37 + uVar33,(ulong)bVar21));
  uVar26 = uVar30 * 2;
  uVar37 = in_x6 * in_x6;
  bVar21 = CARRY8(uVar25,uVar25) || CARRY8(uVar25 * 2,(ulong)CARRY8(uVar30,uVar30));
  uVar32 = uVar25 * 2 + (ulong)CARRY8(uVar30,uVar30);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = in_x6;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = in_x6;
  uVar33 = SUB168(auVar9 * auVar19,8);
  bVar22 = CARRY8(uVar27,uVar27) || CARRY8(uVar27 * 2,(ulong)bVar21);
  uVar35 = uVar27 * 2 + (ulong)bVar21;
  uVar30 = in_x7 * in_x7;
  bVar21 = CARRY8(uVar36,uVar36) || CARRY8(uVar36 * 2,(ulong)bVar22);
  uVar36 = uVar36 * 2 + (ulong)bVar22;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = in_x7;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = in_x7;
  bVar22 = CARRY8(uVar38,uVar38) || CARRY8(uVar38 * 2,(ulong)bVar21);
  uVar38 = uVar38 * 2 + (ulong)bVar21;
  uVar27 = uVar24 * 2 + (ulong)bVar22;
  uVar25 = uVar26 + uVar28;
  bVar21 = CARRY8(uVar32,uVar34) || CARRY8(uVar32 + uVar34,(ulong)CARRY8(uVar26,uVar28));
  uVar34 = uVar32 + uVar34 + (ulong)CARRY8(uVar26,uVar28);
  bVar23 = CARRY8(uVar35,uVar31) || CARRY8(uVar35 + uVar31,(ulong)bVar21);
  uVar35 = uVar35 + uVar31 + (ulong)bVar21;
  bVar21 = CARRY8(uVar36,uVar37) || CARRY8(uVar36 + uVar37,(ulong)bVar23);
  uVar36 = uVar36 + uVar37 + (ulong)bVar23;
  bVar23 = CARRY8(uVar38,uVar33) || CARRY8(uVar38 + uVar33,(ulong)bVar21);
  uVar38 = uVar38 + uVar33 + (ulong)bVar21;
  uVar31 = uVar29 << 0x20;
  uVar28 = uVar27 + uVar30 + (ulong)bVar23;
  uVar37 = uVar29 >> 0x20;
  uVar33 = (ulong)(CARRY8(uVar24,uVar24) || CARRY8(uVar24 * 2,(ulong)bVar22)) +
           SUB168(auVar10 * auVar20,8) +
           (ulong)(CARRY8(uVar27,uVar30) || CARRY8(uVar27 + uVar30,(ulong)bVar23));
  uVar27 = uVar29 - uVar31;
  uVar26 = uVar25 + uVar31;
  bVar21 = CARRY8(uVar34,uVar37) || CARRY8(uVar34 + uVar37,(ulong)CARRY8(uVar25,uVar31));
  uVar34 = uVar34 + uVar37 + (ulong)CARRY8(uVar25,uVar31);
  uVar25 = uVar25 << 0x20;
  uVar32 = uVar35 + uVar27 + (ulong)bVar21;
  uVar30 = uVar26 >> 0x20;
  uVar35 = (uVar29 - (uVar37 + (uVar29 < uVar31))) +
           (ulong)(CARRY8(uVar35,uVar27) || CARRY8(uVar35 + uVar27,(ulong)bVar21));
  uVar24 = uVar26 - uVar25;
  uVar27 = uVar34 + uVar25;
  bVar21 = CARRY8(uVar32,uVar30) || CARRY8(uVar32 + uVar30,(ulong)CARRY8(uVar34,uVar25));
  uVar31 = uVar32 + uVar30 + (ulong)CARRY8(uVar34,uVar25);
  uVar34 = uVar34 << 0x20;
  uVar29 = uVar35 + uVar24 + (ulong)bVar21;
  uVar37 = uVar27 >> 0x20;
  uVar32 = (uVar26 - (uVar30 + (uVar26 < uVar25))) +
           (ulong)(CARRY8(uVar35,uVar24) || CARRY8(uVar35 + uVar24,(ulong)bVar21));
  uVar26 = uVar27 - uVar34;
  uVar25 = uVar31 + uVar34;
  bVar21 = CARRY8(uVar29,uVar37) || CARRY8(uVar29 + uVar37,(ulong)CARRY8(uVar31,uVar34));
  uVar30 = uVar29 + uVar37 + (ulong)CARRY8(uVar31,uVar34);
  uVar31 = uVar31 << 0x20;
  uVar29 = uVar32 + uVar26 + (ulong)bVar21;
  uVar24 = uVar25 >> 0x20;
  uVar32 = (uVar27 - (uVar37 + (uVar27 < uVar34))) +
           (ulong)(CARRY8(uVar32,uVar26) || CARRY8(uVar32 + uVar26,(ulong)bVar21));
  uVar27 = uVar25 - uVar31;
  uVar26 = uVar30 + uVar31;
  bVar21 = CARRY8(uVar29,uVar24) || CARRY8(uVar29 + uVar24,(ulong)CARRY8(uVar30,uVar31));
  uVar34 = uVar29 + uVar24 + (ulong)CARRY8(uVar30,uVar31);
  uVar37 = uVar32 + uVar27 + (ulong)bVar21;
  uVar25 = (uVar25 - (uVar24 + (uVar25 < uVar31))) +
           (ulong)(CARRY8(uVar32,uVar27) || CARRY8(uVar32 + uVar27,(ulong)bVar21));
  uVar27 = uVar26 + uVar36;
  bVar21 = CARRY8(uVar34,uVar38) || CARRY8(uVar34 + uVar38,(ulong)CARRY8(uVar26,uVar36));
  uVar31 = uVar34 + uVar38 + (ulong)CARRY8(uVar26,uVar36);
  bVar22 = CARRY8(uVar37,uVar28) || CARRY8(uVar37 + uVar28,(ulong)bVar21);
  uVar34 = uVar37 + uVar28 + (ulong)bVar21;
  uVar24 = uVar25 + uVar33 + (ulong)bVar22;
  uVar25 = (ulong)(CARRY8(uVar25,uVar33) || CARRY8(uVar25 + uVar33,(ulong)bVar22));
  uVar28 = ~in_x12;
  bVar21 = CARRY8(uVar31 + uVar28,(ulong)(0xfffffffffffffffe < uVar27));
  bVar22 = CARRY8(uVar34 - 1,(ulong)(CARRY8(uVar31,uVar28) || bVar21));
  bVar23 = CARRY8(uVar25 - 1,
                  (ulong)(CARRY8(uVar24,~in_x13) ||
                         CARRY8(uVar24 + ~in_x13,(ulong)(uVar34 != 0 || bVar22))));
  uVar26 = uVar34;
  if (uVar25 != 0 || bVar23) {
    uVar26 = uVar34 - (!CARRY8(uVar31,uVar28) && !bVar21);
    uVar31 = uVar31 - (in_x12 + (0xfffffffffffffffe >= uVar27));
    uVar27 = uVar27 + 1;
  }
  *param_1 = uVar27;
  param_1[1] = uVar31;
  if (uVar25 != 0 || bVar23) {
    uVar24 = uVar24 - (in_x13 + (uVar34 == 0 && !bVar22));
  }
  param_1[2] = uVar26;
  param_1[3] = uVar24;
  return;
}

