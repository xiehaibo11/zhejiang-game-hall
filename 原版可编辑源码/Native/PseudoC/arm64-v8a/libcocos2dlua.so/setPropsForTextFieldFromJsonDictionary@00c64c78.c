
/* cocostudio::WidgetPropertiesReader0250::setPropsForTextFieldFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForTextFieldFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  DictionaryHelper *pDVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"placeHolder");
  if ((uVar5 & 1) != 0) {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_2,"placeHolder",(char *)0x0)
    ;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,pcVar6);
    cocos2d::ui::TextField::setPlaceHolder((basic_string *)param_1);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_2,"text",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,pcVar6);
  cocos2d::ui::TextField::setString((basic_string *)param_1);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"fontSize");
  if ((uVar5 & 1) != 0) {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"fontSize",0);
    cocos2d::ui::TextField::setFontSize((TextField *)param_1,iVar3);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"fontName");
  if ((uVar5 & 1) != 0) {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_2,"fontName",(char *)0x0);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,"");
      cocos2d::ui::TextField::setFontName((TextField *)param_1,(basic_string *)local_60);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,pcVar6);
      cocos2d::ui::TextField::setFontName((TextField *)param_1,(basic_string *)local_60);
    }
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"touchSizeWidth");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"touchSizeHeight");
  if (((uVar5 & 1) != 0) && ((uVar7 & 1) != 0)) {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar8 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"touchSizeWidth",0.0);
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar9 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"touchSizeHeight",0.0);
    cocos2d::Size::Size((Size *)local_60,fVar8,fVar9);
    cocos2d::ui::TextField::setTouchSize((TextField *)param_1,(Size *)local_60);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  DictionaryHelper::getFloatValue_json(pDVar4,param_2,"width",0.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  DictionaryHelper::getFloatValue_json(pDVar4,param_2,"height",0.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar4,param_2,"maxLengthEnable",false);
  cocos2d::ui::TextField::setMaxLengthEnabled((TextField *)param_1,(bool)(bVar2 & 1));
  if ((bVar2 & 1) != 0) {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"maxLength",0);
    cocos2d::ui::TextField::setMaxLength((TextField *)param_1,iVar3);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar4,param_2,"passwordEnable",false);
  cocos2d::ui::TextField::setPasswordEnabled((TextField *)param_1,(bool)(bVar2 & 1));
  if ((bVar2 & 1) != 0) {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar6 = (char *)DictionaryHelper::getStringValue_json
                               (pDVar4,param_2,"passwordStyleText",(char *)0x0);
    cocos2d::ui::TextField::setPasswordStyleText((TextField *)param_1,pcVar6);
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

