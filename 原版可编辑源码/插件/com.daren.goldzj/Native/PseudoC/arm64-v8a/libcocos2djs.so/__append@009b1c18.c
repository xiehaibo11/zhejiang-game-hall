
/* std::__ndk1::vector<cocos2d::TextRowSpace::GlyphBlock,
   std::__ndk1::allocator<cocos2d::TextRowSpace::GlyphBlock> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::TextRowSpace::GlyphBlock,std::__ndk1::allocator<cocos2d::TextRowSpace::GlyphBlock>>
::__append(vector<cocos2d::TextRowSpace::GlyphBlock,std::__ndk1::allocator<cocos2d::TextRowSpace::GlyphBlock>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined4 uVar3;
  Rect *pRVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  Rect *this_00;
  long lVar9;
  ulong uVar10;
  Rect *pRVar11;
  
                    /* try { // try from 009b1c18 to 00ab1c1f has its CatchHandler @ 009b1c48 */
                    /* try { // try from 009b1c2c to 00ab1c33 has its CatchHandler @ 009b1c4c */
                    /* try { // try from 009b1c34 to 00ab1deb has its CatchHandler @ 009b1744 */
  pRVar11 = *(Rect **)(this + 8);
                    /* catch() { ... } // from try @ 009b1c18 with catch @ 009b1c48 */
                    /* catch() { ... } // from try @ 009b1c2c with catch @ 009b1c4c */
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pRVar11 >> 3) * -0x3333333333333333)) {
    do {
      *(undefined8 *)(pRVar11 + 0x20) = 0;
      *(undefined8 *)(pRVar11 + 8) = 0;
      *(undefined8 *)pRVar11 = 0;
      *(undefined8 *)(pRVar11 + 0x18) = 0;
      *(undefined8 *)(pRVar11 + 0x10) = 0;
      cocos2d::Rect::Rect(pRVar11);
      cocos2d::Rect::Rect(pRVar11 + 0x10);
      *(undefined4 *)(pRVar11 + 0x20) = 0;
      pRVar11[0x24] = (Rect)0x0;
      param_1 = param_1 - 1;
      pRVar11 = (Rect *)(*(long *)(this + 8) + 0x28);
      *(Rect **)(this + 8) = pRVar11;
    } while (param_1 != 0);
    return;
  }
  uVar10 = 0x666666666666666;
  lVar9 = (long)pRVar11 - *(long *)this >> 3;
  uVar1 = lVar9 * -0x3333333333333333 + param_1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* catch() { ... } // from try @ 009b1ba8 with catch @ 009b1c84 */
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar7 * -0x3333333333333333) < 0x333333333333333) {
    uVar8 = lVar7 * -0x6666666666666666;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_009b1cc8;
    }
  }
                    /* catch() { ... } // from try @ 009b18d8 with catch @ 009b1cb8 */
  pvVar5 = operator_new(uVar10 * 0x28);
LAB_009b1cc8:
                    /* catch() { ... } // from try @ 009b18c8 with catch @ 009b1cc8 */
  pRVar11 = (Rect *)((long)pvVar5 + lVar9 * 8);
  pRVar4 = pRVar11;
  do {
                    /* catch() { ... } // from try @ 009b18ac with catch @ 009b1cd8 */
    this_00 = pRVar4;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
                    /* catch() { ... } // from try @ 009b189c with catch @ 009b1ce8 */
    cocos2d::Rect::Rect(this_00);
                    /* catch() { ... } // from try @ 009b1888 with catch @ 009b1cf8 */
    cocos2d::Rect::Rect(this_00 + 0x10);
    param_1 = param_1 - 1;
    *(undefined4 *)(this_00 + 0x20) = 0;
    this_00[0x24] = (Rect)0x0;
    pRVar4 = this_00 + 0x28;
  } while (param_1 != 0);
                    /* catch() { ... } // from try @ 009b187c with catch @ 009b1d10 */
  pvVar6 = *(void **)this;
  pvVar2 = *(void **)(this + 8);
                    /* catch() { ... } // from try @ 009b1868 with catch @ 009b1d18 */
  if (pvVar2 != pvVar6) {
                    /* catch() { ... } // from try @ 009b1840 with catch @ 009b1d1c */
    lVar9 = 0;
    do {
                    /* catch() { ... } // from try @ 009b1b94 with catch @ 009b1d24
                       catch() { ... } // from try @ 009b1bf0 with catch @ 009b1d24 */
                    /* catch() { ... } // from try @ 009b1824 with catch @ 009b1d28 */
                    /* catch() { ... } // from try @ 009b1848 with catch @ 009b1d2c */
      cocos2d::Rect::Rect(pRVar11 + lVar9 + -0x28,(Rect *)((long)pvVar2 + lVar9 + -0x28));
      cocos2d::Rect::Rect(pRVar11 + lVar9 + -0x18,(Rect *)((long)pvVar2 + lVar9 + -0x18));
                    /* catch() { ... } // from try @ 009b1818 with catch @ 009b1d44 */
      uVar3 = *(undefined4 *)((long)pvVar2 + lVar9 + -8);
      lVar7 = lVar9 + -0x28;
      pRVar11[lVar9 + -4] = *(Rect *)((long)pvVar2 + lVar9 + -4);
      *(undefined4 *)(pRVar11 + lVar9 + -8) = uVar3;
      lVar9 = lVar7;
    } while ((long)pvVar6 - (long)pvVar2 != lVar7);
    pvVar6 = *(void **)this;
    pRVar11 = pRVar11 + lVar7;
  }
  *(Rect **)this = pRVar11;
  *(Rect **)(this + 8) = this_00 + 0x28;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar10 * 0x28);
                    /* catch() { ... } // from try @ 009b17cc with catch @ 009b1d7c */
  if (pvVar6 == (void *)0x0) {
                    /* try { // try from 009b1dec to 00ab1e3b has its CatchHandler @ 009b1dec
                       catch() { ... } // from try @ 009b1dec with catch @ 009b1dec
                       catch() { ... } // from try @ 009b1fe0 with catch @ 009b1dec */
    return;
  }
                    /* catch() { ... } // from try @ 009b17c0 with catch @ 009b1d80 */
                    /* catch() { ... } // from try @ 009b17a0 with catch @ 009b1d84 */
                    /* catch() { ... } // from try @ 009b17d8 with catch @ 009b1d94
                       catch() { ... } // from try @ 009b1910 with catch @ 009b1d94 */
  operator_delete(pvVar6);
  return;
}

