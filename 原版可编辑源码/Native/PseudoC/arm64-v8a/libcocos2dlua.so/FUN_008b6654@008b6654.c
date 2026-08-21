
undefined8 FUN_008b6654(lua_State *param_1)

{
  size_t __n;
  long lVar1;
  void *__buf;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong local_58;
  size_t local_50;
  void *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Console:send");
    local_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_58,"cc.Console:send");
    if ((uVar3 & uVar4 & 1) != 0) {
      __n = local_58 >> 1 & 0x7f;
      __buf = (void *)((ulong)&local_58 | 1);
      if ((local_58 & 1) != 0) {
        __n = local_50;
        __buf = local_48;
      }
      sendto(local_3c,__buf,__n,0,(sockaddr *)0x0,0);
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.Console:send",
               iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

