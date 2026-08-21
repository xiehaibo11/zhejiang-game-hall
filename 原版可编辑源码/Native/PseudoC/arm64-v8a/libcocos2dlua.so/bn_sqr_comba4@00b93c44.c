
void bn_sqr_comba4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  
  uVar23 = *param_2;
  *param_1 = uVar23 * uVar23;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar23;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar23;
  uVar24 = SUB168(auVar3 * auVar13,8);
  uVar27 = *param_2 * param_2[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *param_2;
  uVar25 = SUB168(auVar4 * auVar14,8);
  uVar23 = uVar27 + uVar24;
  uVar1 = uVar25;
  if (CARRY8(uVar27,uVar24)) {
    uVar1 = uVar25 + 1;
  }
  param_1[1] = uVar23 + uVar27;
  if (CARRY8(uVar23,uVar27)) {
    uVar25 = uVar25 + 1;
  }
  uVar29 = param_2[1];
  uVar28 = (ulong)CARRY8(uVar1,uVar25);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar29;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar29;
  uVar24 = SUB168(auVar5 * auVar15,8);
  uVar30 = *param_2 * param_2[2];
  uVar23 = uVar1 + uVar25 + uVar29 * uVar29;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  uVar27 = SUB168(auVar6 * auVar16,8);
  if (CARRY8(uVar1 + uVar25,uVar29 * uVar29)) {
    uVar24 = uVar24 + 1;
  }
  uVar1 = uVar23 + uVar30;
  uVar25 = uVar27;
  if (CARRY8(uVar23,uVar30)) {
    uVar25 = uVar27 + 1;
  }
  uVar23 = 2;
  if (!CARRY8(uVar24,uVar28)) {
    uVar23 = 1;
  }
  uVar29 = uVar24 + uVar28 + uVar25;
  uVar2 = (ulong)CARRY8(uVar24,uVar28);
  if (CARRY8(uVar24 + uVar28,uVar25)) {
    uVar2 = uVar23;
  }
  if (CARRY8(uVar1,uVar30)) {
    uVar27 = uVar27 + 1;
  }
  param_1[2] = uVar1 + uVar30;
  uVar23 = uVar29 + uVar27;
  if (CARRY8(uVar29,uVar27)) {
    uVar2 = uVar2 + 1;
  }
  uVar28 = *param_2 * param_2[3];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[3];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  uVar24 = SUB168(auVar7 * auVar17,8);
  uVar1 = uVar23 + uVar28;
  uVar29 = param_2[1] * param_2[2];
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[2];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  uVar27 = SUB168(auVar8 * auVar18,8);
  uVar25 = uVar24;
  if (CARRY8(uVar23,uVar28)) {
    uVar25 = uVar24 + 1;
  }
  uVar23 = uVar1 + uVar28;
  if (CARRY8(uVar1,uVar28)) {
    uVar24 = uVar24 + 1;
  }
  uVar1 = 2;
  if (!CARRY8(uVar2,uVar25)) {
    uVar1 = 1;
  }
  uVar28 = uVar2 + uVar25 + uVar24;
  uVar30 = (ulong)CARRY8(uVar2,uVar25);
  if (CARRY8(uVar2 + uVar25,uVar24)) {
    uVar30 = uVar1;
  }
  uVar1 = uVar23 + uVar29;
  uVar25 = uVar27;
  if (CARRY8(uVar23,uVar29)) {
    uVar25 = uVar27 + 1;
  }
  uVar23 = uVar28 + uVar25;
  if (CARRY8(uVar28,uVar25)) {
    uVar30 = uVar30 + 1;
  }
  param_1[3] = uVar1 + uVar29;
  if (CARRY8(uVar1,uVar29)) {
    uVar27 = uVar27 + 1;
  }
  uVar25 = param_2[2];
  uVar1 = uVar23 + uVar27;
  if (CARRY8(uVar23,uVar27)) {
    uVar30 = uVar30 + 1;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar25;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar25;
  uVar24 = SUB168(auVar9 * auVar19,8);
  uVar29 = param_2[1] * param_2[3];
  uVar23 = uVar1 + uVar25 * uVar25;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[1];
  uVar27 = SUB168(auVar10 * auVar20,8);
  if (CARRY8(uVar1,uVar25 * uVar25)) {
    uVar24 = uVar24 + 1;
  }
  uVar1 = uVar23 + uVar29;
  uVar25 = uVar27;
  if (CARRY8(uVar23,uVar29)) {
    uVar25 = uVar27 + 1;
  }
  uVar23 = 2;
  if (!CARRY8(uVar30,uVar24)) {
    uVar23 = 1;
  }
  uVar28 = uVar30 + uVar24 + uVar25;
  uVar2 = (ulong)CARRY8(uVar30,uVar24);
  if (CARRY8(uVar30 + uVar24,uVar25)) {
    uVar2 = uVar23;
  }
  param_1[4] = uVar1 + uVar29;
  if (CARRY8(uVar1,uVar29)) {
    uVar27 = uVar27 + 1;
  }
  uVar23 = uVar28 + uVar27;
  if (CARRY8(uVar28,uVar27)) {
    uVar2 = uVar2 + 1;
  }
  uVar27 = param_2[2] * param_2[3];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[3];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[2];
  uVar24 = SUB168(auVar11 * auVar21,8);
  uVar1 = uVar23 + uVar27;
  uVar25 = uVar24;
  if (CARRY8(uVar23,uVar27)) {
    uVar25 = uVar24 + 1;
  }
  param_1[5] = uVar1 + uVar27;
  uVar23 = param_2[3];
  if (CARRY8(uVar1,uVar27)) {
    uVar24 = uVar24 + 1;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar23;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar23;
  lVar26 = SUB168(auVar12 * auVar22,8);
  if (CARRY8(uVar2,uVar25)) {
    lVar26 = lVar26 + 1;
  }
  uVar1 = uVar2 + uVar25 + uVar24;
  if (CARRY8(uVar2 + uVar25,uVar24)) {
    lVar26 = lVar26 + 1;
  }
  if (CARRY8(uVar1,uVar23 * uVar23)) {
    lVar26 = lVar26 + 1;
  }
  param_1[6] = uVar1 + uVar23 * uVar23;
  param_1[7] = lVar26;
  return;
}

