
/* std::__ndk1::vector<spine::V3F_C4B_C4B_T2F, std::__ndk1::allocator<spine::V3F_C4B_C4B_T2F>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<spine::V3F_C4B_C4B_T2F,std::__ndk1::allocator<spine::V3F_C4B_C4B_T2F>>::__append
          (vector<spine::V3F_C4B_C4B_T2F,std::__ndk1::allocator<spine::V3F_C4B_C4B_T2F>> *this,
          ulong param_1)

{
  Vec3 *pVVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  Vec3 *pVVar7;
  ulong uVar8;
  Vec3 *pVVar9;
  
  pVVar9 = *(Vec3 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pVVar9 >> 2) * 0x6db6db6db6db6db7)) {
    pVVar7 = pVVar9;
    if (param_1 != 0) {
      pVVar7 = pVVar9 + param_1 * 0x1c;
      do {
        *(undefined8 *)pVVar9 = 0;
        *(undefined8 *)(pVVar9 + 8) = 0;
        *(undefined4 *)(pVVar9 + 0x18) = 0;
        *(undefined8 *)(pVVar9 + 0x10) = 0;
        cocos2d::Vec3::Vec3(pVVar9);
        cocos2d::Color4B::Color4B((Color4B *)(pVVar9 + 0xc));
        cocos2d::Color4B::Color4B((Color4B *)(pVVar9 + 0x10));
        pVVar1 = pVVar9 + 0x1c;
        *(undefined4 *)(pVVar9 + 0x14) = 0;
        *(undefined4 *)(pVVar9 + 0x18) = 0;
        pVVar9 = pVVar1;
                    /* try { // try from 00d54748 to 00e54753 has its CatchHandler @ 00d547dc */
      } while (pVVar7 != pVVar1);
    }
    *(Vec3 **)(this + 8) = pVVar7;
    return;
  }
                    /* catch() { ... } // from try @ 00d5463c with catch @ 00d545f0 */
  lVar6 = (long)pVVar9 - *(long *)this >> 2;
  uVar8 = 0x924924924924924;
  uVar2 = lVar6 * 0x6db6db6db6db6db7 + param_1;
  if (0x924924924924924 < uVar2) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 2;
                    /* try { // try from 00d54630 to 00e5463b has its CatchHandler @ 00d546b4 */
                    /* try { // try from 00d5463c to 00e546e7 has its CatchHandler @ 00d545f0 */
  if ((ulong)(lVar4 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar5 = lVar4 * -0x2492492492492492;
    uVar8 = uVar2;
    if (uVar2 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00d54664;
    }
  }
  pvVar3 = operator_new(uVar8 * 0x1c);
LAB_00d54664:
  lVar6 = lVar6 * 4;
  pVVar9 = (Vec3 *)((long)pvVar3 + param_1 * 0x1c + lVar6);
  lVar4 = lVar6;
  do {
    pVVar7 = (Vec3 *)((long)pvVar3 + lVar4);
    *(undefined8 *)pVVar7 = 0;
    *(undefined8 *)(pVVar7 + 8) = 0;
    *(undefined4 *)(pVVar7 + 0x18) = 0;
    *(undefined8 *)(pVVar7 + 0x10) = 0;
    cocos2d::Vec3::Vec3(pVVar7);
    cocos2d::Color4B::Color4B((Color4B *)(pVVar7 + 0xc));
    cocos2d::Color4B::Color4B((Color4B *)(pVVar7 + 0x10));
    lVar4 = lVar4 + 0x1c;
                    /* catch() { ... } // from try @ 00d54630 with catch @ 00d546b4 */
    *(undefined4 *)(pVVar7 + 0x14) = 0;
    *(undefined4 *)(pVVar7 + 0x18) = 0;
  } while (pVVar9 != pVVar7 + 0x1c);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  __dest = (void *)((long)pvVar3 + (lVar6 - __n));
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(Vec3 **)(this + 8) = pVVar9;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar8 * 0x1c);
  if (__src == (void *)0x0) {
                    /* try { // try from 00d54754 to 00e547e7 has its CatchHandler @ 00d546e8 */
    return;
  }
                    /* catch() { ... } // from try @ 00d54754 with catch @ 00d546e8 */
  operator_delete(__src);
  return;
}

