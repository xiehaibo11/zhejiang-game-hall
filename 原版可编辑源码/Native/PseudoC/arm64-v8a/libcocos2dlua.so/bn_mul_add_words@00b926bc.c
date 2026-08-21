
ulong bn_mul_add_words(ulong *rp,ulong *ap,int num,ulong w)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
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
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if (num < 1) {
    return 0;
  }
  if ((uint)num < 4) {
    uVar15 = 0;
  }
  else {
    uVar4 = num - 4;
    lVar2 = (ulong)(uVar4 & 0xfffffffc) + 4;
    uVar15 = 0;
    puVar3 = rp + lVar2;
    puVar16 = ap;
    do {
      num = num - 4;
      uVar19 = *rp + uVar15;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = w;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar16;
      uVar17 = SUB168(auVar5 * auVar10,8);
      uVar18 = *puVar16 * w;
      if (CARRY8(*rp,uVar15)) {
        uVar17 = uVar17 + 1;
      }
      *rp = uVar19 + uVar18;
      if (CARRY8(uVar19,uVar18)) {
        uVar17 = uVar17 + 1;
      }
      uVar15 = uVar17 + rp[1];
      auVar6._8_8_ = 0;
      auVar6._0_8_ = w;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = puVar16[1];
      uVar19 = SUB168(auVar6 * auVar11,8);
      uVar18 = puVar16[1] * w;
      if (CARRY8(uVar17,rp[1])) {
        uVar19 = uVar19 + 1;
      }
      rp[1] = uVar15 + uVar18;
      if (CARRY8(uVar15,uVar18)) {
        uVar19 = uVar19 + 1;
      }
      uVar15 = uVar19 + rp[2];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = w;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = puVar16[2];
      uVar17 = SUB168(auVar7 * auVar12,8);
      uVar18 = puVar16[2] * w;
      if (CARRY8(uVar19,rp[2])) {
        uVar17 = uVar17 + 1;
      }
      rp[2] = uVar15 + uVar18;
      puVar1 = puVar16 + 3;
      if (CARRY8(uVar15,uVar18)) {
        uVar17 = uVar17 + 1;
      }
      uVar19 = uVar17 + rp[3];
      puVar16 = puVar16 + 4;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = w;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *puVar1;
      uVar15 = SUB168(auVar8 * auVar13,8);
      uVar18 = *puVar1 * w;
      if (CARRY8(uVar17,rp[3])) {
        uVar15 = uVar15 + 1;
      }
      if (CARRY8(uVar19,uVar18)) {
        uVar15 = uVar15 + 1;
      }
      rp[3] = uVar19 + uVar18;
      rp = rp + 4;
    } while (3 < (uint)num);
    num = uVar4 & 3;
    if (num == 0) {
      return uVar15;
    }
    rp = puVar3;
    ap = ap + lVar2;
  }
  do {
    num = num - 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = w;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *ap;
    uVar17 = SUB168(auVar9 * auVar14,8);
    uVar19 = *rp + uVar15;
    uVar18 = *ap * w;
    if (CARRY8(*rp,uVar15)) {
      uVar17 = uVar17 + 1;
    }
    if (CARRY8(uVar19,uVar18)) {
      uVar17 = uVar17 + 1;
    }
    *rp = uVar19 + uVar18;
    rp = rp + 1;
    ap = ap + 1;
    uVar15 = uVar17;
  } while (num != 0);
  return uVar17;
}

