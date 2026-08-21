
void FUN_00ceaedc(__hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>>,std::__n___d::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>>>>
                  *param_1)

{
  void *pvVar1;
  
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>>,std::__n...d::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>>>>
  ::__deallocate_node(param_1,*(__hash_node_base **)(param_1 + 0x10));
  pvVar1 = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

