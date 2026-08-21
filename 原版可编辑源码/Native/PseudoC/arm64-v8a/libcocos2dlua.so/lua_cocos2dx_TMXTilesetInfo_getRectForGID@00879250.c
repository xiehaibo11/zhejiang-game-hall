
/* lua_cocos2dx_TMXTilesetInfo_getRectForGID(lua_State*) */

void lua_cocos2dx_TMXTilesetInfo_getRectForGID(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  Rect aRStack_50 [20];
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_uint32(param_1,2,&local_3c,"cc.TMXTilesetInfo:getRectForGID");
    if ((uVar4 & 1) != 0) {
      cocos2d::TMXTilesetInfo::getRectForGID(uVar2);
      rect_to_luaval(param_1,aRStack_50);
      uVar5 = 1;
      goto LAB_00879310;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TMXTilesetInfo_getRectForGID\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXTilesetInfo:getRectForGID",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_00879310:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

