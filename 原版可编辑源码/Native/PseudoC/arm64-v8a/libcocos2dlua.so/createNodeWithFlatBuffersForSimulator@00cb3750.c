
/* cocos2d::CSLoader::createNodeWithFlatBuffersForSimulator(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::CSLoader::createNodeWithFlatBuffersForSimulator(CSLoader *this,basic_string *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  FlatBuffersSerialize *this_00;
  long lVar6;
  SpriteFrameCache *this_01;
  undefined8 uVar7;
  NodeTree *pNVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  this_00 = (FlatBuffersSerialize *)cocostudio::FlatBuffersSerialize::getInstance();
  this_00[0x30] = (FlatBuffersSerialize)0x1;
  lVar6 = cocostudio::FlatBuffersSerialize::createFlatBuffersWithXMLFileForSimulator
                    (this_00,param_1);
  piVar1 = (int *)((long)*(uint **)(lVar6 + 0x18) + (ulong)**(uint **)(lVar6 + 0x18));
  lVar6 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 + (6 - lVar6));
  puVar2 = (uint *)((long)piVar1 + (ulong)uVar4);
  uVar3 = *(uint *)((long)puVar2 + (ulong)*puVar2);
  uVar9 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    lVar6 = 0;
    if (uVar4 != 0) {
      lVar6 = (long)puVar2 + (ulong)*puVar2;
    }
    lVar6 = lVar6 + 8;
    do {
      this_01 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_70,(char *)(lVar6 + (ulong)*(uint *)(lVar6 + -4)));
      SpriteFrameCache::addSpriteFramesWithFile(this_01,(basic_string *)local_70);
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar9 = uVar9 - 1;
      lVar6 = lVar6 + 4;
    } while (uVar9 != 0);
    lVar6 = (long)*piVar1;
  }
  if ((*(ushort *)((long)piVar1 - lVar6) < 0xb) ||
     (uVar9 = (ulong)((ushort *)((long)piVar1 - lVar6))[5], uVar9 == 0)) {
    pNVar8 = (NodeTree *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar9);
    pNVar8 = (NodeTree *)((long)puVar2 + (ulong)*puVar2);
  }
  uVar7 = nodeWithFlatBuffersForSimulator(this,pNVar8);
  *(undefined8 *)(this + 0x88) = 0;
  cocostudio::FlatBuffersSerialize::deleteFlatBufferBuilder(this_00);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

