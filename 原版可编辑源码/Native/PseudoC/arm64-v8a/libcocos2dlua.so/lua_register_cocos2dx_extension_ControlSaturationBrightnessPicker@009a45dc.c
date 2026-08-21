
/* lua_register_cocos2dx_extension_ControlSaturationBrightnessPicker(lua_State*) */

undefined8 lua_register_cocos2dx_extension_ControlSaturationBrightnessPicker(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
                    /* try { // try from 009a45e4 to 00aa4637 has its CatchHandler @ 009a45e4
                       catch(type#1 @ 00000000) { ... } // from try @ 009a45e4 with catch @ 009a45e4
                       catch(type#1 @ 00000000) { ... } // from try @ 009a46bc with catch @ 009a45e4
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4734 with catch @ 009a45e4
                       catch(type#1 @ 00000000) { ... } // from try @ 009a477c with catch @ 009a45e4
                       catch(type#1 @ 00000000) { ... } // from try @ 009a484c with catch @ 009a45e4
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"cc.ControlSaturationBrightnessPicker");
  tolua_cclass(param_1,"ControlSaturationBrightnessPicker","cc.ControlSaturationBrightnessPicker",
               "cc.Control",0);
                    /* try { // try from 009a4638 to 00aa464f has its CatchHandler @ 009a4854 */
  tolua_beginmodule(param_1,"ControlSaturationBrightnessPicker");
                    /* try { // try from 009a4654 to 00aa467b has its CatchHandler @ 009a4858 */
  tolua_function(param_1,"new",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_constructor)
  ;
  tolua_function(param_1,"getShadow",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow);
  tolua_function(param_1,"initWithTargetAndPos",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos);
                    /* try { // try from 009a4688 to 00aa468f has its CatchHandler @ 009a482c */
  tolua_function(param_1,"getStartPos",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos);
                    /* try { // try from 009a46a8 to 00aa46bb has its CatchHandler @ 009a47c8 */
  tolua_function(param_1,"getOverlay",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay);
                    /* try { // try from 009a46bc to 00aa46ff has its CatchHandler @ 009a45e4 */
  tolua_function(param_1,"getSlider",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider);
  tolua_function(param_1,"getBackground",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground);
  tolua_function(param_1,"getSaturation",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation);
                    /* try { // try from 009a4700 to 00aa4713 has its CatchHandler @ 009a4804 */
  tolua_function(param_1,"getBrightness",
                 lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness);
                    /* try { // try from 009a4724 to 00aa4733 has its CatchHandler @ 009a47c0 */
  tolua_function(param_1,"create",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create);
                    /* try { // try from 009a4734 to 00aa475b has its CatchHandler @ 009a45e4 */
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (local_60,"N7cocos2d9extension33ControlSaturationBrightnessPickerE");
                    /* try { // try from 009a475c to 00aa477b has its CatchHandler @ 009a47c4 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
                    /* try { // try from 009a477c to 00aa4813 has its CatchHandler @ 009a45e4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlSaturationBrightnessPicker",0x24);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ControlSaturationBrightnessPicker");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4724 with catch @ 009a47c0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a475c with catch @ 009a47c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a46a8 with catch @ 009a47c8
                        */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlSaturationBrightnessPicker",0x24);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4700 with catch @ 009a4804
                        */
                    /* try { // try from 009a4814 to 00aa4823 has its CatchHandler @ 009a4828 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

