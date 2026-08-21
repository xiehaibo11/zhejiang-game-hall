
/* lua_cocos2dx_Sprite_getResourceName(lua_State*) */

undefined8 lua_cocos2dx_Sprite_getResourceName(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    if ((*(byte *)(lVar2 + 0x510) & 1) == 0) {
      lVar4 = lVar2 + 0x511;
      uVar5 = (ulong)(*(byte *)(lVar2 + 0x510) >> 1);
    }
    else {
      lVar4 = *(long *)(lVar2 + 0x520);
      uVar5 = *(ulong *)(lVar2 + 0x518);
    }
    lua_pushlstring(param_1,lVar4,uVar5,0);
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite:getResourceName",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

