
/* cocostudio::WidgetPropertiesReader0250::createWidget(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, char const*) */

Ref * __thiscall
cocostudio::WidgetPropertiesReader0250::createWidget
          (WidgetPropertiesReader0250 *this,GenericValue *param_1,char *param_2,char *param_3)

{
  long lVar1;
  GUIReader *pGVar2;
  int iVar3;
  size_t sVar4;
  DictionaryHelper *pDVar5;
  char *__s;
  SpriteFrameCache *this_00;
  GUIReader *pGVar6;
  Director *this_01;
  undefined8 uVar7;
  Ref *pRVar8;
  Size *pSVar9;
  ulong uVar10;
  long *plVar11;
  GenericValue *pGVar12;
  ActionManagerEx *this_02;
  int iVar13;
  float fVar14;
  float fVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  sVar4 = strlen(param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x28),param_2,sVar4);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getArrayCount_json(pDVar5,param_1,"textures",0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  if (0 < iVar3) {
    iVar13 = 0;
    do {
      __s = (char *)DictionaryHelper::getStringValueFromArray_json
                              (pDVar5,param_1,"textures",iVar13,(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_90,param_2);
      sVar4 = strlen(__s);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(local_90,__s,sVar4);
      this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this_00,(basic_string *)local_90);
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      iVar13 = iVar13 + 1;
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    } while (iVar3 != iVar13);
  }
  fVar14 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_1,"designWidth",0.0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar15 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_1,"designHeight",0.0);
  if ((fVar14 <= 0.0) || (fVar15 <= 0.0)) {
    this_01 = (Director *)cocos2d::Director::getInstance();
    pSVar9 = (Size *)cocos2d::Director::getWinSize(this_01);
    cocos2d::Size::Size((Size *)local_90,pSVar9);
    pGVar6 = DAT_01785a68;
    pGVar2 = DAT_01785a68;
    if ((DAT_01785a68 == (GUIReader *)0x0) &&
       (pGVar6 = operator_new(0x98,(nothrow_t *)&std::nothrow), pGVar2 = pGVar6,
       pGVar6 != (GUIReader *)0x0)) {
      GUIReader::GUIReader(pGVar6);
    }
  }
  else {
    pGVar6 = DAT_01785a68;
    if ((DAT_01785a68 == (GUIReader *)0x0) &&
       (pGVar6 = operator_new(0x98,(nothrow_t *)&std::nothrow), pGVar6 != (GUIReader *)0x0)) {
      GUIReader::GUIReader(pGVar6);
    }
    DAT_01785a68 = pGVar6;
    pGVar6 = DAT_01785a68;
    cocos2d::Size::Size((Size *)local_90,fVar14,fVar15);
    pGVar2 = DAT_01785a68;
  }
  DAT_01785a68 = pGVar2;
  GUIReader::storeFileDesignSize(pGVar6,param_3,(Size *)local_90);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"widgetTree");
  pRVar8 = (Ref *)(**(code **)(*(long *)this + 0x18))(this,uVar7);
  pSVar9 = (Size *)(**(code **)(*(long *)pRVar8 + 0x168))();
  uVar10 = cocos2d::Size::equals(pSVar9,(Size *)&cocos2d::Size::ZERO);
  if ((uVar10 & 1) != 0) {
    if (pRVar8 == (Ref *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)__dynamic_cast(pRVar8,&cocos2d::ui::Widget::typeinfo,
                                       &cocos2d::ui::Layout::typeinfo,0);
    }
    cocos2d::Size::Size((Size *)local_90,fVar14,fVar15);
    (**(code **)(*plVar11 + 0x160))(plVar11,local_90);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar12 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"animation");
  this_02 = (ActionManagerEx *)ActionManagerEx::getInstance();
  ActionManagerEx::initWithDictionary(this_02,param_3,pGVar12,pRVar8,0x640);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return pRVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

