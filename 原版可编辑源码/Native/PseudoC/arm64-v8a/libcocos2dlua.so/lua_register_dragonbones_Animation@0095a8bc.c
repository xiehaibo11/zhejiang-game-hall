
/* lua_register_dragonbones_Animation(lua_State*) */

undefined8 lua_register_dragonbones_Animation(lua_State *param_1)

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
                    /* try { // try from 0095a8ec to 00a5a91f has its CatchHandler @ 0095a9ec */
  tolua_usertype(param_1,"db.Animation");
  tolua_cclass(param_1,"Animation","db.Animation","db.BaseObject",0);
  tolua_beginmodule(param_1,"Animation");
                    /* try { // try from 0095a920 to 00a5a933 has its CatchHandler @ 0095a9b8 */
  tolua_function(param_1,"new",lua_dragonbones_Animation_constructor);
                    /* try { // try from 0095a938 to 00a5a96b has its CatchHandler @ 0095a9bc */
  tolua_function(param_1,"init",lua_dragonbones_Animation_init);
  tolua_function(param_1,"gotoAndPlayByTime",lua_dragonbones_Animation_gotoAndPlayByTime);
                    /* try { // try from 0095a96c to 00a5aa07 has its CatchHandler @ 0095a7bc */
  tolua_function(param_1,&DAT_012d3150,lua_dragonbones_Animation_fadeIn);
  tolua_function(param_1,"playConfig",lua_dragonbones_Animation_playConfig);
  tolua_function(param_1,"isCompleted",lua_dragonbones_Animation_isCompleted);
                    /* catch() { ... } // from try @ 0095a920 with catch @ 0095a9b8 */
                    /* catch() { ... } // from try @ 0095a938 with catch @ 0095a9bc */
  tolua_function(param_1,"play",lua_dragonbones_Animation_play);
  tolua_function(param_1,"getState",lua_dragonbones_Animation_getState);
                    /* catch() { ... } // from try @ 0095a8ec with catch @ 0095a9ec */
  tolua_function(param_1,"stop",lua_dragonbones_Animation_stop);
  tolua_function(param_1,"getLastAnimationName",lua_dragonbones_Animation_getLastAnimationName);
  tolua_function(param_1,"getLastAnimationState",lua_dragonbones_Animation_getLastAnimationState);
  tolua_function(param_1,"getAnimationNames",lua_dragonbones_Animation_getAnimationNames);
  tolua_function(param_1,&DAT_012d2223,lua_dragonbones_Animation_advanceTime);
  tolua_function(param_1,"isPlaying",lua_dragonbones_Animation_isPlaying);
  tolua_function(param_1,&DAT_012d33f0,lua_dragonbones_Animation_gotoAndPlayByProgress);
  tolua_function(param_1,"getAnimationConfig",lua_dragonbones_Animation_getAnimationConfig);
  tolua_function(param_1,"reset",lua_dragonbones_Animation_reset);
  tolua_function(param_1,"hasAnimation",lua_dragonbones_Animation_hasAnimation);
  tolua_function(param_1,"gotoAndStopByTime",lua_dragonbones_Animation_gotoAndStopByTime);
  tolua_function(param_1,0x12d3562,lua_dragonbones_Animation_gotoAndStopByProgress);
  tolua_function(param_1,"gotoAndPlayByFrame",lua_dragonbones_Animation_gotoAndPlayByFrame);
  tolua_function(param_1,"gotoAndStopByFrame",lua_dragonbones_Animation_gotoAndStopByFrame);
  tolua_function(param_1,"getTypeIndex",lua_dragonbones_Animation_getTypeIndex);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N11dragonBones9AnimationE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d4529,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"db.Animation",0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Animation");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d4529,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"db.Animation",0xc);
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

