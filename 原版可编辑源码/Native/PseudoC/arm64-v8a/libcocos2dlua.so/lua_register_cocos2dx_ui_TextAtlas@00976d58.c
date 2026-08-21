
/* lua_register_cocos2dx_ui_TextAtlas(lua_State*) */

undefined8 lua_register_cocos2dx_ui_TextAtlas(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.TextAtlas");
                    /* try { // try from 00976da4 to 00a76dbb has its CatchHandler @ 00976e84 */
  tolua_cclass(param_1,"TextAtlas","ccui.TextAtlas","ccui.Widget",0);
  tolua_beginmodule(param_1,"TextAtlas");
                    /* try { // try from 00976dc0 to 00a76deb has its CatchHandler @ 00976e80 */
  tolua_function(param_1,"new",lua_cocos2dx_ui_TextAtlas_constructor);
  tolua_function(param_1,"getStringLength",lua_cocos2dx_ui_TextAtlas_getStringLength);
                    /* try { // try from 00976dec to 00a76e13 has its CatchHandler @ 00976d54 */
  tolua_function(param_1,"getString",lua_cocos2dx_ui_TextAtlas_getString);
                    /* try { // try from 00976e14 to 00a76e27 has its CatchHandler @ 00976e84 */
  tolua_function(param_1,"setString",lua_cocos2dx_ui_TextAtlas_setString);
  tolua_function(param_1,"getRenderFile",lua_cocos2dx_ui_TextAtlas_getRenderFile);
  tolua_function(param_1,"setProperty",lua_cocos2dx_ui_TextAtlas_setProperty);
  tolua_function(param_1,"adaptRenderers",lua_cocos2dx_ui_TextAtlas_adaptRenderers);
                    /* try { // try from 00976e64 to 00a76e6b has its CatchHandler @ 00976e80 */
                    /* try { // try from 00976e6c to 00a76e9f has its CatchHandler @ 00976d54 */
  tolua_function(param_1,"create",lua_cocos2dx_ui_TextAtlas_create);
                    /* catch() { ... } // from try @ 00976dc0 with catch @ 00976e80
                       catch() { ... } // from try @ 00976e64 with catch @ 00976e80 */
                    /* catch() { ... } // from try @ 00976da4 with catch @ 00976e84
                       catch() { ... } // from try @ 00976e14 with catch @ 00976e84 */
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_TextAtlas_createInstance);
  tolua_endmodule(param_1);
                    /* try { // try from 00976ea0 to 00a76eef has its CatchHandler @ 00976ea0
                       catch() { ... } // from try @ 00976ea0 with catch @ 00976ea0
                       catch() { ... } // from try @ 00976f28 with catch @ 00976ea0
                       catch() { ... } // from try @ 00976f6c with catch @ 00976ea0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui9TextAtlasE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.TextAtlas",0xe);
                    /* try { // try from 00976ef0 to 00a76f27 has its CatchHandler @ 00976fac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"TextAtlas");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
                    /* try { // try from 00976f28 to 00a76f57 has its CatchHandler @ 00976ea0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.TextAtlas",0xe);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 00976f58 to 00a76f6b has its CatchHandler @ 00976fac */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00976f6c to 00a76fc7 has its CatchHandler @ 00976ea0 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

