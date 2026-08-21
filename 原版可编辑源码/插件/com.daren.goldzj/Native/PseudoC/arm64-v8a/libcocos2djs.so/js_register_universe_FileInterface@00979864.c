
/* js_register_universe_FileInterface(se::Object*) */

undefined8 js_register_universe_FileInterface(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined5 uStack_47;
  undefined2 uStack_42;
  undefined1 uStack_40;
  undefined5 uStack_3f;
  undefined1 local_3a;
  undefined1 uStack_39;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_39 = 0;
  local_48 = (basic_string)0x1a;
  local_38 = (void *)0x0;
  local_3a = 0;
  uStack_3f = 0x6563616672;
  uStack_47 = 0x49656c6946;
  uStack_42 = 0x746e;
  uStack_40 = 0x65;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"isFileExist",js_universe_FileInterface_isFileExistRegistry);
  se::Class::defineFunction(this,"clearChache",js_universe_FileInterface_clearChacheRegistry);
                    /* catch() { ... } // from try @ 00979678 with catch @ 00979904 */
                    /* catch() { ... } // from try @ 00979668 with catch @ 00979914 */
                    /* catch() { ... } // from try @ 00979698 with catch @ 00979918 */
  se::Class::defineFunction(this,"renameFile",js_universe_FileInterface_renameFileRegistry);
  se::Class::defineFunction
            (this,"getSuitableFOpen",js_universe_FileInterface_getSuitableFOpenRegistry);
  se::Class::defineFunction
            (this,"getStringFromFile",js_universe_FileInterface_getStringFromFileRegistry);
  se::Class::defineFunction(this,"getFileSize",js_universe_FileInterface_getFileSizeRegistry);
  se::Class::defineFunction
            (this,"isDirectoryExist",js_universe_FileInterface_isDirectoryExistRegistry);
  se::Class::defineFunction(this,"removeFile",js_universe_FileInterface_removeFileRegistry);
  se::Class::defineFunction(this,"moveFile",js_universe_FileInterface_moveFileRegistry);
  se::Class::defineFunction
            (this,"removeDirectory",js_universe_FileInterface_removeDirectoryRegistry);
  se::Class::defineFunction
            (this,"createDirectory",js_universe_FileInterface_createDirectoryRegistry);
  se::Class::defineFunction
            (this,"writeStringToFile",js_universe_FileInterface_writeStringToFileRegistry);
  se::Class::defineFunction
            (this,"getWritablePath",js_universe_FileInterface_getWritablePathRegistry);
  se::Class::defineFunction(this,"getFileData",js_universe_FileInterface_getFileDataRegistry);
  se::Class::defineStaticFunction(this,"basename",js_universe_FileInterface_basenameRegistry);
  se::Class::defineStaticFunction(this,"setImpl",js_universe_FileInterface_setImplRegistry);
  se::Class::defineStaticFunction(this,"getInstance",js_universe_FileInterface_getInstanceRegistry);
  se::Class::defineStaticFunction(this,"appendSep",js_universe_FileInterface_appendSepRegistry);
  se::Class::defineFunction(this,"isAllFileExist",js_universe_FileInterface_isAllFileExistRegistry);
  se::Class::defineFunction
            (this,"isAloneFileExist",js_universe_FileInterface_isAloneFileExistRegistry);
  se::Class::defineFinalizeFunction(this,js_universe_FileInterface_finalizeRegistry);
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined5)((ulong)this >> 8);
  uStack_42 = (undefined2)((ulong)this >> 0x30);
  local_30 = (Class *)0x18528b1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_universe_FileInterface_proto = se::Class::getProto(this);
  __jsb_universe_FileInterface_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

