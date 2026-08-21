
/* js_register_extension_EventAssetsManagerEx(se::Object*) */

undefined8 js_register_extension_EventAssetsManagerEx(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined1 uStack_35;
  undefined4 uStack_34;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = (basic_string)0x24;
  uStack_34 = 0;
  uStack_3f = 0x616e614d737465;
  uStack_38 = 0x67;
  uStack_47 = 0x7341746e657645;
  uStack_40 = 0x73;
  uStack_37 = 0x7265;
  uStack_35 = 0;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_extension_EventAssetsManagerEx_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT21(uStack_37,uStack_38))));
  }
  se::Class::defineFunction
            (this,"getAssetsManagerEx",js_extension_EventAssetsManagerEx_getAssetsManagerExRegistry)
  ;
  se::Class::defineFunction
            (this,"getDownloadedFiles",js_extension_EventAssetsManagerEx_getDownloadedFilesRegistry)
  ;
  se::Class::defineFunction
            (this,"getTotalFiles",js_extension_EventAssetsManagerEx_getTotalFilesRegistry);
  se::Class::defineFunction(this,"getAssetId",js_extension_EventAssetsManagerEx_getAssetIdRegistry);
  se::Class::defineFunction
            (this,"getTotalBytes",js_extension_EventAssetsManagerEx_getTotalBytesRegistry);
  se::Class::defineFunction
            (this,"getCURLECode",js_extension_EventAssetsManagerEx_getCURLECodeRegistry);
  se::Class::defineFunction(this,"getMessage",js_extension_EventAssetsManagerEx_getMessageRegistry);
  se::Class::defineFunction
            (this,"getCURLMCode",js_extension_EventAssetsManagerEx_getCURLMCodeRegistry);
  se::Class::defineFunction
            (this,"getDownloadedBytes",js_extension_EventAssetsManagerEx_getDownloadedBytesRegistry)
  ;
  se::Class::defineFunction
            (this,"getPercentByFile",js_extension_EventAssetsManagerEx_getPercentByFileRegistry);
  se::Class::defineFunction
            (this,"getEventCode",js_extension_EventAssetsManagerEx_getEventCodeRegistry);
  se::Class::defineFunction(this,"getPercent",js_extension_EventAssetsManagerEx_getPercentRegistry);
  se::Class::defineFunction(this,"isResuming",js_extension_EventAssetsManagerEx_isResumingRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_extension_EventAssetsManagerEx_finalizeRegistry)
  ;
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  local_30 = (Class *)0x185f28a;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_extension_EventAssetsManagerEx_proto = se::Class::getProto(this);
  __jsb_cocos2d_extension_EventAssetsManagerEx_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

