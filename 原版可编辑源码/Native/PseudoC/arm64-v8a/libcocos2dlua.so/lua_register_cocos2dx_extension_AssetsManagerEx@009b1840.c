
/* lua_register_cocos2dx_extension_AssetsManagerEx(lua_State*) */

undefined8 lua_register_cocos2dx_extension_AssetsManagerEx(lua_State *param_1)

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
                    /* try { // try from 009b186c to 00ab18b3 has its CatchHandler @ 009b186c
                       catch() { ... } // from try @ 009b186c with catch @ 009b186c
                       catch() { ... } // from try @ 009b19a4 with catch @ 009b186c */
  tolua_usertype(param_1,0x12e7bb9);
  tolua_cclass(param_1,&LAB_012e7bbc,0x12e7bb9,&DAT_012769c7,0);
  tolua_beginmodule(param_1,&LAB_012e7bbc);
                    /* try { // try from 009b18b4 to 00ab18cf has its CatchHandler @ 009b1adc */
  tolua_function(param_1,"new",lua_cocos2dx_extension_AssetsManagerEx_constructor);
  tolua_function(param_1,"getState",lua_cocos2dx_extension_AssetsManagerEx_getState);
  tolua_function(param_1,"getMaxConcurrentTask",
                 lua_cocos2dx_extension_AssetsManagerEx_getMaxConcurrentTask);
                    /* try { // try from 009b18ec to 00ab1907 has its CatchHandler @ 009b1abc */
  tolua_function(param_1,"checkUpdate",lua_cocos2dx_extension_AssetsManagerEx_checkUpdate);
  tolua_function(param_1,"setVerifyCallback",
                 lua_cocos2dx_extension_AssetsManagerEx_setVerifyCallback);
  tolua_function(param_1,"getStoragePath",lua_cocos2dx_extension_AssetsManagerEx_getStoragePath);
                    /* try { // try from 009b1934 to 00ab1937 has its CatchHandler @ 009b1a9c */
                    /* try { // try from 009b1938 to 00ab193f has its CatchHandler @ 009b1a98 */
                    /* try { // try from 009b1940 to 00ab194b has its CatchHandler @ 009b1a94 */
  tolua_function(param_1,"update",lua_cocos2dx_extension_AssetsManagerEx_update);
                    /* try { // try from 009b194c to 00ab1957 has its CatchHandler @ 009b1a74 */
                    /* try { // try from 009b1958 to 00ab1967 has its CatchHandler @ 009b1a34 */
  tolua_function(param_1,"setVersionCompareHandle",
                 lua_cocos2dx_extension_AssetsManagerEx_setVersionCompareHandle);
  tolua_function(param_1,"setMaxConcurrentTask",
                 lua_cocos2dx_extension_AssetsManagerEx_setMaxConcurrentTask);
                    /* try { // try from 009b1990 to 00ab19a3 has its CatchHandler @ 009b1a30 */
  tolua_function(param_1,&DAT_012e7fbd,lua_cocos2dx_extension_AssetsManagerEx_getLocalManifest);
                    /* try { // try from 009b19a4 to 00ab1af7 has its CatchHandler @ 009b186c */
  tolua_function(param_1,&DAT_012e7fe1,lua_cocos2dx_extension_AssetsManagerEx_getRemoteManifest);
  tolua_function(param_1,"downloadFailedAssets",
                 lua_cocos2dx_extension_AssetsManagerEx_downloadFailedAssets);
  tolua_function(param_1,"create",lua_cocos2dx_extension_AssetsManagerEx_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9extension15AssetsManagerExE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
                    /* catch() { ... } // from try @ 009b1990 with catch @ 009b1a30 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.AssetsManagerEx",0x12);
                    /* catch() { ... } // from try @ 009b1958 with catch @ 009b1a34 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"AssetsManagerEx");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
                    /* catch() { ... } // from try @ 009b194c with catch @ 009b1a74 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.AssetsManagerEx",0x12);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* catch() { ... } // from try @ 009b1940 with catch @ 009b1a94 */
  if (((byte)local_60[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009b1938 with catch @ 009b1a98 */
                    /* catch() { ... } // from try @ 009b1934 with catch @ 009b1a9c */
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009b18ec with catch @ 009b1abc */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

