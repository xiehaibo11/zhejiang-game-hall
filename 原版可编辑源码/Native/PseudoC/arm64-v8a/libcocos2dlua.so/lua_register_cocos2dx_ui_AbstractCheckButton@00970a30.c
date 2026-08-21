
/* lua_register_cocos2dx_ui_AbstractCheckButton(lua_State*) */

undefined8 lua_register_cocos2dx_ui_AbstractCheckButton(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.AbstractCheckButton");
  tolua_cclass(param_1,"AbstractCheckButton","ccui.AbstractCheckButton","ccui.Widget",0);
                    /* try { // try from 00970a90 to 00a70b17 has its CatchHandler @ 00970a90
                       catch() { ... } // from try @ 00970a90 with catch @ 00970a90
                       catch() { ... } // from try @ 00970b84 with catch @ 00970a90 */
  tolua_beginmodule(param_1,"AbstractCheckButton");
  tolua_function(param_1,"getCrossDisabledFile",
                 lua_cocos2dx_ui_AbstractCheckButton_getCrossDisabledFile);
  tolua_function(param_1,&DAT_012d8756,lua_cocos2dx_ui_AbstractCheckButton_getBackDisabledFile);
  tolua_function(param_1,"loadTextureBackGroundSelected",
                 lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGroundSelected);
  tolua_function(param_1,&DAT_012d881c,
                 lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGroundDisabled);
  tolua_function(param_1,"getCrossNormalFile",lua_cocos2dx_ui_AbstractCheckButton_getCrossNormalFile
                );
                    /* try { // try from 00970b18 to 00a70b37 has its CatchHandler @ 00970bd0 */
  tolua_function(param_1,"setSelected",lua_cocos2dx_ui_AbstractCheckButton_setSelected);
  tolua_function(param_1,0x12d8956,lua_cocos2dx_ui_AbstractCheckButton_getBackPressedFile);
  tolua_function(param_1,"getRendererFrontCrossDisabled",
                 lua_cocos2dx_ui_AbstractCheckButton_getRendererFrontCrossDisabled);
  tolua_function(param_1,"getRendererBackground",
                 lua_cocos2dx_ui_AbstractCheckButton_getRendererBackground);
                    /* try { // try from 00970b70 to 00a70b83 has its CatchHandler @ 00970bcc */
  tolua_function(param_1,"loadTextureFrontCross",
                 lua_cocos2dx_ui_AbstractCheckButton_loadTextureFrontCross);
                    /* try { // try from 00970b84 to 00a70beb has its CatchHandler @ 00970a90 */
  tolua_function(param_1,"getRendererBackgroundDisabled",
                 lua_cocos2dx_ui_AbstractCheckButton_getRendererBackgroundDisabled);
  tolua_function(param_1,"isSelected",lua_cocos2dx_ui_AbstractCheckButton_isSelected);
  tolua_function(param_1,"init",lua_cocos2dx_ui_AbstractCheckButton_init);
                    /* catch() { ... } // from try @ 00970b70 with catch @ 00970bcc */
                    /* catch() { ... } // from try @ 00970b18 with catch @ 00970bd0 */
  tolua_function(param_1,"getBackNormalFile",lua_cocos2dx_ui_AbstractCheckButton_getBackNormalFile);
                    /* try { // try from 00970bec to 00a70c3b has its CatchHandler @ 00970bec
                       catch() { ... } // from try @ 00970bec with catch @ 00970bec
                       catch() { ... } // from try @ 00970c74 with catch @ 00970bec
                       catch() { ... } // from try @ 00970cb8 with catch @ 00970bec */
  tolua_function(param_1,"loadTextures",lua_cocos2dx_ui_AbstractCheckButton_loadTextures);
  tolua_function(param_1,"getZoomScale",lua_cocos2dx_ui_AbstractCheckButton_getZoomScale);
  tolua_function(param_1,"getRendererFrontCross",
                 lua_cocos2dx_ui_AbstractCheckButton_getRendererFrontCross);
                    /* try { // try from 00970c3c to 00a70c73 has its CatchHandler @ 00970cf8 */
  tolua_function(param_1,&DAT_012d8c2a,
                 lua_cocos2dx_ui_AbstractCheckButton_getRendererBackgroundSelected);
  tolua_function(param_1,&DAT_012d8c61,lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGround);
  tolua_function(param_1,&DAT_012d8671,lua_cocos2dx_ui_AbstractCheckButton_setZoomScale);
                    /* try { // try from 00970c74 to 00a70ca3 has its CatchHandler @ 00970bec */
  tolua_function(param_1,"loadTextureFrontCrossDisabled",
                 lua_cocos2dx_ui_AbstractCheckButton_loadTextureFrontCrossDisabled);
  tolua_endmodule(param_1);
                    /* try { // try from 00970ca4 to 00a70cb7 has its CatchHandler @ 00970cf8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui19AbstractCheckButtonE");
                    /* try { // try from 00970cb8 to 00a70d13 has its CatchHandler @ 00970bec */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.AbstractCheckButton",0x18);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"AbstractCheckButton");
                    /* catch() { ... } // from try @ 00970c3c with catch @ 00970cf8
                       catch() { ... } // from try @ 00970ca4 with catch @ 00970cf8 */
  local_40 = local_78;
                    /* try { // try from 00970d14 to 00a70d63 has its CatchHandler @ 00970d14
                       catch() { ... } // from try @ 00970d14 with catch @ 00970d14
                       catch() { ... } // from try @ 00970dac with catch @ 00970d14
                       catch() { ... } // from try @ 00970e2c with catch @ 00970d14 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.AbstractCheckButton",0x18);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00970d64 to 00a70d7b has its CatchHandler @ 00970e44 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

