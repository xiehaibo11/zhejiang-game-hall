
/* cocos2d::CSLoader::loadSubGraph(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

Node * __thiscall cocos2d::CSLoader::loadSubGraph(CSLoader *this,GenericValue *param_1)

{
  long lVar1;
  DictionaryHelper *this_00;
  char *pcVar2;
  CSLoader *pCVar3;
  CSLoader *extraout_x0;
  CSLoader *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar2 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (this_00,param_1,"fileName",(char *)0x0);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    this_01 = (CSLoader *)Node::create();
    pCVar3 = this_01;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,pcVar2);
    pCVar3 = (CSLoader *)createNode((basic_string *)local_50);
    this_01 = pCVar3;
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
      this_01 = extraout_x0;
    }
  }
  initNode(this_01,(Node *)pCVar3,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (Node *)pCVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

