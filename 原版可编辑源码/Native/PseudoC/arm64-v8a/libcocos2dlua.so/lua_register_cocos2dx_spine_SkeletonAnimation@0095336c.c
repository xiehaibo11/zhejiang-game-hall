
/* lua_register_cocos2dx_spine_SkeletonAnimation(lua_State*) */

undefined8 lua_register_cocos2dx_spine_SkeletonAnimation(lua_State *param_1)

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
  tolua_usertype(param_1,"sp.SkeletonAnimation");
  tolua_cclass(param_1,"SkeletonAnimation","sp.SkeletonAnimation",0x12d19f6,0);
  tolua_beginmodule(param_1,"SkeletonAnimation");
  tolua_function(param_1,"setTrackCompleteListener",
                 lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener);
  tolua_function(param_1,"findAnimation",lua_cocos2dx_spine_SkeletonAnimation_findAnimation);
                    /* try { // try from 00953410 to 00a53443 has its CatchHandler @ 00953510 */
  tolua_function(param_1,&DAT_012d1b61,lua_cocos2dx_spine_SkeletonAnimation_setCompleteListener);
  tolua_function(param_1,0x12d1b8a,lua_cocos2dx_spine_SkeletonAnimation_setMix);
                    /* try { // try from 00953444 to 00a53457 has its CatchHandler @ 009534dc */
  tolua_function(param_1,"setTrackStartListener",
                 lua_cocos2dx_spine_SkeletonAnimation_setTrackStartListener);
                    /* try { // try from 0095345c to 00a5348f has its CatchHandler @ 009534e0 */
  tolua_function(param_1,"addEmptyAnimation",lua_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation)
  ;
  tolua_function(param_1,"setDisposeListener",
                 lua_cocos2dx_spine_SkeletonAnimation_setDisposeListener);
  tolua_function(param_1,"setTrackInterruptListener",
                 lua_cocos2dx_spine_SkeletonAnimation_setTrackInterruptListener);
                    /* try { // try from 00953490 to 00a5352b has its CatchHandler @ 00953310 */
  tolua_function(param_1,"setEndListener",lua_cocos2dx_spine_SkeletonAnimation_setEndListener);
  tolua_function(param_1,"setTrackDisposeListener",
                 lua_cocos2dx_spine_SkeletonAnimation_setTrackDisposeListener);
  tolua_function(param_1,"setEventListener",lua_cocos2dx_spine_SkeletonAnimation_setEventListener);
                    /* catch() { ... } // from try @ 00953444 with catch @ 009534dc */
                    /* catch() { ... } // from try @ 0095345c with catch @ 009534e0 */
  tolua_function(param_1,&DAT_012d1e80,lua_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation);
  tolua_function(param_1,"setTrackEventListener",
                 lua_cocos2dx_spine_SkeletonAnimation_setTrackEventListener);
                    /* catch() { ... } // from try @ 00953410 with catch @ 00953510 */
  tolua_function(param_1,"clearTrack",lua_cocos2dx_spine_SkeletonAnimation_clearTrack);
  tolua_function(param_1,&DAT_012d1ff4,lua_cocos2dx_spine_SkeletonAnimation_setInterruptListener);
  tolua_function(param_1,0x12d201e,lua_cocos2dx_spine_SkeletonAnimation_setEmptyAnimations);
  tolua_function(param_1,"clearTracks",lua_cocos2dx_spine_SkeletonAnimation_clearTracks);
  tolua_function(param_1,"setTrackEndListener",
                 lua_cocos2dx_spine_SkeletonAnimation_setTrackEndListener);
  tolua_function(param_1,"setStartListener",lua_cocos2dx_spine_SkeletonAnimation_setStartListener);
  tolua_function(param_1,"createWithBinaryFile",
                 lua_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile);
  tolua_function(param_1,"create",lua_cocos2dx_spine_SkeletonAnimation_create);
  tolua_function(param_1,"createWithJsonFile",
                 lua_cocos2dx_spine_SkeletonAnimation_createWithJsonFile);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N5spine17SkeletonAnimationE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d21c0,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"sp.SkeletonAnimation",0x14);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"SkeletonAnimation");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d21c0,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"sp.SkeletonAnimation",0x14);
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

