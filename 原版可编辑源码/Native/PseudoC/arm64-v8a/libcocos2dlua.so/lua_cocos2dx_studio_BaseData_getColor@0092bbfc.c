
/* lua_cocos2dx_studio_BaseData_getColor(lua_State*) */

void lua_cocos2dx_studio_BaseData_getColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_3c = (**(code **)(*plVar3 + 0x28))(plVar3);
    color4b_to_luaval(param_1,(Color4B *)&local_3c);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.BaseData:getColor",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

