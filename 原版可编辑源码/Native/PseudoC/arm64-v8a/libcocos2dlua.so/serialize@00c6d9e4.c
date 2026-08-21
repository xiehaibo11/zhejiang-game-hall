
/* cocostudio::TriggerObj::serialize(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall cocostudio::TriggerObj::serialize(TriggerObj *this,GenericValue *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  DictionaryHelper *pDVar6;
  GenericValue *pGVar7;
  char *pcVar8;
  ObjectFactory *pOVar9;
  long lVar10;
  Ref *pRVar11;
  EventListener *pEVar12;
  TriggerMng *this_00;
  code *pcVar13;
  int iVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  Ref *local_b0;
  TriggerObj *pTStack_a8;
  void *local_a0;
  Ref **local_90;
  char acStack_74 [12];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar6,param_1,"id",0);
  *(undefined4 *)(this + 0x58) = uVar3;
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar4 = DictionaryHelper::getArrayCount_json(pDVar6,param_1,"conditions",0);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  if (0 < iVar4) {
    iVar14 = 0;
    do {
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar6,param_1,"conditions",iVar14);
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar6,pGVar7,"classname",(char *)0x0);
      if (pcVar8 != (char *)0x0) {
        pOVar9 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,pcVar8);
        lVar10 = cocos2d::ObjectFactory::createObject(pOVar9,(basic_string *)&local_b0);
        if (lVar10 == 0) {
          pRVar11 = (Ref *)0x0;
        }
        else {
          pRVar11 = (Ref *)__dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,
                                          &BaseTriggerCondition::typeinfo,0);
        }
        if (((ulong)local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        (**(code **)(*(long *)pRVar11 + 0x20))(pRVar11,pGVar7);
        (**(code **)(*(long *)pRVar11 + 0x10))(pRVar11);
        puVar1 = *(undefined8 **)(this + 0x30);
        local_b0 = pRVar11;
        if (puVar1 == *(undefined8 **)(this + 0x38)) {
          std::__ndk1::
          vector<cocostudio::BaseTriggerCondition*,std::__ndk1::allocator<cocostudio::BaseTriggerCondition*>>
          ::__push_back_slow_path<cocostudio::BaseTriggerCondition*const&>
                    ((vector<cocostudio::BaseTriggerCondition*,std::__ndk1::allocator<cocostudio::BaseTriggerCondition*>>
                      *)(this + 0x28),(BaseTriggerCondition **)&local_b0);
        }
        else {
          *puVar1 = pRVar11;
          *(undefined8 **)(this + 0x30) = puVar1 + 1;
        }
        cocos2d::Ref::retain(local_b0);
      }
      iVar14 = iVar14 + 1;
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    } while (iVar4 != iVar14);
  }
  iVar4 = DictionaryHelper::getArrayCount_json(pDVar6,param_1,"actions",0);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  if (0 < iVar4) {
    iVar14 = 0;
    do {
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar6,param_1,"actions",iVar14);
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar6,pGVar7,"classname",(char *)0x0);
      if (pcVar8 != (char *)0x0) {
        pOVar9 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,pcVar8);
        lVar10 = cocos2d::ObjectFactory::createObject(pOVar9,(basic_string *)&local_b0);
        if (lVar10 == 0) {
          pRVar11 = (Ref *)0x0;
        }
        else {
          pRVar11 = (Ref *)__dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,
                                          &BaseTriggerAction::typeinfo,0);
        }
        if (((ulong)local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        (**(code **)(*(long *)pRVar11 + 0x20))(pRVar11,pGVar7);
        (**(code **)(*(long *)pRVar11 + 0x10))(pRVar11);
        puVar1 = *(undefined8 **)(this + 0x48);
        local_b0 = pRVar11;
        if (puVar1 == *(undefined8 **)(this + 0x50)) {
          std::__ndk1::
          vector<cocostudio::BaseTriggerAction*,std::__ndk1::allocator<cocostudio::BaseTriggerAction*>>
          ::__push_back_slow_path<cocostudio::BaseTriggerAction*const&>
                    ((vector<cocostudio::BaseTriggerAction*,std::__ndk1::allocator<cocostudio::BaseTriggerAction*>>
                      *)(this + 0x40),(BaseTriggerAction **)&local_b0);
        }
        else {
          *puVar1 = pRVar11;
          *(undefined8 **)(this + 0x48) = puVar1 + 1;
        }
        cocos2d::Ref::retain(local_b0);
      }
      iVar14 = iVar14 + 1;
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    } while (iVar4 != iVar14);
  }
  iVar4 = DictionaryHelper::getArrayCount_json(pDVar6,param_1,"events",0);
  if (0 < iVar4) {
    iVar14 = 0;
    do {
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar6,param_1,"events",iVar14);
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar5 = DictionaryHelper::getIntValue_json(pDVar6,pGVar7,"id",0);
      if (-1 < iVar5) {
        FUN_00c6de80(acStack_74);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_c8,acStack_74);
        local_b0 = (Ref *)&PTR_FUN_016caac8;
        pTStack_a8 = this;
        local_90 = &local_b0;
        pEVar12 = (EventListener *)
                  cocos2d::EventListenerCustom::create
                            ((basic_string *)local_c8,(function *)&local_b0);
        if (&local_b0 == local_90) {
          pcVar13 = *(code **)(*local_90 + 0x20);
LAB_00c6dd7c:
          (*pcVar13)();
        }
        else if (local_90 != (Ref **)0x0) {
          pcVar13 = *(code **)(*local_90 + 0x28);
          goto LAB_00c6dd7c;
        }
        puVar1 = *(undefined8 **)(this + 0x68);
        local_b0 = (Ref *)pEVar12;
        if (puVar1 == *(undefined8 **)(this + 0x70)) {
          std::__ndk1::
          vector<cocos2d::EventListenerCustom*,std::__ndk1::allocator<cocos2d::EventListenerCustom*>>
          ::__push_back_slow_path<cocos2d::EventListenerCustom*const&>
                    ((vector<cocos2d::EventListenerCustom*,std::__ndk1::allocator<cocos2d::EventListenerCustom*>>
                      *)(this + 0x60),(EventListenerCustom **)&local_b0);
        }
        else {
          *puVar1 = pEVar12;
          *(undefined8 **)(this + 0x68) = puVar1 + 1;
        }
        cocos2d::Ref::retain(local_b0);
        this_00 = (TriggerMng *)TriggerMng::getInstance();
        TriggerMng::addEventListenerWithFixedPriority(this_00,pEVar12,1);
        if (((byte)local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar4 != iVar14);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

