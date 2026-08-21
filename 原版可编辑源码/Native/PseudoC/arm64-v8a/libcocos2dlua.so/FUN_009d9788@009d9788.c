
undefined4 FUN_009d9788(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,"lua_universe_FileSystem_readStringFromFile: expected 1 argument");
  }
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  uVar4 = universe::get_string
                    (param_1,1,(basic_string *)&local_50,
                     "lua_universe_FileSystem_readStringFromFile");
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    universe::TanGaoXiong::readStringFromFile(DAT_01782208);
    uVar4 = (ulong)(local_68[0] >> 1);
    pvVar2 = (void *)((ulong)local_68 | 1);
    if ((local_68[0] & 1) != 0) {
      uVar4 = local_60;
      pvVar2 = local_58;
    }
    lua_pushlstring(param_1,pvVar2,uVar4);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    uVar5 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009d987c to 00ad98fb has its CatchHandler @ 009d987c
                       catch() { ... } // from try @ 009d987c with catch @ 009d987c
                       catch() { ... } // from try @ 009d990c with catch @ 009d987c */
  return uVar5;
}

