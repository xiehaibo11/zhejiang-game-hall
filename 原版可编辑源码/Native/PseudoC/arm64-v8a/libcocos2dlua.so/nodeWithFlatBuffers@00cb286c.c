
/* cocos2d::CSLoader::nodeWithFlatBuffers(flatbuffers::NodeTree const*, std::__ndk1::function<void
   (cocos2d::Ref*)> const&) */

Ref * __thiscall
cocos2d::CSLoader::nodeWithFlatBuffers(CSLoader *this,NodeTree *param_1,function *param_2)

{
  void *__s1;
  char *pcVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  basic_string *pbVar5;
  ObjectFactory *this_00;
  long lVar6;
  long *plVar7;
  Ref *pRVar8;
  Widget *pWVar9;
  CSLoader *this_01;
  ComAudioReader *this_02;
  long *plVar10;
  ulong uVar11;
  PageView *this_03;
  ListView *this_04;
  NodeTree *pNVar12;
  ulong uVar13;
  NodeTree *pNVar14;
  NodeTree *pNVar15;
  undefined4 uVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  Ref *local_c8 [2];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (NodeTree *)0x0) {
    pRVar8 = (Ref *)0x0;
    goto LAB_00cb2f40;
  }
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) {
    pNVar15 = (NodeTree *)0x0;
  }
  else {
    uVar13 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4);
    pNVar15 = (NodeTree *)0x0;
    if (uVar13 != 0) {
      pNVar15 = param_1 + uVar13 + *(uint *)(param_1 + uVar13);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,(char *)(pNVar15 + 4));
  pNVar15 = param_1 + -(long)*(int *)param_1;
  uVar2 = *(ushort *)pNVar15;
  if ((uVar2 < 9) || ((ulong)*(ushort *)(pNVar15 + 8) == 0)) {
    pNVar12 = (NodeTree *)0x0;
  }
  else {
    pNVar12 = param_1 + *(ushort *)(pNVar15 + 8) + *(uint *)(param_1 + *(ushort *)(pNVar15 + 8));
  }
  uVar13 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar13 = local_78;
  }
  if (uVar13 == 0xb) {
    __s1 = (void *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      __s1 = local_70;
    }
    iVar4 = memcmp(__s1,"ProjectNode",0xb);
    if (iVar4 == 0) {
      plVar7 = (long *)cocostudio::ProjectNodeReader::getInstance();
      if ((*(ushort *)(pNVar12 + -(long)*(int *)pNVar12) < 5) ||
         (uVar13 = (ulong)*(ushort *)(pNVar12 + -(long)*(int *)pNVar12 + 4), uVar13 == 0)) {
        pNVar15 = (NodeTree *)0x0;
      }
      else {
        pNVar15 = pNVar12 + uVar13 + *(uint *)(pNVar12 + uVar13);
      }
      if (*(ushort *)(pNVar15 + -(long)*(int *)pNVar15) < 7) {
        pNVar14 = (NodeTree *)0x0;
      }
      else {
        uVar13 = (ulong)*(ushort *)(pNVar15 + -(long)*(int *)pNVar15 + 6);
        pNVar14 = (NodeTree *)0x0;
        if (uVar13 != 0) {
          pNVar14 = pNVar15 + uVar13 + *(uint *)(pNVar15 + uVar13);
        }
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)(pNVar14 + 4));
      uVar13 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        uVar13 = local_90;
      }
      if (uVar13 == 0) {
LAB_00cb2c54:
        pRVar8 = (Ref *)Node::create();
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = (long *)FileUtils::getInstance();
        uVar13 = (**(code **)(*plVar10 + 0x128))(plVar10,&local_98);
        if ((uVar13 & 1) == 0) goto LAB_00cb2c54;
        plVar10 = (long *)FileUtils::getInstance();
        (**(code **)(*plVar10 + 0x28))(local_b0,plVar10,&local_98);
        pRVar8 = (Ref *)createNode(local_b0,param_2);
        plVar10 = (long *)createTimeline(local_b0,(basic_string *)&local_98);
        Data::~Data((Data *)local_b0);
      }
      if ((*(ushort *)(pNVar12 + -(long)*(int *)pNVar12) < 5) ||
         (uVar13 = (ulong)*(ushort *)(pNVar12 + -(long)*(int *)pNVar12 + 4), uVar13 == 0)) {
        pNVar12 = (NodeTree *)0x0;
      }
      else {
        pNVar12 = pNVar12 + uVar13 + *(uint *)(pNVar12 + uVar13);
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,pRVar8,pNVar12);
      if (plVar10 != (long *)0x0) {
        uVar16 = 0;
        if ((8 < *(ushort *)(pNVar15 + -(long)*(int *)pNVar15)) &&
           (uVar13 = (ulong)*(ushort *)(pNVar15 + -(long)*(int *)pNVar15 + 8), uVar13 != 0)) {
          uVar16 = *(undefined4 *)(pNVar15 + uVar13);
        }
        (**(code **)(*plVar10 + 0xa0))(uVar16,plVar10);
        (**(code **)(*(long *)pRVar8 + 0x3a8))(pRVar8,plVar10);
        (**(code **)(*plVar10 + 0x80))(plVar10,0);
      }
      goto joined_r0x00cb2dbc;
    }
    iVar4 = memcmp(__s1,"SimpleAudio",0xb);
    if (iVar4 != 0) goto LAB_00cb297c;
    pRVar8 = (Ref *)Node::create();
    this_02 = (ComAudioReader *)cocostudio::ComAudioReader::getInstance();
    if ((*(ushort *)(pNVar12 + -(long)*(int *)pNVar12) < 5) ||
       (uVar13 = (ulong)*(ushort *)(pNVar12 + -(long)*(int *)pNVar12 + 4), uVar13 == 0)) {
      pNVar15 = (NodeTree *)0x0;
    }
    else {
      pNVar15 = pNVar12 + uVar13 + *(uint *)(pNVar12 + uVar13);
    }
    plVar7 = (long *)cocostudio::ComAudioReader::createComAudioWithFlatBuffers
                               (this_02,(Table *)pNVar15);
    if (plVar7 == (long *)0x0) goto LAB_00cb2dc8;
    (**(code **)(*plVar7 + 0x20))(plVar7,cocostudio::timeline::PlayableFrame::PLAYABLE_EXTENTION);
    (**(code **)(*(long *)pRVar8 + 0x460))(pRVar8,plVar7);
    if ((*(ushort *)(pNVar12 + -(long)*(int *)pNVar12) < 5) ||
       (uVar13 = (ulong)*(ushort *)(pNVar12 + -(long)*(int *)pNVar12 + 4), uVar13 == 0)) {
      pNVar15 = (NodeTree *)0x0;
    }
    else {
      pNVar15 = pNVar12 + uVar13 + *(uint *)(pNVar12 + uVar13);
    }
    (**(code **)(*(long *)this_02 + 0x18))(this_02,pRVar8,pNVar15);
LAB_00cb2dcc:
    if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) {
      pNVar15 = (NodeTree *)0x0;
    }
    else {
      uVar13 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6);
      pNVar15 = (NodeTree *)0x0;
      if (uVar13 != 0) {
        pNVar15 = param_1 + uVar13 + *(uint *)(param_1 + uVar13);
      }
    }
    uVar13 = (ulong)*(uint *)pNVar15;
    if (0 < (int)*(uint *)pNVar15) {
      do {
        pNVar15 = pNVar15 + 4;
        uVar11 = nodeWithFlatBuffers(this,pNVar15 + *(uint *)pNVar15,param_2);
        if (uVar11 != 0) {
          this_03 = (PageView *)
                    __dynamic_cast(pRVar8,&Node::typeinfo,&cocos2d::ui::PageView::typeinfo,0);
          this_04 = (ListView *)
                    __dynamic_cast(pRVar8,&Node::typeinfo,&cocos2d::ui::ListView::typeinfo,0);
          if (this_03 == (PageView *)0x0) {
            if (this_04 == (ListView *)0x0) {
              (**(code **)(*(long *)pRVar8 + 0x208))(pRVar8,uVar11);
            }
            else {
              pWVar9 = (Widget *)
                       __dynamic_cast(uVar11,&Node::typeinfo,&cocos2d::ui::Widget::typeinfo,0);
              if (pWVar9 != (Widget *)0x0) {
                cocos2d::ui::ListView::pushBackCustomItem(this_04,pWVar9);
              }
            }
          }
          else {
            pWVar9 = (Widget *)
                     __dynamic_cast(uVar11,&Node::typeinfo,&cocos2d::ui::Layout::typeinfo,0);
            if (pWVar9 != (Widget *)0x0) {
              cocos2d::ui::PageView::addPage(this_03,pWVar9);
            }
          }
          plVar7 = *(long **)(param_2 + 0x20);
          if (plVar7 != (long *)0x0) {
            local_98 = uVar11;
            (**(code **)(*plVar7 + 0x30))(plVar7,&local_98);
          }
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
LAB_00cb297c:
    if (uVar2 < 0xb) {
      pNVar14 = (NodeTree *)0x0;
    }
    else {
      pNVar14 = (NodeTree *)0x0;
      if ((ulong)*(ushort *)(pNVar15 + 10) != 0) {
        pNVar14 = param_1 + *(ushort *)(pNVar15 + 10) +
                  *(uint *)(param_1 + *(ushort *)(pNVar15 + 10));
      }
    }
    pbVar5 = (basic_string *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
             basic_string<decltype(nullptr)>
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_98,(char *)(pNVar14 + 4));
    uVar13 = local_98 >> 1 & 0x7f;
    if ((local_98 & 1) != 0) {
      uVar13 = local_90;
    }
    if (uVar13 != 0) {
      pcVar1 = (char *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        pcVar1 = local_88;
      }
      pbVar5 = (basic_string *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               assign(local_80,pcVar1,uVar13);
    }
    getGUIClassName(pbVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_b0,"Reader",6);
    this_00 = (ObjectFactory *)ObjectFactory::getInstance();
    lVar6 = ObjectFactory::createObject(this_00,(basic_string *)local_b0);
    if ((lVar6 == 0) ||
       (plVar7 = (long *)__dynamic_cast(lVar6,&Ref::typeinfo,
                                        &cocostudio::NodeReaderProtocol::typeinfo,0xfffffffffffffffe
                                       ), plVar7 == (long *)0x0)) {
      pRVar8 = (Ref *)0x0;
    }
    else {
      if ((*(ushort *)(pNVar12 + -(long)*(int *)pNVar12) < 5) ||
         (uVar13 = (ulong)*(ushort *)(pNVar12 + -(long)*(int *)pNVar12 + 4), uVar13 == 0)) {
        pNVar15 = (NodeTree *)0x0;
      }
      else {
        pNVar15 = pNVar12 + uVar13 + *(uint *)(pNVar12 + uVar13);
      }
      pRVar8 = (Ref *)(**(code **)(*plVar7 + 0x20))(plVar7,pNVar15);
      if (pRVar8 != (Ref *)0x0) {
        pWVar9 = (Widget *)__dynamic_cast(pRVar8,&Node::typeinfo,&cocos2d::ui::Widget::typeinfo,0);
        if (pWVar9 != (Widget *)0x0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_c8,(basic_string *)(pWVar9 + 0x4d8));
          this_01 = (CSLoader *)
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string(local_e0,(basic_string *)(pWVar9 + 0x4c0));
          bindCallback(this_01,(basic_string *)local_c8,(basic_string *)local_e0,pWVar9,
                       *(Node **)(this + 0x88));
          if (((byte)local_e0[0] & 1) != 0) {
            operator_delete(local_d0);
          }
          if (((ulong)local_c8[0] & 1) != 0) {
            operator_delete(local_b8);
          }
        }
        lVar6 = __dynamic_cast(pRVar8,&Node::typeinfo,
                               &cocostudio::WidgetCallBackHandlerProtocol::typeinfo,
                               0xfffffffffffffffe);
        if (lVar6 != 0) {
          plVar7 = *(long **)(this + 0x98);
          local_c8[0] = pRVar8;
          if (plVar7 == *(long **)(this + 0xa0)) {
            std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
            __push_back_slow_path<cocos2d::Node*const&>
                      ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                       (this + 0x90),(Node **)local_c8);
          }
          else {
            *plVar7 = (long)pRVar8;
            *(long **)(this + 0x98) = plVar7 + 1;
          }
          Ref::retain(local_c8[0]);
          *(undefined8 *)(this + 0x88) = *(undefined8 *)(*(long *)(this + 0x98) + -8);
        }
      }
    }
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
joined_r0x00cb2dbc:
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
LAB_00cb2dc8:
    if (pRVar8 != (Ref *)0x0) goto LAB_00cb2dcc;
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00cb2f40:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pRVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

