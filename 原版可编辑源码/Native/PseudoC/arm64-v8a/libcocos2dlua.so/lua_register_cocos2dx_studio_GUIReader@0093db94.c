
/* lua_register_cocos2dx_studio_GUIReader(lua_State*) */

undefined8 lua_register_cocos2dx_studio_GUIReader(lua_State *param_1)

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
  tolua_usertype(param_1,"ccs.GUIReader");
                    /* try { // try from 0093dbdc to 00a3dbe3 has its CatchHandler @ 0093dc20 */
  tolua_cclass(param_1,"GUIReader","ccs.GUIReader",&DAT_012769c7,0);
                    /* try { // try from 0093dbf4 to 00a3dbfb has its CatchHandler @ 0093dc10 */
  tolua_beginmodule(param_1,"GUIReader");
                    /* try { // try from 0093dbfc to 00a3dc77 has its CatchHandler @ 0093d94c */
  tolua_function(param_1,0x12cd6d6,lua_cocos2dx_studio_GUIReader_setFilePath);
                    /* catch() { ... } // from try @ 0093da30 with catch @ 0093dc10
                       catch() { ... } // from try @ 0093dbf4 with catch @ 0093dc10 */
                    /* catch() { ... } // from try @ 0093da0c with catch @ 0093dc14 */
                    /* catch() { ... } // from try @ 0093d9f0 with catch @ 0093dc18 */
                    /* catch() { ... } // from try @ 0093d9d4 with catch @ 0093dc1c */
                    /* catch() { ... } // from try @ 0093daa8 with catch @ 0093dc20
                       catch() { ... } // from try @ 0093dbdc with catch @ 0093dc20 */
                    /* catch() { ... } // from try @ 0093d9b8 with catch @ 0093dc24 */
  tolua_function(param_1,0x12cd73a,lua_cocos2dx_studio_GUIReader_widgetFromJsonFile);
                    /* catch() { ... } // from try @ 0093da8c with catch @ 0093dc28 */
  tolua_function(param_1,"getFilePath",lua_cocos2dx_studio_GUIReader_getFilePath);
  tolua_function(param_1,&DAT_012cd7c6,lua_cocos2dx_studio_GUIReader_widgetFromBinaryFile);
                    /* catch() { ... } // from try @ 0093da68 with catch @ 0093dc58 */
                    /* catch() { ... } // from try @ 0093d994 with catch @ 0093dc5c */
  tolua_function(param_1,"getVersionInteger",lua_cocos2dx_studio_GUIReader_getVersionInteger);
                    /* try { // try from 0093dc78 to 00a3dcc3 has its CatchHandler @ 0093dc78
                       catch() { ... } // from try @ 0093dc78 with catch @ 0093dc78
                       catch() { ... } // from try @ 0093dcf8 with catch @ 0093dc78 */
  tolua_function(param_1,"destroyInstance",lua_cocos2dx_studio_GUIReader_destroyInstance);
  tolua_function(param_1,"getInstance",lua_cocos2dx_studio_GUIReader_getInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio9GUIReaderE");
                    /* try { // try from 0093dcc4 to 00a3dcc7 has its CatchHandler @ 0093dd3c */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
                    /* try { // try from 0093dcec to 00a3dcf7 has its CatchHandler @ 0093dd2c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.GUIReader",0xd);
                    /* try { // try from 0093dcf8 to 00a3dd4f has its CatchHandler @ 0093dc78 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GUIReader");
  local_40 = local_78;
                    /* catch() { ... } // from try @ 0093dcec with catch @ 0093dd2c */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
                    /* catch() { ... } // from try @ 0093dcc4 with catch @ 0093dd3c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.GUIReader",0xd);
  if (((ulong)local_78[0] & 1) != 0) {
                    /* try { // try from 0093dd50 to 00a3de4f has its CatchHandler @ 0093dd50
                       catch() { ... } // from try @ 0093dd50 with catch @ 0093dd50
                       catch() { ... } // from try @ 0093ded0 with catch @ 0093dd50 */
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

