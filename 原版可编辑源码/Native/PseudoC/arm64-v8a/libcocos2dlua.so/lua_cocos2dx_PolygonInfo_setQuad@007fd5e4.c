
/* lua_cocos2dx_PolygonInfo_setQuad(lua_State*) */

undefined8 lua_cocos2dx_PolygonInfo_setQuad(lua_State *param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_PolygonInfo_setQuad\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PolygonInfo:setQuad",iVar1 + -1,1);
  }
  return 0;
}

