
/* cocostudio::ButtonReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::ButtonReader::setPropsFromJsonDictionary
          (ButtonReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  DictionaryHelper *pDVar9;
  GenericValue *pGVar10;
  ulong uVar11;
  char *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [16];
  void *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::getBooleanValue_json(pDVar9,param_2,"scale9Enable",false);
  (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar5 & 1);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar10 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar9,param_2,"normalData");
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getIntValue_json(pDVar9,pGVar10,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,P_Path);
  WidgetReader::getResourcePath(local_90,this,pGVar10,local_a8,uVar6);
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  cocos2d::ui::Button::loadTextureNormal((Button *)param_1,local_90,uVar6);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar10 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar9,param_2,"pressedData");
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getIntValue_json(pDVar9,pGVar10,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,P_Path);
  WidgetReader::getResourcePath(local_a8,this,pGVar10,local_c0,uVar6);
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  cocos2d::ui::Button::loadTexturePressed((Button *)param_1,local_a8,uVar6);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar10 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar9,param_2,"disabledData");
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getIntValue_json(pDVar9,pGVar10,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,P_Path);
  WidgetReader::getResourcePath(local_c0,this,pGVar10,local_d8,uVar6);
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  cocos2d::ui::Button::loadTextureDisabled((Button *)param_1,local_c0,uVar6);
  if ((uVar5 & 1) != 0) {
    pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar13 = (float)DictionaryHelper::getFloatValue_json(pDVar9,param_2,"capInsetsX",0.0);
    pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar14 = (float)DictionaryHelper::getFloatValue_json(pDVar9,param_2,"capInsetsY",0.0);
    pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar15 = (float)DictionaryHelper::getFloatValue_json(pDVar9,param_2,"capInsetsWidth",0.0);
    pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar16 = (float)DictionaryHelper::getFloatValue_json(pDVar9,param_2,"capInsetsHeight",0.0);
    cocos2d::Rect::Rect((Rect *)local_d8,fVar13,fVar14,fVar15,fVar16);
    cocos2d::ui::Button::setCapInsets(param_1);
    pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar5 = DictionaryHelper::checkObjectExist_json(pDVar9,param_2,"scale9Width");
    pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar7 = DictionaryHelper::checkObjectExist_json(pDVar9,param_2,"scale9Height");
    if ((uVar5 & uVar7 & 1) != 0) {
      pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar13 = (float)DictionaryHelper::getFloatValue_json(pDVar9,param_2,"scale9Width",0.0);
      pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar14 = (float)DictionaryHelper::getFloatValue_json(pDVar9,param_2,"scale9Height",0.0);
      cocos2d::Size::Size((Size *)local_d8,fVar13,fVar14);
      (**(code **)(*(long *)param_1 + 0x160))(param_1,local_d8);
    }
  }
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar11 = DictionaryHelper::checkObjectExist_json(pDVar9,param_2,"text");
  if ((uVar11 & 1) != 0) {
    pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar12 = (char *)DictionaryHelper::getStringValue_json(pDVar9,param_2,"text",(char *)0x0);
    if (pcVar12 != (char *)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_d8,pcVar12);
      cocos2d::ui::Button::setTitleText((Button *)param_1,(basic_string *)local_d8);
      if (((byte)local_d8[0] & 1) != 0) {
        operator_delete(local_c8);
      }
    }
  }
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar9,param_2,"textColorR",0xff);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar9,param_2,"textColorG",0xff);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getIntValue_json(pDVar9,param_2,"textColorB",0xff);
  cocos2d::Color3B::Color3B((Color3B *)local_d8,uVar2,uVar3,uVar4);
  cocos2d::ui::Button::setTitleColor((Button *)param_1,(Color3B *)local_d8);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar8 = DictionaryHelper::getIntValue_json(pDVar9,param_2,"fontSize",0xe);
  cocos2d::ui::Button::setTitleFontSize((Button *)param_1,(float)iVar8);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar12 = (char *)DictionaryHelper::getStringValue_json(pDVar9,param_2,"fontName","");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,pcVar12);
  cocos2d::ui::Button::setTitleFontName((Button *)param_1,(basic_string *)local_d8);
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

