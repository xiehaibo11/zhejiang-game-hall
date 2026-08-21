
/* lua_cocos2dx_studio_RotationFrame_getRotation(lua_State*) */

bool lua_cocos2dx_studio_RotationFrame_getRotation(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00941000 to 00a41013 has its CatchHandler @ 00941098 */
                    /* try { // try from 00941018 to 00a4104b has its CatchHandler @ 0094109c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)*(float *)(lVar2 + 0x58),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.RotationFrame:getRotation",iVar1,0);
                    /* try { // try from 0094104c to 00a410e7 has its CatchHandler @ 00940d4c */
  }
  return iVar1 == 0;
}

