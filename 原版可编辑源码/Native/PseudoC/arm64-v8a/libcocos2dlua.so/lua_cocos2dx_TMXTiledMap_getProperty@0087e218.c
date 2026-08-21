
/* lua_cocos2dx_TMXTiledMap_getProperty(lua_State*) */

bool lua_cocos2dx_TMXTiledMap_getProperty(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  basic_string *pbVar3;
  ulong uVar4;
  bool bVar5;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar3 = (basic_string *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.TMXTiledMap:getProperty");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TMXTiledMap_getProperty\'",0
                 );
    }
    else {
      cocos2d::TMXTiledMap::getProperty(pbVar3);
      ccvalue_to_luaval(param_1,aVStack_48);
      cocos2d::Value::~Value(aVStack_48);
    }
    bVar5 = !bVar5;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXTiledMap:getProperty",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

