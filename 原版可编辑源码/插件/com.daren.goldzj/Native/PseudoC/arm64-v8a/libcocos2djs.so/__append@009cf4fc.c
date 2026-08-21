
/* std::__ndk1::vector<cocos2d::renderer::RenderData,
   std::__ndk1::allocator<cocos2d::renderer::RenderData> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::RenderData,std::__ndk1::allocator<cocos2d::renderer::RenderData>>::
__append(vector<cocos2d::renderer::RenderData,std::__ndk1::allocator<cocos2d::renderer::RenderData>>
         *this,ulong param_1)

{
  ulong uVar1;
  RenderData *pRVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  RenderData *pRVar7;
  RenderData *pRVar8;
  ulong uVar9;
  RenderData *pRVar10;
  RenderData *pRVar11;
  
  pRVar2 = *(RenderData **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pRVar2 >> 3) * 0x6db6db6db6db6db7)) {
    do {
      cocos2d::renderer::RenderData::RenderData(pRVar2);
      param_1 = param_1 - 1;
      pRVar2 = (RenderData *)(*(long *)(this + 8) + 0x38);
      *(RenderData **)(this + 8) = pRVar2;
    } while (param_1 != 0);
    return;
  }
                    /* try { // try from 009cf54c to 00acf5a7 has its CatchHandler @ 009cf54c
                       catch() { ... } // from try @ 009cf54c with catch @ 009cf54c
                       catch() { ... } // from try @ 009cfa18 with catch @ 009cf54c
                       catch() { ... } // from try @ 009cfa78 with catch @ 009cf54c
                       catch() { ... } // from try @ 009cfae0 with catch @ 009cf54c
                       catch() { ... } // from try @ 009cfb68 with catch @ 009cf54c */
  lVar6 = (long)pRVar2 - *(long *)this >> 3;
  uVar9 = 0x492492492492492;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + param_1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar4 * 0x6db6db6db6db6db7) < 0x249249249249249) {
                    /* try { // try from 009cf5a8 to 00acf5bf has its CatchHandler @ 009cfbf8 */
    uVar5 = lVar4 * -0x2492492492492492;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_009cf5c8;
    }
  }
  pvVar3 = operator_new(uVar9 * 0x38);
LAB_009cf5c8:
                    /* try { // try from 009cf5c8 to 00acf5d3 has its CatchHandler @ 009cfbf4 */
  pRVar11 = (RenderData *)((long)pvVar3 + lVar6 * 8);
                    /* try { // try from 009cf5d4 to 00acf5df has its CatchHandler @ 009cfbf0 */
  pRVar2 = pRVar11;
  do {
    cocos2d::renderer::RenderData::RenderData(pRVar2);
                    /* try { // try from 009cf5e0 to 00acf807 has its CatchHandler @ 009cfc08 */
    param_1 = param_1 - 1;
    pRVar2 = pRVar2 + 0x38;
  } while (param_1 != 0);
  pRVar7 = *(RenderData **)this;
  pRVar10 = *(RenderData **)(this + 8);
  pRVar8 = pRVar7;
  if (pRVar10 != pRVar7) {
    do {
      pRVar10 = pRVar10 + -0x38;
      cocos2d::renderer::RenderData::RenderData(pRVar11 + -0x38,pRVar10);
      pRVar11 = pRVar11 + -0x38;
    } while (pRVar7 != pRVar10);
    pRVar7 = *(RenderData **)this;
    pRVar8 = *(RenderData **)(this + 8);
  }
  *(RenderData **)this = pRVar11;
  *(RenderData **)(this + 8) = pRVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar9 * 0x38);
  while (pRVar8 != pRVar7) {
    pRVar8 = pRVar8 + -0x38;
    (*(code *)**(undefined8 **)pRVar8)(pRVar8);
  }
  if (pRVar7 == (RenderData *)0x0) {
    return;
  }
  operator_delete(pRVar7);
  return;
}

