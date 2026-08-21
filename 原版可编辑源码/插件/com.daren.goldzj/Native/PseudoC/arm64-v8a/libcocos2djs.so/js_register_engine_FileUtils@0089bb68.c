
/* js_register_engine_FileUtils(se::Object*) */

undefined8 js_register_engine_FileUtils(Object *param_1)

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
  local_3f = 0x73;
  uStack_47 = 0x697455656c6946;
  uStack_40 = 0x6c;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"writeDataToFile",js_engine_FileUtils_writeDataToFileRegistry);
  se::Class::defineFunction
            (this,"fullPathForFilename",js_engine_FileUtils_fullPathForFilenameRegistry);
  se::Class::defineFunction(this,"getStringFromFile",js_engine_FileUtils_getStringFromFileRegistry);
  se::Class::defineFunction(this,"removeFile",js_engine_FileUtils_removeFileRegistry);
  se::Class::defineFunction(this,"getDataFromFile",js_engine_FileUtils_getDataFromFileRegistry);
  se::Class::defineFunction(this,"isAbsolutePath",js_engine_FileUtils_isAbsolutePathRegistry);
  se::Class::defineFunction(this,"renameFile",js_engine_FileUtils_renameFileRegistry);
  se::Class::defineFunction(this,"normalizePath",js_engine_FileUtils_normalizePathRegistry);
  se::Class::defineFunction
            (this,"getDefaultResourceRootPath",
             js_engine_FileUtils_getDefaultResourceRootPathRegistry);
  se::Class::defineFunction
            (this,"loadFilenameLookup",
             js_engine_FileUtils_loadFilenameLookupDictionaryFromFileRegistry);
  se::Class::defineFunction(this,"isPopupNotify",js_engine_FileUtils_isPopupNotifyRegistry);
  se::Class::defineFunction
            (this,"getValueVectorFromFile",js_engine_FileUtils_getValueVectorFromFileRegistry);
  se::Class::defineFunction(this,"getSearchPaths",js_engine_FileUtils_getSearchPathsRegistry);
  se::Class::defineFunction(this,"getFileDir",js_engine_FileUtils_getFileDirRegistry);
  se::Class::defineFunction(this,"writeToFile",js_engine_FileUtils_writeToFileRegistry);
  se::Class::defineFunction
            (this,"getOriginalSearchPaths",js_engine_FileUtils_getOriginalSearchPathsRegistry);
  se::Class::defineFunction(this,"listFiles",js_engine_FileUtils_listFilesRegistry);
  se::Class::defineFunction
            (this,"getValueMapFromFile",js_engine_FileUtils_getValueMapFromFileRegistry);
  se::Class::defineFunction(this,"getFileSize",js_engine_FileUtils_getFileSizeRegistry);
  se::Class::defineFunction
            (this,"getValueMapFromData",js_engine_FileUtils_getValueMapFromDataRegistry);
  se::Class::defineFunction(this,"removeDirectory",js_engine_FileUtils_removeDirectoryRegistry);
  se::Class::defineFunction(this,"setSearchPaths",js_engine_FileUtils_setSearchPathsRegistry);
  se::Class::defineFunction(this,"writeStringToFile",js_engine_FileUtils_writeStringToFileRegistry);
  se::Class::defineFunction
            (this,"setSearchResolutionsOrder",js_engine_FileUtils_setSearchResolutionsOrderRegistry)
  ;
  se::Class::defineFunction
            (this,"addSearchResolutionsOrder",js_engine_FileUtils_addSearchResolutionsOrderRegistry)
  ;
  se::Class::defineFunction(this,"addSearchPath",js_engine_FileUtils_addSearchPathRegistry);
  se::Class::defineFunction
            (this,"writeValueVectorToFile",js_engine_FileUtils_writeValueVectorToFileRegistry);
  se::Class::defineFunction(this,"isFileExist",js_engine_FileUtils_isFileExistRegistry);
  se::Class::defineFunction
            (this,"purgeCachedEntries",js_engine_FileUtils_purgeCachedEntriesRegistry);
  se::Class::defineFunction
            (this,"fullPathFromRelativeFile",js_engine_FileUtils_fullPathFromRelativeFileRegistry);
  se::Class::defineFunction(this,"getSuitableFOpen",js_engine_FileUtils_getSuitableFOpenRegistry);
  se::Class::defineFunction
            (this,"writeValueMapToFile",js_engine_FileUtils_writeValueMapToFileRegistry);
  se::Class::defineFunction(this,"getFileExtension",js_engine_FileUtils_getFileExtensionRegistry);
  se::Class::defineFunction(this,"setWritablePath",js_engine_FileUtils_setWritablePathRegistry);
  se::Class::defineFunction(this,"setPopupNotify",js_engine_FileUtils_setPopupNotifyRegistry);
  se::Class::defineFunction(this,"isDirectoryExist",js_engine_FileUtils_isDirectoryExistRegistry);
  se::Class::defineFunction
            (this,"setDefaultResourceRootPath",
             js_engine_FileUtils_setDefaultResourceRootPathRegistry);
  se::Class::defineFunction
            (this,"getSearchResolutionsOrder",js_engine_FileUtils_getSearchResolutionsOrderRegistry)
  ;
  se::Class::defineFunction(this,"createDirectory",js_engine_FileUtils_createDirectoryRegistry);
  se::Class::defineFunction(this,"getWritablePath",js_engine_FileUtils_getWritablePathRegistry);
  se::Class::defineStaticFunction(this,"setDelegate",js_engine_FileUtils_setDelegateRegistry);
  se::Class::defineStaticFunction(this,"getInstance",js_engine_FileUtils_getInstanceRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_FileUtils_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x1853dce;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_FileUtils_proto = se::Class::getProto(this);
  __jsb_cocos2d_FileUtils_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

