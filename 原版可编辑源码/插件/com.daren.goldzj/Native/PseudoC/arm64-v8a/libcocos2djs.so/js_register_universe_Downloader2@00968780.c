
/* js_register_universe_Downloader2(se::Object*) */

undefined8 js_register_universe_Downloader2(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined4 local_3f;
  undefined3 uStack_3b;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3b = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x16;
  local_3f = 0x327265;
  uStack_47 = 0x616f6c6e776f44;
  uStack_40 = 100;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_universe_Downloader2_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"addListener",js_universe_Downloader2_addListenerRegistry);
  se::Class::defineFunction
            (this,"addProgressScriptListener",
             js_universe_Downloader2_addProgressScriptListenerRegistry);
  se::Class::defineFunction(this,"getThreadCount",js_universe_Downloader2_getThreadCountRegistry);
  se::Class::defineFunction
            (this,"removeProgressScriptListener",
             js_universe_Downloader2_removeProgressScriptListenerRegistry);
  se::Class::defineFunction
            (this,"addScriptListener",js_universe_Downloader2_addScriptListenerRegistry);
  se::Class::defineFunction(this,"add",js_universe_Downloader2_addRegistry);
  se::Class::defineFunction
            (this,"removeScriptListener",js_universe_Downloader2_removeScriptListenerRegistry);
  se::Class::defineFunction
            (this,"addProgressListener",js_universe_Downloader2_addProgressListenerRegistry);
  se::Class::defineFunction(this,"commit",js_universe_Downloader2_commitRegistry);
  se::Class::defineFunction(this,"tick",js_universe_Downloader2_tickRegistry);
  se::Class::defineFunction(this,"removeListener",js_universe_Downloader2_removeListenerRegistry);
  se::Class::defineStaticFunction(this,"getInstance",js_universe_Downloader2_getInstanceRegistry);
  se::Class::defineFinalizeFunction(this,js_universe_Downloader2_finalizeRegistry);
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  local_30 = (Class *)0x188245d;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_universe_Downloader2_proto = se::Class::getProto(this);
  __jsb_universe_Downloader2_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

