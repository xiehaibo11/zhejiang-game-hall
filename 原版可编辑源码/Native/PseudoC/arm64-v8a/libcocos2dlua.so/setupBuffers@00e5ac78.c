
/* cocos2d::PUBillboardChain::setupBuffers() */

void __thiscall cocos2d::PUBillboardChain::setupBuffers(PUBillboardChain *this)

{
  long lVar1;
  bool bVar2;
  Ref *pRVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ushort local_74 [2];
  Vec3 aVStack_70 [12];
  undefined4 local_64;
  undefined4 uStack_60;
  Vec4 aVStack_5c [20];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x1c] != (PUBillboardChain)0x0) {
    if (*(Ref **)(this + 0x98) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x98));
    }
    if (*(Ref **)(this + 0x90) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x90));
    }
    pRVar3 = (Ref *)VertexBuffer::create
                              (0x24,(int)((ulong)(*(long *)(this + 0x48) - *(long *)(this + 0x40))
                                         >> 2) * -0x76276276,0x88e4,1);
    *(Ref **)(this + 0x98) = pRVar3;
    Ref::retain(pRVar3);
    Vec3::Vec3(aVStack_70,0.0,0.0,0.0);
    local_64 = 0;
    uStack_60 = 0;
    Vec4::Vec4(aVStack_5c,(Vec4 *)Vec4::ONE);
    lVar5 = *(long *)(this + 0xa0);
    lVar4 = *(long *)(this + 0xa8);
    lVar6 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 2;
    uVar7 = lVar6 * -0x6276276276276276;
    lVar9 = lVar4 - lVar5 >> 2;
    bVar2 = uVar7 < (ulong)(lVar9 * -0x71c71c71c71c71c7);
    uVar7 = uVar7 + lVar9 * 0x71c71c71c71c71c7;
    if (bVar2 || uVar7 == 0) {
      if (bVar2) {
        lVar5 = lVar5 + lVar6 * 0x2762762762762768;
        for (; lVar5 != lVar4; lVar4 = lVar4 + -0x24) {
          Vec4::~Vec4((Vec4 *)(lVar4 + -0x10));
        }
        *(long *)(this + 0xa8) = lVar5;
      }
    }
    else {
      std::__ndk1::
      vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
      ::__append((vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
                  *)(this + 0xa0),uVar7,(VertexInfo *)aVStack_70);
    }
    pRVar3 = (Ref *)IndexBuffer::create(0,*(int *)(this + 8) * *(int *)(this + 0x10) * 6,0x88e4,1);
    *(Ref **)(this + 0x90) = pRVar3;
    Ref::retain(pRVar3);
    local_74[0] = 0;
    lVar4 = *(long *)(this + 0xb8);
    uVar7 = *(long *)(this + 0x10) * *(long *)(this + 8) * 6;
    uVar8 = *(long *)(this + 0xc0) - lVar4 >> 1;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      if (uVar7 < uVar8) {
        *(long *)(this + 0xc0) = lVar4 + *(long *)(this + 0x10) * *(long *)(this + 8) * 0xc;
      }
    }
    else {
      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0xb8),
                 uVar7 - uVar8,local_74);
    }
    this[0x1c] = (PUBillboardChain)0x0;
    Vec4::~Vec4(aVStack_5c);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

