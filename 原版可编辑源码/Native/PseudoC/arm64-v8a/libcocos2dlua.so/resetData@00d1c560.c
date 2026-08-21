
/* cocos2d::SkinData::resetData() */

void __thiscall cocos2d::SkinData::resetData(SkinData *this)

{
  byte *pbVar1;
  Mat4 *pMVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  Mat4 *pMVar6;
  Mat4 *pMVar7;
  
  pbVar1 = *(byte **)this;
  pbVar3 = *(byte **)(this + 8);
  if (pbVar3 != pbVar1) {
    bVar5 = pbVar3[-0x18];
    pbVar4 = pbVar3 + -0x18;
    while( true ) {
      if ((bVar5 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
      if (pbVar1 == pbVar4) break;
      bVar5 = pbVar4[-0x18];
      pbVar3 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
    }
  }
  pbVar3 = *(byte **)(this + 0x18);
  pbVar4 = *(byte **)(this + 0x20);
  *(byte **)(this + 8) = pbVar1;
  if (pbVar4 != pbVar3) {
    bVar5 = pbVar4[-0x18];
    pbVar1 = pbVar4 + -0x18;
    while( true ) {
      if ((bVar5 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
      if (pbVar3 == pbVar1) break;
      bVar5 = pbVar1[-0x18];
      pbVar4 = pbVar1;
      pbVar1 = pbVar1 + -0x18;
    }
  }
  pMVar2 = *(Mat4 **)(this + 0x30);
  pMVar6 = *(Mat4 **)(this + 0x38);
  *(byte **)(this + 0x20) = pbVar3;
  while (pMVar6 != pMVar2) {
    pMVar6 = pMVar6 + -0x40;
    Mat4::~Mat4(pMVar6);
  }
  pMVar6 = *(Mat4 **)(this + 0x48);
  pMVar7 = *(Mat4 **)(this + 0x50);
  *(Mat4 **)(this + 0x38) = pMVar2;
  while (pMVar7 != pMVar6) {
    pMVar7 = pMVar7 + -0x40;
    Mat4::~Mat4(pMVar7);
  }
  pMVar2 = *(Mat4 **)(this + 0x60);
  pMVar7 = *(Mat4 **)(this + 0x68);
  *(Mat4 **)(this + 0x50) = pMVar6;
  while (pMVar7 != pMVar2) {
    pMVar7 = pMVar7 + -0x40;
    Mat4::~Mat4(pMVar7);
  }
  *(Mat4 **)(this + 0x68) = pMVar2;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
             *)(this + 0x78),*(__tree_node **)(this + 0x80));
  *(SkinData **)(this + 0x78) = this + 0x80;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  return;
}

