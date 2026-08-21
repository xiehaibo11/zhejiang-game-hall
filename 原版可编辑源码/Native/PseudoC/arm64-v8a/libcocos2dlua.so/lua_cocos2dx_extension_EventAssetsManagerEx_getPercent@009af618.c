
/* lua_cocos2dx_extension_EventAssetsManagerEx_getPercent(lua_State*) */

bool lua_cocos2dx_extension_EventAssetsManagerEx_getPercent(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 009af61c to 00aaf69b has its CatchHandler @ 009af61c
                       catch() { ... } // from try @ 009af61c with catch @ 009af61c
                       catch() { ... } // from try @ 009af6c8 with catch @ 009af61c
                       catch() { ... } // from try @ 009af750 with catch @ 009af61c
                       catch() { ... } // from try @ 009af804 with catch @ 009af61c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)*(float *)(lVar2 + 0xa0),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventAssetsManagerEx:getPercent",iVar1,0);
  }
  return iVar1 == 0;
}

