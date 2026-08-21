
/* lua_cocos2dx_extension_Control_needsLayout(lua_State*) */

bool lua_cocos2dx_extension_Control_needsLayout(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0099fb68 to 00a9fbdf has its CatchHandler @ 0099fae8 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x680))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Control:needsLayout",iVar1,0);
  }
  return iVar1 == 0;
}

