
/* cocos2d::FontAtlas::frameAt(int) */

FontAtlas * __thiscall cocos2d::FontAtlas::frameAt(FontAtlas *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0xa0) == param_1) {
    return this + 0x30;
  }
  uVar1 = (ulong)param_1;
  uVar2 = (*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    return (FontAtlas *)(*(long *)(this + 0x88) + uVar1 * 0x58);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009f3374 to 00af345f has its CatchHandler @ 009f3374
                       catch() { ... } // from try @ 009f3374 with catch @ 009f3374
                       catch() { ... } // from try @ 009f3468 with catch @ 009f3374
                       catch() { ... } // from try @ 009f35a8 with catch @ 009f3374 */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}

