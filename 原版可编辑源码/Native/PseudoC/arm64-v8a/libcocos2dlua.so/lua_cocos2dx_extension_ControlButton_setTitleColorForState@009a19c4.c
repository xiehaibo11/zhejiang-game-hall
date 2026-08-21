
/* lua_cocos2dx_extension_ControlButton_setTitleColorForState(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setTitleColorForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  int local_54;
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar4 = luaval_to_color3b(param_1,2,aCStack_50,"cc.ControlButton:setTitleColorForState");
    uVar5 = luaval_to_int32(param_1,3,&local_54,"cc.ControlButton:setTitleColorForState");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x6d0))(plVar3,aCStack_50,local_54);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009a1ab8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setTitleColorForState\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setTitleColorForState",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a1ab8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

