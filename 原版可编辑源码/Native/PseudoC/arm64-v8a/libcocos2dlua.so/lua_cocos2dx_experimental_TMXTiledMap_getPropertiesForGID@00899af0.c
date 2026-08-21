
/* lua_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID(lua_State*) */

void lua_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TMXTiledMap *this;
  ulong uVar3;
  undefined8 uVar4;
  int local_4c;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TMXTiledMap *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccexp.TMXTiledMap:getPropertiesForGID");
    if ((uVar3 & 1) != 0) {
      cocos2d::experimental::TMXTiledMap::getPropertiesForGID(this,local_4c);
      ccvalue_to_luaval(param_1,aVStack_48);
      cocos2d::Value::~Value(aVStack_48);
      uVar4 = 1;
      goto LAB_00899bb8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.TMXTiledMap:getPropertiesForGID",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00899bb8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

