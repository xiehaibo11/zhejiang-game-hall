
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::WidgetPropertiesReader0250::setPropsForCheckBoxFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForCheckBoxFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  uint uVar2;
  DictionaryHelper *pDVar3;
  char *__s;
  char *__s_00;
  char *__s_01;
  char *__s_02;
  char *__s_03;
  size_t sVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  basic_string *pbVar10;
  byte *local_180;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_160 [16];
  void *local_150;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_148 [16];
  void *local_138;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130 [16];
  void *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [16];
  void *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pbVar10 = (basic_string *)(this + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar3,param_2,"backGroundBox",(char *)0x0);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s_00 = (char *)DictionaryHelper::getStringValue_json
                             (pDVar3,param_2,"backGroundBoxSelected",(char *)0x0);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s_01 = (char *)DictionaryHelper::getStringValue_json(pDVar3,param_2,"frontCross",(char *)0x0);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s_02 = (char *)DictionaryHelper::getStringValue_json
                             (pDVar3,param_2,"backGroundBoxDisabled",(char *)0x0);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s_03 = (char *)DictionaryHelper::getStringValue_json
                             (pDVar3,param_2,"frontCrossDisabled",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_88,pbVar10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_a0,pbVar10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_b8,pbVar10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_d0,pbVar10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e8,pbVar10);
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    pbVar5 = (byte *)0x0;
  }
  else {
    sVar4 = strlen(__s);
    pbVar5 = (byte *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_88,__s,sVar4);
    if ((*pbVar5 & 1) == 0) {
      pbVar5 = pbVar5 + 1;
    }
    else {
      pbVar5 = *(byte **)(pbVar5 + 0x10);
    }
  }
  if ((__s_00 == (char *)0x0) || (*__s_00 == '\0')) {
    pbVar6 = (byte *)0x0;
  }
  else {
    sVar4 = strlen(__s_00);
    pbVar6 = (byte *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_a0,__s_00,sVar4);
    if ((*pbVar6 & 1) == 0) {
      pbVar6 = pbVar6 + 1;
    }
    else {
      pbVar6 = *(byte **)(pbVar6 + 0x10);
    }
  }
  if ((__s_01 == (char *)0x0) || (*__s_01 == '\0')) {
    pbVar7 = (byte *)0x0;
  }
  else {
    sVar4 = strlen(__s_01);
    pbVar7 = (byte *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_b8,__s_01,sVar4);
    if ((*pbVar7 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
    }
    else {
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
  }
  if ((__s_02 == (char *)0x0) || (*__s_02 == '\0')) {
    local_180 = (byte *)0x0;
  }
  else {
    sVar4 = strlen(__s_02);
    local_180 = (byte *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_d0,__s_02,sVar4);
    if ((*local_180 & 1) == 0) {
      local_180 = local_180 + 1;
    }
    else {
      local_180 = *(byte **)(local_180 + 0x10);
    }
  }
  if ((__s_03 == (char *)0x0) || (*__s_03 == '\0')) {
    pbVar8 = (byte *)0x0;
  }
  else {
    sVar4 = strlen(__s_03);
    pbVar8 = (byte *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_e8,__s_03,sVar4);
    if ((*pbVar8 & 1) == 0) {
      pbVar8 = pbVar8 + 1;
    }
    else {
      pbVar8 = *(byte **)(pbVar8 + 0x10);
    }
  }
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::getBooleanValue_json(pDVar3,param_2,"useMergedTexture",false);
  if ((uVar9 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_100,(char *)pbVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_118,(char *)pbVar6);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_130,(char *)pbVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_148,(char *)local_180);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_160,(char *)pbVar8);
    cocos2d::ui::AbstractCheckButton::loadTextures
              ((AbstractCheckButton *)param_1,local_100,local_118,local_130,local_148,local_160,0);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_100,__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_118,__s_00);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_130,__s_01);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_148,__s_02);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_160,__s_03);
    cocos2d::ui::AbstractCheckButton::loadTextures
              ((AbstractCheckButton *)param_1,local_100,local_118,local_130,local_148,local_160,1);
  }
  if (((byte)local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (((byte)local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if (((byte)local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
  if (((byte)local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getBooleanValue_json(pDVar3,param_2,"selectedState",false);
  (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar2 & 1);
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

