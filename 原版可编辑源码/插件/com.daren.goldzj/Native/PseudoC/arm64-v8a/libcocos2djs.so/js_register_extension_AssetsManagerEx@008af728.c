
/* js_register_extension_AssetsManagerEx(se::Object*) */

undefined8 js_register_extension_AssetsManagerEx(Object *param_1)

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
  uStack_3f = 0x726567616e;
  uStack_47 = 0x7465737341;
  uStack_42 = 0x4d73;
  uStack_40 = 0x61;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_extension_AssetsManagerEx_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction
            (this,"getDownloadedFiles",js_extension_AssetsManagerEx_getDownloadedFilesRegistry);
  se::Class::defineFunction(this,"getState",js_extension_AssetsManagerEx_getStateRegistry);
  se::Class::defineFunction
            (this,"getMaxConcurrentTask",js_extension_AssetsManagerEx_getMaxConcurrentTaskRegistry);
  se::Class::defineFunction(this,"getTotalFiles",js_extension_AssetsManagerEx_getTotalFilesRegistry)
  ;
  se::Class::defineFunction
            (this,"loadRemoteManifest",js_extension_AssetsManagerEx_loadRemoteManifestRegistry);
  se::Class::defineFunction(this,"checkUpdate",js_extension_AssetsManagerEx_checkUpdateRegistry);
  se::Class::defineFunction(this,"getTotalBytes",js_extension_AssetsManagerEx_getTotalBytesRegistry)
  ;
  se::Class::defineFunction
            (this,"setVerifyCallback",js_extension_AssetsManagerEx_setVerifyCallbackRegistry);
  se::Class::defineFunction
            (this,"getStoragePath",js_extension_AssetsManagerEx_getStoragePathRegistry);
  se::Class::defineFunction(this,"update",js_extension_AssetsManagerEx_updateRegistry);
  se::Class::defineFunction
            (this,"setEventCallback",js_extension_AssetsManagerEx_setEventCallbackRegistry);
  se::Class::defineFunction
            (this,"setVersionCompareHandle",
             js_extension_AssetsManagerEx_setVersionCompareHandleRegistry);
  se::Class::defineFunction
            (this,"setMaxConcurrentTask",js_extension_AssetsManagerEx_setMaxConcurrentTaskRegistry);
  se::Class::defineFunction
            (this,"getDownloadedBytes",js_extension_AssetsManagerEx_getDownloadedBytesRegistry);
  se::Class::defineFunction
            (this,"getLocalManifest",js_extension_AssetsManagerEx_getLocalManifestRegistry);
  se::Class::defineFunction
            (this,"loadLocalManifest",js_extension_AssetsManagerEx_loadLocalManifestRegistry);
  se::Class::defineFunction
            (this,"getRemoteManifest",js_extension_AssetsManagerEx_getRemoteManifestRegistry);
  se::Class::defineFunction(this,"prepareUpdate",js_extension_AssetsManagerEx_prepareUpdateRegistry)
  ;
  se::Class::defineFunction
            (this,"downloadFailedAssets",js_extension_AssetsManagerEx_downloadFailedAssetsRegistry);
  se::Class::defineFunction(this,"isResuming",js_extension_AssetsManagerEx_isResumingRegistry);
  se::Class::defineStaticFunction(this,"create",js_extension_AssetsManagerEx_createRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_extension_AssetsManagerEx_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x189aa6a;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined5)((ulong)this >> 8);
  uStack_42 = (undefined2)((ulong)this >> 0x30);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_extension_AssetsManagerEx_proto = se::Class::getProto(this);
  __jsb_cocos2d_extension_AssetsManagerEx_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

