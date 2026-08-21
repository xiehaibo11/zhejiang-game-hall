
/* cocos2d::CSLoader::nodeWithFlatBuffersForSimulator(flatbuffers::NodeTree const*) */

long * __thiscall
cocos2d::CSLoader::nodeWithFlatBuffersForSimulator(CSLoader *this,NodeTree *param_1)

{
  void *__s1;
  long lVar1;
  int iVar2;
  uint uVar3;
  basic_string *pbVar4;
  ObjectFactory *this_00;
  long lVar5;
  long *plVar6;
  long *plVar7;
  Widget *pWVar8;
  CSLoader *this_01;
  ComAudioReader *this_02;
  ActionTimelineCache *this_03;
  long *plVar9;
  PageView *this_04;
  ListView *this_05;
  NodeTree *pNVar10;
  ulong uVar11;
  NodeTree *pNVar12;
  NodeTree *pNVar13;
  undefined4 uVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) {
    pNVar13 = (NodeTree *)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4);
    pNVar13 = (NodeTree *)0x0;
    if (uVar11 != 0) {
      pNVar13 = param_1 + uVar11 + *(uint *)(param_1 + uVar11);
    }
  }
  pbVar4 = (basic_string *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
           basic_string<decltype(nullptr)>(local_80,(char *)(pNVar13 + 4));
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 9) ||
     (uVar11 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 8), uVar11 == 0)) {
    pNVar13 = (NodeTree *)0x0;
  }
  else {
    pNVar13 = param_1 + uVar11 + *(uint *)(param_1 + uVar11);
  }
  uVar11 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar11 = local_78;
  }
  if (uVar11 == 0xb) {
    __s1 = (void *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      __s1 = local_70;
    }
    iVar2 = memcmp(__s1,"ProjectNode",0xb);
    if (iVar2 == 0) {
      plVar6 = (long *)cocostudio::ProjectNodeReader::getInstance();
      if ((*(ushort *)(pNVar13 + -(long)*(int *)pNVar13) < 5) ||
         (uVar11 = (ulong)*(ushort *)(pNVar13 + -(long)*(int *)pNVar13 + 4), uVar11 == 0)) {
        pNVar10 = (NodeTree *)0x0;
      }
      else {
        pNVar10 = pNVar13 + uVar11 + *(uint *)(pNVar13 + uVar11);
      }
      if (*(ushort *)(pNVar10 + -(long)*(int *)pNVar10) < 7) {
        pNVar12 = (NodeTree *)0x0;
      }
      else {
        uVar11 = (ulong)*(ushort *)(pNVar10 + -(long)*(int *)pNVar10 + 6);
        pNVar12 = (NodeTree *)0x0;
        if (uVar11 != 0) {
          pNVar12 = pNVar10 + uVar11 + *(uint *)(pNVar10 + uVar11);
        }
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,(char *)(pNVar12 + 4));
      uVar11 = (ulong)((byte)local_98[0] >> 1);
      if (((byte)local_98[0] & 1) != 0) {
        uVar11 = local_90;
      }
      if (uVar11 == 0) {
LAB_00cb3be8:
        plVar7 = (long *)Node::create();
        plVar9 = (long *)0x0;
      }
      else {
        plVar7 = (long *)FileUtils::getInstance();
        uVar11 = (**(code **)(*plVar7 + 0x128))(plVar7,local_98);
        if ((uVar11 & 1) == 0) goto LAB_00cb3be8;
        plVar7 = (long *)createNodeWithFlatBuffersForSimulator(this,(basic_string *)local_98);
        this_03 = (ActionTimelineCache *)cocostudio::timeline::ActionTimelineCache::getInstance();
        plVar9 = (long *)cocostudio::timeline::ActionTimelineCache::
                         createActionWithFlatBuffersForSimulator(this_03,(basic_string *)local_98);
      }
      if ((*(ushort *)(pNVar13 + -(long)*(int *)pNVar13) < 5) ||
         (uVar11 = (ulong)*(ushort *)(pNVar13 + -(long)*(int *)pNVar13 + 4), uVar11 == 0)) {
        pNVar13 = (NodeTree *)0x0;
      }
      else {
        pNVar13 = pNVar13 + uVar11 + *(uint *)(pNVar13 + uVar11);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,pNVar13);
      if (plVar9 != (long *)0x0) {
        uVar14 = 0;
        if ((8 < *(ushort *)(pNVar10 + -(long)*(int *)pNVar10)) &&
           (uVar11 = (ulong)*(ushort *)(pNVar10 + -(long)*(int *)pNVar10 + 8), uVar11 != 0)) {
          uVar14 = *(undefined4 *)(pNVar10 + uVar11);
        }
        (**(code **)(*plVar9 + 0xa0))(uVar14,plVar9);
        (**(code **)(*plVar7 + 0x3a8))(plVar7,plVar9);
        (**(code **)(*plVar9 + 0x80))(plVar9,0);
      }
      goto joined_r0x00cb3c9c;
    }
    uVar3 = memcmp(__s1,"SimpleAudio",0xb);
    pbVar4 = (basic_string *)(ulong)uVar3;
    if (uVar3 != 0) goto LAB_00cb39b8;
    plVar7 = (long *)Node::create();
    this_02 = (ComAudioReader *)cocostudio::ComAudioReader::getInstance();
    if ((*(ushort *)(pNVar13 + -(long)*(int *)pNVar13) < 5) ||
       (uVar11 = (ulong)*(ushort *)(pNVar13 + -(long)*(int *)pNVar13 + 4), uVar11 == 0)) {
      pNVar10 = (NodeTree *)0x0;
    }
    else {
      pNVar10 = pNVar13 + uVar11 + *(uint *)(pNVar13 + uVar11);
    }
    lVar5 = cocostudio::ComAudioReader::createComAudioWithFlatBuffers(this_02,(Table *)pNVar10);
    if (lVar5 == 0) goto LAB_00cb3ca8;
    (**(code **)(*plVar7 + 0x460))(plVar7);
    if ((*(ushort *)(pNVar13 + -(long)*(int *)pNVar13) < 5) ||
       (uVar11 = (ulong)*(ushort *)(pNVar13 + -(long)*(int *)pNVar13 + 4), uVar11 == 0)) {
      pNVar13 = (NodeTree *)0x0;
    }
    else {
      pNVar13 = pNVar13 + uVar11 + *(uint *)(pNVar13 + uVar11);
    }
    (**(code **)(*(long *)this_02 + 0x18))(this_02,plVar7,pNVar13);
  }
  else {
LAB_00cb39b8:
    getGUIClassName(pbVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_98,"Reader",6);
    this_00 = (ObjectFactory *)ObjectFactory::getInstance();
    lVar5 = ObjectFactory::createObject(this_00,(basic_string *)local_98);
    if ((lVar5 == 0) ||
       (plVar6 = (long *)__dynamic_cast(lVar5,&Ref::typeinfo,
                                        &cocostudio::NodeReaderProtocol::typeinfo,0xfffffffffffffffe
                                       ), plVar6 == (long *)0x0)) {
      plVar7 = (long *)0x0;
    }
    else {
      if ((*(ushort *)(pNVar13 + -(long)*(int *)pNVar13) < 5) ||
         (uVar11 = (ulong)*(ushort *)(pNVar13 + -(long)*(int *)pNVar13 + 4), uVar11 == 0)) {
        pNVar13 = (NodeTree *)0x0;
      }
      else {
        pNVar13 = pNVar13 + uVar11 + *(uint *)(pNVar13 + uVar11);
      }
      plVar7 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,pNVar13);
      if ((plVar7 != (long *)0x0) &&
         (pWVar8 = (Widget *)__dynamic_cast(plVar7,&Node::typeinfo,&cocos2d::ui::Widget::typeinfo,0)
         , pWVar8 != (Widget *)0x0)) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_b0,(basic_string *)(pWVar8 + 0x4d8));
        this_01 = (CSLoader *)
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string(local_c8,(basic_string *)(pWVar8 + 0x4c0));
        bindCallback(this_01,(basic_string *)local_b0,(basic_string *)local_c8,pWVar8,
                     *(Node **)(this + 0x88));
        if (((byte)local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
      }
    }
    if (*(long *)(this + 0x88) == 0) {
      *(long **)(this + 0x88) = plVar7;
    }
joined_r0x00cb3c9c:
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
LAB_00cb3ca8:
    if (plVar7 == (long *)0x0) goto LAB_00cb3ddc;
  }
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) {
    pNVar13 = (NodeTree *)0x0;
  }
  else {
    uVar11 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6);
    pNVar13 = (NodeTree *)0x0;
    if (uVar11 != 0) {
      pNVar13 = param_1 + uVar11 + *(uint *)(param_1 + uVar11);
    }
  }
  uVar11 = (ulong)*(uint *)pNVar13;
  if (0 < (int)*(uint *)pNVar13) {
    do {
      pNVar13 = pNVar13 + 4;
      lVar5 = nodeWithFlatBuffersForSimulator(this,pNVar13 + *(uint *)pNVar13);
      if (lVar5 != 0) {
        this_04 = (PageView *)
                  __dynamic_cast(plVar7,&Node::typeinfo,&cocos2d::ui::PageView::typeinfo,0);
        this_05 = (ListView *)
                  __dynamic_cast(plVar7,&Node::typeinfo,&cocos2d::ui::ListView::typeinfo,0);
        if (this_04 == (PageView *)0x0) {
          if (this_05 == (ListView *)0x0) {
            (**(code **)(*plVar7 + 0x208))(plVar7,lVar5);
          }
          else {
            pWVar8 = (Widget *)
                     __dynamic_cast(lVar5,&Node::typeinfo,&cocos2d::ui::Widget::typeinfo,0);
            if (pWVar8 != (Widget *)0x0) {
              cocos2d::ui::ListView::pushBackCustomItem(this_05,pWVar8);
            }
          }
        }
        else {
          pWVar8 = (Widget *)__dynamic_cast(lVar5,&Node::typeinfo,&cocos2d::ui::Layout::typeinfo,0);
          if (pWVar8 != (Widget *)0x0) {
            cocos2d::ui::PageView::addPage(this_04,pWVar8);
          }
        }
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
LAB_00cb3ddc:
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}

