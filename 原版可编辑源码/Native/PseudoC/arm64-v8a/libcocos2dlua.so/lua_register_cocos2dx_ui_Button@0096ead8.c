
/* lua_register_cocos2dx_ui_Button(lua_State*) */

undefined8 lua_register_cocos2dx_ui_Button(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.Button");
  tolua_cclass(param_1,"Button","ccui.Button","ccui.Widget",0);
  tolua_beginmodule(param_1,"Button");
  tolua_function(param_1,"new",lua_cocos2dx_ui_Button_constructor);
  tolua_function(param_1,"getNormalTextureSize",lua_cocos2dx_ui_Button_getNormalTextureSize);
  tolua_function(param_1,"getTitleText",lua_cocos2dx_ui_Button_getTitleText);
  tolua_function(param_1,"setTitleLabel",lua_cocos2dx_ui_Button_setTitleLabel);
  tolua_function(param_1,"setTitleFontSize",lua_cocos2dx_ui_Button_setTitleFontSize);
  tolua_function(param_1,&LAB_012d7e64,lua_cocos2dx_ui_Button_resetPressedRender);
  tolua_function(param_1,"setScale9Enabled",lua_cocos2dx_ui_Button_setScale9Enabled);
  tolua_function(param_1,&DAT_012d7ee8,lua_cocos2dx_ui_Button_resetDisabledRender);
  tolua_function(param_1,&LAB_012d7f08,lua_cocos2dx_ui_Button_getTitleRenderer);
  tolua_function(param_1,"getRendererClicked",lua_cocos2dx_ui_Button_getRendererClicked);
  tolua_function(param_1,"getDisabledFile",lua_cocos2dx_ui_Button_getDisabledFile);
  tolua_function(param_1,"getZoomScale",lua_cocos2dx_ui_Button_getZoomScale);
  tolua_function(param_1,&DAT_012d7f79,lua_cocos2dx_ui_Button_getCapInsetsDisabledRenderer);
  tolua_function(param_1,"setTitleColor",lua_cocos2dx_ui_Button_setTitleColor);
  tolua_function(param_1,"getNormalFile",lua_cocos2dx_ui_Button_getNormalFile);
                    /* try { // try from 0096ecb4 to 00a6ed47 has its CatchHandler @ 0096ecb4
                       catch() { ... } // from try @ 0096ecb4 with catch @ 0096ecb4
                       catch() { ... } // from try @ 0096ed50 with catch @ 0096ecb4 */
  tolua_function(param_1,&DAT_012d801b,lua_cocos2dx_ui_Button_resetNormalRender);
  tolua_function(param_1,"getRendererDisabled",lua_cocos2dx_ui_Button_getRendererDisabled);
  tolua_function(param_1,"setCapInsetsDisabledRenderer",
                 lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer);
  tolua_function(param_1,"setCapInsets",lua_cocos2dx_ui_Button_setCapInsets);
  tolua_function(param_1,"loadTextureDisabled",lua_cocos2dx_ui_Button_loadTextureDisabled);
  tolua_function(param_1,"init",lua_cocos2dx_ui_Button_init);
                    /* try { // try from 0096ed48 to 00a6ed4f has its CatchHandler @ 0096ed8c */
  tolua_function(param_1,"setTitleText",lua_cocos2dx_ui_Button_setTitleText);
                    /* try { // try from 0096ed50 to 00a6eda7 has its CatchHandler @ 0096ecb4 */
  tolua_function(param_1,&DAT_012d8248,lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer);
  tolua_function(param_1,"loadTexturePressed",lua_cocos2dx_ui_Button_loadTexturePressed);
                    /* catch() { ... } // from try @ 0096ed48 with catch @ 0096ed8c */
  tolua_function(param_1,"setTitleFontName",lua_cocos2dx_ui_Button_setTitleFontName);
  tolua_function(param_1,"getCapInsetsNormalRenderer",
                 lua_cocos2dx_ui_Button_getCapInsetsNormalRenderer);
  tolua_function(param_1,"setTitleAlignment",lua_cocos2dx_ui_Button_setTitleAlignment);
  tolua_function(param_1,&DAT_012d83d4,lua_cocos2dx_ui_Button_getCapInsetsPressedRenderer);
  tolua_function(param_1,"loadTextures",lua_cocos2dx_ui_Button_loadTextures);
  tolua_function(param_1,"isScale9Enabled",lua_cocos2dx_ui_Button_isScale9Enabled);
  tolua_function(param_1,&DAT_012d8475,lua_cocos2dx_ui_Button_loadTextureNormal);
  tolua_function(param_1,&DAT_012d84dc,lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer);
  tolua_function(param_1,&DAT_012d8557,lua_cocos2dx_ui_Button_getPressedFile);
  tolua_function(param_1,"getTitleLabel",lua_cocos2dx_ui_Button_getTitleLabel);
  tolua_function(param_1,"getTitleFontSize",lua_cocos2dx_ui_Button_getTitleFontSize);
  tolua_function(param_1,&DAT_012d85a9,lua_cocos2dx_ui_Button_getRendererNormal);
  tolua_function(param_1,"getTitleFontName",lua_cocos2dx_ui_Button_getTitleFontName);
  tolua_function(param_1,"getTitleColor",lua_cocos2dx_ui_Button_getTitleColor);
  tolua_function(param_1,"setPressedActionEnabled",lua_cocos2dx_ui_Button_setPressedActionEnabled);
  tolua_function(param_1,&DAT_012d8671,lua_cocos2dx_ui_Button_setZoomScale);
  tolua_function(param_1,"create",lua_cocos2dx_ui_Button_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_Button_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui6ButtonE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
                    /* try { // try from 0096ef78 to 00a6f0bf has its CatchHandler @ 0096ef78
                       catch() { ... } // from try @ 0096ef78 with catch @ 0096ef78
                       catch() { ... } // from try @ 0096f140 with catch @ 0096ef78 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Button",0xb);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Button");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Button",0xb);
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

