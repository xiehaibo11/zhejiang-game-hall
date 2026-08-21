
ulong bn_mul_words(ulong *rp,ulong *ap,int num,ulong w)

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
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
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
    puVar17 = ap;
    do {
      uVar18 = *puVar17;
      num = num - 4;
      uVar19 = uVar18 * w;
      *rp = uVar19 + uVar15;
      uVar16 = puVar17[1];
      auVar5._8_8_ = 0;
      auVar5._0_8_ = w;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar18;
      uVar18 = SUB168(auVar5 * auVar10,8);
      if (CARRY8(uVar19,uVar15)) {
        uVar18 = uVar18 + 1;
      }
      uVar20 = uVar16 * w;
      rp[1] = uVar18 + uVar20;
      uVar19 = puVar17[2];
      auVar6._8_8_ = 0;
      auVar6._0_8_ = w;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar16;
      uVar16 = uVar19 * w;
      uVar15 = uVar16 + SUB168(auVar6 * auVar11,8);
      if (CARRY8(uVar18,uVar20)) {
        uVar15 = uVar15 + 1;
      }
      rp[2] = uVar15;
      puVar1 = puVar17 + 3;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = w;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar19;
      puVar17 = puVar17 + 4;
      uVar19 = *puVar1 * w;
      uVar18 = uVar19 + SUB168(auVar7 * auVar12,8);
      if (uVar15 < uVar16) {
        uVar18 = uVar18 + 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = w;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *puVar1;
      uVar15 = SUB168(auVar8 * auVar13,8);
      rp[3] = uVar18;
      if (uVar18 < uVar19) {
        uVar15 = uVar15 + 1;
      }
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
    uVar16 = *ap * w;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = w;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *ap;
    uVar18 = SUB168(auVar9 * auVar14,8);
    if (CARRY8(uVar16,uVar15)) {
      uVar18 = uVar18 + 1;
    }
    *rp = uVar16 + uVar15;
    rp = rp + 1;
    ap = ap + 1;
    uVar15 = uVar18;
  } while (num != 0);
  return uVar18;
}

