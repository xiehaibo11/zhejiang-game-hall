
/* js_register_universe_MergeFile(se::Object*) */

undefined8 js_register_universe_MergeFile(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined2 local_3f;
  undefined5 uStack_3d;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3d = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x12;
  uStack_47 = 0x6946656772654d;
  uStack_40 = 0x6c;
  local_3f = 0x65;
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_universe_Example_proto,
                                    js_universe_MergeFile_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"add",js_universe_MergeFile_addRegistry);
  se::Class::defineFunction(this,"setListener",js_universe_MergeFile_setListenerRegistry);
  se::Class::defineFinalizeFunction(this,js_universe_MergeFile_finalizeRegistry);
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  local_30 = (Class *)0x18830b2;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_universe_MergeFile_proto = se::Class::getProto(this);
  __jsb_universe_MergeFile_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

