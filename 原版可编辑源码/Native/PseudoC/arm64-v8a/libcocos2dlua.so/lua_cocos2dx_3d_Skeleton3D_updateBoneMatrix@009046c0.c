
/* lua_cocos2dx_3d_Skeleton3D_updateBoneMatrix(lua_State*) */

bool lua_cocos2dx_3d_Skeleton3D_updateBoneMatrix(lua_State *param_1)

{
  int iVar1;
  Skeleton3D *this;
  
  this = (Skeleton3D *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 009045e4 with catch @ 009046e4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Skeleton3D::updateBoneMatrix(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skeleton3D:updateBoneMatrix",iVar1,0);
  }
  return iVar1 == 0;
}

