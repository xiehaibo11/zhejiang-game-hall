
/* lua_cocos2dx_Node_getName(lua_State*) */

undefined8 lua_cocos2dx_Node_getName(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  byte *pbVar5;
  
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar4 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getName\'",0);
  }
  else {
    iVar3 = lua_gettop(param_1);
    if (iVar3 + -1 == 0) {
      pbVar5 = (byte *)(**(code **)(*plVar4 + 0x2c8))(plVar4);
      uVar1 = *(ulong *)(pbVar5 + 8);
      pbVar2 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar2 = pbVar5 + 1;
        uVar1 = (ulong)(*pbVar5 >> 1);
      }
      lua_pushlstring(param_1,pbVar2,uVar1);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Node:getName"
               ,iVar3 + -1,0);
  }
  return 0;
}

