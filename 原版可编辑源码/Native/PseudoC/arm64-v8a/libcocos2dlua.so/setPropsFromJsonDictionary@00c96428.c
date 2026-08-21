
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextAtlasReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::TextAtlasReader::setPropsFromJsonDictionary
          (TextAtlasReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  void *__src;
  int iVar2;
  int iVar3;
  long lVar4;
  DictionaryHelper *pDVar5;
  GenericValue *pGVar6;
  char *pcVar7;
  size_t sVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *__dest;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_e8 [16];
  void *pvStack_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_d0 [16];
  void *pvStack_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_b8 [16];
  void *pvStack_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  lVar4 = GUIReader::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_80,(basic_string *)(lVar4 + 0x28));
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar5,param_2,"charMapFileData")
  ;
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar2 = DictionaryHelper::getIntValue_json(pDVar5,pGVar6,P_ResourceType,0);
  __src = local_70;
  if (iVar2 != 0) goto LAB_00c9664c;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if (((byte)local_80 & 1) == 0) {
    local_a0 = CONCAT71(uStack_7f,local_80);
    uStack_98 = uStack_78;
    local_90 = local_70;
  }
  else {
    if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_78 < 0x17) {
      __dest = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uStack_78 << 1);
      if (uStack_78 != 0) goto LAB_00c96520;
    }
    else {
      uVar11 = uStack_78 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar11);
      local_a0 = uVar11 | 1;
      uStack_98 = uStack_78;
      local_90 = __dest;
LAB_00c96520:
      memcpy(__dest,__src,uStack_78);
    }
    *(undefined1 *)((long)__dest + uStack_78) = 0;
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar7 = (char *)DictionaryHelper::getStringValue_json(pDVar5,pGVar6,P_Path,(char *)0x0);
  sVar8 = strlen(pcVar7);
  pbVar9 = (byte *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_a0,pcVar7,sVar8);
  pbVar10 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar10 = pbVar9 + 1;
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar7 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"stringValue","12345678");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_b8,pcVar7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_d0,(char *)pbVar10);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar2 = DictionaryHelper::getIntValue_json(pDVar5,param_2,"itemWidth",0x18);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getIntValue_json(pDVar5,param_2,"itemHeight",0x20);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar7 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,"startCharMap",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_e8,pcVar7);
  cocos2d::ui::TextAtlas::setProperty
            ((TextAtlas *)param_1,(basic_string *)abStack_b8,(basic_string *)abStack_d0,iVar2,iVar3,
             (basic_string *)abStack_e8);
  if (((byte)abStack_e8[0] & 1) != 0) {
    operator_delete(pvStack_d8);
  }
  if (((byte)abStack_d0[0] & 1) != 0) {
    operator_delete(pvStack_c0);
  }
  if (((byte)abStack_b8[0] & 1) != 0) {
    operator_delete(pvStack_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00c9664c:
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (((byte)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

