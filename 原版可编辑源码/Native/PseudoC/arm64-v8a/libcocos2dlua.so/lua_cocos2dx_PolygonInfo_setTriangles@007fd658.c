
/* lua_cocos2dx_PolygonInfo_setTriangles(lua_State*) */

undefined8 lua_cocos2dx_PolygonInfo_setTriangles(lua_State *param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_PolygonInfo_setTriangles\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PolygonInfo:setTriangles",iVar1 + -1,1);
  }
  return 0;
}

