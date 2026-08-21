
/* lua_register_cocos2dx_studio_Skin(lua_State*) */

undefined8 lua_register_cocos2dx_studio_Skin(lua_State *param_1)

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
                    /* try { // try from 00939ae4 to 00a39b0f has its CatchHandler @ 00939c54 */
  tolua_usertype(param_1,&DAT_012ccb16);
                    /* try { // try from 00939b10 to 00a39c23 has its CatchHandler @ 00939278 */
  tolua_cclass(param_1,0x12ccb1a,&DAT_012ccb16,"cc.Sprite",0);
  tolua_beginmodule(param_1,0x12ccb1a);
  tolua_function(param_1,"new",lua_cocos2dx_studio_Skin_constructor);
  tolua_function(param_1,"getBone",lua_cocos2dx_studio_Skin_getBone);
  tolua_function(param_1,"getNodeToWorldTransformAR",
                 lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR);
  tolua_function(param_1,"getDisplayName",lua_cocos2dx_studio_Skin_getDisplayName);
  tolua_function(param_1,"updateArmatureTransform",lua_cocos2dx_studio_Skin_updateArmatureTransform)
  ;
  tolua_function(param_1,"setBone",lua_cocos2dx_studio_Skin_setBone);
  tolua_function(param_1,"create",lua_cocos2dx_studio_Skin_create);
  tolua_function(param_1,"createWithSpriteFrameName",
                 lua_cocos2dx_studio_Skin_createWithSpriteFrameName);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio4SkinE");
  local_78[0] = local_60;
                    /* try { // try from 00939c24 to 00a39c2b has its CatchHandler @ 00939c98 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
                    /* try { // try from 00939c2c to 00a39c33 has its CatchHandler @ 00939c94 */
                    /* try { // try from 00939c34 to 00a39c3b has its CatchHandler @ 00939c90 */
                    /* catch() { ... } // from try @ 009393e8 with catch @ 00939c3c
                       try { // try from 00939c3c to 00a39d13 has its CatchHandler @ 00939278 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.Skin",8);
                    /* catch() { ... } // from try @ 009393c0 with catch @ 00939c40 */
                    /* catch() { ... } // from try @ 00939848 with catch @ 00939c44 */
                    /* catch() { ... } // from try @ 00939500 with catch @ 00939c48 */
                    /* catch() { ... } // from try @ 009394d8 with catch @ 00939c4c */
                    /* catch() { ... } // from try @ 009393a4 with catch @ 00939c50 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Skin");
                    /* catch() { ... } // from try @ 00939ae4 with catch @ 00939c54 */
                    /* catch() { ... } // from try @ 00939ac0 with catch @ 00939c58 */
                    /* catch() { ... } // from try @ 0093981c with catch @ 00939c5c */
                    /* catch() { ... } // from try @ 00939800 with catch @ 00939c60 */
                    /* catch() { ... } // from try @ 00939750 with catch @ 00939c64 */
                    /* catch() { ... } // from try @ 0093972c with catch @ 00939c68 */
                    /* catch() { ... } // from try @ 00939aa4 with catch @ 00939c6c */
  local_40 = local_78;
                    /* catch() { ... } // from try @ 00939a0c with catch @ 00939c70 */
                    /* catch() { ... } // from try @ 009399ec with catch @ 00939c74 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
                    /* catch() { ... } // from try @ 009397e4 with catch @ 00939c78 */
                    /* catch() { ... } // from try @ 00939710 with catch @ 00939c7c */
                    /* catch() { ... } // from try @ 009394b4 with catch @ 00939c80 */
                    /* catch() { ... } // from try @ 00939498 with catch @ 00939c84 */
                    /* catch() { ... } // from try @ 00939380 with catch @ 00939c88 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.Skin",8);
                    /* catch() { ... } // from try @ 00939364 with catch @ 00939c8c */
                    /* catch() { ... } // from try @ 00939960 with catch @ 00939c90
                       catch() { ... } // from try @ 00939c34 with catch @ 00939c90 */
  if (((ulong)local_78[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00939888 with catch @ 00939c94
                       catch() { ... } // from try @ 00939c2c with catch @ 00939c94 */
                    /* catch() { ... } // from try @ 00939684 with catch @ 00939c98
                       catch() { ... } // from try @ 00939c24 with catch @ 00939c98 */
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 00939a80 with catch @ 00939cac */
                    /* catch() { ... } // from try @ 009399d0 with catch @ 00939cb0 */
                    /* catch() { ... } // from try @ 00939914 with catch @ 00939cb4 */
                    /* catch() { ... } // from try @ 009398f8 with catch @ 00939cb8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009397c0 with catch @ 00939cbc */
                    /* catch() { ... } // from try @ 009396f4 with catch @ 00939cc0 */
                    /* catch() { ... } // from try @ 0093947c with catch @ 00939cc4 */
                    /* catch() { ... } // from try @ 00939348 with catch @ 00939cc8 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

