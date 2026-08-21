
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::WidgetPropertiesReader0250::setPropsForLabelAtlasFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForLabelAtlasFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  DictionaryHelper *pDVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  size_t sVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  float fVar15;
  float fVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"stringValue");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"charMapFile");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"itemWidth");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"itemHeight");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"startCharMap");
  if (((((uVar5 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) &&
     (((uVar8 & 1) != 0 && ((uVar9 & 1) != 0)))) {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                (pDVar4,param_2,"charMapFile",(char *)0x0);
    if (*pcVar10 != '\0') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_80,(basic_string *)(this + 0x28));
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                  (pDVar4,param_2,"charMapFile",(char *)0x0);
      sVar11 = strlen(pcVar10);
      pbVar12 = (byte *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_80,pcVar10,sVar11);
      pbVar14 = *(byte **)(pbVar12 + 0x10);
      if ((*pbVar12 & 1) == 0) {
        pbVar14 = pbVar12 + 1;
      }
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                  (pDVar4,param_2,"stringValue",(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar10);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,(char *)pbVar14);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"itemWidth",0);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"itemHeight",0);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                  (pDVar4,param_2,"startCharMap",(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8,pcVar10);
      cocos2d::ui::TextAtlas::setProperty
                ((TextAtlas *)param_1,(basic_string *)local_98,(basic_string *)local_b0,iVar2,iVar3,
                 (basic_string *)local_c8);
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                  (pDVar4,param_2,"stringValue",(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar10);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,(char *)pbVar14);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"itemWidth",0);
      lVar13 = cocos2d::Director::getInstance();
      fVar15 = *(float *)(lVar13 + 0x1a0);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"itemHeight",0);
      lVar13 = cocos2d::Director::getInstance();
      fVar16 = *(float *)(lVar13 + 0x1a0);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                  (pDVar4,param_2,"startCharMap",(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8,pcVar10);
      cocos2d::ui::TextAtlas::setProperty
                ((TextAtlas *)param_1,(basic_string *)local_98,(basic_string *)local_b0,
                 (int)((float)iVar2 / fVar15),(int)((float)iVar3 / fVar16),(basic_string *)local_c8)
      ;
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

