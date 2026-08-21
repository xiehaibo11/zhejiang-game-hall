
/* cocos2d::renderer::StencilManager::handleEffect(cocos2d::renderer::EffectVariant*) */

EffectVariant * __thiscall
cocos2d::renderer::StencilManager::handleEffect(StencilManager *this,EffectVariant *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  StencilManager *unaff_x21;
  undefined4 unaff_w23;
  StencilManager *unaff_x24;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  iVar10 = *(int *)(this + 0x20);
  if (iVar10 == 0) {
    plVar1 = (long *)plVar4[1];
    for (plVar4 = (long *)*plVar4; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      iVar10 = Pass::getState((Pass *)*plVar4,0xc);
      if (iVar10 != 0) {
        *(undefined4 *)(*plVar4 + 0xb0) = 0;
      }
    }
    return param_1;
  }
  uVar5 = *(ulong *)(this + 0x10);
  if (uVar5 + 1 < 2) {
    return param_1;
  }
  if (iVar10 == 1) {
    uVar8 = 0;
    if ((*(ulong *)(*(long *)(this + 8) + (uVar5 - 1 >> 3 & 0x1ffffffffffffff8)) &
        1L << (uVar5 - 1 & 0x3f)) != 0) {
      uVar8 = 0x1e01;
    }
  }
  else {
    if (iVar10 != 2) {
      if (iVar10 == 3) {
        if (7 < uVar5) {
          iVar17 = 2;
          iVar18 = 3;
          iVar15 = 0;
          iVar16 = 1;
          uVar6 = uVar5 & 0xfffffffffffffff8;
          iVar10 = 0;
          iVar12 = 0;
          iVar13 = 0;
          iVar14 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar22 = 0;
          uVar7 = uVar6;
          do {
            auVar23._0_4_ = iVar15 + 4;
            auVar23._4_4_ = iVar16 + 4;
            auVar23._8_4_ = iVar17 + 4;
            auVar23._12_4_ = iVar18 + 4;
            auVar24._4_4_ = iVar16;
            auVar24._0_4_ = iVar15;
            auVar24._8_4_ = iVar17;
            auVar24._12_4_ = iVar18;
            auVar25._8_4_ = 1;
            auVar25._0_8_ = 0x100000001;
            auVar25._12_4_ = 1;
            auVar25 = NEON_ushl(auVar25,auVar24,4);
            auVar3._8_4_ = 1;
            auVar3._0_8_ = 0x100000001;
            auVar3._12_4_ = 1;
            auVar24 = NEON_ushl(auVar3,auVar23,4);
            uVar7 = uVar7 - 8;
            iVar10 = auVar25._0_4_ + iVar10;
            iVar12 = auVar25._4_4_ + iVar12;
            iVar13 = auVar25._8_4_ + iVar13;
            iVar14 = auVar25._12_4_ + iVar14;
            iVar19 = auVar24._0_4_ + iVar19;
            iVar20 = auVar24._4_4_ + iVar20;
            iVar21 = auVar24._8_4_ + iVar21;
            iVar22 = auVar24._12_4_ + iVar22;
            iVar15 = iVar15 + 8;
            iVar16 = iVar16 + 8;
            iVar17 = iVar17 + 8;
            iVar18 = iVar18 + 8;
          } while (uVar7 != 0);
          uVar11 = iVar19 + iVar10 + iVar20 + iVar12 + iVar21 + iVar13 + iVar22 + iVar14;
          goto joined_r0x009d3798;
        }
        uVar6 = 0;
        this = (StencilManager *)0x0;
        do {
          uVar11 = (uint)uVar6;
          uVar6 = uVar6 + 1;
          uVar11 = (1 << (ulong)(uVar11 & 0x1f)) + (int)this;
joined_r0x009d3798:
          this = (StencilManager *)(ulong)uVar11;
        } while (uVar5 != uVar6);
        uVar8 = 0x1e00;
        unaff_w23 = 0x202;
        unaff_x21 = (StencilManager *)(ulong)(uint)(1 << (ulong)((int)uVar5 - 1U & 0x1f));
        unaff_x24 = this;
      }
      else {
        uVar8 = 0x1e00;
      }
      goto LAB_009d37cc;
    }
    uVar8 = 0x1e01;
    if ((*(ulong *)(*(long *)(this + 8) + (uVar5 - 1 >> 3 & 0x1ffffffffffffff8)) &
        1L << (uVar5 - 1 & 0x3f)) != 0) {
      uVar8 = 0;
    }
  }
  uVar11 = 1 << (ulong)((int)uVar5 - 1U & 0x1f);
  unaff_x24 = (StencilManager *)(ulong)(uVar11 & 0xff);
  this = (StencilManager *)(ulong)uVar11;
  unaff_w23 = 0x200;
  unaff_x21 = this;
LAB_009d37cc:
  puVar2 = (undefined8 *)plVar4[1];
  for (puVar9 = (undefined8 *)*plVar4; puVar9 != puVar2; puVar9 = puVar9 + 1) {
    Pass::setStencilFront
              ((Pass *)*puVar9,unaff_w23,(ulong)unaff_x24 & 0xffffffff,(ulong)this & 0xffffffff,
               uVar8,0x1e00,0x1e00,(ulong)unaff_x21 & 0xffffffff);
    Pass::setStencilBack
              ((Pass *)*puVar9,unaff_w23,(ulong)unaff_x24 & 0xffffffff,(ulong)this & 0xffffffff,
               uVar8,0x1e00,0x1e00,(ulong)unaff_x21 & 0xffffffff);
  }
  return param_1;
}

