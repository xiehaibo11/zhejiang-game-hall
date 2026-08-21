
/* lua_cocos2dx_get_PolygonInfo_filename(lua_State*) */

undefined8 lua_cocos2dx_get_PolygonInfo_filename(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  if ((*(byte *)(lVar1 + 0x30) & 1) == 0) {
    lVar1 = lVar1 + 0x31;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x40);
  }
  tolua_pushstring(param_1,lVar1);
  return 1;
}

