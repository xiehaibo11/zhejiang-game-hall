
/* lua_cocos2dx_FadeOutTRTiles_turnOnTile(lua_State*) */

undefined4 lua_cocos2dx_FadeOutTRTiles_turnOnTile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  FadeOutTRTiles *this;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (FadeOutTRTiles *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.FadeOutTRTiles:turnOnTile");
    if ((uVar3 & 1) != 0) {
      cocos2d::FadeOutTRTiles::turnOnTile(this,(Vec2 *)&local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00830344;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FadeOutTRTiles_turnOnTile\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FadeOutTRTiles:turnOnTile",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00830344:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

