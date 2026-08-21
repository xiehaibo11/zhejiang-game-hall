
void bn_sqr_words(ulong *rp,ulong *ap,int num)

{
  ulong *puVar1;
  uint uVar2;
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
  ulong *puVar13;
  ulong uVar14;
  
  if (0 < num) {
    if (3 < (uint)num) {
      uVar2 = num - 4;
      puVar1 = rp + (ulong)(uVar2 >> 2) * 8 + 8;
      puVar13 = ap;
      do {
        uVar14 = *puVar13;
        num = num - 4;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        *rp = uVar14 * uVar14;
        rp[1] = SUB168(auVar3 * auVar8,8);
        uVar14 = puVar13[1];
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar14;
        rp[2] = uVar14 * uVar14;
        rp[3] = SUB168(auVar4 * auVar9,8);
        uVar14 = puVar13[2];
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar14;
        rp[4] = uVar14 * uVar14;
        rp[5] = SUB168(auVar5 * auVar10,8);
        uVar14 = puVar13[3];
        puVar13 = puVar13 + 4;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar14;
        rp[6] = uVar14 * uVar14;
        rp[7] = SUB168(auVar6 * auVar11,8);
        rp = rp + 8;
      } while (3 < (uint)num);
      num = uVar2 & 3;
      if (num == 0) {
        return;
      }
      ap = ap + (ulong)(uVar2 & 0xfffffffc) + 4;
      rp = puVar1;
    }
    do {
      uVar14 = *ap;
      num = num - 1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar14;
      *rp = uVar14 * uVar14;
      rp[1] = SUB168(auVar7 * auVar12,8);
      ap = ap + 1;
      rp = rp + 2;
    } while (num != 0);
  }
  return;
}

