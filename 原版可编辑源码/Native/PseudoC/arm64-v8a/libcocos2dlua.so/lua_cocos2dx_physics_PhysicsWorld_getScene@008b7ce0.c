
/* lua_cocos2dx_physics_PhysicsWorld_getScene(lua_State*) */

void lua_cocos2dx_physics_PhysicsWorld_getScene(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  size_t sVar5;
  long *plVar6;
  char *pcVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  char *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 008b7cf0 to 009b7d5b has its CatchHandler @ 008b7c80 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    plVar6 = *(long **)(lVar3 + 0x68);
                    /* try { // try from 008b7d5c to 009b7db3 has its CatchHandler @ 008b7d5c
                       catch() { ... } // from try @ 008b7d5c with catch @ 008b7d5c
                       catch() { ... } // from try @ 008b7dcc with catch @ 008b7d5c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,*(char **)(*(long *)(*plVar6 + -8) + 8));
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)&g_luaType,(basic_string *)local_50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
    if (lVar3 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_68,"cc.Scene",8);
    }
    else {
      if ((*(byte *)(lVar3 + 0x28) & 1) == 0) {
        pcVar7 = (char *)(lVar3 + 0x29);
      }
      else {
                    /* try { // try from 008b7db4 to 009b7dcb has its CatchHandler @ 008b7e1c */
        pcVar7 = *(char **)(lVar3 + 0x38);
      }
      sVar5 = strlen(pcVar7);
                    /* try { // try from 008b7dcc to 009b7e37 has its CatchHandler @ 008b7d5c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_68,pcVar7,sVar5);
    }
    pcVar7 = (char *)((ulong)local_68 | 1);
    if (((byte)local_68[0] & 1) != 0) {
      pcVar7 = local_58;
    }
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)plVar6 + 0xc),(int *)(plVar6 + 2),plVar6,pcVar7);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
                    /* catch() { ... } // from try @ 008b7db4 with catch @ 008b7e1c */
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","getScene",
               iVar2 + -1,0);
                    /* catch() { ... } // from try @ 008b7cd8 with catch @ 008b7d40 */
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008b7e38 to 009b7e8f has its CatchHandler @ 008b7e38
                       catch() { ... } // from try @ 008b7e38 with catch @ 008b7e38
                       catch() { ... } // from try @ 008b7ea8 with catch @ 008b7e38 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

