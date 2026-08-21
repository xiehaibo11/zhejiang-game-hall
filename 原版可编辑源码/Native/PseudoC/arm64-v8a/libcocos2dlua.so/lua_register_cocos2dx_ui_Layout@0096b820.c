
/* lua_register_cocos2dx_ui_Layout(lua_State*) */

undefined8 lua_register_cocos2dx_ui_Layout(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.Layout");
  tolua_cclass(param_1,"Layout","ccui.Layout","ccui.Widget",0);
  tolua_beginmodule(param_1,"Layout");
  tolua_function(param_1,"new",lua_cocos2dx_ui_Layout_constructor);
  tolua_function(param_1,"setBackGroundColorVector",lua_cocos2dx_ui_Layout_setBackGroundColorVector)
  ;
  tolua_function(param_1,"setClippingType",lua_cocos2dx_ui_Layout_setClippingType);
  tolua_function(param_1,"setBackGroundColorType",lua_cocos2dx_ui_Layout_setBackGroundColorType);
  tolua_function(param_1,&DAT_012d760b,lua_cocos2dx_ui_Layout_setLoopFocus);
  tolua_function(param_1,"setBackGroundImageColor",lua_cocos2dx_ui_Layout_setBackGroundImageColor);
  tolua_function(param_1,"getBackGroundColorVector",lua_cocos2dx_ui_Layout_getBackGroundColorVector)
  ;
  tolua_function(param_1,"getClippingType",lua_cocos2dx_ui_Layout_getClippingType);
  tolua_function(param_1,"getRenderFile",lua_cocos2dx_ui_Layout_getRenderFile);
  tolua_function(param_1,"isLoopFocus",lua_cocos2dx_ui_Layout_isLoopFocus);
  tolua_function(param_1,"removeBackGroundImage",lua_cocos2dx_ui_Layout_removeBackGroundImage);
  tolua_function(param_1,"getBackGroundColorOpacity",
                 lua_cocos2dx_ui_Layout_getBackGroundColorOpacity);
  tolua_function(param_1,"isClippingEnabled",lua_cocos2dx_ui_Layout_isClippingEnabled);
  tolua_function(param_1,&DAT_012d77b4,lua_cocos2dx_ui_Layout_setBackGroundImageOpacity);
  tolua_function(param_1,&DAT_012d782b,lua_cocos2dx_ui_Layout_setBackGroundImage);
  tolua_function(param_1,"setBackGroundColor",lua_cocos2dx_ui_Layout_setBackGroundColor);
  tolua_function(param_1,0x12d78b3,lua_cocos2dx_ui_Layout_requestDoLayout);
  tolua_function(param_1,&DAT_012d78cf,lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets);
  tolua_function(param_1,"getBackGroundColor",lua_cocos2dx_ui_Layout_getBackGroundColor);
  tolua_function(param_1,"setClippingEnabled",lua_cocos2dx_ui_Layout_setClippingEnabled);
  tolua_function(param_1,"getBackGroundImageColor",lua_cocos2dx_ui_Layout_getBackGroundImageColor);
  tolua_function(param_1,"isBackGroundImageScale9Enabled",
                 lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled);
  tolua_function(param_1,"getBackGroundColorType",lua_cocos2dx_ui_Layout_getBackGroundColorType);
  tolua_function(param_1,&DAT_012d79f1,lua_cocos2dx_ui_Layout_getBackGroundEndColor);
  tolua_function(param_1,"setBackGroundColorOpacity",
                 lua_cocos2dx_ui_Layout_setBackGroundColorOpacity);
  tolua_function(param_1,&DAT_012d7a8a,lua_cocos2dx_ui_Layout_getBackGroundImageOpacity);
  tolua_function(param_1,"isPassFocusToChild",lua_cocos2dx_ui_Layout_isPassFocusToChild);
  tolua_function(param_1,&DAT_012d7acf,lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets);
  tolua_function(param_1,"getBackGroundImageTextureSize",
                 lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize);
  tolua_function(param_1,"forceDoLayout",lua_cocos2dx_ui_Layout_forceDoLayout);
                    /* try { // try from 0096bb5c to 00a6bba7 has its CatchHandler @ 0096bb5c
                       catch() { ... } // from try @ 0096bb5c with catch @ 0096bb5c
                       catch() { ... } // from try @ 0096bbac with catch @ 0096bb5c */
  tolua_function(param_1,"getLayoutType",lua_cocos2dx_ui_Layout_getLayoutType);
  tolua_function(param_1,"setPassFocusToChild",lua_cocos2dx_ui_Layout_setPassFocusToChild);
  tolua_function(param_1,"getBackGroundStartColor",lua_cocos2dx_ui_Layout_getBackGroundStartColor);
                    /* try { // try from 0096bba8 to 00a6bbab has its CatchHandler @ 0096bbe0 */
                    /* try { // try from 0096bbac to 00a6bbf3 has its CatchHandler @ 0096bb5c */
  tolua_function(param_1,"setBackGroundImageScale9Enabled",
                 lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled);
  tolua_function(param_1,&DAT_012d7cba,lua_cocos2dx_ui_Layout_setLayoutType);
                    /* catch() { ... } // from try @ 0096bba8 with catch @ 0096bbe0 */
  tolua_function(param_1,"create",lua_cocos2dx_ui_Layout_create);
                    /* try { // try from 0096bbf4 to 00a6bdb3 has its CatchHandler @ 0096bbf4
                       catch() { ... } // from try @ 0096bbf4 with catch @ 0096bbf4
                       catch() { ... } // from try @ 0096be34 with catch @ 0096bbf4 */
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_Layout_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui6LayoutE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Layout",0xb);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Layout");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Layout",0xb);
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

