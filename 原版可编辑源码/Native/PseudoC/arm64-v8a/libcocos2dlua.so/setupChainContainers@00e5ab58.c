
/* cocos2d::PUBillboardChain::setupChainContainers() */

void __thiscall cocos2d::PUBillboardChain::setupChainContainers(PUBillboardChain *this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar2 = *(long *)(this + 0x40);
  lVar7 = *(long *)(this + 0x48);
  uVar3 = *(long *)(this + 8) * *(long *)(this + 0x10);
  lVar4 = lVar7 - lVar2 >> 2;
  bVar1 = uVar3 < (ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5);
  uVar5 = uVar3 + lVar4 * -0x4ec4ec4ec4ec4ec5;
  if (bVar1 || uVar5 == 0) {
    if (bVar1) {
      lVar2 = lVar2 + uVar3 * 0x34;
      for (; lVar2 != lVar7; lVar7 = lVar7 + -0x34) {
        Quaternion::~Quaternion((Quaternion *)(lVar7 + -0x10));
        Vec4::~Vec4((Vec4 *)(lVar7 + -0x20));
      }
      *(long *)(this + 0x48) = lVar2;
    }
  }
  else {
    std::__ndk1::
    vector<cocos2d::PUBillboardChain::Element,std::__ndk1::allocator<cocos2d::PUBillboardChain::Element>>
    ::__append((vector<cocos2d::PUBillboardChain::Element,std::__ndk1::allocator<cocos2d::PUBillboardChain::Element>>
                *)(this + 0x40),uVar5);
  }
  lVar7 = *(long *)(this + 0x58);
  uVar3 = *(ulong *)(this + 0x10);
  lVar2 = *(long *)(this + 0x60) - lVar7 >> 3;
  bVar1 = uVar3 < (ulong)(lVar2 * -0x5555555555555555);
  uVar5 = uVar3 + lVar2 * 0x5555555555555555;
  if (bVar1 || uVar5 == 0) {
    if (bVar1) {
      *(ulong *)(this + 0x60) = lVar7 + uVar3 * 0x18;
    }
  }
  else {
    std::__ndk1::
    vector<cocos2d::PUBillboardChain::ChainSegment,std::__ndk1::allocator<cocos2d::PUBillboardChain::ChainSegment>>
    ::__append((vector<cocos2d::PUBillboardChain::ChainSegment,std::__ndk1::allocator<cocos2d::PUBillboardChain::ChainSegment>>
                *)(this + 0x58),uVar5);
    uVar3 = *(ulong *)(this + 0x10);
  }
  if (uVar3 != 0) {
    lVar2 = *(long *)(this + 8);
    lVar7 = 0;
    uVar5 = 0;
    puVar6 = (undefined8 *)(*(long *)(this + 0x58) + 8);
    do {
      uVar5 = uVar5 + 1;
      puVar6[-1] = lVar7;
      *puVar6 = 0xffffffffffffffff;
      puVar6[1] = 0xffffffffffffffff;
      puVar6 = puVar6 + 3;
      lVar7 = lVar7 + lVar2;
    } while (uVar5 < uVar3);
  }
  return;
}

