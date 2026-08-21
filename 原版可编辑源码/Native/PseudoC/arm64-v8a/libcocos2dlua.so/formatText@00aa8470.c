
/* fairygui::FUIRichText::formatText() */

void __thiscall fairygui::FUIRichText::formatText(FUIRichText *this)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  void *__dest;
  HtmlElement *pHVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  HtmlElement *pHVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  FastSplitter aFStack_88 [32];
  long local_68;
  
                    /* try { // try from 00aa8478 to 00ba8513 has its CatchHandler @ 00aa8160 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (this[0x340] == (FUIRichText)0x0) goto LAB_00aa87fc;
  this[0x340] = (FUIRichText)0x0;
  if (this[0x341] != (FUIRichText)0x0) {
    plVar11 = *(long **)(this + 0x2f8);
    plVar13 = *(long **)(this + 0x300);
    this[0x341] = (FUIRichText)0x0;
                    /* catch() { ... } // from try @ 00aa842c with catch @ 00aa84c4 */
                    /* catch() { ... } // from try @ 00aa8444 with catch @ 00aa84c8 */
    if (plVar11 != plVar13) {
      do {
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 8))();
        }
        plVar11 = plVar11 + 1;
      } while (plVar13 != plVar11);
      plVar11 = *(long **)(this + 0x2f8);
    }
                    /* catch() { ... } // from try @ 00aa83f8 with catch @ 00aa84f8 */
    plVar13 = *(long **)(this + 0x310);
    plVar16 = *(long **)(this + 0x318);
    *(long **)(this + 0x300) = plVar11;
    if (plVar13 != plVar16) {
      do {
        if ((long *)*plVar13 != (long *)0x0) {
          (**(code **)(*(long *)*plVar13 + 8))();
        }
        plVar13 = plVar13 + 1;
      } while (plVar16 != plVar13);
      plVar13 = *(long **)(this + 0x310);
    }
    *(long **)(this + 0x318) = plVar13;
    *(undefined4 *)(this + 0x354) = 0;
    if (((byte)this[0x3b8] & 1) == 0) {
      if ((byte)this[0x3b8] >> 1 != 0) {
LAB_00aa855c:
        HtmlParser::parse((HtmlParser *)HtmlParser::defaultParser,(basic_string *)(this + 0x3b8),
                          (TextFormat *)(this + 0x360),(vector *)(this + 0x2f8),
                          (HtmlParseOptions *)(this + 0x3d0));
      }
    }
    else if (*(long *)(this + 0x3c0) != 0) goto LAB_00aa855c;
  }
  (**(code **)(*(long *)this + 0x2a0))(this,1);
  puVar12 = *(undefined8 **)(this + 0x328);
  puVar8 = *(undefined8 **)(this + 0x330);
  if (puVar8 != puVar12) {
    pvVar3 = (void *)puVar8[-3];
    puVar2 = puVar8 + -3;
    while( true ) {
      if (pvVar3 != (void *)0x0) {
        puVar8[-2] = pvVar3;
        operator_delete(pvVar3);
      }
      if (puVar12 == puVar2) break;
      pvVar3 = (void *)puVar2[-3];
      puVar8 = puVar2;
      puVar2 = puVar2 + -3;
    }
  }
  *(undefined8 **)(this + 0x330) = puVar12;
  if (*(int *)(this + 0x358) == 0) {
    fVar19 = 3.4028235e+38;
  }
  else {
    fVar19 = *(float *)(this + 0x344) + -4.0;
  }
  lVar9 = *(long *)(this + 0x300);
  lVar10 = *(long *)(this + 0x2f8);
  *(float *)(this + 0x350) = fVar19;
  iVar15 = (int)((ulong)(lVar9 - lVar10) >> 3);
  if (iVar15 == 0) {
    formarRenderers(this);
  }
  else {
    *(float *)(this + 0x34c) = fVar19;
    if (puVar12 < *(undefined8 **)(this + 0x338)) {
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(undefined8 **)(this + 0x330) = puVar12 + 3;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
      ::__emplace_back_slow_path<>
                ((vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
                  *)(this + 0x328));
    }
    *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
    if (0 < iVar15) {
      uVar18 = 0;
      do {
        if ((ulong)(*(long *)(this + 0x300) - *(long *)(this + 0x2f8) >> 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        pHVar14 = *(HtmlElement **)(*(long *)(this + 0x2f8) + uVar18 * 8);
        if (*(int *)(pHVar14 + 8) == 0) {
          FastSplitter::FastSplitter(aFStack_88);
          if (((byte)pHVar14[0x10] & 1) == 0) {
            pHVar6 = pHVar14 + 0x11;
            uVar7 = (uint)((byte)pHVar14[0x10] >> 1);
          }
          else {
            pHVar6 = *(HtmlElement **)(pHVar14 + 0x20);
            uVar7 = (uint)*(undefined8 *)(pHVar14 + 0x18);
          }
          FastSplitter::start(aFStack_88,(char *)pHVar6,(long)(int)uVar7,'\n');
          uVar4 = FastSplitter::next(aFStack_88);
          if ((uVar4 & 1) != 0) {
            do {
              lVar5 = FastSplitter::getTextLength(aFStack_88);
              if (0 < lVar5) {
                pvVar3 = (void *)FastSplitter::getText(aFStack_88);
                uVar4 = FastSplitter::getTextLength(aFStack_88);
                local_a0 = 0;
                uStack_98 = 0;
                local_90 = (void *)0x0;
                if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar4 < 0x17) {
                  local_a0 = (ulong)(byte)((int)uVar4 << 1);
                  __dest = (void *)((ulong)&local_a0 | 1);
                  if (uVar4 != 0) goto LAB_00aa8784;
                }
                else {
                  uVar17 = uVar4 + 0x10 & 0xfffffffffffffff0;
                  __dest = operator_new(uVar17);
                  local_a0 = uVar17 | 1;
                  uStack_98 = uVar4;
                  local_90 = __dest;
LAB_00aa8784:
                  memcpy(__dest,pvVar3,uVar4);
                }
                *(undefined1 *)((long)__dest + uVar4) = 0;
                handleTextRenderer(this,pHVar14,(basic_string *)&local_a0);
                if ((local_a0 & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              uVar4 = FastSplitter::next(aFStack_88);
              if ((uVar4 & 1) == 0) break;
              puVar8 = *(undefined8 **)(this + 0x330);
              *(undefined4 *)(this + 0x34c) = *(undefined4 *)(this + 0x350);
              if (puVar8 < *(undefined8 **)(this + 0x338)) {
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8[2] = 0;
                *(undefined8 **)(this + 0x330) = puVar8 + 3;
              }
              else {
                std::__ndk1::
                vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
                ::__emplace_back_slow_path<>
                          ((vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
                            *)(this + 0x328));
              }
              *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
            } while( true );
          }
        }
        else {
          *(int *)(pHVar14 + 0x90) = (int)*(float *)(this + 0x34c);
          handleRichRenderer(this,pHVar14);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != ((ulong)(lVar9 - lVar10) >> 3 & 0xffffffff));
    }
    formarRenderers(this);
  }
LAB_00aa87fc:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

