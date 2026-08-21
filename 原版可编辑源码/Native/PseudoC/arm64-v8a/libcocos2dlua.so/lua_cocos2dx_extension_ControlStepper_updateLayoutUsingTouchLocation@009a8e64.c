
/* lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,
                           "cc.ControlStepper:updateLayoutUsingTouchLocation");
    if ((uVar4 & 1) != 0) {
      cocos2d::extension::ControlStepper::updateLayoutUsingTouchLocation
                ((ControlStepper *)local_40,local_40._4_4_,uVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009a8f24;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlStepper:updateLayoutUsingTouchLocation",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009a8f24:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

