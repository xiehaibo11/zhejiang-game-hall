
undefined4 FUN_009d9abc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_FileSystem_renameFile: expected 2 argument");
  }
  local_38 = 0;
  local_30 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar4 = universe::get_string
                    (param_1,1,(basic_string *)&local_40,"lua_universe_FileSystem_renameFile");
  if (((uVar4 & 1) == 0) ||
     (uVar4 = universe::get_string
                        (param_1,2,(basic_string *)&local_58,"lua_universe_FileSystem_renameFile"),
     (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar3 = (**(code **)(*DAT_01782208 + 0x20))(DAT_01782208,&local_40,&local_58);
    lua_pushboolean(param_1,uVar3 & 1);
    uVar5 = 1;
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

