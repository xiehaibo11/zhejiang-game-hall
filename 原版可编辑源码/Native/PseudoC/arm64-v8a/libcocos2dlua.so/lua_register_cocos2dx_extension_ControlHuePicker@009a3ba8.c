
/* lua_register_cocos2dx_extension_ControlHuePicker(lua_State*) */

undefined8 lua_register_cocos2dx_extension_ControlHuePicker(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a3b04 with catch @ 009a3ba8
                        */
                    /* try { // try from 009a3bbc to 00aa3c77 has its CatchHandler @ 009a3bbc
                       catch() { ... } // from try @ 009a3bbc with catch @ 009a3bbc
                       catch() { ... } // from try @ 009a3c90 with catch @ 009a3bbc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"cc.ControlHuePicker");
  tolua_cclass(param_1,"ControlHuePicker","cc.ControlHuePicker","cc.Control",0);
  tolua_beginmodule(param_1,"ControlHuePicker");
  tolua_function(param_1,"new",lua_cocos2dx_extension_ControlHuePicker_constructor);
  tolua_function(param_1,"initWithTargetAndPos",
                 lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos);
  tolua_function(param_1,"setHue",lua_cocos2dx_extension_ControlHuePicker_setHue);
  tolua_function(param_1,"getStartPos",lua_cocos2dx_extension_ControlHuePicker_getStartPos);
                    /* try { // try from 009a3c78 to 00aa3c8f has its CatchHandler @ 009a3d10 */
  tolua_function(param_1,"getHue",lua_cocos2dx_extension_ControlHuePicker_getHue);
                    /* try { // try from 009a3c90 to 00aa3d57 has its CatchHandler @ 009a3bbc */
  tolua_function(param_1,"getSlider",lua_cocos2dx_extension_ControlHuePicker_getSlider);
  tolua_function(param_1,"setBackground",lua_cocos2dx_extension_ControlHuePicker_setBackground);
  tolua_function(param_1,"setHuePercentage",lua_cocos2dx_extension_ControlHuePicker_setHuePercentage
                );
  tolua_function(param_1,"getBackground",lua_cocos2dx_extension_ControlHuePicker_getBackground);
  tolua_function(param_1,&DAT_012e4abf,lua_cocos2dx_extension_ControlHuePicker_getHuePercentage);
                    /* catch() { ... } // from try @ 009a3c78 with catch @ 009a3d10 */
  tolua_function(param_1,"setSlider",lua_cocos2dx_extension_ControlHuePicker_setSlider);
  tolua_function(param_1,"create",lua_cocos2dx_extension_ControlHuePicker_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9extension16ControlHuePickerE");
                    /* try { // try from 009a3d58 to 00aa3e13 has its CatchHandler @ 009a3d58
                       catch() { ... } // from try @ 009a3d58 with catch @ 009a3d58
                       catch() { ... } // from try @ 009a3e2c with catch @ 009a3d58 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlHuePicker",0x13);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ControlHuePicker");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ControlHuePicker",0x13);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009a3e14 to 00aa3e2b has its CatchHandler @ 009a3eac */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

