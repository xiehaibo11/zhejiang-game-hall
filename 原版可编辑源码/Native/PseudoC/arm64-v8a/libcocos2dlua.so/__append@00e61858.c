
/* std::__ndk1::vector<cocos2d::Vec4, std::__ndk1::allocator<cocos2d::Vec4> >::__append(unsigned
   long, cocos2d::Vec4 const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Vec4,std::__ndk1::allocator<cocos2d::Vec4>>::__append
          (vector<cocos2d::Vec4,std::__ndk1::allocator<cocos2d::Vec4>> *this,ulong param_1,
          Vec4 *param_2)

{
  Vec4 *pVVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  Vec4 *pVVar5;
  Vec4 *this_00;
  Vec4 *pVVar6;
  long lVar7;
  Vec4 *pVVar8;
  ulong uVar9;
  
  pVVar5 = *(Vec4 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pVVar5 >> 4)) {
    pVVar8 = pVVar5;
    if (param_1 != 0) {
      pVVar8 = pVVar5 + param_1 * 0x10;
      lVar7 = param_1 << 4;
      do {
        cocos2d::Vec4::Vec4(pVVar5,param_2);
        lVar7 = lVar7 + -0x10;
        pVVar5 = pVVar5 + 0x10;
      } while (lVar7 != 0);
    }
    *(Vec4 **)(this + 8) = pVVar8;
    return;
  }
  lVar7 = (long)pVVar5 - *(long *)this >> 4;
  uVar9 = lVar7 + param_1;
  if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
    uVar4 = lVar3 >> 3;
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e61918;
    }
    if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar9 = 0xfffffffffffffff;
  }
  pvVar2 = operator_new(uVar9 << 4);
LAB_00e61918:
  pVVar8 = (Vec4 *)((long)pvVar2 + lVar7 * 0x10);
  lVar7 = param_1 * 0x10;
  pVVar1 = pVVar8 + lVar7;
  pVVar5 = pVVar8;
  do {
    cocos2d::Vec4::Vec4(pVVar5,param_2);
    lVar7 = lVar7 + -0x10;
    pVVar5 = pVVar5 + 0x10;
  } while (lVar7 != 0);
  pVVar5 = *(Vec4 **)this;
  pVVar6 = *(Vec4 **)(this + 8);
  this_00 = pVVar5;
  if (pVVar6 != pVVar5) {
    do {
      pVVar6 = pVVar6 + -0x10;
      cocos2d::Vec4::Vec4(pVVar8 + -0x10,pVVar6);
      pVVar8 = pVVar8 + -0x10;
    } while (pVVar5 != pVVar6);
    pVVar5 = *(Vec4 **)this;
    this_00 = *(Vec4 **)(this + 8);
  }
  *(Vec4 **)this = pVVar8;
  *(Vec4 **)(this + 8) = pVVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x10);
  while (this_00 != pVVar5) {
    this_00 = this_00 + -0x10;
    cocos2d::Vec4::~Vec4(this_00);
  }
  if (pVVar5 == (Vec4 *)0x0) {
    return;
  }
  operator_delete(pVVar5);
  return;
}

