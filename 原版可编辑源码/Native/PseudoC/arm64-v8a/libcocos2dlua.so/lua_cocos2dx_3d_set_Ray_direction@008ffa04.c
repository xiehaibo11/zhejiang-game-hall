
/* lua_cocos2dx_3d_set_Ray_direction(lua_State*) */

undefined8 lua_cocos2dx_3d_set_Ray_direction(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 2) {
    luaval_to_vec3(param_1,2,(Vec3 *)(lVar2 + 0xc),"");
  }
  return 0;
}

