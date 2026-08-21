
/* lua_cocos2dx_3d_set_Ray_origin(lua_State*) */

undefined8 lua_cocos2dx_3d_set_Ray_origin(lua_State *param_1)

{
  int iVar1;
  Vec3 *pVVar2;
  
  pVVar2 = (Vec3 *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 2) {
    luaval_to_vec3(param_1,2,pVVar2,"");
  }
  return 0;
}

