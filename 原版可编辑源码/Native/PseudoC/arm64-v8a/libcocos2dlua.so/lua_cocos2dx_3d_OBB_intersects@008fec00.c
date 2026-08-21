
/* lua_cocos2dx_3d_OBB_intersects(lua_State*) */

undefined8 lua_cocos2dx_3d_OBB_intersects(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  OBB *pOVar3;
  ulong uVar4;
  
  pOVar3 = (OBB *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if ((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) {
      uVar4 = luaval_is_usertype(param_1,2,"cc.OBB",0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      tolua_tousertype(param_1,2,0);
      uVar2 = cocos2d::OBB::intersects(pOVar3);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.OBB:intersects",iVar1 + -1,1);
  }
  return 0;
}

