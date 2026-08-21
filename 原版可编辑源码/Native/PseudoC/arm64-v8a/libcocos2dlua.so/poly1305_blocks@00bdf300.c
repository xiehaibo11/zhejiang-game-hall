
void poly1305_blocks(ulong *param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  param_3 = param_3 & 0xfffffffffffffff0;
  if (param_3 != 0) {
    uVar14 = *param_1;
    uVar16 = param_1[1];
    uVar3 = param_1[4];
    uVar5 = param_1[5];
    uVar17 = param_1[2];
    uVar1 = uVar5 + (uVar5 >> 2);
    do {
      uVar4 = *param_2;
      uVar19 = param_2[1];
      param_3 = param_3 - 0x10;
      uVar2 = uVar14 + uVar4;
      uVar15 = uVar16 + uVar19 + (ulong)CARRY8(uVar14,uVar4);
      lVar18 = uVar17 + param_4 +
               (ulong)(CARRY8(uVar16,uVar19) || CARRY8(uVar16 + uVar19,(ulong)CARRY8(uVar14,uVar4)))
      ;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar3;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar1;
      uVar17 = uVar2 * uVar3 + uVar15 * uVar1;
      uVar20 = SUB168(auVar6 * auVar10,8) + SUB168(auVar7 * auVar11,8) +
               (ulong)CARRY8(uVar2 * uVar3,uVar15 * uVar1);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar2;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar5;
      uVar14 = uVar20 + uVar2 * uVar5;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar15;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar3;
      uVar16 = uVar14 + uVar15 * uVar3;
      uVar19 = lVar18 * uVar1;
      uVar4 = uVar16 + uVar19;
      uVar19 = SUB168(auVar8 * auVar12,8) + (ulong)CARRY8(uVar20,uVar2 * uVar5) +
               SUB168(auVar9 * auVar13,8) + (ulong)CARRY8(uVar14,uVar15 * uVar3) + lVar18 * uVar3 +
               (ulong)CARRY8(uVar16,uVar19);
      uVar2 = (uVar19 & 0xfffffffffffffffc) + (uVar19 >> 2);
      uVar14 = uVar17 + uVar2;
      uVar16 = uVar4 + CARRY8(uVar17,uVar2);
      uVar17 = (uVar19 & 3) + (ulong)CARRY8(uVar4,(ulong)CARRY8(uVar17,uVar2));
      param_2 = param_2 + 2;
    } while (param_3 != 0);
    *param_1 = uVar14;
    param_1[1] = uVar16;
    param_1[2] = uVar17;
  }
  return;
}

