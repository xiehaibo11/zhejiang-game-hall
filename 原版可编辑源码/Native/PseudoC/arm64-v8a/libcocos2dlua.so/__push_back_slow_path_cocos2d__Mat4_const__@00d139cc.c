
/* void std::__ndk1::vector<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4>
   >::__push_back_slow_path<cocos2d::Mat4 const&>(cocos2d::Mat4 const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
__push_back_slow_path<cocos2d::Mat4_const&>
          (vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this,Mat4 *param_1)

{
  Mat4 *pMVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Mat4 *this_00;
  Mat4 *this_01;
  Mat4 *pMVar6;
  Mat4 *pMVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar8 = lVar5 + 1;
  if (uVar8 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 6) < 0x1ffffffffffffff) {
    uVar4 = lVar3 >> 5;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00d13a4c;
    }
    if (uVar8 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar8 = 0x3ffffffffffffff;
  }
  pvVar2 = operator_new(uVar8 << 6);
LAB_00d13a4c:
  this_00 = (Mat4 *)((long)pvVar2 + lVar5 * 0x40);
  cocos2d::Mat4::Mat4(this_00,param_1);
  this_01 = *(Mat4 **)this;
  pMVar6 = *(Mat4 **)(this + 8);
  pMVar1 = this_00 + 0x40;
  pMVar7 = this_01;
  if (pMVar6 != this_01) {
    do {
      pMVar6 = pMVar6 + -0x40;
      cocos2d::Mat4::Mat4(this_00 + -0x40,pMVar6);
      this_00 = this_00 + -0x40;
    } while (this_01 != pMVar6);
    this_01 = *(Mat4 **)(this + 8);
    pMVar7 = *(Mat4 **)this;
  }
  *(Mat4 **)this = this_00;
  *(Mat4 **)(this + 8) = pMVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0x40);
  while (this_01 != pMVar7) {
    this_01 = this_01 + -0x40;
    cocos2d::Mat4::~Mat4(this_01);
  }
  if (pMVar7 != (Mat4 *)0x0) {
    operator_delete(pMVar7);
    return;
  }
  return;
}

