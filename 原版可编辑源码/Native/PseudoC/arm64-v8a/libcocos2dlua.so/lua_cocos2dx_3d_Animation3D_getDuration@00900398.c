
/* lua_cocos2dx_3d_Animation3D_getDuration(lua_State*) */

bool lua_cocos2dx_3d_Animation3D_getDuration(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009003ec to 00a00437 has its CatchHandler @ 009003ec
                       catch() { ... } // from try @ 009003ec with catch @ 009003ec
                       catch() { ... } // from try @ 00900474 with catch @ 009003ec
                       catch() { ... } // from try @ 0090054c with catch @ 009003ec */
    tolua_pushnumber((double)*(float *)(lVar2 + 0x50),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animation3D:getDuration",iVar1,0);
  }
  return iVar1 == 0;
}

