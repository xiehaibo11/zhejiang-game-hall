
undefined8 FUN_009d8de4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  uint local_68;
  int iStack_64;
  undefined **local_60;
  lua_State *plStack_58;
  ulong local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_Device_getLocation: expected 2 argument");
  }
  uVar3 = universe::get_int(param_1,1,&iStack_64,"lua_universe_Device_getLocation");
  if (((uVar3 & 1) != 0) &&
     (uVar3 = universe::create_once_function
                        (param_1,2,(int *)&local_68,"lua_universe_Device_getLocation"),
     (uVar3 & 1) != 0)) {
    local_50 = (ulong)local_68;
    local_60 = &PTR_FUN_0169fd60;
    plStack_58 = param_1;
    local_40 = &local_60;
    universe::Device::getLocation(iStack_64,(function *)&local_60);
                    /* try { // try from 009d8e84 to 00ad8ec3 has its CatchHandler @ 009d8e84
                       catch() { ... } // from try @ 009d8e84 with catch @ 009d8e84
                       catch() { ... } // from try @ 009d8ed4 with catch @ 009d8e84 */
    if (&local_60 == local_40) {
      pcVar4 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) goto LAB_009d8ea8;
      pcVar4 = (code *)(*local_40)[5];
    }
    (*pcVar4)();
  }
LAB_009d8ea8:
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009d8ec4 to 00ad8ed3 has its CatchHandler @ 009d8f4c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

