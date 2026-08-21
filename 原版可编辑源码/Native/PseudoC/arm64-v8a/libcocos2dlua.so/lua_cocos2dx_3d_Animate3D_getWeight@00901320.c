
/* lua_cocos2dx_3d_Animate3D_getWeight(lua_State*) */

bool lua_cocos2dx_3d_Animate3D_getWeight(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00901374 to 00a01387 has its CatchHandler @ 009013d0 */
    tolua_pushnumber((double)*(float *)(lVar2 + 0x6c),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:getWeight",iVar1,0);
  }
                    /* try { // try from 00901388 to 00a013ef has its CatchHandler @ 00901294 */
  return iVar1 == 0;
}

