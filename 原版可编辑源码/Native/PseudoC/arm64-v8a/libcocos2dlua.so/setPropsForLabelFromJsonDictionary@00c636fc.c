
/* cocostudio::WidgetPropertiesReader0250::setPropsForLabelFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForLabelFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  DictionaryHelper *pDVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar5,param_2,"touchScaleEnable",false);
  cocos2d::ui::Text::setTouchScaleChangeEnabled((Text *)param_1,(bool)(bVar2 & 1));
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"text",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,pcVar6);
  cocos2d::ui::Text::setString((Text *)param_1,(basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,"fontSize");
  if ((uVar7 & 1) != 0) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar3 = DictionaryHelper::getIntValue_json(pDVar5,param_2,"fontSize",0);
    cocos2d::ui::Text::setFontSize((Text *)param_1,(float)iVar3);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,"fontName");
  if ((uVar7 & 1) != 0) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"fontName",(char *)0x0);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,"");
      cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)local_60);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,pcVar6);
      cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)local_60);
    }
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,"areaWidth");
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,"areaHeight");
  if (((uVar7 & 1) != 0) && ((uVar8 & 1) != 0)) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar9 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,"areaWidth",0.0);
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar10 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,"areaHeight",0.0);
    cocos2d::Size::Size((Size *)local_60,fVar9,fVar10);
    cocos2d::ui::Text::setTextAreaSize((Text *)param_1,(Size *)local_60);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,"hAlignment");
  if ((uVar7 & 1) != 0) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar4 = DictionaryHelper::getIntValue_json(pDVar5,param_2,"hAlignment",0);
    cocos2d::ui::Text::setTextHorizontalAlignment((Text *)param_1,uVar4);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,"vAlignment");
  if ((uVar7 & 1) != 0) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar4 = DictionaryHelper::getIntValue_json(pDVar5,param_2,"vAlignment",0);
    cocos2d::ui::Text::setTextVerticalAlignment((Text *)param_1,uVar4);
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

