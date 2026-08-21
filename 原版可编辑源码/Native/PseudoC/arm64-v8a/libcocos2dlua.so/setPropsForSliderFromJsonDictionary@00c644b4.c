
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::WidgetPropertiesReader0250::setPropsForSliderFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForSliderFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  DictionaryHelper *pDVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  size_t sVar9;
  byte *pbVar10;
  long lVar11;
  char *__s;
  char *__s_00;
  byte *pbVar12;
  byte *pbVar13;
  float fVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_110 [16];
  void *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [16];
  void *local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getBooleanValue_json(pDVar5,param_2,"barTextureScale9Enable",false);
  cocos2d::ui::Slider::setScale9Enabled(SUB81(param_1,0));
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,"barFileName");
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar14 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,"length",0.0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getBooleanValue_json(pDVar5,param_2,"useMergedTexture",false);
  if ((uVar7 & 1) == 0) goto LAB_00c64744;
  if ((uVar6 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_98,(basic_string *)(this + 0x28));
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"barFileName",(char *)0x0)
    ;
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      pbVar10 = (byte *)0x0;
joined_r0x00c64670:
      if ((uVar3 & 1) != 0) goto LAB_00c64674;
LAB_00c6470c:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,(char *)pbVar10);
      cocos2d::ui::Slider::loadBarTexture((Slider *)param_1,local_b0,0);
    }
    else {
      sVar9 = strlen(pcVar8);
      pbVar10 = (byte *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_98,pcVar8,sVar9);
      if ((*pbVar10 & 1) != 0) {
        pbVar10 = *(byte **)(pbVar10 + 0x10);
        goto joined_r0x00c64670;
      }
      pbVar10 = pbVar10 + 1;
      if ((uVar3 & 1) == 0) goto LAB_00c6470c;
LAB_00c64674:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar8);
      cocos2d::ui::Slider::loadBarTexture((Slider *)param_1,local_b0,1);
    }
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_98,(basic_string *)(this + 0x28));
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"barFileName",(char *)0x0)
    ;
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      pbVar10 = (byte *)0x0;
joined_r0x00c64644:
      if ((uVar3 & 1) != 0) goto LAB_00c64648;
LAB_00c646a0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,(char *)pbVar10);
      cocos2d::ui::Slider::loadBarTexture((Slider *)param_1,local_b0,0);
    }
    else {
      sVar9 = strlen(pcVar8);
      pbVar10 = (byte *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_98,pcVar8,sVar9);
      if ((*pbVar10 & 1) != 0) {
        pbVar10 = *(byte **)(pbVar10 + 0x10);
        goto joined_r0x00c64644;
      }
      pbVar10 = pbVar10 + 1;
      if ((uVar3 & 1) == 0) goto LAB_00c646a0;
LAB_00c64648:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar8);
      cocos2d::ui::Slider::loadBarTexture((Slider *)param_1,local_b0,1);
    }
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    lVar11 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    cocos2d::Size::Size((Size *)local_b0,fVar14,*(float *)(lVar11 + 4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_b0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_00c64744:
  pbVar1 = (basic_string *)(this + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_98,pbVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_b0,pbVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_c8,pbVar1);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"ballNormal",(char *)0x0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"ballPressed",(char *)0x0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s_00 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"ballDisabled",(char *)0x0);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    pbVar10 = (byte *)0x0;
  }
  else {
    sVar9 = strlen(pcVar8);
    pbVar10 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_98,pcVar8,sVar9);
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
  }
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    pbVar12 = (byte *)0x0;
  }
  else {
    sVar9 = strlen(__s);
    pbVar12 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_b0,__s,sVar9);
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
    sVar9 = strlen(__s_00);
    pbVar13 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_c8,__s_00,sVar9);
    if ((*pbVar13 & 1) == 0) {
      pbVar13 = pbVar13 + 1;
    }
    else {
      pbVar13 = *(byte **)(pbVar13 + 0x10);
    }
  }
  if ((uVar3 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_e0,(char *)pbVar10);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f8,(char *)pbVar12);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_110,(char *)pbVar13);
    cocos2d::ui::Slider::loadSlidBallTextures((Slider *)param_1,local_e0,local_f8,local_110,0);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_e0,pcVar8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f8,__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_110,__s_00);
    cocos2d::ui::Slider::loadSlidBallTextures((Slider *)param_1,local_e0,local_f8,local_110,1);
  }
  if (((byte)local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar4 = DictionaryHelper::getIntValue_json(pDVar5,param_2,"percent",0);
  cocos2d::ui::Slider::setPercent((Slider *)param_1,iVar4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e0,pbVar1);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar8 = (char *)DictionaryHelper::getStringValue_json
                             (pDVar5,param_2,"progressBarFileName",(char *)0x0);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    pbVar10 = (byte *)0x0;
  }
  else {
    sVar9 = strlen(pcVar8);
    pbVar10 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_e0,pcVar8,sVar9);
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
  }
  if ((uVar3 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f8,(char *)pbVar10);
    cocos2d::ui::Slider::loadProgressBarTexture((Slider *)param_1,local_f8,0);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_f8,pcVar8);
    cocos2d::ui::Slider::loadProgressBarTexture((Slider *)param_1,local_f8,1);
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

