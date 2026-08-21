
/* lua_register_cocos2dx_3d_Animate3D(lua_State*) */

undefined8 lua_register_cocos2dx_3d_Animate3D(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
                    /* try { // try from 009019d4 to 00a019e7 has its CatchHandler @ 00901ac8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009019fc to 00a019ff has its CatchHandler @ 00901b40 */
  tolua_usertype(param_1,"cc.Animate3D");
                    /* try { // try from 00901a10 to 00a01a23 has its CatchHandler @ 00901af4 */
  tolua_cclass(param_1,"Animate3D","cc.Animate3D","cc.ActionInterval",0);
  tolua_beginmodule(param_1,"Animate3D");
                    /* try { // try from 00901a38 to 00a01a3b has its CatchHandler @ 00901b3c */
                    /* try { // try from 00901a3c to 00a01aaf has its CatchHandler @ 009017cc */
  tolua_function(param_1,"new",lua_cocos2dx_3d_Animate3D_constructor);
  tolua_function(param_1,"setKeyFrameUserInfo",lua_cocos2dx_3d_Animate3D_setKeyFrameUserInfo);
  tolua_function(param_1,"getSpeed",lua_cocos2dx_3d_Animate3D_getSpeed);
  tolua_function(param_1,"setQuality",lua_cocos2dx_3d_Animate3D_setQuality);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901950 with catch @ 00901a90
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009018bc with catch @ 00901a94
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901848 with catch @ 00901a98
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0090182c with catch @ 00901a9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00901998 with catch @ 00901a9c
                        */
  tolua_function(param_1,"setWeight",lua_cocos2dx_3d_Animate3D_setWeight);
                    /* try { // try from 00901ab0 to 00a01ab3 has its CatchHandler @ 00901ac4 */
  tolua_function(param_1,"removeFromMap",lua_cocos2dx_3d_Animate3D_removeFromMap);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901ab0 with catch @ 00901ac4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901878 with catch @ 00901ac8
                       catch(type#1 @ 00000000) { ... } // from try @ 009019d4 with catch @ 00901ac8
                        */
  tolua_function(param_1,"initWithFrames",lua_cocos2dx_3d_Animate3D_initWithFrames);
                    /* try { // try from 00901adc to 00a01adf has its CatchHandler @ 00901af0 */
  tolua_function(param_1,"getOriginInterval",lua_cocos2dx_3d_Animate3D_getOriginInterval);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901adc with catch @ 00901af0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009018e8 with catch @ 00901af4
                       catch(type#1 @ 00000000) { ... } // from try @ 00901a10 with catch @ 00901af4
                        */
  tolua_function(param_1,"setSpeed",lua_cocos2dx_3d_Animate3D_setSpeed);
                    /* try { // try from 00901b08 to 00a01b0b has its CatchHandler @ 00901b38 */
                    /* try { // try from 00901b0c to 00a01b57 has its CatchHandler @ 009017cc */
  tolua_function(param_1,"init",lua_cocos2dx_3d_Animate3D_init);
  tolua_function(param_1,"setOriginInterval",lua_cocos2dx_3d_Animate3D_setOriginInterval);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901b08 with catch @ 00901b38
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00901a38 with catch @ 00901b3c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009019fc with catch @ 00901b40
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009019c0 with catch @ 00901b44
                        */
  tolua_function(param_1,"getWeight",lua_cocos2dx_3d_Animate3D_getWeight);
  tolua_function(param_1,"getQuality",lua_cocos2dx_3d_Animate3D_getQuality);
  tolua_function(param_1,"create",lua_cocos2dx_3d_Animate3D_create);
  tolua_function(param_1,"getTransitionTime",lua_cocos2dx_3d_Animate3D_getTransitionTime);
  tolua_function(param_1,"createWithFrames",lua_cocos2dx_3d_Animate3D_createWithFrames);
  tolua_function(param_1,"setTransitionTime",lua_cocos2dx_3d_Animate3D_setTransitionTime);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9Animate3DE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b41e3,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Animate3D",0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Animate3D");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b41e3,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Animate3D",0xc);
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

