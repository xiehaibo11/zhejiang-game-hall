
/* cocostudio::WidgetPropertiesReader0250::setPropsForLoadingBarFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForLoadingBarFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  DictionaryHelper *pDVar4;
  ulong uVar5;
  char *__s;
  size_t sVar6;
  byte *pbVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::getBooleanValue_json(pDVar4,param_2,"useMergedTexture",false);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60,(basic_string *)(this + 0x28));
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_2,"texture",(char *)0x0);
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    pbVar7 = (byte *)0x0;
  }
  else {
    sVar6 = strlen(__s);
    pbVar7 = (byte *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_60,__s,sVar6);
    if ((*pbVar7 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
    }
    else {
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
  }
  if ((uVar5 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,(char *)pbVar7);
    cocos2d::ui::LoadingBar::loadTexture((LoadingBar *)param_1,local_78,0);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,__s);
    cocos2d::ui::LoadingBar::loadTexture((LoadingBar *)param_1,local_78,1);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"direction",0);
  cocos2d::ui::LoadingBar::setDirection((LoadingBar *)param_1,uVar2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"percent",0);
  cocos2d::ui::LoadingBar::setPercent((LoadingBar *)param_1,(float)iVar3);
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

