
undefined8 FUN_008b658c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_34;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_34,"cc.Console:wait");
    if (((uVar3 & 1) != 0) && (0 < local_34)) {
      local_30 = (long)local_34 * 1000000000;
      std::__ndk1::this_thread::sleep_for((duration *)&local_30);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.Console:wait",
               iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

