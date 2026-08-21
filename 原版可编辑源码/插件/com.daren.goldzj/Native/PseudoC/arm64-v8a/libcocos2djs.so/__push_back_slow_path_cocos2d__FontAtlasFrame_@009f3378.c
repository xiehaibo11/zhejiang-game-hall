
/* void std::__ndk1::vector<cocos2d::FontAtlasFrame, std::__ndk1::allocator<cocos2d::FontAtlasFrame>
   >::__push_back_slow_path<cocos2d::FontAtlasFrame>(cocos2d::FontAtlasFrame&&) */

void __thiscall
std::__ndk1::vector<cocos2d::FontAtlasFrame,std::__ndk1::allocator<cocos2d::FontAtlasFrame>>::
__push_back_slow_path<cocos2d::FontAtlasFrame>
          (vector<cocos2d::FontAtlasFrame,std::__ndk1::allocator<cocos2d::FontAtlasFrame>> *this,
          FontAtlasFrame *param_1)

{
  ulong uVar1;
  FontAtlasFrame *pFVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  FontAtlasFrame *this_00;
  FontAtlasFrame *pFVar7;
  FontAtlasFrame *pFVar8;
  FontAtlasFrame *pFVar9;
  ulong uVar10;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar10 = 0x2e8ba2e8ba2e8ba;
  uVar1 = lVar4 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
    uVar6 = lVar5 * 0x5d1745d1745d1746;
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_009f341c;
    }
  }
  pvVar3 = operator_new(uVar10 * 0x58);
LAB_009f341c:
  this_00 = (FontAtlasFrame *)((long)pvVar3 + lVar4 * 8);
  cocos2d::FontAtlasFrame::FontAtlasFrame(this_00,param_1);
  pFVar7 = *(FontAtlasFrame **)this;
  pFVar8 = *(FontAtlasFrame **)(this + 8);
  pFVar2 = this_00 + 0x58;
  pFVar9 = pFVar7;
  if (pFVar8 != pFVar7) {
    do {
      pFVar8 = pFVar8 + -0x58;
      cocos2d::FontAtlasFrame::FontAtlasFrame(this_00 + -0x58,pFVar8);
      this_00 = this_00 + -0x58;
    } while (pFVar7 != pFVar8);
    pFVar7 = *(FontAtlasFrame **)(this + 8);
    pFVar9 = *(FontAtlasFrame **)this;
                    /* try { // try from 009f3460 to 00af3467 has its CatchHandler @ 009f35ac */
  }
                    /* try { // try from 009f3468 to 00af359f has its CatchHandler @ 009f3374 */
  *(FontAtlasFrame **)this = this_00;
  *(FontAtlasFrame **)(this + 8) = pFVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar10 * 0x58);
  while (pFVar7 != pFVar9) {
    pFVar7 = pFVar7 + -0x58;
    (*(code *)**(undefined8 **)pFVar7)(pFVar7);
  }
  if (pFVar9 != (FontAtlasFrame *)0x0) {
    operator_delete(pFVar9);
    return;
  }
  return;
}

