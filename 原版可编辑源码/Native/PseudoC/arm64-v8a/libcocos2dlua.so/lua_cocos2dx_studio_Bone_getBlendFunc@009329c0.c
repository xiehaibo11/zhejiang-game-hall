
/* lua_cocos2dx_studio_Bone_getBlendFunc(lua_State*) */

void lua_cocos2dx_studio_Bone_getBlendFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_40 = (**(code **)(*plVar3 + 0x5b0))(plVar3);
    blendfunc_to_luaval(param_1,(BlendFunc *)&local_40);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:getBlendFunc",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

