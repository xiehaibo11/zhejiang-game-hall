
/* cocos2d::CSLoader::loadWidget(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

Widget * __thiscall cocos2d::CSLoader::loadWidget(CSLoader *this,GenericValue *param_1)

{
  long lVar1;
  int iVar2;
  DictionaryHelper *pDVar3;
  char *pcVar4;
  Ref *this_00;
  CSLoader *this_01;
  basic_string *pbVar5;
  ObjectFactory *pOVar6;
  long lVar7;
  Widget *pWVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  basic_string local_110 [16];
  void *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [16];
  void *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar4 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar3,param_1,"classname",(char *)0x0);
  if (pcVar4 == (char *)0x0) {
    pWVar8 = (Widget *)0x0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f8,pcVar4);
    this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    this_01 = (CSLoader *)0x0;
    if (this_00 != (Ref *)0x0) {
      this_01 = (CSLoader *)Ref::Ref(this_00);
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined8 *)(this_00 + 0x38) = 0;
      *(undefined ***)this_00 = &PTR__WidgetPropertiesReader_016ca788;
    }
    pbVar5 = (basic_string *)isWidget(this_01,(basic_string *)local_f8);
    if (((ulong)pbVar5 & 1) == 0) {
      pOVar6 = (ObjectFactory *)ObjectFactory::getInstance();
      lVar7 = ObjectFactory::createObject(pOVar6,(basic_string *)local_f8);
      if ((lVar7 == 0) ||
         (plVar9 = (long *)__dynamic_cast(lVar7,&Ref::typeinfo,&cocos2d::ui::Widget::typeinfo,0),
         plVar9 == (long *)0x0)) {
        pWVar8 = (Widget *)0x0;
      }
      else {
        (**(code **)(*plVar9 + 8))();
        pOVar6 = (ObjectFactory *)ObjectFactory::getInstance();
        lVar7 = ObjectFactory::createObject(pOVar6,(basic_string *)local_f8);
        if (lVar7 == 0) {
          pWVar8 = (Widget *)0x0;
        }
        else {
          pWVar8 = (Widget *)__dynamic_cast(lVar7,&Ref::typeinfo,&cocos2d::ui::Widget::typeinfo,0);
        }
        getWidgetReaderClassName(pWVar8);
        pOVar6 = (ObjectFactory *)ObjectFactory::getInstance();
        lVar7 = ObjectFactory::createObject(pOVar6,local_110);
        if (((lVar7 != 0) &&
            (lVar7 = __dynamic_cast(lVar7,&Ref::typeinfo,&cocostudio::WidgetReaderProtocol::typeinfo
                                    ,0xfffffffffffffffe), pWVar8 != (Widget *)0x0)) && (lVar7 != 0))
        {
          (**(code **)(*(long *)this_00 + 0x20))(this_00,lVar7,pWVar8,param_1);
          pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
          uVar10 = cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar3,param_1,"customProperty",(char *)0x0);
          local_78 = 0;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          puStack_b8 = (undefined8 *)0x0;
          local_c0 = (void *)0x0;
          uStack_a8 = 0;
          puStack_b0 = (undefined8 *)0x0;
          uStack_c8 = 0;
          local_d0 = 0;
          local_80 = 0x400;
          local_70 = 0;
          puStack_b8 = operator_new(0x28);
          puStack_b8[3] = 0;
          puStack_b8[4] = 0;
          puStack_b8[1] = 0x10000;
          puStack_b8[2] = 0;
          *puStack_b8 = 0;
          local_e0 = uVar10;
          uStack_d8 = uVar10;
          puStack_b0 = puStack_b8;
          rapidjson::
          GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
          ::
          ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                    ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)&local_d0,(GenericStringStream *)&local_e0);
          (**(code **)(*(long *)this_00 + 0x28))(this_00,local_f8,pWVar8,&local_d0);
          rapidjson::
          GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
          ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                              *)&local_d0);
        }
        if (((byte)local_110[0] & 1) != 0) {
          operator_delete(local_100);
        }
      }
    }
    else {
      getGUIClassName(pbVar5);
      pbVar5 = (basic_string *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_d0,"Reader",6);
      getGUIClassName(pbVar5);
      pOVar6 = (ObjectFactory *)ObjectFactory::getInstance();
      lVar7 = ObjectFactory::createObject(pOVar6,local_110);
      if (lVar7 == 0) {
        pWVar8 = (Widget *)0x0;
      }
      else {
        pWVar8 = (Widget *)__dynamic_cast(lVar7,&Ref::typeinfo,&cocos2d::ui::Widget::typeinfo,0);
      }
      pOVar6 = (ObjectFactory *)ObjectFactory::getInstance();
      lVar7 = ObjectFactory::createObject(pOVar6,(basic_string *)&local_d0);
      if (((lVar7 != 0) &&
          (lVar7 = __dynamic_cast(lVar7,&Ref::typeinfo,&cocostudio::WidgetReaderProtocol::typeinfo,
                                  0xfffffffffffffffe), pWVar8 != (Widget *)0x0)) && (lVar7 != 0)) {
        (**(code **)(*(long *)this_00 + 0x20))(this_00,lVar7,pWVar8,param_1);
      }
      if (((byte)local_110[0] & 1) != 0) {
        operator_delete(local_100);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    if (this_00 != (Ref *)0x0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
    }
    if (pWVar8 != (Widget *)0x0) {
      pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      uVar10 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar3,param_1,"rotationSkewX",0.0);
      pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      uVar11 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar3,param_1,"rotationSkewY",0.0);
      pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      uVar12 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar3,param_1,"skewX",0.0);
      pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      uVar13 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar3,param_1,"skewY",0.0);
      if ((float)uVar10 != 0.0) {
        (**(code **)(*(long *)pWVar8 + 0x1b0))(uVar10,pWVar8);
      }
      if ((float)uVar11 != 0.0) {
        (**(code **)(*(long *)pWVar8 + 0x1d0))(uVar11,pWVar8);
      }
      if ((float)uVar12 != 0.0) {
        (**(code **)(*(long *)pWVar8 + 0x128))(uVar12,pWVar8);
      }
      if ((float)uVar13 != 0.0) {
        (**(code **)(*(long *)pWVar8 + 0x138))(uVar13,pWVar8);
      }
      pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      iVar2 = cocostudio::DictionaryHelper::getIntValue_json(pDVar3,param_1,"actionTag",0);
      uVar10 = cocostudio::timeline::ActionTimelineData::create(iVar2);
      (**(code **)(*(long *)pWVar8 + 0x300))(pWVar8,uVar10);
    }
    if (((byte)local_f8[0] & 1) != 0) {
      operator_delete(local_e8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pWVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

