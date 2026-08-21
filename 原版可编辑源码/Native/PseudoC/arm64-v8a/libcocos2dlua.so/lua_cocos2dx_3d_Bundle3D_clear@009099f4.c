
/* lua_cocos2dx_3d_Bundle3D_clear(lua_State*) */

bool lua_cocos2dx_3d_Bundle3D_clear(lua_State *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)*puVar2)(puVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Bundle3D:clear",iVar1,0);
  }
  return iVar1 == 0;
}

