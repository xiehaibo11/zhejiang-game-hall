
/* cocos2d::SkinData::~SkinData() */

void __thiscall cocos2d::SkinData::~SkinData(SkinData *this)

{
  byte bVar1;
  Mat4 *pMVar2;
  byte *pbVar3;
  byte *pbVar4;
  Mat4 *pMVar5;
  byte *pbVar6;
  Mat4 *pMVar7;
  
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
             *)(this + 0x78),*(__tree_node **)(this + 0x80));
  pMVar7 = *(Mat4 **)(this + 0x60);
  if (pMVar7 != (Mat4 *)0x0) {
    pMVar5 = *(Mat4 **)(this + 0x68);
    pMVar2 = pMVar7;
    if (pMVar5 != pMVar7) {
      do {
        pMVar5 = pMVar5 + -0x40;
        Mat4::~Mat4(pMVar5);
      } while (pMVar7 != pMVar5);
      pMVar2 = *(Mat4 **)(this + 0x60);
    }
    *(Mat4 **)(this + 0x68) = pMVar7;
    operator_delete(pMVar2);
  }
  pMVar7 = *(Mat4 **)(this + 0x48);
  if (pMVar7 != (Mat4 *)0x0) {
    pMVar5 = *(Mat4 **)(this + 0x50);
    pMVar2 = pMVar7;
    if (pMVar5 != pMVar7) {
      do {
        pMVar5 = pMVar5 + -0x40;
        Mat4::~Mat4(pMVar5);
      } while (pMVar7 != pMVar5);
      pMVar2 = *(Mat4 **)(this + 0x48);
    }
    *(Mat4 **)(this + 0x50) = pMVar7;
    operator_delete(pMVar2);
  }
  pMVar7 = *(Mat4 **)(this + 0x30);
  if (pMVar7 != (Mat4 *)0x0) {
    pMVar5 = *(Mat4 **)(this + 0x38);
    pMVar2 = pMVar7;
    if (pMVar5 != pMVar7) {
      do {
        pMVar5 = pMVar5 + -0x40;
        Mat4::~Mat4(pMVar5);
      } while (pMVar7 != pMVar5);
      pMVar2 = *(Mat4 **)(this + 0x30);
    }
    *(Mat4 **)(this + 0x38) = pMVar7;
    operator_delete(pMVar2);
  }
  pbVar6 = *(byte **)(this + 0x18);
  if (pbVar6 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x20);
    pbVar3 = pbVar6;
    if (pbVar4 != pbVar6) {
      bVar1 = pbVar4[-0x18];
      pbVar3 = pbVar4 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar6 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar4 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x18);
    }
    *(byte **)(this + 0x20) = pbVar6;
    operator_delete(pbVar3);
  }
  pbVar6 = *(byte **)this;
  if (pbVar6 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 8);
    pbVar3 = pbVar6;
    if (pbVar4 != pbVar6) {
      bVar1 = pbVar4[-0x18];
      pbVar3 = pbVar4 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar6 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar4 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)this;
    }
    *(byte **)(this + 8) = pbVar6;
    operator_delete(pbVar3);
    return;
  }
  return;
}

