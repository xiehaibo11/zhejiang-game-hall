
/* lua_register_cocos2dx_FileUtils(lua_State*) */

undefined8 lua_register_cocos2dx_FileUtils(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"cc.FileUtils");
  tolua_cclass(param_1,"FileUtils","cc.FileUtils",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"FileUtils");
  tolua_function(param_1,"fullPathForFilename",lua_cocos2dx_FileUtils_fullPathForFilename);
  tolua_function(param_1,"getStringFromFile",lua_cocos2dx_FileUtils_getStringFromFile);
  tolua_function(param_1,"setFilenameLookupDictionary",
                 lua_cocos2dx_FileUtils_setFilenameLookupDictionary);
  tolua_function(param_1,"removeFile",lua_cocos2dx_FileUtils_removeFile);
  tolua_function(param_1,"listFilesRecursivelyAsync",
                 lua_cocos2dx_FileUtils_listFilesRecursivelyAsync);
  tolua_function(param_1,"isAbsolutePath",lua_cocos2dx_FileUtils_isAbsolutePath);
  tolua_function(param_1,"renameFile",lua_cocos2dx_FileUtils_renameFile);
  tolua_function(param_1,"getDefaultResourceRootPath",
                 lua_cocos2dx_FileUtils_getDefaultResourceRootPath);
  tolua_function(param_1,"loadFilenameLookup",
                 lua_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile);
  tolua_function(param_1,"isPopupNotify",lua_cocos2dx_FileUtils_isPopupNotify);
  tolua_function(param_1,"getValueVectorFromFile",lua_cocos2dx_FileUtils_getValueVectorFromFile);
  tolua_function(param_1,"getSearchPaths",lua_cocos2dx_FileUtils_getSearchPaths);
  tolua_function(param_1,"writeToFile",lua_cocos2dx_FileUtils_writeToFile);
  tolua_function(param_1,"getOriginalSearchPaths",lua_cocos2dx_FileUtils_getOriginalSearchPaths);
  tolua_function(param_1,"getNewFilename",lua_cocos2dx_FileUtils_getNewFilename);
  tolua_function(param_1,"listFiles",lua_cocos2dx_FileUtils_listFiles);
  tolua_function(param_1,"getValueMapFromFile",lua_cocos2dx_FileUtils_getValueMapFromFile);
  tolua_function(param_1,"getFileSize",lua_cocos2dx_FileUtils_getFileSize);
  tolua_function(param_1,"getValueMapFromData",lua_cocos2dx_FileUtils_getValueMapFromData);
  tolua_function(param_1,"removeDirectory",lua_cocos2dx_FileUtils_removeDirectory);
  tolua_function(param_1,"setSearchPaths",lua_cocos2dx_FileUtils_setSearchPaths);
  tolua_function(param_1,"writeStringToFile",lua_cocos2dx_FileUtils_writeStringToFile);
  tolua_function(param_1,"setSearchResolutionsOrder",
                 lua_cocos2dx_FileUtils_setSearchResolutionsOrder);
  tolua_function(param_1,"addSearchResolutionsOrder",
                 lua_cocos2dx_FileUtils_addSearchResolutionsOrder);
  tolua_function(param_1,"addSearchPath",lua_cocos2dx_FileUtils_addSearchPath);
  tolua_function(param_1,"writeValueVectorToFile",lua_cocos2dx_FileUtils_writeValueVectorToFile);
  tolua_function(param_1,"isFileExist",lua_cocos2dx_FileUtils_isFileExist);
  tolua_function(param_1,"purgeCachedEntries",lua_cocos2dx_FileUtils_purgeCachedEntries);
  tolua_function(param_1,"fullPathFromRelativeFile",lua_cocos2dx_FileUtils_fullPathFromRelativeFile)
  ;
  tolua_function(param_1,"getSuitableFOpen",lua_cocos2dx_FileUtils_getSuitableFOpen);
  tolua_function(param_1,"writeValueMapToFile",lua_cocos2dx_FileUtils_writeValueMapToFile);
  tolua_function(param_1,"getFileExtension",lua_cocos2dx_FileUtils_getFileExtension);
  tolua_function(param_1,"setWritablePath",lua_cocos2dx_FileUtils_setWritablePath);
  tolua_function(param_1,"setPopupNotify",lua_cocos2dx_FileUtils_setPopupNotify);
  tolua_function(param_1,"isDirectoryExist",lua_cocos2dx_FileUtils_isDirectoryExist);
  tolua_function(param_1,"setDefaultResourceRootPath",
                 lua_cocos2dx_FileUtils_setDefaultResourceRootPath);
  tolua_function(param_1,"getSearchResolutionsOrder",
                 lua_cocos2dx_FileUtils_getSearchResolutionsOrder);
  tolua_function(param_1,"createDirectory",lua_cocos2dx_FileUtils_createDirectory);
  tolua_function(param_1,"listFilesAsync",lua_cocos2dx_FileUtils_listFilesAsync);
  tolua_function(param_1,"getWritablePath",lua_cocos2dx_FileUtils_getWritablePath);
  tolua_function(param_1,"listFilesRecursively",lua_cocos2dx_FileUtils_listFilesRecursively);
  tolua_function(param_1,"destroyInstance",lua_cocos2dx_FileUtils_destroyInstance);
  tolua_function(param_1,"getInstance",lua_cocos2dx_FileUtils_getInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9FileUtilsE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.FileUtils",0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"FileUtils");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.FileUtils",0xc);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

