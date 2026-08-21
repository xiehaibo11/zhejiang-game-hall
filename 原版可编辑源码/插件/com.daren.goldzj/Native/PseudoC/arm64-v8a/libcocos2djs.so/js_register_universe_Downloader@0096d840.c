
/* js_register_universe_Downloader(se::Object*) */

undefined8 js_register_universe_Downloader(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined2 local_3f;
  undefined1 local_3d;
  undefined4 uStack_3c;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3c = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x14;
  local_3f = 0x7265;
  local_3d = 0;
  uStack_47 = 0x616f6c6e776f44;
  uStack_40 = 100;
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_universe_Example_proto,
                                    js_universe_Downloader_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction
            (this,"setAcceptEncoding",js_universe_Downloader_setAcceptEncodingRegistry);
  se::Class::defineFunction(this,"setTaskPriority",js_universe_Downloader_setTaskPriorityRegistry);
  se::Class::defineFunction(this,"add",js_universe_Downloader_addRegistry);
  se::Class::defineFunction(this,"setListener",js_universe_Downloader_setListenerRegistry);
  se::Class::defineFunction
            (this,"setProgressListener",js_universe_Downloader_setProgressListenerRegistry);
  se::Class::defineFunction
            (this,"setNeedDetailTime",js_universe_Downloader_setNeedDetailTimeRegistry);
  se::Class::defineStaticFunction(this,"init",js_universe_Downloader_initRegistry);
  se::Class::defineFinalizeFunction(this,js_universe_Downloader_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188e770;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_universe_Downloader_proto = se::Class::getProto(this);
  __jsb_universe_Downloader_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

