
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::Mat4*>::value&&is_constructible<cocos2d::Mat4,
   std::__ndk1::iterator_traits<cocos2d::Mat4*>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4>
   >::assign<cocos2d::Mat4*>(cocos2d::Mat4*, cocos2d::Mat4*) */

void __thiscall
std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::assign<cocos2d::Mat4*>
          (vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this,Mat4 *param_1,
          Mat4 *param_2)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  Mat4 *pMVar3;
  Mat4 *pMVar4;
  Mat4 *pMVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(this + 0x10);
  pMVar4 = *(Mat4 **)this;
  uVar6 = (long)param_2 - (long)param_1 >> 6;
  if ((ulong)(lVar1 - (long)pMVar4 >> 6) < uVar6) {
    if (pMVar4 != (Mat4 *)0x0) {
      pMVar5 = *(Mat4 **)(this + 8);
      pMVar3 = pMVar4;
      if (pMVar5 != pMVar4) {
        do {
          pMVar5 = pMVar5 + -0x40;
          cocos2d::Mat4::~Mat4(pMVar5);
        } while (pMVar4 != pMVar5);
        pMVar3 = *(Mat4 **)this;
      }
      *(Mat4 **)(this + 8) = pMVar4;
      operator_delete(pMVar3);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar6 >> 0x3a != 0) {
LAB_00d2b680:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 6) < 0x1ffffffffffffff) {
      uVar2 = lVar1 >> 5;
      if ((uVar6 <= uVar2) && (uVar6 = uVar2, uVar2 >> 0x3a != 0)) goto LAB_00d2b680;
    }
    else {
      uVar6 = 0x3ffffffffffffff;
    }
    pMVar4 = operator_new(uVar6 * 0x40);
    *(Mat4 **)this = pMVar4;
    *(Mat4 **)(this + 8) = pMVar4;
    *(Mat4 **)(this + 0x10) = pMVar4 + uVar6 * 0x40;
    for (; param_1 != param_2; param_1 = param_1 + 0x40) {
      cocos2d::Mat4::Mat4(pMVar4,param_1);
      pMVar4 = pMVar4 + 0x40;
    }
    *(Mat4 **)(this + 8) = pMVar4;
  }
  else {
    uVar2 = *(long *)(this + 8) - (long)pMVar4 >> 6;
    pMVar3 = param_1 + (*(long *)(this + 8) - (long)pMVar4);
    pMVar5 = pMVar3;
    if (uVar6 <= uVar2) {
      pMVar5 = param_2;
    }
    __n = (long)pMVar5 - (long)param_1;
    if (__n != 0) {
      memmove(pMVar4,param_1,__n);
    }
    if (uVar2 < uVar6) {
      pMVar4 = *(Mat4 **)(this + 8);
      while (pMVar5 != param_2) {
        cocos2d::Mat4::Mat4(pMVar4,pMVar3);
        pMVar4 = pMVar4 + 0x40;
        pMVar3 = pMVar3 + 0x40;
        pMVar5 = pMVar3;
      }
    }
    else {
      pMVar3 = *(Mat4 **)(this + 8);
      pMVar4 = pMVar4 + ((long)__n >> 6) * 0x40;
      while (pMVar3 != pMVar4) {
        pMVar3 = pMVar3 + -0x40;
        cocos2d::Mat4::~Mat4(pMVar3);
      }
    }
    *(Mat4 **)(this + 8) = pMVar4;
  }
  return;
}

