
/* lua_dragonbones_CCArmatureDisplay_dbUpdate(lua_State*) */

bool lua_dragonbones_CCArmatureDisplay_dbUpdate(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0095db2c with catch @ 0095dc2c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x540))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d3f66,
               iVar1,0);
  }
  return iVar1 == 0;
}

