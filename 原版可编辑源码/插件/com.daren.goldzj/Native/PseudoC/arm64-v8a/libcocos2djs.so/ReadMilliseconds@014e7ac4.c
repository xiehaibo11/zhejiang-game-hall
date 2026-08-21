
/* v8::internal::DateParser::ReadMilliseconds(v8::internal::DateParser::DateToken) */

ulong __thiscall v8::internal::DateParser::ReadMilliseconds(DateParser *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar6 = (int)((ulong)this >> 0x20);
  iVar5 = (int)param_2;
  if (iVar6 < 3) {
    if (iVar6 == 2) {
      return (ulong)(uint)(iVar5 * 10);
    }
    if (iVar6 != 1) {
      return param_2;
    }
    return (ulong)(uint)(iVar5 * 100);
  }
  if (iVar6 == 3) {
    return param_2;
  }
  if (8 < iVar6) {
    iVar6 = 9;
  }
  iVar7 = iVar6 + -1;
  if (2 < iVar7) {
    iVar7 = 3;
  }
  uVar2 = iVar6 - iVar7;
  if (uVar2 < 8) {
    iVar7 = 1;
  }
  else {
    uVar1 = uVar2 & 0xfffffff8;
    iVar7 = 1;
    iVar8 = 1;
    iVar9 = 1;
    iVar10 = 1;
    iVar6 = iVar6 - uVar1;
    iVar12 = 1;
    iVar13 = 1;
    iVar14 = 1;
    iVar15 = 1;
    uVar3 = uVar1;
    do {
      iVar7 = iVar7 * 10;
      iVar8 = iVar8 * 10;
      iVar9 = iVar9 * 10;
      iVar10 = iVar10 * 10;
      uVar3 = uVar3 - 8;
      iVar12 = iVar12 * 10;
      iVar13 = iVar13 * 10;
      iVar14 = iVar14 * 10;
      iVar15 = iVar15 * 10;
    } while (uVar3 != 0);
    iVar12 = iVar12 * iVar7;
    iVar13 = iVar13 * iVar8;
    auVar11._4_4_ = iVar13;
    auVar11._0_4_ = iVar12;
    auVar11._8_4_ = iVar14 * iVar9;
    auVar11._12_4_ = iVar15 * iVar10;
    auVar4._4_4_ = iVar13;
    auVar4._0_4_ = iVar12;
    auVar4._8_4_ = iVar14 * iVar9;
    auVar4._12_4_ = iVar15 * iVar10;
    auVar11 = NEON_ext(auVar11,auVar4,8,1);
    iVar7 = iVar12 * auVar11._0_4_ * iVar13 * auVar11._4_4_;
    if (uVar2 == uVar1) goto LAB_014e7b88;
  }
  do {
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 * 10;
  } while (3 < iVar6);
LAB_014e7b88:
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = iVar5 / iVar7;
  }
  return (ulong)uVar2;
}

