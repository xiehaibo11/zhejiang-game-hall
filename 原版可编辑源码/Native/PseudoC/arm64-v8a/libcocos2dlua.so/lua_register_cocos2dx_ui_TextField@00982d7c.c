
/* lua_register_cocos2dx_ui_TextField(lua_State*) */

undefined8 lua_register_cocos2dx_ui_TextField(lua_State *param_1)

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
                    /* try { // try from 00982d98 to 00a82e43 has its CatchHandler @ 00982d98
                       catch(type#1 @ 00000000) { ... } // from try @ 00982d98 with catch @ 00982d98
                        */
  tolua_usertype(param_1,"ccui.TextField");
  tolua_cclass(param_1,"TextField","ccui.TextField","ccui.Widget",0);
  tolua_beginmodule(param_1,"TextField");
  tolua_function(param_1,"new",lua_cocos2dx_ui_TextField_constructor);
  tolua_function(param_1,"setAttachWithIME",lua_cocos2dx_ui_TextField_setAttachWithIME);
  tolua_function(param_1,"getFontSize",lua_cocos2dx_ui_TextField_getFontSize);
  tolua_function(param_1,"getString",lua_cocos2dx_ui_TextField_getString);
                    /* try { // try from 00982e44 to 00a82e4b has its CatchHandler @ 00982e70 */
  tolua_function(param_1,"setPasswordStyleText",lua_cocos2dx_ui_TextField_setPasswordStyleText);
  tolua_function(param_1,"getDeleteBackward",lua_cocos2dx_ui_TextField_getDeleteBackward);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982e44 with catch @ 00982e70
                        */
                    /* try { // try from 00982e74 to 00a82f73 has its CatchHandler @ 00982e74
                       catch() { ... } // from try @ 00982e74 with catch @ 00982e74
                       catch() { ... } // from try @ 00982fb0 with catch @ 00982e74 */
  tolua_function(param_1,"getTextColor",lua_cocos2dx_ui_TextField_getTextColor);
  tolua_function(param_1,"getPlaceHolder",lua_cocos2dx_ui_TextField_getPlaceHolder);
  tolua_function(param_1,"getAttachWithIME",lua_cocos2dx_ui_TextField_getAttachWithIME);
  tolua_function(param_1,"setFontName",lua_cocos2dx_ui_TextField_setFontName);
  tolua_function(param_1,"getInsertText",lua_cocos2dx_ui_TextField_getInsertText);
  tolua_function(param_1,"setInsertText",lua_cocos2dx_ui_TextField_setInsertText);
  tolua_function(param_1,"setString",lua_cocos2dx_ui_TextField_setString);
  tolua_function(param_1,0x12dca3e,lua_cocos2dx_ui_TextField_getDetachWithIME);
  tolua_function(param_1,"setTextVerticalAlignment",
                 lua_cocos2dx_ui_TextField_setTextVerticalAlignment);
  tolua_function(param_1,"addEventListener",lua_cocos2dx_ui_TextField_addEventListener);
                    /* try { // try from 00982f74 to 00a82f7b has its CatchHandler @ 0098303c */
  tolua_function(param_1,"didNotSelectSelf",lua_cocos2dx_ui_TextField_didNotSelectSelf);
                    /* try { // try from 00982f84 to 00a82f8f has its CatchHandler @ 0098302c */
  tolua_function(param_1,"getFontName",lua_cocos2dx_ui_TextField_getFontName);
                    /* try { // try from 00982fa4 to 00a82faf has its CatchHandler @ 00983040 */
  tolua_function(param_1,"setTextAreaSize",lua_cocos2dx_ui_TextField_setTextAreaSize);
                    /* try { // try from 00982fb0 to 00a83087 has its CatchHandler @ 00982e74 */
  tolua_function(param_1,"attachWithIME",lua_cocos2dx_ui_TextField_attachWithIME);
  tolua_function(param_1,"getStringLength",lua_cocos2dx_ui_TextField_getStringLength);
  tolua_function(param_1,"getAutoRenderSize",lua_cocos2dx_ui_TextField_getAutoRenderSize);
  tolua_function(param_1,"setPasswordEnabled",lua_cocos2dx_ui_TextField_setPasswordEnabled);
  tolua_function(param_1,"getPlaceHolderColor",lua_cocos2dx_ui_TextField_getPlaceHolderColor);
                    /* catch() { ... } // from try @ 00982f84 with catch @ 0098302c */
  tolua_function(param_1,"getPasswordStyleText",lua_cocos2dx_ui_TextField_getPasswordStyleText);
                    /* catch() { ... } // from try @ 00982f74 with catch @ 0098303c */
                    /* catch() { ... } // from try @ 00982fa4 with catch @ 00983040 */
  tolua_function(param_1,"setMaxLengthEnabled",lua_cocos2dx_ui_TextField_setMaxLengthEnabled);
  tolua_function(param_1,"isPasswordEnabled",lua_cocos2dx_ui_TextField_isPasswordEnabled);
  tolua_function(param_1,"setDeleteBackward",lua_cocos2dx_ui_TextField_setDeleteBackward);
  tolua_function(param_1,"setCursorPosition",lua_cocos2dx_ui_TextField_setCursorPosition);
  tolua_function(param_1,"getTextHorizontalAlignment",
                 lua_cocos2dx_ui_TextField_getTextHorizontalAlignment);
  tolua_function(param_1,"setFontSize",lua_cocos2dx_ui_TextField_setFontSize);
  tolua_function(param_1,"setPlaceHolder",lua_cocos2dx_ui_TextField_setPlaceHolder);
  tolua_function(param_1,"setCursorFromPoint",lua_cocos2dx_ui_TextField_setCursorFromPoint);
  tolua_function(param_1,"setPlaceHolderColor",lua_cocos2dx_ui_TextField_setPlaceHolderColor);
  tolua_function(param_1,"setTextHorizontalAlignment",
                 lua_cocos2dx_ui_TextField_setTextHorizontalAlignment);
  tolua_function(param_1,"setTextColor",lua_cocos2dx_ui_TextField_setTextColor);
  tolua_function(param_1,"setCursorChar",lua_cocos2dx_ui_TextField_setCursorChar);
  tolua_function(param_1,"getMaxLength",lua_cocos2dx_ui_TextField_getMaxLength);
  tolua_function(param_1,"isMaxLengthEnabled",lua_cocos2dx_ui_TextField_isMaxLengthEnabled);
  tolua_function(param_1,&DAT_012dd125,lua_cocos2dx_ui_TextField_setDetachWithIME);
  tolua_function(param_1,"getTextVerticalAlignment",
                 lua_cocos2dx_ui_TextField_getTextVerticalAlignment);
  tolua_function(param_1,"setTouchAreaEnabled",lua_cocos2dx_ui_TextField_setTouchAreaEnabled);
  tolua_function(param_1,"setMaxLength",lua_cocos2dx_ui_TextField_setMaxLength);
  tolua_function(param_1,"setCursorEnabled",lua_cocos2dx_ui_TextField_setCursorEnabled);
  tolua_function(param_1,"setTouchSize",lua_cocos2dx_ui_TextField_setTouchSize);
  tolua_function(param_1,"getTouchSize",lua_cocos2dx_ui_TextField_getTouchSize);
  tolua_function(param_1,"create",lua_cocos2dx_ui_TextField_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_TextField_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui9TextFieldE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.TextField",0xe);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"TextField");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.TextField",0xe);
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

