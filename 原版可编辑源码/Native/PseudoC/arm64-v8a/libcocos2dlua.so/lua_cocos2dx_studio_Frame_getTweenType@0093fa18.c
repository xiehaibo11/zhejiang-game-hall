
/* lua_cocos2dx_studio_Frame_getTweenType(lua_State*) */

bool lua_cocos2dx_studio_Frame_getTweenType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
                    /* try { // try from 0093fa84 to 00a3fab7 has its CatchHandler @ 0093fb84 */
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Frame:getTweenType",iVar1,0);
  }
  return iVar1 == 0;
}

