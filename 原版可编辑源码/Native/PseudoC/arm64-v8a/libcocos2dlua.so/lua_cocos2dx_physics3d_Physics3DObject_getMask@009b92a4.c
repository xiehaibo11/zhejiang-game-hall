
/* lua_cocos2dx_physics3d_Physics3DObject_getMask(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DObject_getMask(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = NEON_ucvtf((ulong)*(uint *)(lVar2 + 0x70));
    tolua_pushnumber(uVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DObject:getMask",iVar1,0);
  }
  return iVar1 == 0;
}

