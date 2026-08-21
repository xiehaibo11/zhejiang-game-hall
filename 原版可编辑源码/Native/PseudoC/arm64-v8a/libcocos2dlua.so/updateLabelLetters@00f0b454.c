
/* cocos2d::Label::updateLabelLetters() */

void __thiscall cocos2d::Label::updateLabelLetters(Label *this)

{
  int iVar1;
  long lVar2;
  piecewise_construct_t *ppVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  Node *pNVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_b0;
  undefined8 uStack_a8;
  piecewise_construct_t *local_90 [3];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x658) != 0) {
    Rect::Rect((Rect *)&local_b0);
    if (*(long **)(this + 0x650) != (long *)0x0) {
      plVar9 = *(long **)(this + 0x650);
      do {
        while( true ) {
          lVar11 = (long)(int)plVar9[2];
          pNVar10 = (Node *)plVar9[3];
          if (*(int *)(this + 0x420) <= (int)plVar9[2]) break;
          lVar7 = *(long *)(this + 0x3f0);
          if (*(char *)(lVar7 + lVar11 * 0x18 + 4) == '\0') {
            *(undefined8 *)(pNVar10 + 0x300) = 0;
          }
          else {
            local_90[0] = (piecewise_construct_t *)(lVar7 + lVar11 * 0x18);
            lVar4 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                    ::
                    __emplace_unique_key_args<char32_t,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char32_t_const&>,std::__ndk1::tuple<>>
                              ((wchar32 *)(*(long *)(this + 0x3d0) + 0x50),local_90[0],
                               (tuple *)&DAT_0143a8f1,(tuple *)local_90);
            uStack_a8 = *(undefined8 *)(lVar4 + 0x1c);
            local_b0 = *(undefined8 *)(lVar4 + 0x14);
            iVar1 = *(int *)(lVar4 + 0x2c);
            *(undefined8 *)(pNVar10 + 0x300) =
                 *(undefined8 *)(*(long *)(*(long *)(this + 0x3d8) + (long)iVar1 * 8) + 0x300);
            uVar5 = FontAtlas::getTexture(*(FontAtlas **)(this + 0x3d0),iVar1);
            (**(code **)(*(long *)pNVar10 + 0x548))(pNVar10,uVar5);
            fVar14 = *(float *)(lVar4 + 0x1c);
            fVar13 = *(float *)(lVar4 + 0x20);
            if ((fVar14 <= 0.0) || (fVar13 <= 0.0)) {
                    /* try { // try from 00f0b608 to 0100b65b has its CatchHandler @ 00f0b590 */
              *(undefined8 *)(pNVar10 + 0x300) = 0;
            }
            else {
              (**(code **)(*(long *)pNVar10 + 0x560))(pNVar10,&local_b0,0,(ulong)&local_b0 | 8);
                    /* try { // try from 00f0b590 to 0100b5cf has its CatchHandler @ 00f0b590
                       catch() { ... } // from try @ 00f0b590 with catch @ 00f0b590
                       catch() { ... } // from try @ 00f0b608 with catch @ 00f0b590 */
              *(undefined8 *)(pNVar10 + 0x300) =
                   *(undefined8 *)
                    (*(long *)(*(long *)(this + 0x3d8) + (long)*(int *)(lVar4 + 0x2c) * 8) + 0x300);
              *(long *)(pNVar10 + 0x308) =
                   (long)*(int *)(*(long *)(this + 0x3f0) + lVar11 * 0x18 + 0x10);
              fVar14 = *(float *)(lVar4 + 0x1c);
              fVar13 = *(float *)(lVar4 + 0x20);
            }
            lVar7 = lVar7 + lVar11 * 0x18;
                    /* catch() { ... } // from try @ 00f0b5d0 with catch @ 00f0b640 */
            (**(code **)(*(long *)pNVar10 + 200))
                      (*(float *)(lVar7 + 8) + fVar14 * 0.5 +
                       *(float *)(*(long *)(this + 0x478) + (long)*(int *)(lVar7 + 0x14) * 4),
                       *(float *)(this + 0x490) + (*(float *)(lVar7 + 0xc) - fVar13 * 0.5),pNVar10);
          }
                    /* try { // try from 00f0b65c to 0100b6f7 has its CatchHandler @ 00f0b65c
                       catch() { ... } // from try @ 00f0b65c with catch @ 00f0b65c
                       catch() { ... } // from try @ 00f0b70c with catch @ 00f0b65c */
          if ((*(int *)(this + 0x308) != 1) || (*(float *)(this + 0x67c) <= 0.0)) {
            pcVar6 = *(code **)(*(long *)pNVar10 + 0x80);
            uVar12 = 0x3f800000;
            if (ABS(*(float *)(this + 0x67c)) < 1.1920929e-07) {
              uVar12 = 0;
            }
          }
          else {
            pcVar6 = *(code **)(*(long *)pNVar10 + 0x80);
            uVar12 = *(undefined4 *)(this + 0x680);
          }
          (*pcVar6)(uVar12,pNVar10);
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_00f0b69c;
        }
        Node::removeChild((Node *)this,pNVar10,true);
                    /* try { // try from 00f0b5d0 to 0100b607 has its CatchHandler @ 00f0b640 */
        plVar8 = (long *)*plVar9;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>>>
        ::remove(local_90,this + 0x640,plVar9);
        ppVar3 = local_90[0];
        local_90[0] = (piecewise_construct_t *)0x0;
        if (ppVar3 != (piecewise_construct_t *)0x0) {
          operator_delete(ppVar3);
        }
        plVar9 = plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_00f0b69c:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

