
/* cocos2d::CSLoader::loadParticle(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

Node * __thiscall cocos2d::CSLoader::loadParticle(CSLoader *this,GenericValue *param_1)

{
  long lVar1;
  undefined4 uVar2;
  DictionaryHelper *pDVar3;
  char *pcVar4;
  Node *pNVar5;
  CSLoader *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar4 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar3,param_1,"plistFile",(char *)0x0);
  pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar2 = cocostudio::DictionaryHelper::getIntValue_json(pDVar3,param_1,"particleNum",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,pcVar4);
  pNVar5 = (Node *)ParticleSystemQuad::create((basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  this_00 = (CSLoader *)(**(code **)(*(long *)pNVar5 + 0x668))(pNVar5,uVar2);
  initNode(this_00,pNVar5,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pNVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

