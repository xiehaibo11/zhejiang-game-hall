
/* lua_cocos2dx_FadeOutTRTiles_testFunc(lua_State*) */

void lua_cocos2dx_FadeOutTRTiles_testFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  double local_58;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Size::Size(aSStack_50);
    uVar4 = luaval_to_size(param_1,2,aSStack_50,"cc.FadeOutTRTiles:testFunc");
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.FadeOutTRTiles:testFunc");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      fVar7 = (float)(**(code **)(*plVar3 + 0x58))((float)local_58,plVar3,aSStack_50);
      tolua_pushnumber((double)fVar7,param_1);
      uVar6 = 1;
      goto LAB_00830678;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FadeOutTRTiles_testFunc\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FadeOutTRTiles:testFunc",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00830678:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

