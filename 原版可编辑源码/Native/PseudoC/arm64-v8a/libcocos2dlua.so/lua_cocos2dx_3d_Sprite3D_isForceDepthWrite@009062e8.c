
/* lua_cocos2dx_3d_Sprite3D_isForceDepthWrite(lua_State*) */

bool lua_cocos2dx_3d_Sprite3D_isForceDepthWrite(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x3c9));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:isForceDepthWrite",iVar1,0);
  }
  return iVar1 == 0;
}

