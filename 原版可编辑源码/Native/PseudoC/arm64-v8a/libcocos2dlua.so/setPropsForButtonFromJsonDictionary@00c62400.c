
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::WidgetPropertiesReader0250::setPropsForButtonFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForButtonFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  DictionaryHelper *pDVar8;
  char *pcVar9;
  char *__s;
  char *__s_00;
  size_t sVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  basic_string *pbVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_120 [16];
  void *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [16];
  void *local_f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [16];
  void *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [16];
  void *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  pbVar17 = (basic_string *)(this + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::getBooleanValue_json(pDVar8,param_2,"scale9Enable",false);
  (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar5 & 1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_a8,pbVar17);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_c0,pbVar17);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_d8,pbVar17);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar9 = (char *)DictionaryHelper::getStringValue_json(pDVar8,param_2,"normal",(char *)0x0);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar8,param_2,"pressed",(char *)0x0);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s_00 = (char *)DictionaryHelper::getStringValue_json(pDVar8,param_2,"disabled",(char *)0x0);
  if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
    pbVar11 = (byte *)0x0;
  }
  else {
    sVar10 = strlen(pcVar9);
    pbVar11 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_a8,pcVar9,sVar10);
    if ((*pbVar11 & 1) == 0) {
      pbVar11 = pbVar11 + 1;
    }
    else {
      pbVar11 = *(byte **)(pbVar11 + 0x10);
    }
  }
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    pbVar12 = (byte *)0x0;
  }
  else {
    sVar10 = strlen(__s);
    pbVar12 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_c0,__s,sVar10);
    if ((*pbVar12 & 1) == 0) {
      pbVar12 = pbVar12 + 1;
    }
    else {
      pbVar12 = *(byte **)(pbVar12 + 0x10);
    }
  }
  if ((__s_00 == (char *)0x0) || (*__s_00 == '\0')) {
    pbVar13 = (byte *)0x0;
  }
  else {
    sVar10 = strlen(__s_00);
    pbVar13 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_d8,__s_00,sVar10);
    if ((*pbVar13 & 1) == 0) {
      pbVar13 = pbVar13 + 1;
    }
    else {
      pbVar13 = *(byte **)(pbVar13 + 0x10);
    }
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar14 = DictionaryHelper::getBooleanValue_json(pDVar8,param_2,"useMergedTexture",false);
  if ((uVar5 & 1) == 0) {
    if ((uVar14 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,(char *)pbVar11);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_108,(char *)pbVar12);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_120,(char *)pbVar13);
      cocos2d::ui::Button::loadTextures((Button *)param_1,local_f0,local_108,local_120,0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,pcVar9);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_108,__s);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_120,__s_00);
      cocos2d::ui::Button::loadTextures((Button *)param_1,local_f0,local_108,local_120,1);
    }
    if (((byte)local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    if (((byte)local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
    if (((byte)local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar18 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"capInsetsX",0.0);
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar19 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"capInsetsY",0.0);
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar20 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"capInsetsWidth",0.0);
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar21 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"capInsetsHeight",0.0);
    if ((uVar14 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,(char *)pbVar11);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_108,(char *)pbVar12);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_120,(char *)pbVar13);
      cocos2d::ui::Button::loadTextures((Button *)param_1,local_f0,local_108,local_120,0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,pcVar9);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_108,__s);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_120,__s_00);
      cocos2d::ui::Button::loadTextures((Button *)param_1,local_f0,local_108,local_120,1);
    }
    if (((byte)local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    if (((byte)local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
    if (((byte)local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
    cocos2d::Rect::Rect((Rect *)local_f0,fVar18,fVar19,fVar20,fVar21);
    cocos2d::ui::Button::setCapInsets(param_1);
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar5 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"scale9Width");
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar6 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"scale9Height");
    if ((uVar5 & uVar6 & 1) != 0) {
      pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar18 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"scale9Width",0.0);
      pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar19 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"scale9Height",0.0);
      cocos2d::Size::Size((Size *)local_f0,fVar18,fVar19);
      (**(code **)(*(long *)param_1 + 0x160))(param_1,local_f0);
    }
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar14 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"text");
  if ((uVar14 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar9 = (char *)DictionaryHelper::getStringValue_json(pDVar8,param_2,"text",(char *)0x0);
    if (pcVar9 != (char *)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,pcVar9);
      cocos2d::ui::Button::setTitleText((Button *)param_1,(basic_string *)local_f0);
      if (((byte)local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
    }
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar14 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"textColorR");
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar15 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"textColorG");
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar16 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"textColorB");
  if ((uVar14 & 1) == 0) {
    uVar2 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar2 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"textColorR",0);
  }
  if ((uVar15 & 1) == 0) {
    uVar4 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar4 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"textColorG",0);
  }
  if ((uVar16 & 1) == 0) {
    uVar3 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar3 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"textColorB",0);
  }
  cocos2d::Color3B::Color3B((Color3B *)local_f0,uVar2,uVar4,uVar3);
  cocos2d::ui::Button::setTitleColor((Button *)param_1,(Color3B *)local_f0);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar14 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"fontSize");
  if ((uVar14 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar7 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"fontSize",0);
    cocos2d::ui::Button::setTitleFontSize((Button *)param_1,(float)iVar7);
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar14 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"fontName");
  if ((uVar14 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar9 = (char *)DictionaryHelper::getStringValue_json(pDVar8,param_2,"fontName",(char *)0x0);
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,"");
      cocos2d::ui::Button::setTitleFontName((Button *)param_1,(basic_string *)local_f0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,pcVar9);
      cocos2d::ui::Button::setTitleFontName((Button *)param_1,(basic_string *)local_f0);
    }
    if (((byte)local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

