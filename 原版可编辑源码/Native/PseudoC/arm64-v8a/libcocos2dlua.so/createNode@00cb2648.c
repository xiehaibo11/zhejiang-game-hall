
/* cocos2d::CSLoader::createNode(cocos2d::Data const&, std::__ndk1::function<void (cocos2d::Ref*)>
   const&) */

long cocos2d::CSLoader::createNode(Data *param_1,function *param_2)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  CSLoader *pCVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  SpriteFrameCache *this;
  long lVar9;
  Ref *this_00;
  NodeTree *pNVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (DAT_01786980 == (CSLoader *)0x0) {
    pCVar5 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
    if (pCVar5 != (CSLoader *)0x0) {
      CSLoader(pCVar5);
    }
    DAT_01786980 = pCVar5;
    init(pCVar5);
  }
  pCVar5 = DAT_01786980;
  uVar6 = Data::isNull((Data *)param_1);
  if (((uVar6 & 1) == 0) && (lVar7 = Data::getSize((Data *)param_1), 0 < lVar7)) {
    puVar8 = (uint *)Data::getBytes((Data *)param_1);
    piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
    if (piVar1 != (int *)0x0) {
      lVar7 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 + (6 - lVar7));
      puVar8 = (uint *)((long)piVar1 + (ulong)uVar3);
      uVar2 = *(uint *)((long)puVar8 + (ulong)*puVar8);
      uVar6 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        lVar7 = 0;
        if (uVar3 != 0) {
          lVar7 = (long)puVar8 + (ulong)*puVar8;
        }
        lVar7 = lVar7 + 8;
        do {
          this = (SpriteFrameCache *)SpriteFrameCache::getInstance();
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_70,(char *)(lVar7 + (ulong)*(uint *)(lVar7 + -4)));
          SpriteFrameCache::addSpriteFramesWithFile(this,(basic_string *)local_70);
          if (((byte)local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
          uVar6 = uVar6 - 1;
          lVar7 = lVar7 + 4;
        } while (uVar6 != 0);
        lVar7 = (long)*piVar1;
      }
      if ((*(ushort *)((long)piVar1 - lVar7) < 0xb) ||
         (uVar6 = (ulong)((ushort *)((long)piVar1 - lVar7))[5], uVar6 == 0)) {
        pNVar10 = (NodeTree *)0x0;
      }
      else {
        puVar8 = (uint *)((long)piVar1 + uVar6);
        pNVar10 = (NodeTree *)((long)puVar8 + (ulong)*puVar8);
      }
      lVar7 = nodeWithFlatBuffers(pCVar5,pNVar10,param_2);
      if ((lVar7 != 0) &&
         (lVar9 = __dynamic_cast(lVar7,&Node::typeinfo,
                                 &cocostudio::WidgetCallBackHandlerProtocol::typeinfo,
                                 0xfffffffffffffffe), lVar9 != 0)) {
        this_00 = *(Ref **)(*(long *)(pCVar5 + 0x98) + -8);
        *(undefined8 **)(pCVar5 + 0x98) = (undefined8 *)(*(long *)(pCVar5 + 0x98) + -8);
        Ref::release(this_00);
        if (*(long *)(pCVar5 + 0x90) == *(long *)(pCVar5 + 0x98)) {
          *(undefined8 *)(pCVar5 + 0x88) = 0;
        }
        else {
          *(undefined8 *)(pCVar5 + 0x88) = *(undefined8 *)(*(long *)(pCVar5 + 0x98) + -8);
        }
      }
      goto LAB_00cb2760;
    }
  }
  lVar7 = 0;
LAB_00cb2760:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

