
/* lua_register_cocos2dx_extension_ControlSlider(lua_State*) */

undefined8 lua_register_cocos2dx_extension_ControlSlider(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.ControlSlider");
  tolua_cclass(param_1,"ControlSlider","cc.ControlSlider","cc.Control",0);
                    /* try { // try from 009a81c0 to 00aa81db has its CatchHandler @ 009a8480 */
  tolua_beginmodule(param_1,"ControlSlider");
  tolua_function(param_1,"new",lua_cocos2dx_extension_ControlSlider_constructor);
                    /* try { // try from 009a81dc to 00aa8203 has its CatchHandler @ 009a84cc */
  tolua_function(param_1,"setBackgroundSprite",
                 lua_cocos2dx_extension_ControlSlider_setBackgroundSprite);
  tolua_function(param_1,"getMaximumAllowedValue",
                 lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue);
                    /* try { // try from 009a8210 to 00aa8217 has its CatchHandler @ 009a84b0 */
                    /* try { // try from 009a8218 to 00aa8283 has its CatchHandler @ 009a84dc */
  tolua_function(param_1,"initWithSprites",lua_cocos2dx_extension_ControlSlider_initWithSprites);
  tolua_function(param_1,"getMinimumAllowedValue",
                 lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue);
  tolua_function(param_1,"getMaximumValue",lua_cocos2dx_extension_ControlSlider_getMaximumValue);
  tolua_function(param_1,"getSelectedThumbSprite",
                 lua_cocos2dx_extension_ControlSlider_getSelectedThumbSprite);
  tolua_function(param_1,"setProgressSprite",lua_cocos2dx_extension_ControlSlider_setProgressSprite)
  ;
  tolua_function(param_1,"setMaximumValue",lua_cocos2dx_extension_ControlSlider_setMaximumValue);
  tolua_function(param_1,&DAT_012e5d1e,lua_cocos2dx_extension_ControlSlider_getMinimumValue);
                    /* try { // try from 009a82b8 to 00aa82c7 has its CatchHandler @ 009a8478 */
                    /* try { // try from 009a82c8 to 00aa82ef has its CatchHandler @ 009a84c8 */
  tolua_function(param_1,&DAT_012e5d3f,lua_cocos2dx_extension_ControlSlider_setThumbSprite);
  tolua_function(param_1,"getValue",lua_cocos2dx_extension_ControlSlider_getValue);
  tolua_function(param_1,"getBackgroundSprite",
                 lua_cocos2dx_extension_ControlSlider_getBackgroundSprite);
                    /* try { // try from 009a82fc to 00aa8337 has its CatchHandler @ 009a84d8 */
  tolua_function(param_1,"getThumbSprite",lua_cocos2dx_extension_ControlSlider_getThumbSprite);
  tolua_function(param_1,"setValue",lua_cocos2dx_extension_ControlSlider_setValue);
  tolua_function(param_1,"locationFromTouch",lua_cocos2dx_extension_ControlSlider_locationFromTouch)
  ;
                    /* try { // try from 009a8358 to 00aa8377 has its CatchHandler @ 009a847c */
  tolua_function(param_1,"setMinimumValue",lua_cocos2dx_extension_ControlSlider_setMinimumValue);
  tolua_function(param_1,&DAT_012e5f6a,lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue);
                    /* try { // try from 009a8378 to 00aa839f has its CatchHandler @ 009a84c4 */
  tolua_function(param_1,"getProgressSprite",lua_cocos2dx_extension_ControlSlider_getProgressSprite)
  ;
                    /* try { // try from 009a83a0 to 00aa83d7 has its CatchHandler @ 009a8058 */
  tolua_function(param_1,"setSelectedThumbSprite",
                 lua_cocos2dx_extension_ControlSlider_setSelectedThumbSprite);
  tolua_function(param_1,"setMaximumAllowedValue",
                 lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue);
  tolua_function(param_1,"create",lua_cocos2dx_extension_ControlSlider_create);
                    /* try { // try from 009a83d8 to 00aa83eb has its CatchHandler @ 009a84c0 */
  tolua_endmodule(param_1);
                    /* try { // try from 009a83f0 to 00aa8403 has its CatchHandler @ 009a84d8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9extension13ControlSliderE");
                    /* try { // try from 009a8408 to 00aa841b has its CatchHandler @ 009a84d4 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
                    /* try { // try from 009a8420 to 00aa8433 has its CatchHandler @ 009a84dc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlSlider",0x10);
                    /* try { // try from 009a8434 to 00aa84ef has its CatchHandler @ 009a8058 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ControlSlider");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlSlider",0x10);
                    /* catch() { ... } // from try @ 009a82b8 with catch @ 009a8478 */
                    /* catch() { ... } // from try @ 009a8358 with catch @ 009a847c */
  if (((ulong)local_78[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009a81c0 with catch @ 009a8480 */
                    /* catch() { ... } // from try @ 009a80e4 with catch @ 009a8484 */
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009a8210 with catch @ 009a84b0 */
                    /* catch() { ... } // from try @ 009a813c with catch @ 009a84b4 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009a80b0 with catch @ 009a84c0
                       catch() { ... } // from try @ 009a83d8 with catch @ 009a84c0 */
  __stack_chk_fail();
}

