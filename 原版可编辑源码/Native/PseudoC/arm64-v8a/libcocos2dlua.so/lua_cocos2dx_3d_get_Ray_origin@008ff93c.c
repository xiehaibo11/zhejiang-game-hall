
/* lua_cocos2dx_3d_get_Ray_origin(lua_State*) */

undefined8 lua_cocos2dx_3d_get_Ray_origin(lua_State *param_1)

{
  Vec3 *pVVar1;
  
  pVVar1 = (Vec3 *)tolua_tousertype(param_1,1,0);
  vec3_to_luaval(param_1,pVVar1);
  return 1;
}

