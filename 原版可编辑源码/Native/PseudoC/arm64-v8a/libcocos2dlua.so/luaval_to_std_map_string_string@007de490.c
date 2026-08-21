
/* luaval_to_std_map_string_string(lua_State*, int, std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > >*, char const*) */

void luaval_to_std_map_string_string(lua_State *param_1,int param_2,map *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  tuple *ptVar7;
  ulong local_a8;
  ulong local_a0;
  char *local_98;
  ulong local_90 [2];
  void *local_80;
  tuple atStack_78 [24];
  ulong *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (map *)0x0)) {
    iVar3 = lua_gettop(param_1);
    if (iVar3 < param_2) {
      uVar4 = 0;
    }
    else {
      ptVar7 = atStack_78;
      uVar4 = tolua_istable(param_1,param_2,0);
      if ((int)uVar4 != 0) {
        lua_pushnil(param_1);
        local_90[1] = 0;
        local_80 = (void *)0x0;
        local_98 = (char *)0x0;
        local_90[0] = 0;
        local_a8 = 0;
        local_a0 = 0;
        while (iVar3 = lua_next(param_1,param_2), iVar3 != 0) {
          iVar3 = lua_isstring(param_1,0xfffffffe);
          if ((((iVar3 != 0) && (iVar3 = lua_isstring(param_1,0xffffffff), iVar3 != 0)) &&
              (uVar5 = luaval_to_std_string(param_1,-2,(basic_string *)local_90,(char *)ptVar7),
              (uVar5 & 1) != 0)) &&
             (uVar5 = luaval_to_std_string(param_1,-1,(basic_string *)&local_a8,(char *)ptVar7),
             (uVar5 & 1) != 0)) {
            ptVar7 = (tuple *)&local_60;
            local_60 = local_90;
            lVar6 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    ::
                    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                              ((basic_string *)param_3,(piecewise_construct_t *)local_90,
                               (tuple *)&DAT_01276f05,ptVar7);
            if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (lVar6 + 0x38) !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_a8) {
              uVar5 = local_a8 >> 1 & 0x7f;
              pcVar2 = (char *)((ulong)&local_a8 | 1);
              if ((local_a8 & 1) != 0) {
                uVar5 = local_a0;
                pcVar2 = local_98;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(lVar6 + 0x38),pcVar2,uVar5);
            }
          }
          lua_settop(param_1,0xfffffffe);
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        uVar4 = 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

