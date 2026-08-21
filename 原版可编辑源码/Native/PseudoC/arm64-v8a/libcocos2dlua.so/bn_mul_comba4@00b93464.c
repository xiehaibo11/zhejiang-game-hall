
void bn_mul_comba4(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  
  uVar34 = *param_2;
  uVar36 = *param_3;
  *param_1 = uVar36 * uVar34;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar34;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar36;
  uVar35 = SUB168(auVar2 * auVar18,8);
  uVar37 = param_3[1] * *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[1];
  uVar36 = SUB168(auVar3 * auVar19,8);
  uVar40 = *param_3 * param_2[1];
  uVar34 = uVar37 + uVar35;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *param_3;
  uVar38 = SUB168(auVar4 * auVar20,8);
  if (CARRY8(uVar37,uVar35)) {
    uVar36 = uVar36 + 1;
  }
  if (CARRY8(uVar40,uVar34)) {
    uVar38 = uVar38 + 1;
  }
  param_1[1] = uVar40 + uVar34;
  uVar41 = (ulong)CARRY8(uVar36,uVar38);
  uVar42 = *param_3 * param_2[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[2];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *param_3;
  uVar35 = SUB168(auVar5 * auVar21,8);
  uVar40 = param_3[1] * param_2[1];
  uVar34 = uVar36 + uVar38 + uVar42;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_3[1];
  uVar37 = SUB168(auVar6 * auVar22,8);
  if (CARRY8(uVar36 + uVar38,uVar42)) {
    uVar35 = uVar35 + 1;
  }
  uVar36 = uVar40 + uVar34;
  if (CARRY8(uVar40,uVar34)) {
    uVar37 = uVar37 + 1;
  }
  uVar40 = param_3[2] * *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[2];
  uVar34 = SUB168(auVar7 * auVar23,8);
  uVar38 = 2;
  if (!CARRY8(uVar35,uVar41)) {
    uVar38 = 1;
  }
  uVar42 = uVar37 + uVar35 + uVar41;
  uVar1 = (ulong)CARRY8(uVar35,uVar41);
  if (CARRY8(uVar37,uVar35 + uVar41)) {
    uVar1 = uVar38;
  }
  if (CARRY8(uVar40,uVar36)) {
    uVar34 = uVar34 + 1;
  }
  param_1[2] = uVar40 + uVar36;
  uVar36 = uVar34 + uVar42;
  if (CARRY8(uVar34,uVar42)) {
    uVar1 = uVar1 + 1;
  }
  uVar37 = param_3[3] * *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[3];
  uVar38 = SUB168(auVar8 * auVar24,8);
  uVar40 = param_3[2] * param_2[1];
  uVar34 = uVar36 + uVar37;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[1];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[2];
  uVar35 = SUB168(auVar9 * auVar25,8);
  if (CARRY8(uVar36,uVar37)) {
    uVar38 = uVar38 + 1;
  }
  uVar36 = uVar40 + uVar34;
  if (CARRY8(uVar40,uVar34)) {
    uVar35 = uVar35 + 1;
  }
  uVar37 = param_3[1] * param_2[2];
  uVar34 = 2;
  if (!CARRY8(uVar1,uVar38)) {
    uVar34 = 1;
  }
  uVar40 = uVar35 + uVar1 + uVar38;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[2];
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[1];
  uVar41 = SUB168(auVar10 * auVar26,8);
  uVar42 = (ulong)CARRY8(uVar1,uVar38);
  if (CARRY8(uVar35,uVar1 + uVar38)) {
    uVar42 = uVar34;
  }
  uVar34 = uVar37 + uVar36;
  if (CARRY8(uVar37,uVar36)) {
    uVar41 = uVar41 + 1;
  }
  uVar35 = *param_3 * param_2[3];
  uVar36 = uVar41 + uVar40;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[3];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *param_3;
  uVar38 = SUB168(auVar11 * auVar27,8);
  if (CARRY8(uVar41,uVar40)) {
    uVar42 = uVar42 + 1;
  }
  if (CARRY8(uVar35,uVar34)) {
    uVar38 = uVar38 + 1;
  }
  param_1[3] = uVar35 + uVar34;
  uVar34 = uVar38 + uVar36;
  if (CARRY8(uVar38,uVar36)) {
    uVar42 = uVar42 + 1;
  }
  uVar40 = param_3[1] * param_2[3];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[3];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[1];
  uVar38 = SUB168(auVar12 * auVar28,8);
  uVar37 = param_3[2] * param_2[2];
  uVar36 = uVar34 + uVar40;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[2];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[2];
  uVar35 = SUB168(auVar13 * auVar29,8);
  if (CARRY8(uVar34,uVar40)) {
    uVar38 = uVar38 + 1;
  }
  uVar34 = uVar37 + uVar36;
  if (CARRY8(uVar37,uVar36)) {
    uVar35 = uVar35 + 1;
  }
  uVar37 = param_3[3] * param_2[1];
  uVar36 = 2;
  if (!CARRY8(uVar42,uVar38)) {
    uVar36 = 1;
  }
  uVar40 = uVar35 + uVar42 + uVar38;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[1];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[3];
  uVar41 = SUB168(auVar14 * auVar30,8);
  uVar1 = (ulong)CARRY8(uVar42,uVar38);
  if (CARRY8(uVar35,uVar42 + uVar38)) {
    uVar1 = uVar36;
  }
  if (CARRY8(uVar37,uVar34)) {
    uVar41 = uVar41 + 1;
  }
  param_1[4] = uVar37 + uVar34;
  uVar36 = param_3[2];
  uVar34 = uVar41 + uVar40;
  uVar38 = param_2[3];
  if (CARRY8(uVar41,uVar40)) {
    uVar1 = uVar1 + 1;
  }
  uVar41 = param_3[3] * param_2[2];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[2];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[3];
  uVar37 = SUB168(auVar15 * auVar31,8);
  uVar40 = uVar36 * uVar38;
  uVar35 = uVar34 + uVar41;
  if (CARRY8(uVar34,uVar41)) {
    uVar37 = uVar37 + 1;
  }
  param_1[5] = uVar40 + uVar35;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar38;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar36;
  uVar34 = SUB168(auVar16 * auVar32,8);
  if (CARRY8(uVar40,uVar35)) {
    uVar34 = uVar34 + 1;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[3];
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[3];
  lVar39 = SUB168(auVar17 * auVar33,8);
  uVar36 = param_3[3] * param_2[3];
  if (CARRY8(uVar1,uVar37)) {
    lVar39 = lVar39 + 1;
  }
  uVar38 = uVar34 + uVar1 + uVar37;
  if (CARRY8(uVar34,uVar1 + uVar37)) {
    lVar39 = lVar39 + 1;
  }
  if (CARRY8(uVar38,uVar36)) {
    lVar39 = lVar39 + 1;
  }
  param_1[6] = uVar38 + uVar36;
  param_1[7] = lVar39;
  return;
}

