
/* lua_cocos2dx_3d_Sprite3D_getLightMask(lua_State*) */

bool lua_cocos2dx_3d_Sprite3D_getLightMask(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = NEON_ucvtf((ulong)*(uint *)(lVar2 + 0x3c4));
    tolua_pushnumber(uVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:getLightMask",iVar1,0);
  }
                    /* try { // try from 00905b10 to 00a05b5b has its CatchHandler @ 00905b10
                       catch() { ... } // from try @ 00905b10 with catch @ 00905b10
                       catch() { ... } // from try @ 00905bb8 with catch @ 00905b10 */
  return iVar1 == 0;
}

