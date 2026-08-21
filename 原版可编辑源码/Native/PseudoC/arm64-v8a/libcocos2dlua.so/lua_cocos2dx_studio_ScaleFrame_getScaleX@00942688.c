
/* lua_cocos2dx_studio_ScaleFrame_getScaleX(lua_State*) */

bool lua_cocos2dx_studio_ScaleFrame_getScaleX(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)*(float *)(lVar2 + 0x58),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ScaleFrame:getScaleX",iVar1,0);
  }
                    /* try { // try from 009426f8 to 00a42743 has its CatchHandler @ 009426f8
                       catch() { ... } // from try @ 009426f8 with catch @ 009426f8
                       catch() { ... } // from try @ 00942774 with catch @ 009426f8 */
  return iVar1 == 0;
}

