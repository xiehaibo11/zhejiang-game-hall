
/* cocos2d::CSLoader::loadComAudio(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

ComAudio * __thiscall cocos2d::CSLoader::loadComAudio(CSLoader *this,GenericValue *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ComAudio *this_00;
  DictionaryHelper *pDVar4;
  char *pcVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (ComAudio *)cocostudio::ComAudio::create();
  pDVar4 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar5 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar4,param_1,"componentName",(char *)0x0);
  pDVar4 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar3 = cocostudio::DictionaryHelper::getBooleanValue_json
                    (pDVar4,param_1,"componentEnabled",false);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,pcVar5);
  (**(code **)(*(long *)this_00 + 0x20))(this_00,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  (**(code **)(*(long *)this_00 + 0x18))(this_00,uVar3 & 1);
  pDVar4 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar5 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar4,param_1,"comAudioFilePath",(char *)0x0);
  pDVar4 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  bVar2 = cocostudio::DictionaryHelper::getBooleanValue_json(pDVar4,param_1,"comAudioloop",false);
  cocostudio::ComAudio::setFile(this_00,pcVar5);
  cocostudio::ComAudio::setLoop(this_00,(bool)(bVar2 & 1));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

