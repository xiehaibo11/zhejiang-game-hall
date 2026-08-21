
/* lua_cocos2dx_3d_Mesh_getBlendFunc(lua_State*) */

bool lua_cocos2dx_3d_Mesh_getBlendFunc(lua_State *param_1)

{
  int iVar1;
  Mesh *this;
  BlendFunc *pBVar2;
  
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pBVar2 = (BlendFunc *)cocos2d::Mesh::getBlendFunc(this);
    blendfunc_to_luaval(param_1,pBVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:getBlendFunc",iVar1,0);
  }
  return iVar1 == 0;
}

