
/* lua_cocos2dx_3d_Skeleton3D_getBoneCount(lua_State*) */

bool lua_cocos2dx_3d_Skeleton3D_getBoneCount(lua_State *param_1)

{
  int iVar1;
  Skeleton3D *this;
  long lVar2;
  
  this = (Skeleton3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar2 = cocos2d::Skeleton3D::getBoneCount(this);
    tolua_pushnumber((double)lVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skeleton3D:getBoneCount",iVar1,0);
  }
  return iVar1 == 0;
}

