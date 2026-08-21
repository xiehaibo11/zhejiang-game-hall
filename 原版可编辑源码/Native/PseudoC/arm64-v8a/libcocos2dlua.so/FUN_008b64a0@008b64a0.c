
void FUN_008b64a0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_4c;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.TMXTiledMap:getPropertiesForGID");
    if ((uVar4 & 1) != 0) {
      cocos2d::TMXTiledMap::getPropertiesForGID(iVar2);
      ccvalue_to_luaval(param_1,aVStack_48);
      cocos2d::Value::~Value(aVStack_48);
      uVar5 = 1;
      goto LAB_008b6550;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXTiledMap:getPropertiesForGID",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_008b6550:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

