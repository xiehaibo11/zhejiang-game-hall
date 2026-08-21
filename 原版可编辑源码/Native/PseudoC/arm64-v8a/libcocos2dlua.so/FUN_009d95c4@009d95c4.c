
undefined8 FUN_009d95c4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  uint local_94;
  ulong local_90 [2];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  undefined **local_60;
  lua_State *plStack_58;
  ulong local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 3) {
    luaL_argerror(param_1,3,
                  "lua_universe_FileSystem_writeStringToFileWithCallback: expected 3 argument");
  }
  local_78[1] = 0;
  local_68 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78[0] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  uVar3 = universe::get_string
                    (param_1,1,(basic_string *)local_78,
                     "lua_universe_FileSystem_writeStringToFileWithCallback");
  if ((((uVar3 & 1) != 0) &&
      (uVar3 = universe::get_string
                         (param_1,2,(basic_string *)local_90,
                          "lua_universe_FileSystem_writeStringToFileWithCallback"), (uVar3 & 1) != 0
      )) && (uVar3 = universe::create_once_function
                               (param_1,3,(int *)&local_94,
                                "lua_universe_FileSystem_writeStringToFileWithCallback"),
            (uVar3 & 1) != 0)) {
    local_50 = (ulong)local_94;
    local_60 = &PTR_FUN_0169ff10;
    plStack_58 = param_1;
    local_40 = &local_60;
    universe::TanGaoXiong::writeStringToFile
              (DAT_01782208,(basic_string *)local_78,(basic_string *)local_90,(function *)&local_60)
    ;
    if (&local_60 == local_40) {
      pcVar4 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) goto LAB_009d96c0;
      pcVar4 = (code *)(*local_40)[5];
    }
    (*pcVar4)();
  }
LAB_009d96c0:
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

