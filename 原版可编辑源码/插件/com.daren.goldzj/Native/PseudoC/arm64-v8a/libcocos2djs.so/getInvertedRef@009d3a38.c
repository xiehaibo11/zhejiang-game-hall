
/* cocos2d::renderer::StencilManager::getInvertedRef() */

int __thiscall cocos2d::renderer::StencilManager::getInvertedRef(StencilManager *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar1 = *(long *)(this + 0x10) - 1;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 < 8) {
    uVar4 = 0;
    iVar6 = 0;
  }
  else {
    iVar12 = 2;
    iVar13 = 3;
    iVar10 = 0;
    iVar11 = 1;
    uVar4 = uVar1 & 0xfffffffffffffff8;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    uVar5 = uVar4;
    do {
      auVar18._0_4_ = iVar10 + 4;
      auVar18._4_4_ = iVar11 + 4;
      auVar18._8_4_ = iVar12 + 4;
      auVar18._12_4_ = iVar13 + 4;
      auVar19._4_4_ = iVar11;
      auVar19._0_4_ = iVar10;
      auVar19._8_4_ = iVar12;
      auVar19._12_4_ = iVar13;
      auVar20._8_4_ = 1;
      auVar20._0_8_ = 0x100000001;
      auVar20._12_4_ = 1;
      auVar20 = NEON_ushl(auVar20,auVar19,4);
      auVar2._8_4_ = 1;
      auVar2._0_8_ = 0x100000001;
      auVar2._12_4_ = 1;
      auVar19 = NEON_ushl(auVar2,auVar18,4);
      uVar5 = uVar5 - 8;
      iVar6 = auVar20._0_4_ + iVar6;
      iVar7 = auVar20._4_4_ + iVar7;
      iVar8 = auVar20._8_4_ + iVar8;
      iVar9 = auVar20._12_4_ + iVar9;
      iVar14 = auVar19._0_4_ + iVar14;
      iVar15 = auVar19._4_4_ + iVar15;
      iVar16 = auVar19._8_4_ + iVar16;
      iVar17 = auVar19._12_4_ + iVar17;
      iVar10 = iVar10 + 8;
      iVar11 = iVar11 + 8;
      iVar12 = iVar12 + 8;
      iVar13 = iVar13 + 8;
    } while (uVar5 != 0);
    iVar6 = iVar14 + iVar6 + iVar15 + iVar7 + iVar16 + iVar8 + iVar17 + iVar9;
    if (uVar1 == uVar4) {
      return iVar6;
    }
  }
  do {
    uVar3 = (uint)uVar4;
                    /* try { // try from 009d3ac0 to 00ad3acb has its CatchHandler @ 009d3c04 */
    uVar4 = uVar4 + 1;
    iVar6 = (1 << (ulong)(uVar3 & 0x1f)) + iVar6;
  } while (uVar1 != uVar4);
  return iVar6;
}

