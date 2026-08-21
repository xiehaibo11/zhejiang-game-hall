
/* cocos2d::Label::updateContent() */

void __thiscall cocos2d::Label::updateContent(Label *this)

{
  long lVar1;
  wchar32 *pwVar2;
  ulong uVar3;
  undefined8 uVar4;
  DrawNode *pDVar5;
  Size *pSVar6;
  Color3B *pCVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  ulong local_d8;
  ulong local_d0;
  wchar32 *local_c8;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (this[0x39c] != (Label)0x0) {
                    /* try { // try from 00f0d34c to 0100d433 has its CatchHandler @ 00f0d34c
                       catch() { ... } // from try @ 00f0d34c with catch @ 00f0d34c
                       catch() { ... } // from try @ 00f0d494 with catch @ 00f0d34c */
    if (*(long *)(this + 0x3d0) != 0) {
      puVar9 = *(undefined8 **)(this + 0x3d8);
      puVar11 = *(undefined8 **)(this + 0x3e0);
      if (puVar9 != puVar11) {
        do {
          puVar10 = puVar9 + 1;
          Ref::release((Ref *)*puVar9);
          puVar9 = puVar10;
        } while (puVar11 != puVar10);
        puVar9 = *(undefined8 **)(this + 0x3d8);
      }
      *(undefined8 **)(this + 0x3e0) = puVar9;
      if (*(Ref **)(this + 0x408) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0x408));
        *(undefined8 *)(this + 0x408) = 0;
      }
      FontAtlasCache::releaseFontAtlas(*(FontAtlas **)(this + 0x3d0));
      *(undefined8 *)(this + 0x3d0) = 0;
    }
    this[0x39c] = (Label)0x0;
  }
  if (*(Ref **)(this + 0x3c0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c0));
    *(undefined8 *)(this + 0x3c0) = 0;
  }
  if (*(Ref **)(this + 0x3c8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c8));
    *(undefined8 *)(this + 0x3c8) = 0;
  }
  if (*(long *)(this + 0x3d0) == 0) {
    _getFontDefinition();
    createSpriteForSystemFont(this,(FontDefinition *)&local_d8);
                    /* try { // try from 00f0d48c to 0100d493 has its CatchHandler @ 00f0d55c */
    if (this[0x60f] != (Label)0x0) {
                    /* try { // try from 00f0d494 to 0100d573 has its CatchHandler @ 00f0d34c */
      createShadowSpriteForSystemFont(this,(FontDefinition *)&local_d8);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    uVar3 = 1;
    pDVar5 = *(DrawNode **)(this + 0x690);
  }
  else {
    local_d0 = 0;
    local_c8 = (wchar32 *)0x0;
    local_d8 = 0;
    uVar3 = StringUtils::UTF8ToUTF32((basic_string *)(this + 0x328),(basic_string *)&local_d8);
    if ((uVar3 & 1) != 0) {
      if ((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
           *)(this + 0x310) !=
          (basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
           *)&local_d8) {
        uVar3 = local_d8 >> 1 & 0x7f;
        pwVar2 = (wchar32 *)((ulong)&local_d8 | 4);
        if ((local_d8 & 1) != 0) {
          uVar3 = local_d0;
          pwVar2 = local_c8;
        }
        std::__ndk1::
        basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
        assign((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                *)(this + 0x310),pwVar2,uVar3);
      }
    }
    if (*(void **)(this + 0x430) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x430));
      *(undefined8 *)(this + 0x430) = 0;
    }
    local_e0 = 0;
                    /* try { // try from 00f0d434 to 0100d437 has its CatchHandler @ 00f0d560 */
    uVar4 = (**(code **)(**(long **)(*(long *)(this + 0x3d0) + 0x80) + 0x18))
                      (*(long **)(*(long *)(this + 0x3d0) + 0x80),this + 0x310,&local_e0);
    *(undefined8 *)(this + 0x430) = uVar4;
    uVar3 = (**(code **)(*(long *)this + 0x5f8))(this);
    uVar3 = uVar3 & 0xffffffff;
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    pDVar5 = *(DrawNode **)(this + 0x690);
  }
  if (pDVar5 != (DrawNode *)0x0) {
    DrawNode::clear(pDVar5);
    if (*(int *)(this + 0x340) == 0) {
      if (*(long **)(this + 0x3c0) != (long *)0x0) {
        pSVar6 = (Size *)(**(code **)(**(long **)(this + 0x3c0) + 0x168))();
        Size::Size((Size *)&local_e0,pSVar6);
        DrawNode::setLineWidth(*(DrawNode **)(this + 0x690),local_dc / 6.0);
        if (this[0x698] == (Label)0x0) {
          local_ec = 0.0;
        }
        else {
          local_ec = local_dc * 0.5 + 0.0;
        }
        pDVar5 = *(DrawNode **)(this + 0x690);
        local_e8 = 0.0;
        local_f0 = local_e0;
        local_e4 = local_ec;
        pCVar7 = (Color3B *)(**(code **)(**(long **)(this + 0x3c0) + 0x4b8))();
        Color4F::Color4F((Color4F *)&local_d8,pCVar7,1.0);
        DrawNode::drawLine(pDVar5,(Vec2 *)&local_e8,(Vec2 *)&local_f0,(Color4F *)&local_d8);
      }
    }
    else {
      fVar15 = *(float *)(this + 0x458) / (float)*(int *)(this + 0x340);
      DrawNode::setLineWidth(*(DrawNode **)(this + 0x690),fVar15 / 6.0);
      uVar8 = (ulong)*(uint *)(this + 0x340);
      if (0 < (int)*(uint *)(this + 0x340)) {
        lVar12 = 0;
        lVar13 = 0;
        iVar14 = -1;
        do {
          local_e0 = *(undefined4 *)(*(long *)(this + 0x478) + lVar12);
          local_e4 = 0.0;
          if (this[0x698] != (Label)0x0) {
            local_e4 = fVar15 * 0.5 + 0.0;
          }
          local_e4 = fVar15 * (float)((int)uVar8 + iVar14) + local_e4;
          pDVar5 = *(DrawNode **)(this + 0x690);
          local_e8 = *(float *)(*(long *)(this + 0x460) + lVar12) +
                     *(float *)(*(long *)(this + 0x478) + lVar12);
          local_dc = local_e4;
                    /* catch() { ... } // from try @ 00f0d48c with catch @ 00f0d55c */
                    /* catch() { ... } // from try @ 00f0d434 with catch @ 00f0d560 */
          Color4F::Color4F((Color4F *)&local_d8,(Color3B *)(this + 0x21a),1.0);
          DrawNode::drawLine(pDVar5,(Vec2 *)&local_e0,(Vec2 *)&local_e8,(Color4F *)&local_d8);
          uVar8 = (ulong)*(int *)(this + 0x340);
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 4;
          iVar14 = iVar14 + -1;
        } while (lVar13 < (long)uVar8);
      }
    }
  }
  if ((uVar3 & 1) != 0) {
    this[0x30c] = (Label)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

