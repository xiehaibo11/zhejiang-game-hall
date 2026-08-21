
/* cocos2d::CSLoader::loadTMXTiledMap(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

undefined8 __thiscall cocos2d::CSLoader::loadTMXTiledMap(CSLoader *this,GenericValue *param_1)

{
  long lVar1;
  DictionaryHelper *pDVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar2 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar3 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar2,param_1,"tmxFile",(char *)0x0);
  pDVar2 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar4 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar2,param_1,"tmxString",(char *)0x0);
  pDVar2 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar5 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar2,param_1,"resourcePath",(char *)0x0);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    uVar6 = 0;
    if ((pcVar4 == (char *)0x0) || ((pcVar5 == (char *)0x0 || (*pcVar4 == '\0'))))
    goto LAB_00caf434;
    if (*pcVar5 == '\0') {
      uVar6 = 0;
      goto LAB_00caf434;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,pcVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,pcVar5);
    uVar6 = TMXTiledMap::createWithXML((basic_string *)local_50,(basic_string *)local_68);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,pcVar3);
    uVar6 = TMXTiledMap::create((basic_string *)local_50);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00caf434:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

