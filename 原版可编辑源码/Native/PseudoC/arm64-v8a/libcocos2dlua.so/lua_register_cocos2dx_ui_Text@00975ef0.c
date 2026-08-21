
/* lua_register_cocos2dx_ui_Text(lua_State*) */

undefined8 lua_register_cocos2dx_ui_Text(lua_State *param_1)

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
  tolua_usertype(param_1,&LAB_012d9cd8);
                    /* try { // try from 00975f24 to 00a75f4b has its CatchHandler @ 00976008 */
  tolua_cclass(param_1,&DAT_012d9cdd,&LAB_012d9cd8,"ccui.Widget",0);
                    /* try { // try from 00975f4c to 00a75f77 has its CatchHandler @ 00975e50 */
  tolua_beginmodule(param_1,&DAT_012d9cdd);
  tolua_function(param_1,"new",lua_cocos2dx_ui_Text_constructor);
                    /* try { // try from 00975f78 to 00a75f8b has its CatchHandler @ 00976010 */
  tolua_function(param_1,"enableShadow",lua_cocos2dx_ui_Text_enableShadow);
                    /* try { // try from 00975f90 to 00a75fa3 has its CatchHandler @ 00976014 */
  tolua_function(param_1,"getFontSize",lua_cocos2dx_ui_Text_getFontSize);
  tolua_function(param_1,"getString",lua_cocos2dx_ui_Text_getString);
  tolua_function(param_1,"disableEffect",lua_cocos2dx_ui_Text_disableEffect);
                    /* try { // try from 00975fe0 to 00a75fe7 has its CatchHandler @ 0097600c */
  tolua_function(param_1,"getLabelEffectType",lua_cocos2dx_ui_Text_getLabelEffectType);
                    /* try { // try from 00975fec to 00a75ff3 has its CatchHandler @ 00976008 */
                    /* try { // try from 00975ff4 to 00a7602f has its CatchHandler @ 00975e50 */
  tolua_function(param_1,"getTextColor",lua_cocos2dx_ui_Text_getTextColor);
                    /* catch() { ... } // from try @ 00975f24 with catch @ 00976008
                       catch() { ... } // from try @ 00975fec with catch @ 00976008 */
                    /* catch() { ... } // from try @ 00975eac with catch @ 0097600c
                       catch() { ... } // from try @ 00975fe0 with catch @ 0097600c */
                    /* catch() { ... } // from try @ 00975e90 with catch @ 00976010
                       catch() { ... } // from try @ 00975f78 with catch @ 00976010 */
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_ui_Text_getBlendFunc);
                    /* catch() { ... } // from try @ 00975ee4 with catch @ 00976014
                       catch() { ... } // from try @ 00975f90 with catch @ 00976014 */
  tolua_function(param_1,"setTextVerticalAlignment",lua_cocos2dx_ui_Text_setTextVerticalAlignment);
  tolua_function(param_1,"setFontName",lua_cocos2dx_ui_Text_setFontName);
  tolua_function(param_1,"setTouchScaleChangeEnabled",
                 lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled);
  tolua_function(param_1,"getShadowOffset",lua_cocos2dx_ui_Text_getShadowOffset);
  tolua_function(param_1,"setString",lua_cocos2dx_ui_Text_setString);
  tolua_function(param_1,"getOutlineSize",lua_cocos2dx_ui_Text_getOutlineSize);
  tolua_function(param_1,"init",lua_cocos2dx_ui_Text_init);
  tolua_function(param_1,"getShadowBlurRadius",lua_cocos2dx_ui_Text_getShadowBlurRadius);
  tolua_function(param_1,"isTouchScaleChangeEnabled",lua_cocos2dx_ui_Text_isTouchScaleChangeEnabled)
  ;
  tolua_function(param_1,"getFontName",lua_cocos2dx_ui_Text_getFontName);
  tolua_function(param_1,"setTextAreaSize",lua_cocos2dx_ui_Text_setTextAreaSize);
  tolua_function(param_1,"getStringLength",lua_cocos2dx_ui_Text_getStringLength);
  tolua_function(param_1,"getAutoRenderSize",lua_cocos2dx_ui_Text_getAutoRenderSize);
  tolua_function(param_1,"enableOutline",lua_cocos2dx_ui_Text_enableOutline);
  tolua_function(param_1,"getEffectColor",lua_cocos2dx_ui_Text_getEffectColor);
  tolua_function(param_1,"getType",lua_cocos2dx_ui_Text_getType);
  tolua_function(param_1,"getTextHorizontalAlignment",
                 lua_cocos2dx_ui_Text_getTextHorizontalAlignment);
  tolua_function(param_1,"isShadowEnabled",lua_cocos2dx_ui_Text_isShadowEnabled);
                    /* try { // try from 009761d4 to 00a7621f has its CatchHandler @ 009761d4
                       catch() { ... } // from try @ 009761d4 with catch @ 009761d4
                       catch() { ... } // from try @ 00976224 with catch @ 009761d4 */
  tolua_function(param_1,"setFontSize",lua_cocos2dx_ui_Text_setFontSize);
  tolua_function(param_1,"getShadowColor",lua_cocos2dx_ui_Text_getShadowColor);
  tolua_function(param_1,"setTextColor",lua_cocos2dx_ui_Text_setTextColor);
                    /* try { // try from 00976220 to 00a76223 has its CatchHandler @ 00976258 */
  tolua_function(param_1,"enableGlow",lua_cocos2dx_ui_Text_enableGlow);
                    /* try { // try from 00976224 to 00a7626b has its CatchHandler @ 009761d4 */
  tolua_function(param_1,"getLetter",lua_cocos2dx_ui_Text_getLetter);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_ui_Text_setBlendFunc);
                    /* catch() { ... } // from try @ 00976220 with catch @ 00976258 */
  tolua_function(param_1,"getTextVerticalAlignment",lua_cocos2dx_ui_Text_getTextVerticalAlignment);
                    /* try { // try from 0097626c to 00a76533 has its CatchHandler @ 0097626c
                       catch() { ... } // from try @ 0097626c with catch @ 0097626c
                       catch() { ... } // from try @ 009765b4 with catch @ 0097626c */
  tolua_function(param_1,"getTextAreaSize",lua_cocos2dx_ui_Text_getTextAreaSize);
  tolua_function(param_1,"setTextHorizontalAlignment",
                 lua_cocos2dx_ui_Text_setTextHorizontalAlignment);
  tolua_function(param_1,"create",lua_cocos2dx_ui_Text_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_Text_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui4TextE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Text",9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Text");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Text",9);
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

