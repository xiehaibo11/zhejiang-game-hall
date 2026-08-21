
void bn_sqr_comba8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  ulong uVar76;
  ulong uVar77;
  ulong uVar78;
  long lVar79;
  ulong uVar80;
  ulong uVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  ulong uVar85;
  ulong uVar86;
  
  uVar76 = *param_2;
  *param_1 = uVar76 * uVar76;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar76;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar76;
  uVar77 = SUB168(auVar4 * auVar40,8);
  uVar80 = *param_2 * param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[1];
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *param_2;
  uVar78 = SUB168(auVar5 * auVar41,8);
  uVar76 = uVar80 + uVar77;
  uVar2 = uVar78;
  if (CARRY8(uVar80,uVar77)) {
    uVar2 = uVar78 + 1;
  }
  param_1[1] = uVar76 + uVar80;
  if (CARRY8(uVar76,uVar80)) {
    uVar78 = uVar78 + 1;
  }
  uVar82 = param_2[1];
  uVar81 = (ulong)CARRY8(uVar2,uVar78);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar82;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar82;
  uVar77 = SUB168(auVar6 * auVar42,8);
  uVar85 = *param_2 * param_2[2];
  uVar76 = uVar2 + uVar78 + uVar82 * uVar82;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *param_2;
  uVar80 = SUB168(auVar7 * auVar43,8);
  if (CARRY8(uVar2 + uVar78,uVar82 * uVar82)) {
    uVar77 = uVar77 + 1;
  }
  uVar2 = uVar76 + uVar85;
  uVar78 = uVar80;
  if (CARRY8(uVar76,uVar85)) {
    uVar78 = uVar80 + 1;
  }
  uVar76 = 2;
  if (!CARRY8(uVar77,uVar81)) {
    uVar76 = 1;
  }
  uVar82 = uVar77 + uVar81 + uVar78;
  uVar83 = (ulong)CARRY8(uVar77,uVar81);
  if (CARRY8(uVar77 + uVar81,uVar78)) {
    uVar83 = uVar76;
  }
  if (CARRY8(uVar2,uVar85)) {
    uVar80 = uVar80 + 1;
  }
  param_1[2] = uVar2 + uVar85;
  uVar76 = uVar82 + uVar80;
  if (CARRY8(uVar82,uVar80)) {
    uVar83 = uVar83 + 1;
  }
  uVar81 = *param_2 * param_2[3];
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = *param_2;
  uVar77 = SUB168(auVar8 * auVar44,8);
  uVar2 = uVar76 + uVar81;
  uVar82 = param_2[1] * param_2[2];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[1];
  uVar80 = SUB168(auVar9 * auVar45,8);
  uVar78 = uVar77;
  if (CARRY8(uVar76,uVar81)) {
    uVar78 = uVar77 + 1;
  }
  uVar76 = uVar2 + uVar81;
  if (CARRY8(uVar2,uVar81)) {
    uVar77 = uVar77 + 1;
  }
  uVar2 = 2;
  if (!CARRY8(uVar83,uVar78)) {
    uVar2 = 1;
  }
  uVar81 = uVar83 + uVar78 + uVar77;
  uVar85 = (ulong)CARRY8(uVar83,uVar78);
  if (CARRY8(uVar83 + uVar78,uVar77)) {
    uVar85 = uVar2;
  }
  uVar2 = uVar76 + uVar82;
  uVar78 = uVar80;
  if (CARRY8(uVar76,uVar82)) {
    uVar78 = uVar80 + 1;
  }
  uVar76 = uVar81 + uVar78;
  if (CARRY8(uVar81,uVar78)) {
    uVar85 = uVar85 + 1;
  }
  if (CARRY8(uVar2,uVar82)) {
    uVar80 = uVar80 + 1;
  }
  param_1[3] = uVar2 + uVar82;
  uVar2 = uVar76 + uVar80;
  uVar78 = param_2[2];
  if (CARRY8(uVar76,uVar80)) {
    uVar85 = uVar85 + 1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar78;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar78;
  uVar77 = SUB168(auVar10 * auVar46,8);
  uVar82 = param_2[1] * param_2[3];
  uVar76 = uVar2 + uVar78 * uVar78;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[3];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[1];
  uVar80 = SUB168(auVar11 * auVar47,8);
  if (CARRY8(uVar2,uVar78 * uVar78)) {
    uVar77 = uVar77 + 1;
  }
  uVar2 = uVar76 + uVar82;
  uVar83 = *param_2 * param_2[4];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[4];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = *param_2;
  uVar81 = SUB168(auVar12 * auVar48,8);
  uVar78 = uVar80;
  if (CARRY8(uVar76,uVar82)) {
    uVar78 = uVar80 + 1;
  }
  uVar76 = 2;
  if (!CARRY8(uVar85,uVar77)) {
    uVar76 = 1;
  }
  uVar84 = uVar85 + uVar77 + uVar78;
  uVar86 = (ulong)CARRY8(uVar85,uVar77);
  if (CARRY8(uVar85 + uVar77,uVar78)) {
    uVar86 = uVar76;
  }
  uVar76 = uVar2 + uVar82;
  if (CARRY8(uVar2,uVar82)) {
    uVar80 = uVar80 + 1;
  }
  uVar2 = uVar84 + uVar80;
  if (CARRY8(uVar84,uVar80)) {
    uVar86 = uVar86 + 1;
  }
  uVar78 = uVar76 + uVar83;
  uVar77 = uVar81;
  if (CARRY8(uVar76,uVar83)) {
    uVar77 = uVar81 + 1;
  }
  uVar76 = uVar2 + uVar77;
  if (CARRY8(uVar2,uVar77)) {
    uVar86 = uVar86 + 1;
  }
  if (CARRY8(uVar78,uVar83)) {
    uVar81 = uVar81 + 1;
  }
  param_1[4] = uVar78 + uVar83;
  uVar2 = uVar76 + uVar81;
  if (CARRY8(uVar76,uVar81)) {
    uVar86 = uVar86 + 1;
  }
  uVar83 = *param_2 * param_2[5];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[5];
  auVar49._8_8_ = 0;
  auVar49._0_8_ = *param_2;
  uVar77 = SUB168(auVar13 * auVar49,8);
  uVar76 = uVar2 + uVar83;
  uVar81 = param_2[1] * param_2[4];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[4];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[1];
  uVar80 = SUB168(auVar14 * auVar50,8);
  uVar85 = param_2[2] * param_2[3];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[3];
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[2];
  uVar82 = SUB168(auVar15 * auVar51,8);
  uVar78 = uVar77;
  if (CARRY8(uVar2,uVar83)) {
    uVar78 = uVar77 + 1;
  }
  uVar2 = uVar76 + uVar83;
  if (CARRY8(uVar76,uVar83)) {
    uVar77 = uVar77 + 1;
  }
  uVar76 = 2;
  if (!CARRY8(uVar86,uVar78)) {
    uVar76 = 1;
  }
  uVar83 = uVar86 + uVar78 + uVar77;
  uVar84 = (ulong)CARRY8(uVar86,uVar78);
  if (CARRY8(uVar86 + uVar78,uVar77)) {
    uVar84 = uVar76;
  }
  uVar76 = uVar2 + uVar81;
  uVar78 = uVar80;
  if (CARRY8(uVar2,uVar81)) {
    uVar78 = uVar80 + 1;
  }
  uVar2 = uVar83 + uVar78;
  if (CARRY8(uVar83,uVar78)) {
    uVar84 = uVar84 + 1;
  }
  uVar78 = uVar76 + uVar81;
  if (CARRY8(uVar76,uVar81)) {
    uVar80 = uVar80 + 1;
  }
  uVar76 = uVar2 + uVar80;
  if (CARRY8(uVar2,uVar80)) {
    uVar84 = uVar84 + 1;
  }
  uVar2 = uVar78 + uVar85;
  uVar77 = uVar82;
  if (CARRY8(uVar78,uVar85)) {
    uVar77 = uVar82 + 1;
  }
  uVar78 = uVar76 + uVar77;
  if (CARRY8(uVar76,uVar77)) {
    uVar84 = uVar84 + 1;
  }
  if (CARRY8(uVar2,uVar85)) {
    uVar82 = uVar82 + 1;
  }
  param_1[5] = uVar2 + uVar85;
  uVar76 = uVar78 + uVar82;
  uVar2 = param_2[3];
  if (CARRY8(uVar78,uVar82)) {
    uVar84 = uVar84 + 1;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar2;
  uVar77 = SUB168(auVar16 * auVar52,8);
  uVar82 = param_2[2] * param_2[4];
  uVar78 = uVar76 + uVar2 * uVar2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[4];
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[2];
  uVar80 = SUB168(auVar17 * auVar53,8);
  if (CARRY8(uVar76,uVar2 * uVar2)) {
    uVar77 = uVar77 + 1;
  }
  uVar76 = uVar78 + uVar82;
  uVar83 = param_2[1] * param_2[5];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[5];
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[1];
  uVar81 = SUB168(auVar18 * auVar54,8);
  uVar86 = *param_2 * param_2[6];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[6];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = *param_2;
  uVar85 = SUB168(auVar19 * auVar55,8);
  uVar2 = uVar80;
  if (CARRY8(uVar78,uVar82)) {
    uVar2 = uVar80 + 1;
  }
  uVar78 = 2;
  if (!CARRY8(uVar84,uVar77)) {
    uVar78 = 1;
  }
  uVar1 = uVar84 + uVar77 + uVar2;
  uVar3 = (ulong)CARRY8(uVar84,uVar77);
  if (CARRY8(uVar84 + uVar77,uVar2)) {
    uVar3 = uVar78;
  }
  uVar2 = uVar76 + uVar82;
  if (CARRY8(uVar76,uVar82)) {
    uVar80 = uVar80 + 1;
  }
  uVar76 = uVar1 + uVar80;
  if (CARRY8(uVar1,uVar80)) {
    uVar3 = uVar3 + 1;
  }
  uVar78 = uVar2 + uVar83;
  uVar77 = uVar81;
  if (CARRY8(uVar2,uVar83)) {
    uVar77 = uVar81 + 1;
  }
  uVar2 = uVar76 + uVar77;
  if (CARRY8(uVar76,uVar77)) {
    uVar3 = uVar3 + 1;
  }
  uVar76 = uVar78 + uVar83;
  if (CARRY8(uVar78,uVar83)) {
    uVar81 = uVar81 + 1;
  }
  uVar78 = uVar2 + uVar81;
  if (CARRY8(uVar2,uVar81)) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = uVar76 + uVar86;
  uVar77 = uVar85;
  if (CARRY8(uVar76,uVar86)) {
    uVar77 = uVar85 + 1;
  }
  uVar76 = uVar78 + uVar77;
  if (CARRY8(uVar78,uVar77)) {
    uVar3 = uVar3 + 1;
  }
  if (CARRY8(uVar2,uVar86)) {
    uVar85 = uVar85 + 1;
  }
  param_1[6] = uVar2 + uVar86;
  uVar2 = uVar76 + uVar85;
  if (CARRY8(uVar76,uVar85)) {
    uVar3 = uVar3 + 1;
  }
  uVar85 = *param_2 * param_2[7];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[7];
  auVar56._8_8_ = 0;
  auVar56._0_8_ = *param_2;
  uVar77 = SUB168(auVar20 * auVar56,8);
  uVar76 = uVar2 + uVar85;
  uVar83 = param_2[1] * param_2[6];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[6];
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[1];
  uVar80 = SUB168(auVar21 * auVar57,8);
  uVar84 = param_2[2] * param_2[5];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[5];
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[2];
  uVar82 = SUB168(auVar22 * auVar58,8);
  uVar86 = param_2[3] * param_2[4];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[4];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[3];
  uVar81 = SUB168(auVar23 * auVar59,8);
  uVar78 = uVar77;
  if (CARRY8(uVar2,uVar85)) {
    uVar78 = uVar77 + 1;
  }
  uVar2 = uVar76 + uVar85;
  if (CARRY8(uVar76,uVar85)) {
    uVar77 = uVar77 + 1;
  }
  uVar76 = 2;
  if (!CARRY8(uVar3,uVar78)) {
    uVar76 = 1;
  }
  uVar85 = uVar3 + uVar78 + uVar77;
  uVar1 = (ulong)CARRY8(uVar3,uVar78);
  if (CARRY8(uVar3 + uVar78,uVar77)) {
    uVar1 = uVar76;
  }
  uVar76 = uVar2 + uVar83;
  uVar78 = uVar80;
  if (CARRY8(uVar2,uVar83)) {
    uVar78 = uVar80 + 1;
  }
  uVar2 = uVar85 + uVar78;
  if (CARRY8(uVar85,uVar78)) {
    uVar1 = uVar1 + 1;
  }
  uVar78 = uVar76 + uVar83;
  if (CARRY8(uVar76,uVar83)) {
    uVar80 = uVar80 + 1;
  }
  uVar76 = uVar2 + uVar80;
  if (CARRY8(uVar2,uVar80)) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = uVar78 + uVar84;
  uVar77 = uVar82;
  if (CARRY8(uVar78,uVar84)) {
    uVar77 = uVar82 + 1;
  }
  uVar78 = uVar76 + uVar77;
  if (CARRY8(uVar76,uVar77)) {
    uVar1 = uVar1 + 1;
  }
  uVar76 = uVar2 + uVar84;
  if (CARRY8(uVar2,uVar84)) {
    uVar82 = uVar82 + 1;
  }
  uVar2 = uVar78 + uVar82;
  if (CARRY8(uVar78,uVar82)) {
    uVar1 = uVar1 + 1;
  }
  uVar78 = uVar76 + uVar86;
  uVar77 = uVar81;
  if (CARRY8(uVar76,uVar86)) {
    uVar77 = uVar81 + 1;
  }
  uVar76 = uVar2 + uVar77;
  if (CARRY8(uVar2,uVar77)) {
    uVar1 = uVar1 + 1;
  }
  if (CARRY8(uVar78,uVar86)) {
    uVar81 = uVar81 + 1;
  }
  param_1[7] = uVar78 + uVar86;
  uVar2 = uVar76 + uVar81;
  uVar78 = param_2[4];
  if (CARRY8(uVar76,uVar81)) {
    uVar1 = uVar1 + 1;
  }
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar78;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar78;
  uVar77 = SUB168(auVar24 * auVar60,8);
  uVar82 = param_2[3] * param_2[5];
  uVar76 = uVar2 + uVar78 * uVar78;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[5];
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[3];
  uVar80 = SUB168(auVar25 * auVar61,8);
  if (CARRY8(uVar2,uVar78 * uVar78)) {
    uVar77 = uVar77 + 1;
  }
  uVar2 = uVar76 + uVar82;
  uVar83 = param_2[2] * param_2[6];
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[6];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[2];
  uVar81 = SUB168(auVar26 * auVar62,8);
  uVar84 = param_2[1] * param_2[7];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[7];
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[1];
  uVar85 = SUB168(auVar27 * auVar63,8);
  uVar78 = uVar80;
  if (CARRY8(uVar76,uVar82)) {
    uVar78 = uVar80 + 1;
  }
  uVar76 = 2;
  if (!CARRY8(uVar1,uVar77)) {
    uVar76 = 1;
  }
  uVar86 = uVar1 + uVar77 + uVar78;
  uVar3 = (ulong)CARRY8(uVar1,uVar77);
  if (CARRY8(uVar1 + uVar77,uVar78)) {
    uVar3 = uVar76;
  }
  uVar76 = uVar2 + uVar82;
  if (CARRY8(uVar2,uVar82)) {
    uVar80 = uVar80 + 1;
  }
  uVar2 = uVar86 + uVar80;
  if (CARRY8(uVar86,uVar80)) {
    uVar3 = uVar3 + 1;
  }
  uVar78 = uVar76 + uVar83;
  uVar77 = uVar81;
  if (CARRY8(uVar76,uVar83)) {
    uVar77 = uVar81 + 1;
  }
  uVar76 = uVar2 + uVar77;
  if (CARRY8(uVar2,uVar77)) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = uVar78 + uVar83;
  if (CARRY8(uVar78,uVar83)) {
    uVar81 = uVar81 + 1;
  }
  uVar78 = uVar76 + uVar81;
  if (CARRY8(uVar76,uVar81)) {
    uVar3 = uVar3 + 1;
  }
  uVar76 = uVar84 + uVar2;
  uVar77 = uVar85;
  if (CARRY8(uVar84,uVar2)) {
    uVar77 = uVar85 + 1;
  }
  uVar2 = uVar77 + uVar78;
  if (CARRY8(uVar77,uVar78)) {
    uVar3 = uVar3 + 1;
  }
  if (CARRY8(uVar76,uVar84)) {
    uVar85 = uVar85 + 1;
  }
  param_1[8] = uVar76 + uVar84;
  uVar76 = uVar2 + uVar85;
  if (CARRY8(uVar2,uVar85)) {
    uVar3 = uVar3 + 1;
  }
  uVar83 = param_2[2] * param_2[7];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[7];
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[2];
  uVar77 = SUB168(auVar28 * auVar64,8);
  uVar2 = uVar76 + uVar83;
  uVar81 = param_2[3] * param_2[6];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[6];
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[3];
  uVar80 = SUB168(auVar29 * auVar65,8);
  uVar85 = param_2[4] * param_2[5];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[5];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[4];
  uVar82 = SUB168(auVar30 * auVar66,8);
  uVar78 = uVar77;
  if (CARRY8(uVar76,uVar83)) {
    uVar78 = uVar77 + 1;
  }
  uVar76 = uVar2 + uVar83;
  if (CARRY8(uVar2,uVar83)) {
    uVar77 = uVar77 + 1;
  }
  uVar2 = 2;
  if (!CARRY8(uVar3,uVar78)) {
    uVar2 = 1;
  }
  uVar83 = uVar3 + uVar78 + uVar77;
  uVar84 = (ulong)CARRY8(uVar3,uVar78);
  if (CARRY8(uVar3 + uVar78,uVar77)) {
    uVar84 = uVar2;
  }
  uVar2 = uVar76 + uVar81;
  uVar78 = uVar80;
  if (CARRY8(uVar76,uVar81)) {
    uVar78 = uVar80 + 1;
  }
  uVar76 = uVar83 + uVar78;
  if (CARRY8(uVar83,uVar78)) {
    uVar84 = uVar84 + 1;
  }
  uVar78 = uVar2 + uVar81;
  if (CARRY8(uVar2,uVar81)) {
    uVar80 = uVar80 + 1;
  }
  uVar2 = uVar76 + uVar80;
  if (CARRY8(uVar76,uVar80)) {
    uVar84 = uVar84 + 1;
  }
  uVar76 = uVar78 + uVar85;
  uVar77 = uVar82;
  if (CARRY8(uVar78,uVar85)) {
    uVar77 = uVar82 + 1;
  }
  uVar78 = uVar2 + uVar77;
  if (CARRY8(uVar2,uVar77)) {
    uVar84 = uVar84 + 1;
  }
  if (CARRY8(uVar76,uVar85)) {
    uVar82 = uVar82 + 1;
  }
  param_1[9] = uVar76 + uVar85;
  uVar76 = uVar78 + uVar82;
  uVar2 = param_2[5];
  if (CARRY8(uVar78,uVar82)) {
    uVar84 = uVar84 + 1;
  }
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar2;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = uVar2;
  uVar77 = SUB168(auVar31 * auVar67,8);
  uVar82 = param_2[4] * param_2[6];
  uVar78 = uVar76 + uVar2 * uVar2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[6];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[4];
  uVar80 = SUB168(auVar32 * auVar68,8);
  if (CARRY8(uVar76,uVar2 * uVar2)) {
    uVar77 = uVar77 + 1;
  }
  uVar76 = uVar78 + uVar82;
  uVar85 = param_2[3] * param_2[7];
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[7];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[3];
  uVar81 = SUB168(auVar33 * auVar69,8);
  uVar2 = uVar80;
  if (CARRY8(uVar78,uVar82)) {
    uVar2 = uVar80 + 1;
  }
  uVar78 = 2;
  if (!CARRY8(uVar84,uVar77)) {
    uVar78 = 1;
  }
  uVar83 = uVar84 + uVar77 + uVar2;
  uVar86 = (ulong)CARRY8(uVar84,uVar77);
  if (CARRY8(uVar84 + uVar77,uVar2)) {
    uVar86 = uVar78;
  }
  uVar2 = uVar76 + uVar82;
  if (CARRY8(uVar76,uVar82)) {
    uVar80 = uVar80 + 1;
  }
  uVar76 = uVar83 + uVar80;
  if (CARRY8(uVar83,uVar80)) {
    uVar86 = uVar86 + 1;
  }
  uVar78 = uVar2 + uVar85;
  uVar77 = uVar81;
  if (CARRY8(uVar2,uVar85)) {
    uVar77 = uVar81 + 1;
  }
  uVar2 = uVar76 + uVar77;
  if (CARRY8(uVar76,uVar77)) {
    uVar86 = uVar86 + 1;
  }
  if (CARRY8(uVar78,uVar85)) {
    uVar81 = uVar81 + 1;
  }
  param_1[10] = uVar78 + uVar85;
  uVar76 = uVar2 + uVar81;
  if (CARRY8(uVar2,uVar81)) {
    uVar86 = uVar86 + 1;
  }
  uVar81 = param_2[4] * param_2[7];
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[7];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[4];
  uVar77 = SUB168(auVar34 * auVar70,8);
  uVar2 = uVar76 + uVar81;
  uVar82 = param_2[5] * param_2[6];
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[5];
  uVar80 = SUB168(auVar35 * auVar71,8);
  uVar78 = uVar77;
  if (CARRY8(uVar76,uVar81)) {
    uVar78 = uVar77 + 1;
  }
  uVar76 = uVar2 + uVar81;
  if (CARRY8(uVar2,uVar81)) {
    uVar77 = uVar77 + 1;
  }
  uVar2 = 2;
  if (!CARRY8(uVar86,uVar78)) {
    uVar2 = 1;
  }
  uVar81 = uVar86 + uVar78 + uVar77;
  uVar85 = (ulong)CARRY8(uVar86,uVar78);
  if (CARRY8(uVar86 + uVar78,uVar77)) {
    uVar85 = uVar2;
  }
  uVar2 = uVar76 + uVar82;
  uVar78 = uVar80;
  if (CARRY8(uVar76,uVar82)) {
    uVar78 = uVar80 + 1;
  }
  uVar76 = uVar81 + uVar78;
  if (CARRY8(uVar81,uVar78)) {
    uVar85 = uVar85 + 1;
  }
  param_1[0xb] = uVar2 + uVar82;
  if (CARRY8(uVar2,uVar82)) {
    uVar80 = uVar80 + 1;
  }
  uVar78 = param_2[6];
  uVar2 = uVar76 + uVar80;
  if (CARRY8(uVar76,uVar80)) {
    uVar85 = uVar85 + 1;
  }
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar78;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = uVar78;
  uVar77 = SUB168(auVar36 * auVar72,8);
  uVar82 = param_2[5] * param_2[7];
  uVar76 = uVar2 + uVar78 * uVar78;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_2[7];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[5];
  uVar80 = SUB168(auVar37 * auVar73,8);
  if (CARRY8(uVar2,uVar78 * uVar78)) {
    uVar77 = uVar77 + 1;
  }
  uVar2 = uVar76 + uVar82;
  uVar78 = uVar80;
  if (CARRY8(uVar76,uVar82)) {
    uVar78 = uVar80 + 1;
  }
  uVar76 = 2;
  if (!CARRY8(uVar85,uVar77)) {
    uVar76 = 1;
  }
  uVar81 = uVar85 + uVar77 + uVar78;
  uVar83 = (ulong)CARRY8(uVar85,uVar77);
  if (CARRY8(uVar85 + uVar77,uVar78)) {
    uVar83 = uVar76;
  }
  param_1[0xc] = uVar2 + uVar82;
  if (CARRY8(uVar2,uVar82)) {
    uVar80 = uVar80 + 1;
  }
  uVar76 = uVar81 + uVar80;
  if (CARRY8(uVar81,uVar80)) {
    uVar83 = uVar83 + 1;
  }
  uVar80 = param_2[6] * param_2[7];
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[7];
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_2[6];
  uVar77 = SUB168(auVar38 * auVar74,8);
  uVar2 = uVar76 + uVar80;
  uVar78 = uVar77;
  if (CARRY8(uVar76,uVar80)) {
    uVar78 = uVar77 + 1;
  }
  param_1[0xd] = uVar2 + uVar80;
  uVar76 = param_2[7];
  if (CARRY8(uVar2,uVar80)) {
    uVar77 = uVar77 + 1;
  }
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar76;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = uVar76;
  lVar79 = SUB168(auVar39 * auVar75,8);
  if (CARRY8(uVar83,uVar78)) {
    lVar79 = lVar79 + 1;
  }
  uVar2 = uVar83 + uVar78 + uVar77;
  if (CARRY8(uVar83 + uVar78,uVar77)) {
    lVar79 = lVar79 + 1;
  }
  if (CARRY8(uVar2,uVar76 * uVar76)) {
    lVar79 = lVar79 + 1;
  }
  param_1[0xe] = uVar2 + uVar76 * uVar76;
  param_1[0xf] = lVar79;
  return;
}

