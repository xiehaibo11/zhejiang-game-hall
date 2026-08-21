
/* cocostudio::WidgetPropertiesReader0300::widgetFromBinary(cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

basic_string * __thiscall
cocostudio::WidgetPropertiesReader0300::widgetFromBinary
          (WidgetPropertiesReader0300 *this,CocoLoader *param_1,stExpCocoNode *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  stExpCocoNode *psVar4;
  stExpCocoNode *psVar5;
  uint uVar6;
  int iVar7;
  stExpCocoNode *psVar8;
  basic_string *pbVar9;
  char *pcVar10;
  basic_string *extraout_x0;
  basic_string *extraout_x0_00;
  ObjectFactory *pOVar11;
  long lVar12;
  Widget *this_00;
  PageView *this_01;
  ListView *this_02;
  float *pfVar13;
  long *plVar14;
  basic_string *pbVar15;
  stExpCocoNode *this_03;
  stExpCocoNode *this_04;
  undefined8 uVar16;
  ulong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong local_140;
  ulong uStack_138;
  long *local_130;
  ulong local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  long *local_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  psVar8 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_2,param_1);
  pbVar9 = (basic_string *)stExpCocoNode::GetChildNum(param_2);
  local_120 = 0;
  local_118 = (void *)0x0;
  local_128 = 0;
  if ((int)pbVar9 < 1) {
    this_03 = (stExpCocoNode *)0x0;
    this_04 = (stExpCocoNode *)0x0;
    pbVar15 = (basic_string *)0x0;
  }
  else {
    pbVar15 = (basic_string *)0x0;
    this_04 = (stExpCocoNode *)0x0;
    this_03 = (stExpCocoNode *)0x0;
    uVar17 = (ulong)pbVar9 & 0xffffffff;
    plVar14 = (long *)((ulong)&local_100 | 1);
    do {
      pcVar10 = (char *)stExpCocoNode::GetName(psVar8,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_100,pcVar10);
      pcVar10 = (char *)stExpCocoNode::GetValue(psVar8,param_1);
      pbVar9 = (basic_string *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               basic_string<decltype(nullptr)>
                         ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_140,pcVar10);
      uVar1 = local_100 >> 1 & 0x7f;
      if ((local_100 & 1) != 0) {
        uVar1 = uStack_f8;
      }
      psVar4 = this_03;
      psVar5 = this_04;
      if (uVar1 == 7) {
        plVar2 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar2 = local_f0;
        }
        uVar6 = memcmp(plVar2,"options",7);
        pbVar9 = (basic_string *)(ulong)uVar6;
        psVar5 = psVar8;
        if (uVar6 != 0) {
          psVar5 = this_04;
        }
      }
      else if (uVar1 == 8) {
        plVar2 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar2 = local_f0;
        }
        psVar4 = psVar8;
        if (*plVar2 != 0x6e6572646c696863) {
          psVar4 = this_03;
        }
      }
      else if (uVar1 == 9) {
        plVar2 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar2 = local_f0;
        }
        uVar6 = memcmp(plVar2,"classname",9);
        pbVar9 = (basic_string *)(ulong)uVar6;
        if (uVar6 == 0) {
          uVar1 = local_140 >> 1 & 0x7f;
          if ((local_140 & 1) != 0) {
            uVar1 = uStack_138;
          }
          if (uVar1 != 0) {
            plVar2 = (long *)((ulong)&local_140 | 1);
            if ((local_140 & 1) != 0) {
              plVar2 = local_130;
            }
            pbVar9 = (basic_string *)
                     std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_128,(char *)plVar2,uVar1);
            pbVar9 = (basic_string *)WidgetPropertiesReader::createGUI(pbVar9);
            pbVar15 = pbVar9;
          }
        }
      }
      this_04 = psVar5;
      this_03 = psVar4;
      if ((local_140 & 1) != 0) {
        operator_delete(local_130);
        pbVar9 = extraout_x0;
      }
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
        pbVar9 = extraout_x0_00;
      }
      uVar17 = uVar17 - 1;
      psVar8 = psVar8 + 0x10;
    } while (uVar17 != 0);
  }
  WidgetPropertiesReader::getWidgetReaderClassName(pbVar9);
  pOVar11 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  lVar12 = cocos2d::ObjectFactory::createObject(pOVar11,(basic_string *)&local_140);
  if ((lVar12 == 0) ||
     (lVar12 = __dynamic_cast(lVar12,&cocos2d::Ref::typeinfo,&WidgetReaderProtocol::typeinfo,
                              0xfffffffffffffffe), lVar12 == 0)) {
    WidgetPropertiesReader::getWidgetReaderClassName((Widget *)0x0);
    if (((byte)local_140._0_1_ & 1) != 0) {
      *(char *)local_130 = '\0';
      uStack_138 = 0;
      if (((byte)local_140._0_1_ & 1) != 0) {
        operator_delete(local_130);
      }
    }
    uStack_138 = uStack_f8;
    local_140 = local_100;
    local_130 = local_f0;
    pOVar11 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
    lVar12 = cocos2d::ObjectFactory::createObject(pOVar11,(basic_string *)&local_140);
    if (((lVar12 != 0) &&
        (lVar12 = __dynamic_cast(lVar12,&cocos2d::Ref::typeinfo,&WidgetReaderProtocol::typeinfo,
                                 0xfffffffffffffffe), pbVar15 != (basic_string *)0x0)) &&
       (lVar12 != 0)) {
      (**(code **)(*(long *)this + 0x40))(this,lVar12,pbVar15,param_1,this_04);
      psVar8 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_04,param_1);
      uVar16 = 0;
      lVar12 = -1;
      do {
        iVar7 = stExpCocoNode::GetChildNum(this_04);
        lVar12 = lVar12 + 1;
        if (iVar7 <= lVar12) break;
        pcVar10 = (char *)stExpCocoNode::GetName(psVar8,param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_100,pcVar10);
        uVar1 = local_100;
        uVar17 = local_100 >> 1 & 0x7f;
        if ((local_100 & 1) != 0) {
          uVar17 = uStack_f8;
        }
        if (uVar17 == 0xe) {
          plVar14 = (long *)((ulong)&local_100 | 1);
          if ((local_100 & 1) != 0) {
            plVar14 = local_f0;
          }
          iVar7 = memcmp(plVar14,"customProperty",0xe);
          if (iVar7 != 0) goto LAB_00c65f24;
          uVar16 = stExpCocoNode::GetValue(psVar8,param_1);
          bVar18 = false;
          uVar1 = local_100;
        }
        else {
LAB_00c65f24:
          bVar18 = true;
        }
        if ((uVar1 & 1) != 0) {
          operator_delete(local_f0);
        }
        psVar8 = psVar8 + 0x10;
      } while (bVar18);
      local_a8 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      puStack_e8 = (undefined8 *)0x0;
      local_f0 = (long *)0x0;
      uStack_d8 = 0;
      puStack_e0 = (undefined8 *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      local_b0 = 0x400;
      local_a0 = 0;
      puStack_e8 = operator_new(0x28);
      puStack_e8[3] = 0;
      puStack_e8[4] = 0;
      puStack_e8[1] = 0x10000;
      puStack_e8[2] = 0;
      *puStack_e8 = 0;
      local_110 = uVar16;
      uStack_108 = uVar16;
      puStack_e0 = puStack_e8;
      rapidjson::
      GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                  *)&local_100,(GenericStringStream *)&local_110);
      (**(code **)(*(long *)this + 0x28))(this,&local_128,pbVar15,&local_100);
      rapidjson::
      GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                          *)&local_100);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x40))(this,lVar12,pbVar15,param_1,this_04);
  }
  if ((this_03 != (stExpCocoNode *)0x0) &&
     (iVar7 = stExpCocoNode::GetType(this_03,param_1), iVar7 == 4)) {
    uVar6 = stExpCocoNode::GetChildNum(this_03);
    uVar17 = (ulong)uVar6;
    psVar8 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_03,param_1);
    if (0 < (int)uVar6) {
      do {
        iVar7 = stExpCocoNode::GetType(psVar8,param_1);
        if ((iVar7 == 3) &&
           (this_00 = (Widget *)(**(code **)(*(long *)this + 0x38))(this,param_1,psVar8),
           this_00 != (Widget *)0x0)) {
          if (pbVar15 == (basic_string *)0x0) {
LAB_00c66148:
            iVar7 = cocos2d::ui::Widget::getPositionType(this_00);
            if (iVar7 == 1) {
              pfVar13 = (float *)cocos2d::ui::Widget::getPositionPercent(this_00);
              fVar19 = *pfVar13;
              pfVar13 = (float *)(**(code **)(*(long *)pbVar15 + 0x150))(pbVar15);
              fVar20 = *pfVar13;
              lVar12 = cocos2d::ui::Widget::getPositionPercent(this_00);
              fVar21 = *(float *)(lVar12 + 4);
              lVar12 = (**(code **)(*(long *)pbVar15 + 0x150))(pbVar15);
              local_100 = CONCAT44(fVar21 + *(float *)(lVar12 + 4),fVar19 + fVar20);
              cocos2d::ui::Widget::setPositionPercent(this_00,(Vec2 *)&local_100);
            }
            fVar19 = (float)(**(code **)(*(long *)this_00 + 0xe0))(this_00);
            pfVar13 = (float *)(**(code **)(*(long *)pbVar15 + 0x158))(pbVar15);
            fVar21 = *pfVar13;
            fVar20 = (float)(**(code **)(*(long *)this_00 + 0xf0))(this_00);
            lVar12 = (**(code **)(*(long *)pbVar15 + 0x158))(pbVar15);
            local_100 = CONCAT44(fVar20 + *(float *)(lVar12 + 4),fVar19 + fVar21);
            (**(code **)(*(long *)this_00 + 0x98))(this_00,&local_100);
LAB_00c66220:
            (**(code **)(*(long *)pbVar15 + 0x208))(pbVar15,this_00);
          }
          else {
            this_01 = (PageView *)
                      __dynamic_cast(pbVar15,&cocos2d::ui::Widget::typeinfo,
                                     &cocos2d::ui::PageView::typeinfo,0);
            if (this_01 == (PageView *)0x0) {
              this_02 = (ListView *)
                        __dynamic_cast(pbVar15,&cocos2d::ui::Widget::typeinfo,
                                       &cocos2d::ui::ListView::typeinfo,0);
              if (this_02 == (ListView *)0x0) {
                lVar12 = __dynamic_cast(pbVar15,&cocos2d::ui::Widget::typeinfo,
                                        &cocos2d::ui::Layout::typeinfo,0);
                if (lVar12 == 0) goto LAB_00c66148;
                goto LAB_00c66220;
              }
              cocos2d::ui::ListView::pushBackCustomItem(this_02,this_00);
            }
            else {
              cocos2d::ui::PageView::addPage(this_01,this_00);
            }
          }
        }
        uVar17 = uVar17 - 1;
        psVar8 = psVar8 + 0x10;
      } while (uVar17 != 0);
    }
  }
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return pbVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

