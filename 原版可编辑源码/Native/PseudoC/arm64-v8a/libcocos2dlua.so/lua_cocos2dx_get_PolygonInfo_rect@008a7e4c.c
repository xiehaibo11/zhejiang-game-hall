
/* lua_cocos2dx_get_PolygonInfo_rect(lua_State*) */

undefined8 lua_cocos2dx_get_PolygonInfo_rect(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  rect_to_luaval(param_1,(Rect *)(lVar1 + 0x1c));
  return 1;
}

