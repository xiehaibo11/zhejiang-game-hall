
/* lua_cocos2dx_3d_Sprite3DMaterial_getMaterialType(lua_State*) */

bool lua_cocos2dx_3d_Sprite3DMaterial_getMaterialType(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 009078d0 to 00a07903 has its CatchHandler @ 00907954 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0xa4),param_1);
  }
  else {
                    /* try { // try from 00907904 to 00a0799f has its CatchHandler @ 009077cc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3DMaterial:getMaterialType",iVar1,0);
  }
  return iVar1 == 0;
}

