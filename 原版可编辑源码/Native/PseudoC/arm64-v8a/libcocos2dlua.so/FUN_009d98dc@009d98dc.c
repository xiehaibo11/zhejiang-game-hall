
bool FUN_009d98dc(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009d98fc to 00ad990b has its CatchHandler @ 009d999c */
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
                    /* try { // try from 009d990c to 00ad99b7 has its CatchHandler @ 009d987c */
    luaL_argerror(param_1,1,"lua_universe_FileSystem_getFileSize: expected 1 argument");
  }
  local_38 = 0;
  local_30 = (void *)0x0;
  local_40 = 0;
  uVar4 = universe::get_string
                    (param_1,1,(basic_string *)&local_40,"lua_universe_FileSystem_getFileSize");
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    uVar4 = (**(code **)(*DAT_01782208 + 0x18))(DAT_01782208,&local_40);
    lua_pushnumber((double)uVar4,param_1);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009d98fc with catch @ 009d999c */
  return bVar1;
}

