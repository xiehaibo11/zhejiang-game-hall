
/* lua_cocos2dx_extension_Control_isSelected(lua_State*) */

bool lua_cocos2dx_extension_Control_isSelected(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 0099fc54 to 00a9fc87 has its CatchHandler @ 0099ff90 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0099fc90 to 00a9fcbb has its CatchHandler @ 0099ff8c */
    uVar2 = (**(code **)(*plVar3 + 0x668))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Control:isSelected",iVar1,0);
  }
  return iVar1 == 0;
}

