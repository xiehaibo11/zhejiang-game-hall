
void FUN_008e6724(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    puVar4 = (undefined2 *)(**(code **)(**(long **)(lVar3 + 0x1d8) + 0x4b0))();
    local_3e = *(undefined1 *)(puVar4 + 1);
    local_40 = *puVar4;
    color3b_to_luaval(param_1,(Color3B *)&local_40);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:getColor",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008e67d8 to 009e67ef has its CatchHandler @ 008e688c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

