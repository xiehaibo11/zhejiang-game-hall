
/* lua_register_cocos2dx_extension_ControlButton(lua_State*) */

undefined8 lua_register_cocos2dx_extension_ControlButton(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
                    /* try { // try from 009a2c6c to 00aa2c77 has its CatchHandler @ 009a2d1c */
                    /* try { // try from 009a2c78 to 00aa2cc3 has its CatchHandler @ 009a2bac */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"cc.ControlButton");
  tolua_cclass(param_1,"ControlButton","cc.ControlButton","cc.Control",0);
                    /* try { // try from 009a2cc4 to 00aa2cd3 has its CatchHandler @ 009a2d18 */
  tolua_beginmodule(param_1,"ControlButton");
  tolua_function(param_1,"new",lua_cocos2dx_extension_ControlButton_constructor);
                    /* try { // try from 009a2ce4 to 00aa2ce7 has its CatchHandler @ 009a2d6c */
                    /* try { // try from 009a2ce8 to 00aa2d37 has its CatchHandler @ 009a2bac */
  tolua_function(param_1,"isPushed",lua_cocos2dx_extension_ControlButton_isPushed);
  tolua_function(param_1,"setTitleLabelForState",
                 lua_cocos2dx_extension_ControlButton_setTitleLabelForState);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2cc4 with catch @ 009a2d18
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2c6c with catch @ 009a2d1c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2c58 with catch @ 009a2d20
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2c50 with catch @ 009a2d24
                        */
  tolua_function(param_1,"setAdjustBackgroundImage",
                 lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage);
                    /* try { // try from 009a2d38 to 00aa2d3b has its CatchHandler @ 009a2d68 */
                    /* try { // try from 009a2d3c to 00aa2d7f has its CatchHandler @ 009a2bac */
  tolua_function(param_1,"setTitleForState",lua_cocos2dx_extension_ControlButton_setTitleForState);
  tolua_function(param_1,&DAT_012e3adc,lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2d38 with catch @ 009a2d68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2ce4 with catch @ 009a2d6c
                        */
  tolua_function(param_1,"getLabelAnchorPoint",
                 lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint);
                    /* try { // try from 009a2d80 to 00aa2e0b has its CatchHandler @ 009a2d80
                       catch(type#1 @ 00000000) { ... } // from try @ 009a2d80 with catch @ 009a2d80
                       catch(type#1 @ 00000000) { ... } // from try @ 009a2e24 with catch @ 009a2d80
                       catch(type#1 @ 00000000) { ... } // from try @ 009a2e74 with catch @ 009a2d80
                       catch(type#1 @ 00000000) { ... } // from try @ 009a2ee4 with catch @ 009a2d80
                        */
  tolua_function(param_1,0x12e3b7f,lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite);
  tolua_function(param_1,"getTitleTTFSizeForState",
                 lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState);
  tolua_function(param_1,"setTitleTTFForState",
                 lua_cocos2dx_extension_ControlButton_setTitleTTFForState);
  tolua_function(param_1,"setTitleTTFSizeForState",
                 lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState);
  tolua_function(param_1,"setTitleLabel",lua_cocos2dx_extension_ControlButton_setTitleLabel);
  tolua_function(param_1,"setPreferredSize",lua_cocos2dx_extension_ControlButton_setPreferredSize);
                    /* try { // try from 009a2e0c to 00aa2e13 has its CatchHandler @ 009a2ecc */
                    /* try { // try from 009a2e14 to 00aa2e23 has its CatchHandler @ 009a2ec8 */
  tolua_function(param_1,"getCurrentTitleColor",
                 lua_cocos2dx_extension_ControlButton_getCurrentTitleColor);
                    /* try { // try from 009a2e24 to 00aa2e4f has its CatchHandler @ 009a2d80 */
  tolua_function(param_1,"setZoomOnTouchDown",
                 lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown);
  tolua_function(param_1,"setBackgroundSprite",
                 lua_cocos2dx_extension_ControlButton_setBackgroundSprite);
                    /* try { // try from 009a2e50 to 00aa2e5f has its CatchHandler @ 009a2ec4 */
  tolua_function(param_1,"getBackgroundSpriteForState",
                 lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState);
                    /* try { // try from 009a2e70 to 00aa2e73 has its CatchHandler @ 009a2f14 */
                    /* try { // try from 009a2e74 to 00aa2edf has its CatchHandler @ 009a2d80 */
  tolua_function(param_1,"getHorizontalOrigin",
                 lua_cocos2dx_extension_ControlButton_getHorizontalOrigin);
  tolua_function(param_1,"initWithTitleAndFontNameAndFontSize",
                 lua_cocos2dx_extension_ControlButton_initWithTitleAndFontNameAndFontSize);
  tolua_function(param_1,"setTitleBMFontForState",
                 lua_cocos2dx_extension_ControlButton_setTitleBMFontForState);
  tolua_function(param_1,"getScaleRatio",lua_cocos2dx_extension_ControlButton_getScaleRatio);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2e50 with catch @ 009a2ec4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2e14 with catch @ 009a2ec8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2e0c with catch @ 009a2ecc
                        */
  tolua_function(param_1,&DAT_012e418f,lua_cocos2dx_extension_ControlButton_getTitleTTFForState);
                    /* try { // try from 009a2ee0 to 00aa2ee3 has its CatchHandler @ 009a2f10 */
                    /* try { // try from 009a2ee4 to 00aa2f27 has its CatchHandler @ 009a2d80 */
  tolua_function(param_1,"getBackgroundSprite",
                 lua_cocos2dx_extension_ControlButton_getBackgroundSprite);
  tolua_function(param_1,"getTitleColorForState",
                 lua_cocos2dx_extension_ControlButton_getTitleColorForState);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2ee0 with catch @ 009a2f10
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a2e70 with catch @ 009a2f14
                        */
  tolua_function(param_1,"setTitleColorForState",
                 lua_cocos2dx_extension_ControlButton_setTitleColorForState);
  tolua_function(param_1,"doesAdjustBackgroundImage",
                 lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage);
  tolua_function(param_1,"setBackgroundSpriteFrameForState",
                 lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState);
  tolua_function(param_1,"setBackgroundSpriteForState",
                 lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState);
  tolua_function(param_1,"setScaleRatio",lua_cocos2dx_extension_ControlButton_setScaleRatio);
  tolua_function(param_1,"getTitleBMFontForState",
                 lua_cocos2dx_extension_ControlButton_getTitleBMFontForState);
  tolua_function(param_1,"getTitleLabel",lua_cocos2dx_extension_ControlButton_getTitleLabel);
  tolua_function(param_1,"getPreferredSize",lua_cocos2dx_extension_ControlButton_getPreferredSize);
  tolua_function(param_1,"getVerticalMargin",lua_cocos2dx_extension_ControlButton_getVerticalMargin)
  ;
  tolua_function(param_1,"getTitleLabelForState",
                 lua_cocos2dx_extension_ControlButton_getTitleLabelForState);
  tolua_function(param_1,"setMargins",lua_cocos2dx_extension_ControlButton_setMargins);
  tolua_function(param_1,"getCurrentTitle",lua_cocos2dx_extension_ControlButton_getCurrentTitle);
  tolua_function(param_1,"initWithLabelAndBackgroundSprite",
                 lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite);
  tolua_function(param_1,"getZoomOnTouchDown",
                 lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown);
  tolua_function(param_1,&LAB_012e47ac,lua_cocos2dx_extension_ControlButton_getTitleForState);
  tolua_function(param_1,"create",lua_cocos2dx_extension_ControlButton_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9extension13ControlButtonE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlButton",0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ControlButton");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlButton",0x10);
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

