
/* std::__ndk1::vector<cocos2d::Vec3, std::__ndk1::allocator<cocos2d::Vec3> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::__append
          (vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *this,ulong param_1)

{
  ulong uVar1;
  void *__src;
  void *pvVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Vec3 *pVVar6;
  Vec3 *pVVar7;
  ulong uVar8;
  Vec3 *pVVar9;
  
  pVVar6 = *(Vec3 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pVVar6 >> 2) * -0x5555555555555555)) {
    pVVar7 = pVVar6;
    if (param_1 != 0) {
      pVVar7 = pVVar6 + param_1 * 0xc;
      lVar5 = param_1 * 0xc;
      do {
        cocos2d::Vec3::Vec3(pVVar6);
        lVar5 = lVar5 + -0xc;
        pVVar6 = pVVar6 + 0xc;
      } while (lVar5 != 0);
    }
    *(Vec3 **)(this + 8) = pVVar7;
    return;
  }
  uVar8 = 0x1555555555555555;
  lVar5 = (long)pVVar6 - *(long *)this >> 2;
  uVar1 = lVar5 * -0x5555555555555555 + param_1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar4 = lVar3 * 0x5555555555555556;
    uVar8 = uVar1;
    if (uVar1 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00cbac24;
    }
  }
  pvVar2 = operator_new(uVar8 * 0xc);
LAB_00cbac24:
  pVVar9 = (Vec3 *)((long)pvVar2 + lVar5 * 4);
  lVar5 = param_1 * 0xc;
  pVVar7 = pVVar9 + lVar5;
  pVVar6 = pVVar9;
  do {
    cocos2d::Vec3::Vec3(pVVar6);
    lVar5 = lVar5 + -0xc;
    pVVar6 = pVVar6 + 0xc;
  } while (lVar5 != 0);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy(pVVar9 + -__n,__src,__n);
  }
  *(Vec3 **)this = pVVar9 + -__n;
  *(Vec3 **)(this + 8) = pVVar7;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0xc);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

