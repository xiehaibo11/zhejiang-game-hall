
/* lua_cocos2dx_3d_AABB_getCorners(lua_State*) */

undefined8 lua_cocos2dx_3d_AABB_getCorners(lua_State *param_1)

{
  int iVar1;
  AABB *this;
  ulong uVar2;
  Vec3 *pVVar3;
  
  this = (AABB *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Vec3",0), (uVar2 & 1) != 0)) {
      pVVar3 = (Vec3 *)tolua_tousertype(param_1,2,0);
      cocos2d::AABB::getCorners(this,pVVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AABB:getCorners",iVar1 + -1,1);
  }
  return 0;
}

