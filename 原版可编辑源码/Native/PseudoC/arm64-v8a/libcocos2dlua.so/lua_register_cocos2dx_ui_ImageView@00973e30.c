
/* lua_register_cocos2dx_ui_ImageView(lua_State*) */

undefined8 lua_register_cocos2dx_ui_ImageView(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
                    /* try { // try from 00973e38 to 00a73e63 has its CatchHandler @ 00973ef8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"ccui.ImageView");
                    /* try { // try from 00973e64 to 00a73e8b has its CatchHandler @ 00973dcc */
  tolua_cclass(param_1,"ImageView","ccui.ImageView","ccui.Widget",0);
                    /* try { // try from 00973e8c to 00a73e9f has its CatchHandler @ 00973efc */
  tolua_beginmodule(param_1,"ImageView");
  tolua_function(param_1,"new",lua_cocos2dx_ui_ImageView_constructor);
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_ui_ImageView_getBlendFunc);
  tolua_function(param_1,"loadTexture",lua_cocos2dx_ui_ImageView_loadTexture);
                    /* try { // try from 00973edc to 00a73ee3 has its CatchHandler @ 00973ef8 */
                    /* try { // try from 00973ee4 to 00a73f17 has its CatchHandler @ 00973dcc */
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_ui_ImageView_setBlendFunc);
                    /* catch() { ... } // from try @ 00973e38 with catch @ 00973ef8
                       catch() { ... } // from try @ 00973edc with catch @ 00973ef8 */
                    /* catch() { ... } // from try @ 00973e1c with catch @ 00973efc
                       catch() { ... } // from try @ 00973e8c with catch @ 00973efc */
  tolua_function(param_1,"init",lua_cocos2dx_ui_ImageView_init);
                    /* try { // try from 00973f18 to 00a73f6f has its CatchHandler @ 00973f18
                       catch() { ... } // from try @ 00973f18 with catch @ 00973f18
                       catch() { ... } // from try @ 00973fac with catch @ 00973f18
                       catch() { ... } // from try @ 00974070 with catch @ 00973f18 */
  tolua_function(param_1,"setScale9Enabled",lua_cocos2dx_ui_ImageView_setScale9Enabled);
  tolua_function(param_1,"setTextureRect",lua_cocos2dx_ui_ImageView_setTextureRect);
  tolua_function(param_1,"setCapInsets",lua_cocos2dx_ui_ImageView_setCapInsets);
  tolua_function(param_1,"getRenderFile",lua_cocos2dx_ui_ImageView_getRenderFile);
                    /* try { // try from 00973f70 to 00a73fab has its CatchHandler @ 00974084 */
  tolua_function(param_1,"getCapInsets",lua_cocos2dx_ui_ImageView_getCapInsets);
  tolua_function(param_1,"isScale9Enabled",lua_cocos2dx_ui_ImageView_isScale9Enabled);
                    /* try { // try from 00973fac to 00a73fdf has its CatchHandler @ 00973f18 */
  tolua_function(param_1,"create",lua_cocos2dx_ui_ImageView_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_ImageView_createInstance);
  tolua_endmodule(param_1);
                    /* try { // try from 00973fe0 to 00a7406f has its CatchHandler @ 00974084 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui9ImageViewE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.ImageView",0xe);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ImageView");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.ImageView",0xe);
                    /* try { // try from 00974070 to 00a7409f has its CatchHandler @ 00973f18 */
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* catch() { ... } // from try @ 00973f70 with catch @ 00974084
                       catch() { ... } // from try @ 00973fe0 with catch @ 00974084 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

