
/* cocos2d::PURibbonTrail::setNumberOfChains(unsigned long) */

void __thiscall cocos2d::PURibbonTrail::setNumberOfChains(PURibbonTrail *this,ulong param_1)

{
  Vec4 *pVVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  Node *pNVar6;
  ulong *__dest;
  Vec4 *pVVar7;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x28))();
  PUBillboardChain::setNumberOfChains((PUBillboardChain *)this,param_1);
  pVVar7 = *(Vec4 **)(this + 0x170);
  uVar5 = (long)pVVar7 - *(long *)(this + 0x168) >> 4;
  if (uVar5 < param_1) {
    std::__ndk1::vector<cocos2d::Vec4,std::__ndk1::allocator<cocos2d::Vec4>>::__append
              ((vector<cocos2d::Vec4,std::__ndk1::allocator<cocos2d::Vec4>> *)(this + 0x168),
               param_1 - uVar5,(Vec4 *)Vec4::ONE);
  }
  else if (uVar5 != param_1) {
    pVVar1 = (Vec4 *)(*(long *)(this + 0x168) + param_1 * 0x10);
    while (pVVar1 != pVVar7) {
      pVVar7 = pVVar7 + -0x10;
      Vec4::~Vec4(pVVar7);
    }
    *(Vec4 **)(this + 0x170) = pVVar1;
  }
  pVVar7 = *(Vec4 **)(this + 0x188);
  uVar5 = (long)pVVar7 - *(long *)(this + 0x180) >> 4;
  if (uVar5 < param_1) {
    std::__ndk1::vector<cocos2d::Vec4,std::__ndk1::allocator<cocos2d::Vec4>>::__append
              ((vector<cocos2d::Vec4,std::__ndk1::allocator<cocos2d::Vec4>> *)(this + 0x180),
               param_1 - uVar5,(Vec4 *)&Vec4::ZERO);
  }
  else if (uVar5 != param_1) {
    pVVar1 = (Vec4 *)(*(long *)(this + 0x180) + param_1 * 0x10);
    while (pVVar1 != pVVar7) {
      pVVar7 = pVVar7 + -0x10;
      Vec4::~Vec4(pVVar7);
    }
    *(Vec4 **)(this + 0x188) = pVVar1;
  }
  local_50._0_4_ = 10.0;
  uVar5 = *(long *)(this + 0x1a0) - *(long *)(this + 0x198) >> 2;
  if (uVar5 < param_1) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x198),param_1 - uVar5,
               (float *)&local_50);
  }
  else if (uVar5 != param_1) {
    *(ulong *)(this + 0x1a0) = *(long *)(this + 0x198) + param_1 * 4;
  }
  local_50 = (ulong)local_50._4_4_ << 0x20;
  uVar5 = *(long *)(this + 0x1b8) - *(long *)(this + 0x1b0) >> 2;
  if (uVar5 < param_1) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x1b0),param_1 - uVar5,
               (float *)&local_50);
  }
  else if (uVar5 != param_1) {
    *(ulong *)(this + 0x1b8) = *(long *)(this + 0x1b0) + param_1 * 4;
  }
  if (param_1 < uVar3) {
    __dest = *(ulong **)(this + 0x118);
    puVar4 = *(ulong **)(this + 0x120);
    if (__dest != puVar4) {
      do {
        while (param_1 <= *__dest) {
          __n = (long)puVar4 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          puVar4 = __dest + ((long)__n >> 3);
          *(ulong **)(this + 0x120) = puVar4;
          if (__dest == puVar4) goto LAB_00e604ec;
        }
        __dest = __dest + 1;
      } while (__dest != puVar4);
    }
  }
  else if (uVar3 < param_1) {
    local_50 = uVar3;
    do {
      std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::insert
                ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x118),
                 *(undefined8 *)(this + 0x118),&local_50);
      local_50 = local_50 + 1;
    } while (local_50 < param_1);
  }
LAB_00e604ec:
  if (*(long *)(this + 0xf0) != *(long *)(this + 0xe8)) {
    pNVar6 = (Node *)0x0;
    do {
      resetTrail((ulong)this,pNVar6);
      pNVar6 = pNVar6 + 1;
    } while (pNVar6 < (Node *)(*(long *)(this + 0xf0) - *(long *)(this + 0xe8) >> 3));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

