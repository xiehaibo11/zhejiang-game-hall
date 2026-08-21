
void bn_mul_comba8(long *param_1,ulong *param_2,ulong *param_3)

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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
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
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  ulong uVar129;
  ulong uVar130;
  ulong uVar131;
  ulong uVar132;
  ulong uVar133;
  ulong uVar134;
  long lVar135;
  ulong uVar136;
  ulong uVar137;
  ulong uVar138;
  
  uVar130 = *param_2;
  uVar132 = *param_3;
  *param_1 = uVar132 * uVar130;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar130;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = uVar132;
  uVar131 = SUB168(auVar1 * auVar65,8);
  uVar133 = param_3[1] * *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_3[1];
  uVar132 = SUB168(auVar2 * auVar66,8);
  uVar136 = *param_3 * param_2[1];
  uVar130 = uVar133 + uVar131;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = *param_3;
  uVar134 = SUB168(auVar3 * auVar67,8);
  if (CARRY8(uVar133,uVar131)) {
    uVar132 = uVar132 + 1;
  }
  if (CARRY8(uVar136,uVar130)) {
    uVar134 = uVar134 + 1;
  }
  param_1[1] = uVar136 + uVar130;
  uVar137 = (ulong)CARRY8(uVar132,uVar134);
  uVar138 = *param_3 * param_2[2];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[2];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = *param_3;
  uVar131 = SUB168(auVar4 * auVar68,8);
  uVar136 = param_3[1] * param_2[1];
  uVar130 = uVar132 + uVar134 + uVar138;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[1];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_3[1];
  uVar133 = SUB168(auVar5 * auVar69,8);
  if (CARRY8(uVar132 + uVar134,uVar138)) {
    uVar131 = uVar131 + 1;
  }
  uVar132 = uVar136 + uVar130;
  if (CARRY8(uVar136,uVar130)) {
    uVar133 = uVar133 + 1;
  }
  uVar136 = param_3[2] * *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_2;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_3[2];
  uVar130 = SUB168(auVar6 * auVar70,8);
  uVar134 = 2;
  if (!CARRY8(uVar131,uVar137)) {
    uVar134 = 1;
  }
  uVar138 = uVar133 + uVar131 + uVar137;
  uVar129 = (ulong)CARRY8(uVar131,uVar137);
  if (CARRY8(uVar133,uVar131 + uVar137)) {
    uVar129 = uVar134;
  }
  if (CARRY8(uVar136,uVar132)) {
    uVar130 = uVar130 + 1;
  }
  param_1[2] = uVar136 + uVar132;
  uVar132 = uVar130 + uVar138;
  if (CARRY8(uVar130,uVar138)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = param_3[3] * *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *param_2;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_3[3];
  uVar134 = SUB168(auVar7 * auVar71,8);
  uVar136 = param_3[2] * param_2[1];
  uVar130 = uVar132 + uVar133;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_3[2];
  uVar131 = SUB168(auVar8 * auVar72,8);
  if (CARRY8(uVar132,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  uVar132 = uVar136 + uVar130;
  if (CARRY8(uVar136,uVar130)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[1] * param_2[2];
  uVar130 = 2;
  if (!CARRY8(uVar129,uVar134)) {
    uVar130 = 1;
  }
  uVar136 = uVar131 + uVar129 + uVar134;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_3[1];
  uVar137 = SUB168(auVar9 * auVar73,8);
  uVar138 = (ulong)CARRY8(uVar129,uVar134);
  if (CARRY8(uVar131,uVar129 + uVar134)) {
    uVar138 = uVar130;
  }
  uVar130 = uVar133 + uVar132;
  if (CARRY8(uVar133,uVar132)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = *param_3 * param_2[3];
  uVar132 = uVar137 + uVar136;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar74._8_8_ = 0;
  auVar74._0_8_ = *param_3;
  uVar134 = SUB168(auVar10 * auVar74,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar138 = uVar138 + 1;
  }
  if (CARRY8(uVar131,uVar130)) {
    uVar134 = uVar134 + 1;
  }
  param_1[3] = uVar131 + uVar130;
  uVar130 = uVar134 + uVar132;
  if (CARRY8(uVar134,uVar132)) {
    uVar138 = uVar138 + 1;
  }
  uVar133 = *param_3 * param_2[4];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[4];
  auVar75._8_8_ = 0;
  auVar75._0_8_ = *param_3;
  uVar134 = SUB168(auVar11 * auVar75,8);
  uVar136 = param_3[1] * param_2[3];
  uVar132 = uVar130 + uVar133;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[3];
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_3[1];
  uVar131 = SUB168(auVar12 * auVar76,8);
  if (CARRY8(uVar130,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  uVar130 = uVar136 + uVar132;
  if (CARRY8(uVar136,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[2] * param_2[2];
  uVar132 = 2;
  if (!CARRY8(uVar138,uVar134)) {
    uVar132 = 1;
  }
  uVar136 = uVar131 + uVar138 + uVar134;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[2];
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_3[2];
  uVar137 = SUB168(auVar13 * auVar77,8);
  uVar129 = (ulong)CARRY8(uVar138,uVar134);
  if (CARRY8(uVar131,uVar138 + uVar134)) {
    uVar129 = uVar132;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[3] * param_2[1];
  uVar130 = uVar137 + uVar136;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[1];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_3[3];
  uVar134 = SUB168(auVar14 * auVar78,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar134 = uVar134 + 1;
  }
  uVar136 = param_3[4] * *param_2;
  uVar132 = uVar134 + uVar130;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_2;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = param_3[4];
  uVar131 = SUB168(auVar15 * auVar79,8);
  if (CARRY8(uVar134,uVar130)) {
    uVar129 = uVar129 + 1;
  }
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  param_1[4] = uVar136 + uVar133;
  uVar130 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = param_3[5] * *param_2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = param_3[5];
  uVar134 = SUB168(auVar16 * auVar80,8);
  uVar136 = param_3[4] * param_2[1];
  uVar132 = uVar130 + uVar133;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[1];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_3[4];
  uVar131 = SUB168(auVar17 * auVar81,8);
  if (CARRY8(uVar130,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  uVar130 = uVar136 + uVar132;
  if (CARRY8(uVar136,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[3] * param_2[2];
  uVar132 = 2;
  if (!CARRY8(uVar129,uVar134)) {
    uVar132 = 1;
  }
  uVar136 = uVar131 + uVar129 + uVar134;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[2];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_3[3];
  uVar137 = SUB168(auVar18 * auVar82,8);
  uVar138 = (ulong)CARRY8(uVar129,uVar134);
  if (CARRY8(uVar131,uVar129 + uVar134)) {
    uVar138 = uVar132;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[2] * param_2[3];
  uVar130 = uVar137 + uVar136;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[3];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_3[2];
  uVar134 = SUB168(auVar19 * auVar83,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar138 = uVar138 + 1;
  }
  uVar133 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar134 = uVar134 + 1;
  }
  uVar136 = param_3[1] * param_2[4];
  uVar132 = uVar134 + uVar130;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[4];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_3[1];
  uVar131 = SUB168(auVar20 * auVar84,8);
  if (CARRY8(uVar134,uVar130)) {
    uVar138 = uVar138 + 1;
  }
  uVar130 = uVar136 + uVar133;
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  uVar136 = *param_3 * param_2[5];
  uVar134 = uVar131 + uVar132;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[5];
  auVar85._8_8_ = 0;
  auVar85._0_8_ = *param_3;
  uVar133 = SUB168(auVar21 * auVar85,8);
  if (CARRY8(uVar131,uVar132)) {
    uVar138 = uVar138 + 1;
  }
  if (CARRY8(uVar136,uVar130)) {
    uVar133 = uVar133 + 1;
  }
  param_1[5] = uVar136 + uVar130;
  uVar130 = uVar133 + uVar134;
  if (CARRY8(uVar133,uVar134)) {
    uVar138 = uVar138 + 1;
  }
  uVar136 = *param_3 * param_2[6];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[6];
  auVar86._8_8_ = 0;
  auVar86._0_8_ = *param_3;
  uVar134 = SUB168(auVar22 * auVar86,8);
  uVar133 = param_3[1] * param_2[5];
  uVar132 = uVar130 + uVar136;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[5];
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_3[1];
  uVar131 = SUB168(auVar23 * auVar87,8);
  if (CARRY8(uVar130,uVar136)) {
    uVar134 = uVar134 + 1;
  }
  uVar130 = uVar133 + uVar132;
  if (CARRY8(uVar133,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[2] * param_2[4];
  uVar132 = 2;
  if (!CARRY8(uVar138,uVar134)) {
    uVar132 = 1;
  }
  uVar136 = uVar131 + uVar138 + uVar134;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[4];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_3[2];
  uVar137 = SUB168(auVar24 * auVar88,8);
  uVar129 = (ulong)CARRY8(uVar138,uVar134);
  if (CARRY8(uVar131,uVar138 + uVar134)) {
    uVar129 = uVar132;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[3] * param_2[3];
  uVar130 = uVar137 + uVar136;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[3];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_3[3];
  uVar134 = SUB168(auVar25 * auVar89,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar134 = uVar134 + 1;
  }
  uVar136 = param_3[4] * param_2[2];
  uVar132 = uVar134 + uVar130;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[2];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_3[4];
  uVar131 = SUB168(auVar26 * auVar90,8);
  if (CARRY8(uVar134,uVar130)) {
    uVar129 = uVar129 + 1;
  }
  uVar130 = uVar136 + uVar133;
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  uVar136 = param_3[5] * param_2[1];
  uVar134 = uVar131 + uVar132;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[1];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_3[5];
  uVar133 = SUB168(auVar27 * auVar91,8);
  if (CARRY8(uVar131,uVar132)) {
    uVar129 = uVar129 + 1;
  }
  uVar132 = uVar136 + uVar130;
  if (CARRY8(uVar136,uVar130)) {
    uVar133 = uVar133 + 1;
  }
  uVar136 = param_3[6] * *param_2;
  uVar130 = uVar133 + uVar134;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *param_2;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = param_3[6];
  uVar131 = SUB168(auVar28 * auVar92,8);
  if (CARRY8(uVar133,uVar134)) {
    uVar129 = uVar129 + 1;
  }
  if (CARRY8(uVar136,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  param_1[6] = uVar136 + uVar132;
  uVar132 = uVar131 + uVar130;
  if (CARRY8(uVar131,uVar130)) {
    uVar129 = uVar129 + 1;
  }
  uVar136 = param_3[7] * *param_2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *param_2;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = param_3[7];
  uVar134 = SUB168(auVar29 * auVar93,8);
  uVar133 = param_3[6] * param_2[1];
  uVar130 = uVar132 + uVar136;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[1];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = param_3[6];
  uVar131 = SUB168(auVar30 * auVar94,8);
  if (CARRY8(uVar132,uVar136)) {
    uVar134 = uVar134 + 1;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[5] * param_2[2];
  uVar130 = 2;
  if (!CARRY8(uVar129,uVar134)) {
    uVar130 = 1;
  }
  uVar136 = uVar131 + uVar129 + uVar134;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[2];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = param_3[5];
  uVar137 = SUB168(auVar31 * auVar95,8);
  uVar138 = (ulong)CARRY8(uVar129,uVar134);
  if (CARRY8(uVar131,uVar129 + uVar134)) {
    uVar138 = uVar130;
  }
  uVar130 = uVar133 + uVar132;
  if (CARRY8(uVar133,uVar132)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[4] * param_2[3];
  uVar132 = uVar137 + uVar136;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[3];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_3[4];
  uVar134 = SUB168(auVar32 * auVar96,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar138 = uVar138 + 1;
  }
  uVar133 = uVar131 + uVar130;
  if (CARRY8(uVar131,uVar130)) {
    uVar134 = uVar134 + 1;
  }
  uVar136 = param_3[3] * param_2[4];
  uVar130 = uVar134 + uVar132;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[4];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_3[3];
  uVar131 = SUB168(auVar33 * auVar97,8);
  if (CARRY8(uVar134,uVar132)) {
    uVar138 = uVar138 + 1;
  }
  uVar132 = uVar136 + uVar133;
  uVar134 = *param_3;
  uVar137 = param_2[7];
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  uVar129 = param_3[2] * param_2[5];
  uVar133 = uVar131 + uVar130;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[5];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_3[2];
  uVar136 = SUB168(auVar34 * auVar98,8);
  if (CARRY8(uVar131,uVar130)) {
    uVar138 = uVar138 + 1;
  }
  uVar130 = uVar129 + uVar132;
  if (CARRY8(uVar129,uVar132)) {
    uVar136 = uVar136 + 1;
  }
  uVar129 = param_3[1] * param_2[6];
  uVar132 = uVar136 + uVar133;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_3[1];
  uVar131 = SUB168(auVar35 * auVar99,8);
  if (CARRY8(uVar136,uVar133)) {
    uVar138 = uVar138 + 1;
  }
  uVar133 = uVar129 + uVar130;
  if (CARRY8(uVar129,uVar130)) {
    uVar131 = uVar131 + 1;
  }
  uVar136 = uVar134 * uVar137;
  uVar130 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar138 = uVar138 + 1;
  }
  param_1[7] = uVar136 + uVar133;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar137;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = uVar134;
  uVar132 = SUB168(auVar36 * auVar100,8);
  if (CARRY8(uVar136,uVar133)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = uVar132 + uVar130;
  uVar136 = param_3[1] * param_2[7];
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_2[7];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_3[1];
  uVar131 = SUB168(auVar37 * auVar101,8);
  uVar133 = param_3[2] * param_2[6];
  if (CARRY8(uVar132,uVar130)) {
    uVar138 = uVar138 + 1;
  }
  uVar130 = uVar134 + uVar136;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[6];
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_3[2];
  uVar132 = SUB168(auVar38 * auVar102,8);
  if (CARRY8(uVar134,uVar136)) {
    uVar131 = uVar131 + 1;
  }
  uVar134 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar132 = uVar132 + 1;
  }
  uVar133 = param_3[3] * param_2[5];
  uVar130 = 2;
  if (!CARRY8(uVar138,uVar131)) {
    uVar130 = 1;
  }
  uVar136 = uVar132 + uVar138 + uVar131;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[5];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_3[3];
  uVar137 = SUB168(auVar39 * auVar103,8);
  uVar129 = (ulong)CARRY8(uVar138,uVar131);
  if (CARRY8(uVar132,uVar138 + uVar131)) {
    uVar129 = uVar130;
  }
  uVar130 = uVar133 + uVar134;
  if (CARRY8(uVar133,uVar134)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[4] * param_2[4];
  uVar132 = uVar137 + uVar136;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[4];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_3[4];
  uVar134 = SUB168(auVar40 * auVar104,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = uVar131 + uVar130;
  if (CARRY8(uVar131,uVar130)) {
    uVar134 = uVar134 + 1;
  }
  uVar136 = param_3[5] * param_2[3];
  uVar130 = uVar134 + uVar132;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[3];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_3[5];
  uVar131 = SUB168(auVar41 * auVar105,8);
  if (CARRY8(uVar134,uVar132)) {
    uVar129 = uVar129 + 1;
  }
  uVar132 = uVar136 + uVar133;
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  uVar136 = param_3[6] * param_2[2];
  uVar134 = uVar131 + uVar130;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_3[6];
  uVar133 = SUB168(auVar42 * auVar106,8);
  if (CARRY8(uVar131,uVar130)) {
    uVar129 = uVar129 + 1;
  }
  uVar130 = uVar136 + uVar132;
  if (CARRY8(uVar136,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar136 = param_3[7] * param_2[1];
  uVar132 = uVar133 + uVar134;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[1];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_3[7];
  uVar131 = SUB168(auVar43 * auVar107,8);
  if (CARRY8(uVar133,uVar134)) {
    uVar129 = uVar129 + 1;
  }
  if (CARRY8(uVar136,uVar130)) {
    uVar131 = uVar131 + 1;
  }
  param_1[8] = uVar136 + uVar130;
  uVar130 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = param_3[7] * param_2[2];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[2];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_3[7];
  uVar134 = SUB168(auVar44 * auVar108,8);
  uVar136 = param_3[6] * param_2[3];
  uVar132 = uVar130 + uVar133;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[3];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_3[6];
  uVar131 = SUB168(auVar45 * auVar109,8);
  if (CARRY8(uVar130,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  uVar130 = uVar136 + uVar132;
  if (CARRY8(uVar136,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[5] * param_2[4];
  uVar132 = 2;
  if (!CARRY8(uVar129,uVar134)) {
    uVar132 = 1;
  }
  uVar136 = uVar131 + uVar129 + uVar134;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[4];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_3[5];
  uVar137 = SUB168(auVar46 * auVar110,8);
  uVar138 = (ulong)CARRY8(uVar129,uVar134);
  if (CARRY8(uVar131,uVar129 + uVar134)) {
    uVar138 = uVar132;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[4] * param_2[5];
  uVar130 = uVar137 + uVar136;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[5];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_3[4];
  uVar134 = SUB168(auVar47 * auVar111,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar138 = uVar138 + 1;
  }
  uVar133 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar134 = uVar134 + 1;
  }
  uVar136 = param_3[3] * param_2[6];
  uVar132 = uVar134 + uVar130;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[6];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_3[3];
  uVar131 = SUB168(auVar48 * auVar112,8);
  if (CARRY8(uVar134,uVar130)) {
    uVar138 = uVar138 + 1;
  }
  uVar130 = uVar136 + uVar133;
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  uVar136 = param_3[2] * param_2[7];
  uVar134 = uVar131 + uVar132;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[7];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_3[2];
  uVar133 = SUB168(auVar49 * auVar113,8);
  if (CARRY8(uVar131,uVar132)) {
    uVar138 = uVar138 + 1;
  }
  if (CARRY8(uVar136,uVar130)) {
    uVar133 = uVar133 + 1;
  }
  param_1[9] = uVar136 + uVar130;
  uVar130 = uVar133 + uVar134;
  if (CARRY8(uVar133,uVar134)) {
    uVar138 = uVar138 + 1;
  }
  uVar133 = param_3[3] * param_2[7];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[7];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_3[3];
  uVar134 = SUB168(auVar50 * auVar114,8);
  uVar136 = param_3[4] * param_2[6];
  uVar132 = uVar130 + uVar133;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[6];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_3[4];
  uVar131 = SUB168(auVar51 * auVar115,8);
  if (CARRY8(uVar130,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  uVar130 = uVar136 + uVar132;
  if (CARRY8(uVar136,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[5] * param_2[5];
  uVar132 = 2;
  if (!CARRY8(uVar138,uVar134)) {
    uVar132 = 1;
  }
  uVar136 = uVar131 + uVar138 + uVar134;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_2[5];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_3[5];
  uVar137 = SUB168(auVar52 * auVar116,8);
  uVar129 = (ulong)CARRY8(uVar138,uVar134);
  if (CARRY8(uVar131,uVar138 + uVar134)) {
    uVar129 = uVar132;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[6] * param_2[4];
  uVar130 = uVar137 + uVar136;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[4];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_3[6];
  uVar134 = SUB168(auVar53 * auVar117,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar134 = uVar134 + 1;
  }
  uVar136 = param_3[7] * param_2[3];
  uVar132 = uVar134 + uVar130;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[3];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_3[7];
  uVar131 = SUB168(auVar54 * auVar118,8);
  if (CARRY8(uVar134,uVar130)) {
    uVar129 = uVar129 + 1;
  }
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  param_1[10] = uVar136 + uVar133;
  uVar130 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar129 = uVar129 + 1;
  }
  uVar133 = param_3[7] * param_2[4];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[4];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_3[7];
  uVar134 = SUB168(auVar55 * auVar119,8);
  uVar136 = param_3[6] * param_2[5];
  uVar132 = uVar130 + uVar133;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[5];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_3[6];
  uVar131 = SUB168(auVar56 * auVar120,8);
  if (CARRY8(uVar130,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  uVar130 = uVar136 + uVar132;
  if (CARRY8(uVar136,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[5] * param_2[6];
  uVar132 = 2;
  if (!CARRY8(uVar129,uVar134)) {
    uVar132 = 1;
  }
  uVar136 = uVar131 + uVar129 + uVar134;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[6];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_3[5];
  uVar137 = SUB168(auVar57 * auVar121,8);
  uVar138 = (ulong)CARRY8(uVar129,uVar134);
  if (CARRY8(uVar131,uVar129 + uVar134)) {
    uVar138 = uVar132;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar137 = uVar137 + 1;
  }
  uVar131 = param_3[4] * param_2[7];
  uVar130 = uVar137 + uVar136;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[7];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_3[4];
  uVar134 = SUB168(auVar58 * auVar122,8);
  if (CARRY8(uVar137,uVar136)) {
    uVar138 = uVar138 + 1;
  }
  if (CARRY8(uVar131,uVar132)) {
    uVar134 = uVar134 + 1;
  }
  param_1[0xb] = uVar131 + uVar132;
  uVar132 = uVar134 + uVar130;
  if (CARRY8(uVar134,uVar130)) {
    uVar138 = uVar138 + 1;
  }
  uVar136 = param_3[5] * param_2[7];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[7];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_3[5];
  uVar134 = SUB168(auVar59 * auVar123,8);
  uVar133 = param_3[6] * param_2[6];
  uVar130 = uVar132 + uVar136;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[6];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_3[6];
  uVar131 = SUB168(auVar60 * auVar124,8);
  if (CARRY8(uVar132,uVar136)) {
    uVar134 = uVar134 + 1;
  }
  uVar132 = uVar133 + uVar130;
  if (CARRY8(uVar133,uVar130)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = param_3[7] * param_2[5];
  uVar130 = 2;
  if (!CARRY8(uVar138,uVar134)) {
    uVar130 = 1;
  }
  uVar136 = uVar131 + uVar138 + uVar134;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[5];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_3[7];
  uVar137 = SUB168(auVar61 * auVar125,8);
  uVar129 = (ulong)CARRY8(uVar138,uVar134);
  if (CARRY8(uVar131,uVar138 + uVar134)) {
    uVar129 = uVar130;
  }
  if (CARRY8(uVar133,uVar132)) {
    uVar137 = uVar137 + 1;
  }
  param_1[0xc] = uVar133 + uVar132;
  uVar132 = param_3[6];
  uVar130 = uVar137 + uVar136;
  uVar134 = param_2[7];
  if (CARRY8(uVar137,uVar136)) {
    uVar129 = uVar129 + 1;
  }
  uVar137 = param_3[7] * param_2[6];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[6];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_3[7];
  uVar133 = SUB168(auVar62 * auVar126,8);
  uVar136 = uVar132 * uVar134;
  uVar131 = uVar130 + uVar137;
  if (CARRY8(uVar130,uVar137)) {
    uVar133 = uVar133 + 1;
  }
  param_1[0xd] = uVar136 + uVar131;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = uVar134;
  auVar127._8_8_ = 0;
  auVar127._0_8_ = uVar132;
  uVar130 = SUB168(auVar63 * auVar127,8);
  if (CARRY8(uVar136,uVar131)) {
    uVar130 = uVar130 + 1;
  }
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_3[7];
  lVar135 = SUB168(auVar64 * auVar128,8);
  uVar132 = param_3[7] * param_2[7];
  if (CARRY8(uVar129,uVar133)) {
    lVar135 = lVar135 + 1;
  }
  uVar134 = uVar130 + uVar129 + uVar133;
  if (CARRY8(uVar130,uVar129 + uVar133)) {
    lVar135 = lVar135 + 1;
  }
  if (CARRY8(uVar134,uVar132)) {
    lVar135 = lVar135 + 1;
  }
  param_1[0xe] = uVar134 + uVar132;
  param_1[0xf] = lVar135;
  return;
}

