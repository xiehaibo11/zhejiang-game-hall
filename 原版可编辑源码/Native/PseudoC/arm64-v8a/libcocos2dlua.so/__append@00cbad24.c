
/* std::__ndk1::vector<cocos2d::Color4F, std::__ndk1::allocator<cocos2d::Color4F>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<cocos2d::Color4F,std::__ndk1::allocator<cocos2d::Color4F>>::__append
          (vector<cocos2d::Color4F,std::__ndk1::allocator<cocos2d::Color4F>> *this,ulong param_1)

{
  Color4F *pCVar1;
  void *__src;
  void *pvVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  Color4F *pCVar5;
  Color4F *pCVar6;
  long lVar7;
  ulong uVar8;
  
  pCVar5 = *(Color4F **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pCVar5 >> 4)) {
    pCVar6 = pCVar5;
    if (param_1 != 0) {
      pCVar6 = pCVar5 + param_1 * 0x10;
      lVar7 = param_1 << 4;
      do {
        cocos2d::Color4F::Color4F(pCVar5);
        lVar7 = lVar7 + -0x10;
        pCVar5 = pCVar5 + 0x10;
      } while (lVar7 != 0);
    }
    *(Color4F **)(this + 8) = pCVar6;
    return;
  }
  lVar7 = (long)pCVar5 - *(long *)this >> 4;
  uVar8 = lVar7 + param_1;
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
    uVar4 = lVar3 >> 3;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00cbaddc;
    }
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar8 = 0xfffffffffffffff;
  }
  pvVar2 = operator_new(uVar8 << 4);
LAB_00cbaddc:
  pCVar6 = (Color4F *)((long)pvVar2 + lVar7 * 0x10);
  lVar7 = param_1 * 0x10;
  pCVar1 = pCVar6 + lVar7;
  pCVar5 = pCVar6;
  do {
    cocos2d::Color4F::Color4F(pCVar5);
    lVar7 = lVar7 + -0x10;
    pCVar5 = pCVar5 + 0x10;
  } while (lVar7 != 0);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy(pCVar6 + -__n,__src,__n);
  }
  *(Color4F **)this = pCVar6 + -__n;
  *(Color4F **)(this + 8) = pCVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

