
/* lua_cocos2dx_3d_Mesh_isVisible(lua_State*) */

bool lua_cocos2dx_3d_Mesh_isVisible(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Mesh *this;
  
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::Mesh::isVisible(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:isVisible",iVar1,0);
  }
  return iVar1 == 0;
}

