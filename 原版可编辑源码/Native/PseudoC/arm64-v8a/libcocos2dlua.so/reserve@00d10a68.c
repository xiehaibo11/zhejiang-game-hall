
/* std::__ndk1::vector<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4> >::reserve(unsigned
   long) */

void __thiscall
std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::reserve
          (vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  Mat4 *this_00;
  Mat4 *pMVar3;
  long lVar4;
  
  this_00 = *(Mat4 **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)this_00 >> 6) < param_1) {
    if (param_1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pMVar3 = *(Mat4 **)(this + 8);
    pvVar2 = operator_new(param_1 * 0x40);
    lVar1 = (long)pvVar2 + ((long)pMVar3 - (long)this_00);
    lVar4 = lVar1;
    if ((long)pMVar3 - (long)this_00 != 0) {
      do {
        pMVar3 = pMVar3 + -0x40;
        cocos2d::Mat4::Mat4((Mat4 *)(lVar4 + -0x40),pMVar3);
        lVar4 = lVar4 + -0x40;
      } while (this_00 != pMVar3);
      pMVar3 = *(Mat4 **)this;
      this_00 = *(Mat4 **)(this + 8);
    }
    *(long *)this = lVar4;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + param_1 * 0x40);
    while (this_00 != pMVar3) {
      this_00 = this_00 + -0x40;
      cocos2d::Mat4::~Mat4(this_00);
    }
    if (pMVar3 != (Mat4 *)0x0) {
      operator_delete(pMVar3);
      return;
    }
  }
  return;
}

