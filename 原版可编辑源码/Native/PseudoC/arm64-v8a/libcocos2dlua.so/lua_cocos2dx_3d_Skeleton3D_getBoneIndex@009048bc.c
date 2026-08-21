
/* lua_cocos2dx_3d_Skeleton3D_getBoneIndex(lua_State*) */

undefined8 lua_cocos2dx_3d_Skeleton3D_getBoneIndex(lua_State *param_1)

{
  int iVar1;
  Skeleton3D *this;
  ulong uVar2;
  Bone3D *pBVar3;
  
  this = (Skeleton3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Bone3D",0), (uVar2 & 1) != 0)) {
      pBVar3 = (Bone3D *)tolua_tousertype(param_1,2,0);
      iVar1 = cocos2d::Skeleton3D::getBoneIndex(this,pBVar3);
      tolua_pushnumber((double)iVar1,param_1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Skeleton3D_getBoneIndex\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skeleton3D:getBoneIndex",iVar1 + -1,1);
  }
  return 0;
}

