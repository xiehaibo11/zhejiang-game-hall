
/* cocostudio::WidgetPropertiesReader0250::setPropsForLabelBMFontFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForLabelBMFontFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  DictionaryHelper *pDVar2;
  char *pcVar3;
  size_t sVar4;
  byte *pbVar5;
  byte *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60,(basic_string *)(this + 0x28));
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar3 = (char *)DictionaryHelper::getStringValue_json(pDVar2,param_2,"fileName",(char *)0x0);
  sVar4 = strlen(pcVar3);
  pbVar5 = (byte *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append(local_60,pcVar3,sVar4);
  pbVar6 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbVar6 = pbVar5 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,(char *)pbVar6);
  cocos2d::ui::TextBMFont::setFntFile((TextBMFont *)param_1,(basic_string *)local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar3 = (char *)DictionaryHelper::getStringValue_json(pDVar2,param_2,"text",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,pcVar3);
  cocos2d::ui::TextBMFont::setString((TextBMFont *)param_1,(basic_string *)local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

