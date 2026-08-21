
/* lua_register_cocos2dx_spine_SkeletonRenderer(lua_State*) */

undefined8 lua_register_cocos2dx_spine_SkeletonRenderer(lua_State *param_1)

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
  tolua_usertype(param_1,0x12d19f6);
  tolua_cclass(param_1,0x12d19f9,0x12d19f6,"cc.Node",0);
  tolua_beginmodule(param_1,0x12d19f9);
  tolua_function(param_1,"new",lua_cocos2dx_spine_SkeletonRenderer_constructor);
  tolua_function(param_1,"setTimeScale",lua_cocos2dx_spine_SkeletonRenderer_setTimeScale);
  tolua_function(param_1,"getDebugSlotsEnabled",
                 lua_cocos2dx_spine_SkeletonRenderer_getDebugSlotsEnabled);
  tolua_function(param_1,"setBonesToSetupPose",
                 lua_cocos2dx_spine_SkeletonRenderer_setBonesToSetupPose);
  tolua_function(param_1,"initWithData",lua_cocos2dx_spine_SkeletonRenderer_initWithData);
  tolua_function(param_1,"setDebugSlotsEnabled",
                 lua_cocos2dx_spine_SkeletonRenderer_setDebugSlotsEnabled);
  tolua_function(param_1,"initWithJsonFile",lua_cocos2dx_spine_SkeletonRenderer_initWithJsonFile);
  tolua_function(param_1,"setSlotsToSetupPose",
                 lua_cocos2dx_spine_SkeletonRenderer_setSlotsToSetupPose);
  tolua_function(param_1,&DAT_012d1622,lua_cocos2dx_spine_SkeletonRenderer_initWithBinaryFile);
  tolua_function(param_1,"setToSetupPose",lua_cocos2dx_spine_SkeletonRenderer_setToSetupPose);
  tolua_function(param_1,"setDebugMeshesEnabled",
                 lua_cocos2dx_spine_SkeletonRenderer_setDebugMeshesEnabled);
  tolua_function(param_1,"isTwoColorTint",lua_cocos2dx_spine_SkeletonRenderer_isTwoColorTint);
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_spine_SkeletonRenderer_getBlendFunc);
  tolua_function(param_1,"initialize",lua_cocos2dx_spine_SkeletonRenderer_initialize);
  tolua_function(param_1,"setDebugBonesEnabled",
                 lua_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabled);
  tolua_function(param_1,"getDebugBonesEnabled",
                 lua_cocos2dx_spine_SkeletonRenderer_getDebugBonesEnabled);
                    /* try { // try from 009515e0 to 00a5162b has its CatchHandler @ 009515e0
                       catch() { ... } // from try @ 009515e0 with catch @ 009515e0
                       catch() { ... } // from try @ 00951630 with catch @ 009515e0 */
  tolua_function(param_1,"getTimeScale",lua_cocos2dx_spine_SkeletonRenderer_getTimeScale);
  tolua_function(param_1,"setTwoColorTint",lua_cocos2dx_spine_SkeletonRenderer_setTwoColorTint);
  tolua_function(param_1,"getDebugMeshesEnabled",
                 lua_cocos2dx_spine_SkeletonRenderer_getDebugMeshesEnabled);
                    /* try { // try from 0095162c to 00a5162f has its CatchHandler @ 0095168c */
                    /* try { // try from 00951630 to 00a5169f has its CatchHandler @ 009515e0 */
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_spine_SkeletonRenderer_setBlendFunc);
  tolua_function(param_1,"setVertexEffect",lua_cocos2dx_spine_SkeletonRenderer_setVertexEffect);
  tolua_function(param_1,"setSkin",lua_cocos2dx_spine_SkeletonRenderer_setSkin);
  tolua_function(param_1,"getSkeleton",lua_cocos2dx_spine_SkeletonRenderer_getSkeleton);
                    /* catch() { ... } // from try @ 0095162c with catch @ 0095168c */
  tolua_function(param_1,&DAT_012d19e7,lua_cocos2dx_spine_SkeletonRenderer_createWithFile);
                    /* try { // try from 009516a0 to 00a5179f has its CatchHandler @ 009516a0
                       catch() { ... } // from try @ 009516a0 with catch @ 009516a0
                       catch() { ... } // from try @ 00951820 with catch @ 009516a0 */
  tolua_function(param_1,"create",lua_cocos2dx_spine_SkeletonRenderer_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N5spine16SkeletonRendererE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d21c0,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"sp.SkeletonRenderer",0x13);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"SkeletonRenderer");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d21c0,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"sp.SkeletonRenderer",0x13);
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

