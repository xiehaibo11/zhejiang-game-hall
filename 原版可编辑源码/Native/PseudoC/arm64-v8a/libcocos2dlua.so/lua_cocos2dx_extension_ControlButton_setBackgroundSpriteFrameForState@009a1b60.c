
/* lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.ControlButton:setBackgroundSpriteFrameForState");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_3c,
                              "cc.ControlButton:setBackgroundSpriteFrameForState");
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar3 + 0x728))(plVar3,uVar5,local_3c);
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_009a1c84;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setBackgroundSpriteFrameForState",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a1c84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

