
/* cocostudio::TextBMFontReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::TextBMFontReader::setPropsFromJsonDictionary
          (TextBMFontReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  void *__src;
  int iVar2;
  long lVar3;
  DictionaryHelper *pDVar4;
  GenericValue *pGVar5;
  char *pcVar6;
  size_t sVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *__dest;
  ulong uVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
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
  lVar3 = GUIReader::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_80,(basic_string *)(lVar3 + 0x28));
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar5 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar4,param_2,"fileNameData");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar2 = DictionaryHelper::getIntValue_json(pDVar4,pGVar5,P_ResourceType,0);
  __src = local_70;
  if (iVar2 != 0) goto LAB_00c99158;
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
      if (uStack_78 != 0) goto LAB_00c990cc;
    }
    else {
      uVar10 = uStack_78 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar10);
      local_a0 = uVar10 | 1;
      uStack_98 = uStack_78;
      local_90 = __dest;
LAB_00c990cc:
      memcpy(__dest,__src,uStack_78);
    }
    *(undefined1 *)((long)__dest + uStack_78) = 0;
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar4,pGVar5,P_Path,(char *)0x0);
  sVar7 = strlen(pcVar6);
  pbVar8 = (byte *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_a0,pcVar6,sVar7);
  pbVar9 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar9 = pbVar8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,(char *)pbVar9);
  cocos2d::ui::TextBMFont::setFntFile((TextBMFont *)param_1,(basic_string *)local_b8);
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00c99158:
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_2,"text","Text Label");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,pcVar6);
  cocos2d::ui::TextBMFont::setString((TextBMFont *)param_1,(basic_string *)&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
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

