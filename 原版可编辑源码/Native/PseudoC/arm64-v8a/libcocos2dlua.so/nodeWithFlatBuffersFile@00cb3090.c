
/* cocos2d::CSLoader::nodeWithFlatBuffersFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Ref*)> const&) */

undefined8 __thiscall
cocos2d::CSLoader::nodeWithFlatBuffersFile(CSLoader *this,basic_string *param_1,function *param_2)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  uint *puVar5;
  SpriteFrameCache *this_00;
  NodeTree *pNVar6;
  long lVar7;
  undefined8 uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  Data aDStack_80 [16];
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x50))(local_70,plVar3,param_1);
  plVar3 = (long *)FileUtils::getInstance();
  uVar4 = (**(code **)(*plVar3 + 0x128))(plVar3,local_70);
  if ((uVar4 & 1) == 0) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/cocostudio/ActionTimeline/CSLoader.cpp"
                        ,"nodeWithFlatBuffersFile",0x3ba);
  }
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x28))(aDStack_80,plVar3,local_70);
  uVar4 = Data::isNull(aDStack_80);
  if ((uVar4 & 1) == 0) {
    puVar5 = (uint *)Data::getBytes(aDStack_80);
    piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
    lVar7 = (long)*piVar1;
    puVar5 = (uint *)0x0;
    if ((6 < *(ushort *)((long)piVar1 - lVar7)) &&
       (uVar4 = (ulong)((ushort *)((long)piVar1 - lVar7))[3], puVar5 = (uint *)0x0, uVar4 != 0)) {
      puVar5 = (uint *)((long)piVar1 + uVar4);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    }
    uVar4 = (ulong)*puVar5;
    if (0 < (int)*puVar5) {
      puVar5 = puVar5 + 2;
      do {
        this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_98,(char *)((long)puVar5 + (ulong)puVar5[-1]));
        SpriteFrameCache::addSpriteFramesWithFile(this_00,(basic_string *)local_98);
        if (((byte)local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
      lVar7 = (long)*piVar1;
    }
    if ((*(ushort *)((long)piVar1 - lVar7) < 0xb) ||
       (uVar4 = (ulong)((ushort *)((long)piVar1 - lVar7))[5], uVar4 == 0)) {
      pNVar6 = (NodeTree *)0x0;
    }
    else {
      puVar5 = (uint *)((long)piVar1 + uVar4);
      pNVar6 = (NodeTree *)((long)puVar5 + (ulong)*puVar5);
    }
    uVar8 = nodeWithFlatBuffers(this,pNVar6,param_2);
  }
  else {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/cocostudio/ActionTimeline/CSLoader.cpp"
                        ,"nodeWithFlatBuffersFile",0x3c1);
    uVar8 = 0;
  }
  Data::~Data(aDStack_80);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

