
/* lua_register_cocos2dx_ui_RichText(lua_State*) */

undefined8 lua_register_cocos2dx_ui_RichText(lua_State *param_1)

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
                    /* catch() { ... } // from try @ 0098e4f0 with catch @ 0098e588 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0098e508 with catch @ 0098e58c */
  tolua_usertype(param_1,"ccui.RichText");
                    /* catch() { ... } // from try @ 0098e4bc with catch @ 0098e5bc */
  tolua_cclass(param_1,"RichText","ccui.RichText","ccui.Widget",0);
  tolua_beginmodule(param_1,"RichText");
  tolua_function(param_1,"new",lua_cocos2dx_ui_RichText_constructor);
  tolua_function(param_1,&DAT_012de9b1,lua_cocos2dx_ui_RichText_insertElement);
  tolua_function(param_1,"setAnchorTextOutline",lua_cocos2dx_ui_RichText_setAnchorTextOutline);
  tolua_function(param_1,"getFontSize",lua_cocos2dx_ui_RichText_getFontSize);
  tolua_function(param_1,"pushBackElement",lua_cocos2dx_ui_RichText_pushBackElement);
                    /* try { // try from 0098e658 to 00a8e6f7 has its CatchHandler @ 0098e658
                       catch() { ... } // from try @ 0098e658 with catch @ 0098e658
                       catch() { ... } // from try @ 0098e778 with catch @ 0098e658 */
  tolua_function(param_1,"setAnchorTextBold",lua_cocos2dx_ui_RichText_setAnchorTextBold);
  tolua_function(param_1,"getAnchorFontColor",lua_cocos2dx_ui_RichText_getAnchorFontColor);
  tolua_function(param_1,"getAnchorTextShadowBlurRadius",
                 lua_cocos2dx_ui_RichText_getAnchorTextShadowBlurRadius);
  tolua_function(param_1,"setAnchorTextShadow",lua_cocos2dx_ui_RichText_setAnchorTextShadow);
  tolua_function(param_1,"isAnchorTextItalicEnabled",
                 lua_cocos2dx_ui_RichText_isAnchorTextItalicEnabled);
  tolua_function(param_1,"setAnchorFontColor",lua_cocos2dx_ui_RichText_setAnchorFontColor);
  tolua_function(param_1,"setFontFace",lua_cocos2dx_ui_RichText_setFontFace);
                    /* try { // try from 0098e6f8 to 00a8e72b has its CatchHandler @ 0098e7f8 */
  tolua_function(param_1,"setAnchorTextGlow",lua_cocos2dx_ui_RichText_setAnchorTextGlow);
  tolua_function(param_1,"getHorizontalAlignment",lua_cocos2dx_ui_RichText_getHorizontalAlignment);
                    /* try { // try from 0098e72c to 00a8e73f has its CatchHandler @ 0098e7c4 */
  tolua_function(param_1,"setHorizontalAlignment",lua_cocos2dx_ui_RichText_setHorizontalAlignment);
                    /* try { // try from 0098e744 to 00a8e777 has its CatchHandler @ 0098e7c8 */
  tolua_function(param_1,"setAnchorTextDel",lua_cocos2dx_ui_RichText_setAnchorTextDel);
  tolua_function(param_1,"getAnchorTextOutlineColor3B",
                 lua_cocos2dx_ui_RichText_getAnchorTextOutlineColor3B);
                    /* try { // try from 0098e778 to 00a8e813 has its CatchHandler @ 0098e658 */
  tolua_function(param_1,"stringWithColor4B",lua_cocos2dx_ui_RichText_stringWithColor4B);
  tolua_function(param_1,"initWithXML",lua_cocos2dx_ui_RichText_initWithXML);
  tolua_function(param_1,"getAnchorFontColor3B",lua_cocos2dx_ui_RichText_getAnchorFontColor3B);
                    /* catch() { ... } // from try @ 0098e72c with catch @ 0098e7c4 */
                    /* catch() { ... } // from try @ 0098e744 with catch @ 0098e7c8 */
  tolua_function(param_1,"formatText",lua_cocos2dx_ui_RichText_formatText);
  tolua_function(param_1,"getAnchorTextGlowColor3B",
                 lua_cocos2dx_ui_RichText_getAnchorTextGlowColor3B);
                    /* catch() { ... } // from try @ 0098e6f8 with catch @ 0098e7f8 */
  tolua_function(param_1,"openUrl",lua_cocos2dx_ui_RichText_openUrl);
  tolua_function(param_1,"getFontFace",lua_cocos2dx_ui_RichText_getFontFace);
  tolua_function(param_1,"setFontColor",lua_cocos2dx_ui_RichText_setFontColor);
  tolua_function(param_1,"isAnchorTextGlowEnabled",lua_cocos2dx_ui_RichText_isAnchorTextGlowEnabled)
  ;
  tolua_function(param_1,"getDefaults",lua_cocos2dx_ui_RichText_getDefaults);
  tolua_function(param_1,"isAnchorTextUnderlineEnabled",
                 lua_cocos2dx_ui_RichText_isAnchorTextUnderlineEnabled);
  tolua_function(param_1,"getFontColor",lua_cocos2dx_ui_RichText_getFontColor);
  tolua_function(param_1,"isAnchorTextShadowEnabled",
                 lua_cocos2dx_ui_RichText_isAnchorTextShadowEnabled);
  tolua_function(param_1,"getAnchorTextOutlineSize",
                 lua_cocos2dx_ui_RichText_getAnchorTextOutlineSize);
  tolua_function(param_1,"setVerticalSpace",lua_cocos2dx_ui_RichText_setVerticalSpace);
  tolua_function(param_1,"isAnchorTextDelEnabled",lua_cocos2dx_ui_RichText_isAnchorTextDelEnabled);
  tolua_function(param_1,"setDefaults",lua_cocos2dx_ui_RichText_setDefaults);
  tolua_function(param_1,"setWrapMode",lua_cocos2dx_ui_RichText_setWrapMode);
  tolua_function(param_1,"setFontSize",lua_cocos2dx_ui_RichText_setFontSize);
  tolua_function(param_1,"removeElement",lua_cocos2dx_ui_RichText_removeElement);
  tolua_function(param_1,"setAnchorTextItalic",lua_cocos2dx_ui_RichText_setAnchorTextItalic);
  tolua_function(param_1,"getAnchorTextShadowOffset",
                 lua_cocos2dx_ui_RichText_getAnchorTextShadowOffset);
  tolua_function(param_1,0x12df3eb,lua_cocos2dx_ui_RichText_isAnchorTextBoldEnabled);
  tolua_function(param_1,&DAT_012df411,lua_cocos2dx_ui_RichText_getAnchorTextShadowColor3B);
  tolua_function(param_1,"stringWithColor3B",lua_cocos2dx_ui_RichText_stringWithColor3B);
  tolua_function(param_1,"isAnchorTextOutlineEnabled",
                 lua_cocos2dx_ui_RichText_isAnchorTextOutlineEnabled);
  tolua_function(param_1,"getFontColor3B",lua_cocos2dx_ui_RichText_getFontColor3B);
  tolua_function(param_1,"getWrapMode",lua_cocos2dx_ui_RichText_getWrapMode);
  tolua_function(param_1,"setAnchorTextUnderline",lua_cocos2dx_ui_RichText_setAnchorTextUnderline);
  tolua_function(param_1,"color3BWithString",lua_cocos2dx_ui_RichText_color3BWithString);
  tolua_function(param_1,"create",lua_cocos2dx_ui_RichText_create);
  tolua_function(param_1,"createWithXML",lua_cocos2dx_ui_RichText_createWithXML);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui8RichTextE");
                    /* try { // try from 0098ea90 to 00a8eb47 has its CatchHandler @ 0098ea90
                       catch() { ... } // from try @ 0098ea90 with catch @ 0098ea90
                       catch() { ... } // from try @ 0098ebc8 with catch @ 0098ea90 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.RichText",0xd);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"RichText");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.RichText",0xd);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0098eb48 to 00a8eb7b has its CatchHandler @ 0098ec48 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

