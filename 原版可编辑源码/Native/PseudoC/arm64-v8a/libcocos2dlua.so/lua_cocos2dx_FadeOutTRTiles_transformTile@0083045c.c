
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_FadeOutTRTiles_transformTile(lua_State*) */

undefined4 lua_cocos2dx_FadeOutTRTiles_transformTile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  double local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_58[1] = 0.0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)(local_58 + 1),"cc.FadeOutTRTiles:transformTile");
    uVar5 = luaval_to_number(param_1,3,local_58,"cc.FadeOutTRTiles:transformTile");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x60))((float)local_58[0],plVar3,local_58 + 1);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00830550;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_FadeOutTRTiles_transformTile\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FadeOutTRTiles:transformTile",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00830550:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

