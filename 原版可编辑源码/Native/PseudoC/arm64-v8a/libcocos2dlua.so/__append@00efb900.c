
/* std::__ndk1::vector<cocos2d::V3F_C4B_T2F_Quad, std::__ndk1::allocator<cocos2d::V3F_C4B_T2F_Quad>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<cocos2d::V3F_C4B_T2F_Quad,std::__ndk1::allocator<cocos2d::V3F_C4B_T2F_Quad>>::
__append(vector<cocos2d::V3F_C4B_T2F_Quad,std::__ndk1::allocator<cocos2d::V3F_C4B_T2F_Quad>> *this,
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
  ulong uVar7;
  Vec3 *pVVar8;
  Vec3 *pVVar9;
  
  pVVar9 = *(Vec3 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pVVar9 >> 5) * -0x5555555555555555)) {
    pVVar8 = pVVar9;
    if (param_1 != 0) {
      pVVar8 = pVVar9 + param_1 * 0x60;
      do {
        *(undefined8 *)(pVVar9 + 0x48) = 0;
        *(undefined8 *)(pVVar9 + 0x40) = 0;
        *(undefined8 *)(pVVar9 + 0x58) = 0;
        *(undefined8 *)(pVVar9 + 0x50) = 0;
        *(undefined8 *)(pVVar9 + 0x28) = 0;
        *(undefined8 *)(pVVar9 + 0x20) = 0;
        *(undefined8 *)(pVVar9 + 0x38) = 0;
        *(undefined8 *)(pVVar9 + 0x30) = 0;
        *(undefined8 *)(pVVar9 + 8) = 0;
        *(undefined8 *)pVVar9 = 0;
        *(undefined8 *)(pVVar9 + 0x18) = 0;
        *(undefined8 *)(pVVar9 + 0x10) = 0;
        cocos2d::Vec3::Vec3(pVVar9);
        cocos2d::Color4B::Color4B((Color4B *)(pVVar9 + 0xc));
        *(undefined4 *)(pVVar9 + 0x10) = 0;
        *(undefined4 *)(pVVar9 + 0x14) = 0;
        cocos2d::Vec3::Vec3(pVVar9 + 0x18);
        cocos2d::Color4B::Color4B((Color4B *)(pVVar9 + 0x24));
        *(undefined4 *)(pVVar9 + 0x28) = 0;
        *(undefined4 *)(pVVar9 + 0x2c) = 0;
        cocos2d::Vec3::Vec3(pVVar9 + 0x30);
        cocos2d::Color4B::Color4B((Color4B *)(pVVar9 + 0x3c));
        *(undefined4 *)(pVVar9 + 0x40) = 0;
        *(undefined4 *)(pVVar9 + 0x44) = 0;
        cocos2d::Vec3::Vec3(pVVar9 + 0x48);
        cocos2d::Color4B::Color4B((Color4B *)(pVVar9 + 0x54));
        pVVar1 = pVVar9 + 0x60;
        *(undefined4 *)(pVVar9 + 0x58) = 0;
        *(undefined4 *)(pVVar9 + 0x5c) = 0;
        pVVar9 = pVVar1;
      } while (pVVar8 != pVVar1);
    }
    *(Vec3 **)(this + 8) = pVVar8;
    return;
  }
  uVar7 = 0x2aaaaaaaaaaaaaa;
  lVar6 = (long)pVVar9 - *(long *)this >> 5;
  uVar2 = lVar6 * -0x5555555555555555 + param_1;
  if (0x2aaaaaaaaaaaaaa < uVar2) {
                    /* try { // try from 00efbb58 to 00ffbb6f has its CatchHandler @ 00efbb70 */
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 5;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x155555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar7 = uVar2;
    if (uVar2 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00efb9ac;
    }
  }
  pvVar3 = operator_new(uVar7 * 0x60);
LAB_00efb9ac:
  lVar6 = lVar6 * 0x20;
  pVVar9 = (Vec3 *)((long)pvVar3 + param_1 * 0x60 + lVar6);
  lVar4 = lVar6;
  do {
    pVVar8 = (Vec3 *)((long)pvVar3 + lVar4);
    *(undefined8 *)(pVVar8 + 0x48) = 0;
    *(undefined8 *)(pVVar8 + 0x40) = 0;
    *(undefined8 *)(pVVar8 + 0x58) = 0;
    *(undefined8 *)(pVVar8 + 0x50) = 0;
    *(undefined8 *)(pVVar8 + 0x28) = 0;
    *(undefined8 *)(pVVar8 + 0x20) = 0;
    *(undefined8 *)(pVVar8 + 0x38) = 0;
    *(undefined8 *)(pVVar8 + 0x30) = 0;
    *(undefined8 *)(pVVar8 + 8) = 0;
    *(undefined8 *)pVVar8 = 0;
    *(undefined8 *)(pVVar8 + 0x18) = 0;
    *(undefined8 *)(pVVar8 + 0x10) = 0;
    cocos2d::Vec3::Vec3(pVVar8);
    cocos2d::Color4B::Color4B((Color4B *)(pVVar8 + 0xc));
    *(undefined4 *)(pVVar8 + 0x10) = 0;
    *(undefined4 *)(pVVar8 + 0x14) = 0;
    cocos2d::Vec3::Vec3(pVVar8 + 0x18);
    cocos2d::Color4B::Color4B((Color4B *)(pVVar8 + 0x24));
    *(undefined4 *)(pVVar8 + 0x28) = 0;
    *(undefined4 *)(pVVar8 + 0x2c) = 0;
    cocos2d::Vec3::Vec3(pVVar8 + 0x30);
    cocos2d::Color4B::Color4B((Color4B *)(pVVar8 + 0x3c));
    *(undefined4 *)(pVVar8 + 0x40) = 0;
    *(undefined4 *)(pVVar8 + 0x44) = 0;
    cocos2d::Vec3::Vec3(pVVar8 + 0x48);
    cocos2d::Color4B::Color4B((Color4B *)(pVVar8 + 0x54));
    lVar4 = lVar4 + 0x60;
    *(undefined4 *)(pVVar8 + 0x58) = 0;
    *(undefined4 *)(pVVar8 + 0x5c) = 0;
  } while (pVVar9 != pVVar8 + 0x60);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  __dest = (void *)((long)pvVar3 + (lVar6 - __n));
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(Vec3 **)(this + 8) = pVVar9;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar7 * 0x60);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

