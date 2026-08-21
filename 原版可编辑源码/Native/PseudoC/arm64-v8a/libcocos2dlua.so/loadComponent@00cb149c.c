
/* cocos2d::CSLoader::loadComponent(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

undefined8 __thiscall cocos2d::CSLoader::loadComponent(CSLoader *this,GenericValue *param_1)

{
  long lVar1;
  DictionaryHelper *this_00;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar2 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (this_00,param_1,"componentType",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,pcVar2);
  local_78 = local_98;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Component*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Component*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Component*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Component*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x28),(piecewise_construct_t *)local_98,
                     (tuple *)&DAT_01416200,(tuple *)&local_78);
  plVar4 = *(long **)(lVar3 + 0x50);
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    local_50 = (long *)0x0;
  }
  else {
    if ((long *)(lVar3 + 0x30) == plVar4) {
      local_50 = local_70;
      (**(code **)(*plVar4 + 0x18))(plVar4,local_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar4 + 0x10))();
    }
    if (local_50 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*local_50 + 0x30))(local_50,param_1);
      if (local_70 == local_50) {
        pcVar6 = *(code **)(*local_50 + 0x20);
      }
      else {
        if (local_50 == (long *)0x0) goto joined_r0x00cb1578;
        pcVar6 = *(code **)(*local_50 + 0x28);
      }
      (*pcVar6)();
    }
  }
joined_r0x00cb1578:
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

