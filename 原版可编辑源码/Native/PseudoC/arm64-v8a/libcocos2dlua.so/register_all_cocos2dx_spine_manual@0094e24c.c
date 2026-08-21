
/* register_all_cocos2dx_spine_manual(lua_State*) */

undefined8 register_all_cocos2dx_spine_manual(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  char *pcVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_0094e4a8;
  lua_pushstring(param_1,"sp.SkeletonAnimation");
                    /* try { // try from 0094e288 to 00a4e28b has its CatchHandler @ 0094e2c0 */
                    /* try { // try from 0094e28c to 00a4e2d3 has its CatchHandler @ 0094e23c */
  lua_rawget(param_1,0xffffd8f0);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 == 5) {
    tolua_function(param_1,"create",FUN_0094e5d0);
                    /* catch() { ... } // from try @ 0094e288 with catch @ 0094e2c0 */
    tolua_function(param_1,"registerSpineEventHandler",
                   tolua_Cocos2d_CCSkeletonAnimation_registerSpineEventHandler00);
                    /* try { // try from 0094e2d4 to 00a4edab has its CatchHandler @ 0094e2d4
                       catch() { ... } // from try @ 0094e2d4 with catch @ 0094e2d4
                       catch() { ... } // from try @ 0094ee2c with catch @ 0094e2d4 */
    tolua_function(param_1,"unregisterSpineEventHandler",
                   tolua_Cocos2d_CCSkeletonAnimation_unregisterSpineEventHandler00);
    tolua_function(param_1,"setBlendFunc",FUN_0094e6ec);
    tolua_function(param_1,"addAnimation",FUN_0094e8b8);
    tolua_function(param_1,"setAnimation",FUN_0094eb94);
  }
  lua_settop(param_1,0xfffffffe);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"20LuaSkeletonAnimation");
  local_78[0] = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0e10,(tuple *)local_78);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar6 = (char *)(lVar3 + 0x29);
LAB_0094e3d0:
    builtin_strncpy(pcVar6,"sp.SkeletonAnimation",0x15);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar6 = *(char **)(lVar3 + 0x38);
      goto LAB_0094e3d0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"sp.SkeletonAnimation");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"SkeletonAnimation");
  local_40 = local_78;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0e10,(tuple *)&local_40);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x28);
  if (((byte)*pbVar4 & 1) == 0) {
    pcVar6 = (char *)(lVar3 + 0x29);
LAB_0094e4d4:
    builtin_strncpy(pcVar6,"sp.SkeletonAnimation",0x15);
    if (((byte)*pbVar4 & 1) == 0) {
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28
      ;
    }
    else {
      *(undefined8 *)(lVar3 + 0x30) = 0x14;
    }
  }
  else {
    uVar5 = (*(ulong *)pbVar4 & 0xfffffffffffffffe) - 1;
    if (0x13 < uVar5) {
      pcVar6 = *(char **)(lVar3 + 0x38);
      goto LAB_0094e4d4;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar4,uVar5,0x15 - (*(ulong *)pbVar4 & 0xfffffffffffffffe),*(ulong *)(lVar3 + 0x30),
               0,*(ulong *)(lVar3 + 0x30),0x14,"sp.SkeletonAnimation");
  }
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0094e4a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

