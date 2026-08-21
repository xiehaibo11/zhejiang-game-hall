
/* lua_cocos2dx_3d_Terrain_getHeightData(lua_State*) */

void lua_cocos2dx_3d_Terrain_getHeightData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::Terrain::getHeightData();
    ccvector_float_to_luaval(param_1,(vector *)&local_50);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:getHeightData",iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

