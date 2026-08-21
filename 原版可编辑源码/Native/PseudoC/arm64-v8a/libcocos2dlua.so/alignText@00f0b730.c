
/* cocos2d::Label::alignText() */

void __thiscall cocos2d::Label::alignText(Label *this)

{
  int iVar1;
  basic_string bVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  Ref *pRVar6;
  Texture2D *this_00;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined2 uVar19;
  float fVar20;
  Ref *local_a0;
  code *local_98;
  undefined8 uStack_90;
  Label *local_88;
  Ref **local_80;
  long local_68;
  
                    /* catch() { ... } // from try @ 00f0b6f8 with catch @ 00f0b738 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(FontAtlas **)(this + 0x3d0) == (FontAtlas *)0x0) {
LAB_00f0b930:
    (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
  }
  else {
    if (((byte)this[0x310] & 1) == 0) {
      if ((byte)this[0x310] >> 1 == 0) goto LAB_00f0b930;
    }
    else if (*(long *)(this + 0x318) == 0) goto LAB_00f0b930;
    FontAtlas::prepareLetterDefinitions
              (*(FontAtlas **)(this + 0x3d0),(basic_string *)(this + 0x310));
    lVar16 = *(long *)(this + 0x3d0);
    puVar11 = *(undefined8 **)(this + 0x3e0);
    puVar8 = *(undefined8 **)(this + 0x3d8);
    uVar17 = *(ulong *)(lVar16 + 0x40);
    uVar18 = (long)puVar11 - (long)puVar8 >> 3;
    if (uVar18 < uVar17) {
      uVar9 = *(ulong *)(lVar16 + 0x30);
joined_r0x00f0b7c4:
      if (uVar9 != 0) {
        uVar7 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar9
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar9
                                                                                        ))))))));
        uVar19 = NEON_uaddlv(uVar7,1);
        uVar12 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar19) & 0xffffffff;
        if (uVar12 < 2) {
          uVar13 = uVar9 - 1 & uVar18;
        }
        else {
          uVar13 = uVar18;
          if (uVar9 <= uVar18) {
            uVar13 = 0;
            if (uVar9 != 0) {
              uVar13 = uVar18 / uVar9;
            }
            uVar13 = uVar18 - uVar13 * uVar9;
          }
        }
        plVar14 = *(long **)(*(long *)(lVar16 + 0x28) + uVar13 * 8);
                    /* try { // try from 00f0b838 to 0100b87b has its CatchHandler @ 00f0b838
                       catch() { ... } // from try @ 00f0b838 with catch @ 00f0b838
                       catch() { ... } // from try @ 00f0b8b0 with catch @ 00f0b838 */
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          do {
            uVar15 = plVar14[1];
            if (uVar18 == uVar15) {
              if (plVar14[2] == uVar18) goto LAB_00f0b89c;
            }
            else {
              if (uVar12 < 2) {
                uVar15 = uVar15 & uVar9 - 1;
              }
              else if (uVar9 <= uVar15) {
                uVar3 = 0;
                if (uVar9 != 0) {
                  uVar3 = uVar15 / uVar9;
                }
                    /* try { // try from 00f0b87c to 0100b8af has its CatchHandler @ 00f0b8e8 */
                uVar15 = uVar15 - uVar3 * uVar9;
              }
              if (uVar15 != uVar13) break;
            }
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) break;
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_007d44e0("unordered_map::at: key not found");
    }
LAB_00f0b988:
    if (puVar8 != puVar11) {
                    /* try { // try from 00f0b994 to 0100b9a7 has its CatchHandler @ 00f0b9dc */
      if ((long)puVar11 - (long)puVar8 == 8) {
        bVar2 = *(basic_string *)(this + 0x310);
        if (((byte)bVar2 & 1) == 0) {
                    /* try { // try from 00f0b9a8 to 0100b9f3 has its CatchHandler @ 00f0b904 */
          uVar18 = (ulong)((byte)bVar2 >> 1);
        }
        else {
          uVar18 = *(ulong *)(this + 0x318);
        }
        SpriteBatchNode::reserveCapacity((SpriteBatchNode *)*puVar8,uVar18);
      }
      (**(code **)(**(long **)(this + 0x408) + 0x538))
                (*(long **)(this + 0x408),**(undefined8 **)(this + 0x3d8));
      *(undefined4 *)(this + 0x420) = 0;
                    /* catch() { ... } // from try @ 00f0b994 with catch @ 00f0b9dc */
      *(undefined4 *)(this + 0x458) = 0;
      *(undefined8 *)(this + 0x468) = *(undefined8 *)(this + 0x460);
      if ((*(float *)(this + 0x43c) <= 0.0) || (this[0x438] != (Label)0x0)) {
        multilineTextWrapByChar(this);
      }
      else {
        multilineTextWrapByWord(this);
      }
      computeAlignmentOffset(this);
      if (*(int *)(this + 0x684) == 2) {
        iVar1 = *(int *)(this + 0x308);
        if (iVar1 == 0) {
          lVar16 = (**(code **)(*(long *)this + 0x538))(this);
          fVar20 = *(float *)(lVar16 + 0x18);
        }
        else if (iVar1 == 3) {
          fVar20 = *(float *)(this + 0x3b8);
        }
        else if (iVar1 == 1) {
          fVar20 = *(float *)(this + 0x67c);
        }
        else {
          if (*(long *)(this + 0x3c0) != 0) goto LAB_00f0bafc;
          fVar20 = *(float *)(this + 0x424) * *(float *)(this + 0x680);
        }
        if ((0.0 < fVar20) && (uVar18 = isVerticalClamp(this), (uVar18 & 1) != 0)) {
          local_a0 = (Ref *)&PTR_FUN_016fe1d0;
          uStack_90 = 0;
          local_98 = isVerticalClamp;
          local_88 = this;
          local_80 = &local_a0;
          shrinkLabelToContentSize(this,(function *)&local_a0);
          if (&local_a0 == local_80) {
            pcVar10 = *(code **)(*local_80 + 0x20);
          }
          else {
            if (local_80 == (Ref **)0x0) goto LAB_00f0bafc;
            pcVar10 = *(code **)(*local_80 + 0x28);
          }
          (*pcVar10)();
        }
      }
LAB_00f0bafc:
      uVar18 = updateQuads(this);
      if ((uVar18 & 1) == 0) {
        if (*(int *)(this + 0x684) == 2) {
          local_a0 = (Ref *)&PTR_FUN_016fe1d0;
          uStack_90 = 0;
          local_98 = isHorizontalClamp;
          local_88 = this;
          local_80 = &local_a0;
          shrinkLabelToContentSize(this,(function *)&local_a0);
          if (&local_a0 == local_80) {
            pcVar10 = *(code **)(*local_80 + 0x20);
          }
          else {
            if (local_80 == (Ref **)0x0) goto LAB_00f0bb88;
            pcVar10 = *(code **)(*local_80 + 0x28);
          }
          (*pcVar10)();
        }
LAB_00f0bb88:
        uVar7 = 0;
        goto LAB_00f0b94c;
      }
      updateLabelLetters(this);
      (**(code **)(*(long *)this + 0x528))(this);
    }
  }
  uVar7 = 1;
LAB_00f0b94c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
LAB_00f0b89c:
  pRVar6 = (Ref *)SpriteBatchNode::createWithTexture((Texture2D *)plVar14[3],0x1d);
  if (pRVar6 != (Ref *)0x0) {
                    /* try { // try from 00f0b8b0 to 0100b903 has its CatchHandler @ 00f0b838 */
    this_00 = (Texture2D *)(**(code **)(*(long *)pRVar6 + 0x530))();
    bVar5 = Texture2D::hasPremultipliedAlpha(this_00);
    this[0x63d] = (Label)(bVar5 & 1);
    puVar8 = (undefined8 *)(**(code **)(*(long *)pRVar6 + 0x548))(pRVar6);
    *(undefined8 *)(this + 0x634) = *puVar8;
                    /* catch() { ... } // from try @ 00f0b87c with catch @ 00f0b8e8 */
    (**(code **)(*(long *)pRVar6 + 0x148))(pRVar6,&Vec2::ANCHOR_TOP_LEFT);
                    /* try { // try from 00f0b904 to 0100b993 has its CatchHandler @ 00f0b904
                       catch() { ... } // from try @ 00f0b904 with catch @ 00f0b904
                       catch() { ... } // from try @ 00f0b9a8 with catch @ 00f0b904 */
    (**(code **)(*(long *)pRVar6 + 0x98))(pRVar6,&Vec2::ZERO);
    plVar14 = *(long **)(this + 0x3e0);
    local_a0 = pRVar6;
    if (plVar14 == *(long **)(this + 1000)) {
      std::__ndk1::
      vector<cocos2d::SpriteBatchNode*,std::__ndk1::allocator<cocos2d::SpriteBatchNode*>>::
      __push_back_slow_path<cocos2d::SpriteBatchNode*const&>
                ((vector<cocos2d::SpriteBatchNode*,std::__ndk1::allocator<cocos2d::SpriteBatchNode*>>
                  *)(this + 0x3d8),(SpriteBatchNode **)&local_a0);
    }
    else {
      *plVar14 = (long)pRVar6;
      *(long **)(this + 0x3e0) = plVar14 + 1;
    }
    Ref::retain(local_a0);
  }
  uVar18 = uVar18 + 1;
  if (uVar18 == uVar17) {
    puVar8 = *(undefined8 **)(this + 0x3d8);
    puVar11 = *(undefined8 **)(this + 0x3e0);
    goto LAB_00f0b988;
  }
  uVar9 = *(ulong *)(lVar16 + 0x30);
  goto joined_r0x00f0b7c4;
}

