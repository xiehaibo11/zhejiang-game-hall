
/* std::__ndk1::vector<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__append
          (vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this,ulong param_1)

{
  Mat4 *pMVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  Mat4 *pMVar5;
  Mat4 *this_00;
  long lVar6;
  Mat4 *pMVar7;
  Mat4 *pMVar8;
  ulong uVar9;
  
  pMVar5 = *(Mat4 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pMVar5 >> 6)) {
    pMVar8 = pMVar5;
    if (param_1 != 0) {
      pMVar8 = pMVar5 + param_1 * 0x40;
      lVar6 = param_1 << 6;
      do {
        cocos2d::Mat4::Mat4(pMVar5);
        lVar6 = lVar6 + -0x40;
        pMVar5 = pMVar5 + 0x40;
      } while (lVar6 != 0);
    }
    *(Mat4 **)(this + 8) = pMVar8;
    return;
  }
  lVar6 = (long)pMVar5 - *(long *)this >> 6;
  uVar9 = lVar6 + param_1;
  if (uVar9 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 6) < 0x1ffffffffffffff) {
    uVar4 = lVar3 >> 5;
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00d2d0d8;
    }
    if (uVar9 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar9 = 0x3ffffffffffffff;
  }
  pvVar2 = operator_new(uVar9 << 6);
LAB_00d2d0d8:
  pMVar8 = (Mat4 *)((long)pvVar2 + lVar6 * 0x40);
  lVar6 = param_1 * 0x40;
  pMVar1 = pMVar8 + lVar6;
  pMVar5 = pMVar8;
  do {
    cocos2d::Mat4::Mat4(pMVar5);
    lVar6 = lVar6 + -0x40;
    pMVar5 = pMVar5 + 0x40;
  } while (lVar6 != 0);
  pMVar5 = *(Mat4 **)this;
  pMVar7 = *(Mat4 **)(this + 8);
  this_00 = pMVar5;
  if (pMVar7 != pMVar5) {
    do {
      pMVar7 = pMVar7 + -0x40;
      cocos2d::Mat4::Mat4(pMVar8 + -0x40,pMVar7);
      pMVar8 = pMVar8 + -0x40;
    } while (pMVar5 != pMVar7);
    pMVar5 = *(Mat4 **)this;
    this_00 = *(Mat4 **)(this + 8);
  }
  *(Mat4 **)this = pMVar8;
  *(Mat4 **)(this + 8) = pMVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x40);
  while (this_00 != pMVar5) {
    this_00 = this_00 + -0x40;
    cocos2d::Mat4::~Mat4(this_00);
  }
  if (pMVar5 == (Mat4 *)0x0) {
    return;
  }
  operator_delete(pMVar5);
  return;
}

