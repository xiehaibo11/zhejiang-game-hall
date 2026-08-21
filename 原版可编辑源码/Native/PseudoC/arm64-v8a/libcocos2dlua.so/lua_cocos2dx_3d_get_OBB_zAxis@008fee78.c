
/* lua_cocos2dx_3d_get_OBB_zAxis(lua_State*) */

undefined8 lua_cocos2dx_3d_get_OBB_zAxis(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  vec3_to_luaval(param_1,(Vec3 *)(lVar1 + 0x24));
  return 1;
}

