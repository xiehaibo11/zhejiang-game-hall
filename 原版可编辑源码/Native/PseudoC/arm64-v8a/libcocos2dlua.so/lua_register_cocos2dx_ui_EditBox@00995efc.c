
/* lua_register_cocos2dx_ui_EditBox(lua_State*) */

undefined8 lua_register_cocos2dx_ui_EditBox(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
                    /* try { // try from 00995f08 to 00a95f23 has its CatchHandler @ 00995fa0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00995f24 to 00a95fd7 has its CatchHandler @ 00995ebc */
  tolua_usertype(param_1,"ccui.EditBox");
  tolua_cclass(param_1,"EditBox","ccui.EditBox","ccui.Widget",0);
  tolua_beginmodule(param_1,"EditBox");
  tolua_function(param_1,"new",lua_cocos2dx_ui_EditBox_constructor);
  tolua_function(param_1,"getFontSize",lua_cocos2dx_ui_EditBox_getFontSize);
                    /* catch() { ... } // from try @ 00995f08 with catch @ 00995fa0 */
  tolua_function(param_1,"keyboardDidShow",lua_cocos2dx_ui_EditBox_keyboardDidShow);
  tolua_function(param_1,"setMaxLength",lua_cocos2dx_ui_EditBox_setMaxLength);
  tolua_function(param_1,"openKeyboard",lua_cocos2dx_ui_EditBox_openKeyboard);
  tolua_function(param_1,"setFontSize",lua_cocos2dx_ui_EditBox_setFontSize);
  tolua_function(param_1,"getText",lua_cocos2dx_ui_EditBox_getText);
  tolua_function(param_1,"getInputMode",lua_cocos2dx_ui_EditBox_getInputMode);
  tolua_function(param_1,"initWithSizeAndBackgroundSprite",
                 lua_cocos2dx_ui_EditBox_initWithSizeAndBackgroundSprite);
                    /* try { // try from 00996048 to 00a96093 has its CatchHandler @ 00996048
                       catch() { ... } // from try @ 00996048 with catch @ 00996048
                       catch() { ... } // from try @ 009960b0 with catch @ 00996048 */
  tolua_function(param_1,&DAT_012e0253,lua_cocos2dx_ui_EditBox_getPlaceholderFontName);
  tolua_function(param_1,"keyboardDidHide",lua_cocos2dx_ui_EditBox_keyboardDidHide);
  tolua_function(param_1,"setPlaceholderFontName",lua_cocos2dx_ui_EditBox_setPlaceholderFontName);
                    /* try { // try from 00996094 to 00a960af has its CatchHandler @ 0099612c */
  tolua_function(param_1,"getPlaceholderFontSize",lua_cocos2dx_ui_EditBox_getPlaceholderFontSize);
  tolua_function(param_1,&DAT_012d7f79,lua_cocos2dx_ui_EditBox_getCapInsetsDisabledRenderer);
                    /* try { // try from 009960b0 to 00a96163 has its CatchHandler @ 00996048 */
  tolua_function(param_1,"getPlaceHolder",lua_cocos2dx_ui_EditBox_getPlaceHolder);
  tolua_function(param_1,"setFontName",lua_cocos2dx_ui_EditBox_setFontName);
  tolua_function(param_1,"registerScriptEditBoxHandler",
                 lua_cocos2dx_ui_EditBox_registerScriptEditBoxHandler);
  tolua_function(param_1,"setCapInsetsDisabledRenderer",
                 lua_cocos2dx_ui_EditBox_setCapInsetsDisabledRenderer);
  tolua_function(param_1,"setPlaceholderFontSize",lua_cocos2dx_ui_EditBox_setPlaceholderFontSize);
                    /* catch() { ... } // from try @ 00996094 with catch @ 0099612c */
  tolua_function(param_1,"loadTextureDisabled",lua_cocos2dx_ui_EditBox_loadTextureDisabled);
  tolua_function(param_1,"setInputMode",lua_cocos2dx_ui_EditBox_setInputMode);
  tolua_function(param_1,&DAT_012d4b1f,lua_cocos2dx_ui_EditBox_unregisterScriptEditBoxHandler);
  tolua_function(param_1,"keyboardWillShow",lua_cocos2dx_ui_EditBox_keyboardWillShow);
  tolua_function(param_1,"setPlaceholderFontColor",lua_cocos2dx_ui_EditBox_setPlaceholderFontColor);
  tolua_function(param_1,"getReturnType",lua_cocos2dx_ui_EditBox_getReturnType);
  tolua_function(param_1,"setFontColor",lua_cocos2dx_ui_EditBox_setFontColor);
  tolua_function(param_1,"getFontName",lua_cocos2dx_ui_EditBox_getFontName);
  tolua_function(param_1,"keyboardWillHide",lua_cocos2dx_ui_EditBox_keyboardWillHide);
  tolua_function(param_1,&DAT_012d8248,lua_cocos2dx_ui_EditBox_setCapInsetsNormalRenderer);
  tolua_function(param_1,"loadTexturePressed",lua_cocos2dx_ui_EditBox_loadTexturePressed);
  tolua_function(param_1,"getFontColor",lua_cocos2dx_ui_EditBox_getFontColor);
  tolua_function(param_1,"getInputFlag",lua_cocos2dx_ui_EditBox_getInputFlag);
  tolua_function(param_1,&DAT_012e0884,lua_cocos2dx_ui_EditBox_initWithSizeAndTexture);
  tolua_function(param_1,"getTextHorizontalAlignment",
                 lua_cocos2dx_ui_EditBox_getTextHorizontalAlignment);
  tolua_function(param_1,"getCapInsetsNormalRenderer",
                 lua_cocos2dx_ui_EditBox_getCapInsetsNormalRenderer);
  tolua_function(param_1,&DAT_012d83d4,lua_cocos2dx_ui_EditBox_getCapInsetsPressedRenderer);
  tolua_function(param_1,"getScriptEditBoxHandler",lua_cocos2dx_ui_EditBox_getScriptEditBoxHandler);
  tolua_function(param_1,"loadTextures",lua_cocos2dx_ui_EditBox_loadTextures);
  tolua_function(param_1,"setPlaceHolder",lua_cocos2dx_ui_EditBox_setPlaceHolder);
  tolua_function(param_1,"setInputFlag",lua_cocos2dx_ui_EditBox_setInputFlag);
  tolua_function(param_1,"setReturnType",lua_cocos2dx_ui_EditBox_setReturnType);
  tolua_function(param_1,&DAT_012d8475,lua_cocos2dx_ui_EditBox_loadTextureNormal);
  tolua_function(param_1,"getMaxLength",lua_cocos2dx_ui_EditBox_getMaxLength);
  tolua_function(param_1,&DAT_012d84dc,lua_cocos2dx_ui_EditBox_setCapInsetsPressedRenderer);
  tolua_function(param_1,"setText",lua_cocos2dx_ui_EditBox_setText);
  tolua_function(param_1,"setPlaceholderFont",lua_cocos2dx_ui_EditBox_setPlaceholderFont);
  tolua_function(param_1,"getPlaceholderFontColor",lua_cocos2dx_ui_EditBox_getPlaceholderFontColor);
  tolua_function(param_1,"setCapInsets",lua_cocos2dx_ui_EditBox_setCapInsets);
  tolua_function(param_1,"setFont",lua_cocos2dx_ui_EditBox_setFont);
  tolua_function(param_1,"setTextHorizontalAlignment",
                 lua_cocos2dx_ui_EditBox_setTextHorizontalAlignment);
  tolua_function(param_1,"create",lua_cocos2dx_ui_EditBox_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui7EditBoxE");
                    /* try { // try from 00996454 to 00a964cb has its CatchHandler @ 00996454
                       catch(type#1 @ 00000000) { ... } // from try @ 00996454 with catch @ 00996454
                       catch(type#1 @ 00000000) { ... } // from try @ 009964ec with catch @ 00996454
                       catch(type#1 @ 00000000) { ... } // from try @ 00996590 with catch @ 00996454
                        */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.EditBox",0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"EditBox");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.EditBox",0xc);
                    /* try { // try from 009964cc to 00a964d7 has its CatchHandler @ 00996578 */
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 009964e8 to 00a964eb has its CatchHandler @ 009965c0 */
    operator_delete(local_50);
  }
                    /* try { // try from 009964ec to 00a9658b has its CatchHandler @ 00996454 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

