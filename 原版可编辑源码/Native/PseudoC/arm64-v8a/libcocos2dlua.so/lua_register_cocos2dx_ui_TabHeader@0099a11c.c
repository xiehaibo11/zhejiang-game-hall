
/* lua_register_cocos2dx_ui_TabHeader(lua_State*) */

undefined8 lua_register_cocos2dx_ui_TabHeader(lua_State *param_1)

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
                    /* try { // try from 0099a14c to 00a9a183 has its CatchHandler @ 0099a14c
                       catch() { ... } // from try @ 0099a14c with catch @ 0099a14c
                       catch() { ... } // from try @ 0099a1c8 with catch @ 0099a14c
                       catch() { ... } // from try @ 0099a244 with catch @ 0099a14c */
  tolua_usertype(param_1,"ccui.TabHeader");
  tolua_cclass(param_1,"TabHeader","ccui.TabHeader","ccui.AbstractCheckButton",0);
  tolua_beginmodule(param_1,"TabHeader");
                    /* try { // try from 0099a184 to 00a9a19b has its CatchHandler @ 0099a25c */
  tolua_function(param_1,"getIndexInTabControl",lua_cocos2dx_ui_TabHeader_getIndexInTabControl);
                    /* try { // try from 0099a1a0 to 00a9a1c7 has its CatchHandler @ 0099a258 */
  tolua_function(param_1,"getTitleText",lua_cocos2dx_ui_TabHeader_getTitleText);
  tolua_function(param_1,"setTitleFontSize",lua_cocos2dx_ui_TabHeader_setTitleFontSize);
                    /* try { // try from 0099a1c8 to 00a9a1ef has its CatchHandler @ 0099a14c */
  tolua_function(param_1,"setTitleFontName",lua_cocos2dx_ui_TabHeader_setTitleFontName);
                    /* try { // try from 0099a1f0 to 00a9a203 has its CatchHandler @ 0099a25c */
  tolua_function(param_1,"getTitleFontSize",lua_cocos2dx_ui_TabHeader_getTitleFontSize);
  tolua_function(param_1,"getTitleFontName",lua_cocos2dx_ui_TabHeader_getTitleFontName);
  tolua_function(param_1,"getTitleColor",lua_cocos2dx_ui_TabHeader_getTitleColor);
                    /* try { // try from 0099a23c to 00a9a243 has its CatchHandler @ 0099a258 */
  tolua_function(param_1,&LAB_012d7f08,lua_cocos2dx_ui_TabHeader_getTitleRenderer);
                    /* try { // try from 0099a244 to 00a9a277 has its CatchHandler @ 0099a14c */
  tolua_function(param_1,"setTitleText",lua_cocos2dx_ui_TabHeader_setTitleText);
                    /* catch() { ... } // from try @ 0099a1a0 with catch @ 0099a258
                       catch() { ... } // from try @ 0099a23c with catch @ 0099a258 */
                    /* catch() { ... } // from try @ 0099a184 with catch @ 0099a25c
                       catch() { ... } // from try @ 0099a1f0 with catch @ 0099a25c */
  tolua_function(param_1,"setTitleColor",lua_cocos2dx_ui_TabHeader_setTitleColor);
                    /* try { // try from 0099a278 to 00a9a2b7 has its CatchHandler @ 0099a278
                       catch() { ... } // from try @ 0099a278 with catch @ 0099a278
                       catch() { ... } // from try @ 0099a320 with catch @ 0099a278
                       catch() { ... } // from try @ 0099a3b0 with catch @ 0099a278 */
  tolua_function(param_1,"create",lua_cocos2dx_ui_TabHeader_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui9TabHeaderE");
                    /* try { // try from 0099a2b8 to 00a9a2eb has its CatchHandler @ 0099a3c8 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.TabHeader",0xe);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"TabHeader");
                    /* try { // try from 0099a2f4 to 00a9a31f has its CatchHandler @ 0099a3c4 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
                    /* try { // try from 0099a320 to 00a9a347 has its CatchHandler @ 0099a278 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.TabHeader",0xe);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 0099a348 to 00a9a35b has its CatchHandler @ 0099a3c8 */
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

