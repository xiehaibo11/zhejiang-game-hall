
/* lua_cocos2dx_LabelAtlas_getString(lua_State*) */

undefined8 lua_cocos2dx_LabelAtlas_getString(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    pbVar6 = (byte *)(**(code **)(*plVar4 + 0x560))(plVar4);
    uVar1 = *(ulong *)(pbVar6 + 8);
    pbVar2 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar2 = pbVar6 + 1;
      uVar1 = (ulong)(*pbVar6 >> 1);
    }
    lua_pushlstring(param_1,pbVar2,uVar1);
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelAtlas:getString",iVar3 + -1,0);
    uVar5 = 0;
  }
  return uVar5;
}

