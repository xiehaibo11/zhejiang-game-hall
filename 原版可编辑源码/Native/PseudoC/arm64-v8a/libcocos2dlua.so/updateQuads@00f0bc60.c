
/* cocos2d::Label::updateQuads() */

void __thiscall cocos2d::Label::updateQuads(Label *this)

{
  piecewise_construct_t *ppVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  piecewise_construct_t *local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(this + 0x3e0);
  for (plVar8 = *(long **)(this + 0x3d8); plVar8 != plVar9; plVar8 = plVar8 + 1) {
    TextureAtlas::removeAllQuads(*(TextureAtlas **)(*plVar8 + 0x300));
  }
  if (0 < *(int *)(this + 0x420)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      ppVar1 = (piecewise_construct_t *)(*(long *)(this + 0x3f0) + lVar10);
      if (ppVar1[4] != (piecewise_construct_t)0x0) {
        local_90 = ppVar1;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                ::
                __emplace_unique_key_args<char32_t,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char32_t_const&>,std::__ndk1::tuple<>>
                          ((wchar32 *)(*(long *)(this + 0x3d0) + 0x50),ppVar1,(tuple *)&DAT_0143a8f1
                           ,(tuple *)&local_90);
        fVar14 = *(float *)(lVar4 + 0x20);
        *(float *)(this + 0x41c) = fVar14;
        fVar13 = *(float *)(lVar4 + 0x1c);
        *(float *)(this + 0x418) = fVar13;
        *(undefined4 *)(this + 0x410) = *(undefined4 *)(lVar4 + 0x14);
        fVar15 = *(float *)(lVar4 + 0x18);
        lVar7 = *(long *)(this + 0x3f0) + lVar10;
        *(float *)(this + 0x414) = fVar15;
        fVar17 = *(float *)(lVar7 + 0xc) + *(float *)(this + 0x490);
        fVar16 = fVar14;
        if (0.0 < *(float *)(this + 0x44c)) {
          if (*(float *)(this + 0x494) < fVar17) {
            fVar16 = fVar17 - *(float *)(this + 0x494);
            fVar17 = fVar17 - fVar16;
            *(float *)(this + 0x414) = fVar16 + fVar15;
            *(float *)(this + 0x41c) = fVar14 - fVar16;
            fVar16 = fVar14 - fVar16;
          }
          fVar15 = *(float *)(this + 0x498);
          if (fVar17 - *(float *)(this + 0x680) * fVar14 < fVar15) {
            fVar16 = 0.0;
            if (fVar15 <= fVar17) {
              fVar16 = fVar17 - fVar15;
            }
            *(float *)(this + 0x41c) = fVar16;
          }
        }
        if (0.0 < *(float *)(this + 0x448)) {
          lVar7 = (long)*(int *)(lVar7 + 0x14);
          fVar14 = *(float *)(this + 0x80);
          fVar15 = *(float *)(*(long *)(this + 0x3f0) + lVar10 + 8) +
                   fVar13 * 0.5 * *(float *)(this + 0x680) +
                   *(float *)(*(long *)(this + 0x478) + lVar7 * 4);
          if (this[0x678] == (Label)0x0) {
            if (fVar15 < 0.0 || fVar14 < fVar15) goto LAB_00f0be7c;
          }
          else if ((fVar15 < 0.0 || fVar14 < fVar15) &&
                   fVar14 < *(float *)(*(long *)(this + 0x460) + lVar7 * 4)) {
LAB_00f0be7c:
            if (*(int *)(this + 0x684) == 2) {
              if (fVar13 < fVar14) {
                uVar5 = 0;
                goto LAB_00f0bf6c;
              }
            }
            else if (*(int *)(this + 0x684) != 1) goto LAB_00f0bea4;
            fVar13 = 0.0;
            *(undefined4 *)(this + 0x418) = 0;
          }
        }
LAB_00f0bea4:
        if ((0.0 < fVar16) && (0.0 < fVar13)) {
          (**(code **)(**(long **)(this + 0x408) + 0x560))
                    (*(long **)(this + 0x408),this + 0x410,0,this + 0x418);
          (**(code **)(**(long **)(this + 0x408) + 200))
                    (*(float *)(*(long *)(this + 0x3f0) + lVar10 + 8) +
                     *(float *)(*(long *)(this + 0x478) +
                               (long)*(int *)(*(long *)(this + 0x3f0) + lVar10 + 0x14) * 4),fVar17);
          iVar3 = TextureAtlas::getTotalQuads
                            (*(TextureAtlas **)
                              (*(long *)(*(long *)(this + 0x3d8) + (long)*(int *)(lVar4 + 0x2c) * 8)
                              + 0x300));
          *(int *)(*(long *)(this + 0x3f0) + lVar10 + 0x10) = iVar3;
          if ((*(int *)(this + 0x308) != 1) || (*(float *)(this + 0x67c) <= 0.0)) {
            pcVar6 = *(code **)(**(long **)(this + 0x408) + 0x80);
            uVar12 = 0x3f800000;
            if (ABS(*(float *)(this + 0x67c)) < 1.1920929e-07) {
              uVar12 = 0;
            }
          }
          else {
            pcVar6 = *(code **)(**(long **)(this + 0x408) + 0x80);
            uVar12 = *(undefined4 *)(this + 0x680);
          }
          (*pcVar6)(uVar12);
          SpriteBatchNode::insertQuadFromSprite
                    (*(SpriteBatchNode **)
                      (*(long *)(this + 0x3d8) + (long)*(int *)(lVar4 + 0x2c) * 8),
                     *(Sprite **)(this + 0x408),(long)iVar3);
        }
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar11 < *(int *)(this + 0x420));
  }
  uVar5 = 1;
LAB_00f0bf6c:
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

