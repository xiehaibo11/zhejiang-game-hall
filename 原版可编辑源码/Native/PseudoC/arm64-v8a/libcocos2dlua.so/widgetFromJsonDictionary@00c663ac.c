
/* cocostudio::WidgetPropertiesReader0300::widgetFromJsonDictionary(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long * __thiscall
cocostudio::WidgetPropertiesReader0300::widgetFromJsonDictionary
          (WidgetPropertiesReader0300 *this,GenericValue *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  DictionaryHelper *pDVar4;
  char *pcVar5;
  GenericValue *pGVar6;
  basic_string *pbVar7;
  long *plVar8;
  ObjectFactory *pOVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  Widget *this_00;
  PageView *this_01;
  ListView *this_02;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined1 *local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
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
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar5 = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_1,"classname",(char *)0x0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar4,param_1,"options");
  pbVar7 = (basic_string *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
           basic_string<decltype(nullptr)>
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_100,pcVar5);
  plVar8 = (long *)WidgetPropertiesReader::createGUI(pbVar7);
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  pbVar7 = (basic_string *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
           basic_string<decltype(nullptr)>
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_100,pcVar5);
  WidgetPropertiesReader::getWidgetReaderClassName(pbVar7);
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  pOVar9 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  lVar10 = cocos2d::ObjectFactory::createObject(pOVar9,(basic_string *)&local_120);
  if ((lVar10 == 0) ||
     (lVar10 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,&WidgetReaderProtocol::typeinfo,
                              0xfffffffffffffffe), lVar10 == 0)) {
    WidgetPropertiesReader::getWidgetReaderClassName((Widget *)0x0);
    if (((byte)local_120._0_1_ & 1) != 0) {
      *local_110 = 0;
      uStack_118 = 0;
      if (((byte)local_120._0_1_ & 1) != 0) {
        operator_delete(local_110);
      }
    }
    uStack_118 = uStack_f8;
    local_120 = local_100;
    local_110 = local_f0;
    pOVar9 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
    lVar10 = cocos2d::ObjectFactory::createObject(pOVar9,(basic_string *)&local_120);
    if (((lVar10 != 0) &&
        (lVar10 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,&WidgetReaderProtocol::typeinfo,
                                 0xfffffffffffffffe), plVar8 != (long *)0x0)) && (lVar10 != 0)) {
      (**(code **)(*(long *)this + 0x20))(this,lVar10,plVar8,pGVar6);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar11 = DictionaryHelper::getStringValue_json(pDVar4,pGVar6,"customProperty",(char *)0x0);
      local_a8 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      puStack_e8 = (undefined8 *)0x0;
      local_f0 = (undefined1 *)0x0;
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
      local_138 = uVar11;
      uStack_130 = uVar11;
      puStack_e0 = puStack_e8;
      rapidjson::
      GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                  *)&local_100,(GenericStringStream *)&local_138);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_138,pcVar5);
      (**(code **)(*(long *)this + 0x28))(this,&local_138,plVar8,&local_100);
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      rapidjson::
      GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                          *)&local_100);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x20))(this,lVar10,plVar8,pGVar6);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar2 = DictionaryHelper::getArrayCount_json(pDVar4,param_1,"children",0);
  if (0 < iVar2) {
    iVar14 = 0;
    do {
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar12 = DictionaryHelper::getDictionaryFromArray_json(pDVar4,param_1,"children",iVar14);
      this_00 = (Widget *)(**(code **)(*(long *)this + 0x18))(this,uVar12);
      if (this_00 != (Widget *)0x0) {
        if (plVar8 == (long *)0x0) {
LAB_00c666e8:
          iVar3 = cocos2d::ui::Widget::getPositionType(this_00);
          if (iVar3 == 1) {
            pfVar13 = (float *)cocos2d::ui::Widget::getPositionPercent(this_00);
            fVar15 = *pfVar13;
            pfVar13 = (float *)(**(code **)(*plVar8 + 0x150))(plVar8);
            fVar16 = *pfVar13;
            lVar10 = cocos2d::ui::Widget::getPositionPercent(this_00);
            fVar17 = *(float *)(lVar10 + 4);
            lVar10 = (**(code **)(*plVar8 + 0x150))(plVar8);
            local_100 = CONCAT44(fVar17 + *(float *)(lVar10 + 4),fVar15 + fVar16);
            cocos2d::ui::Widget::setPositionPercent(this_00,(Vec2 *)&local_100);
          }
          fVar15 = (float)(**(code **)(*(long *)this_00 + 0xe0))(this_00);
          pfVar13 = (float *)(**(code **)(*plVar8 + 0x158))(plVar8);
          fVar17 = *pfVar13;
          fVar16 = (float)(**(code **)(*(long *)this_00 + 0xf0))(this_00);
          lVar10 = (**(code **)(*plVar8 + 0x158))(plVar8);
          local_100 = CONCAT44(fVar16 + *(float *)(lVar10 + 4),fVar15 + fVar17);
          (**(code **)(*(long *)this_00 + 0x98))(this_00,&local_100);
LAB_00c667c0:
          (**(code **)(*plVar8 + 0x208))(plVar8,this_00);
        }
        else {
          this_01 = (PageView *)
                    __dynamic_cast(plVar8,&cocos2d::ui::Widget::typeinfo,
                                   &cocos2d::ui::PageView::typeinfo,0);
          if (this_01 == (PageView *)0x0) {
            this_02 = (ListView *)
                      __dynamic_cast(plVar8,&cocos2d::ui::Widget::typeinfo,
                                     &cocos2d::ui::ListView::typeinfo,0);
            if (this_02 == (ListView *)0x0) {
              lVar10 = __dynamic_cast(plVar8,&cocos2d::ui::Widget::typeinfo,
                                      &cocos2d::ui::Layout::typeinfo,0);
              if (lVar10 == 0) goto LAB_00c666e8;
              goto LAB_00c667c0;
            }
            cocos2d::ui::ListView::pushBackCustomItem(this_02,this_00);
          }
          else {
            cocos2d::ui::PageView::addPage(this_01,this_00);
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar2 != iVar14);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar8;
}

