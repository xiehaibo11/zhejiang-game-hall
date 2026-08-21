
/* lua_cocos2dx_3d_Mesh_calculateAABB(lua_State*) */

bool lua_cocos2dx_3d_Mesh_calculateAABB(lua_State *param_1)

{
  int iVar1;
  Mesh *this;
  
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 00903384 with catch @ 00903484 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Mesh::calculateAABB(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:calculateAABB",iVar1,0);
  }
  return iVar1 == 0;
}

