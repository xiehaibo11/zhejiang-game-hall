
/* lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos(lua_State*) */

void lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos
               (lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_40 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) == 0)) {
      luaval_to_vec2(param_1,3,(Vec2 *)&local_40,
                     "cc.ControlSaturationBrightnessPicker:initWithTargetAndPos");
    }
    else {
      uVar6 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_vec2(param_1,3,(Vec2 *)&local_40,
                             "cc.ControlSaturationBrightnessPicker:initWithTargetAndPos");
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*plVar4 + 0x6f0))((undefined4)local_40,local_40._4_4_,plVar4,uVar6);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_009a4034;
      }
    }
                    /* try { // try from 009a401c to 00aa40a7 has its CatchHandler @ 009a401c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a401c with catch @ 009a401c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a40b8 with catch @ 009a401c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4118 with catch @ 009a401c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4188 with catch @ 009a401c
                        */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSaturationBrightnessPicker:initWithTargetAndPos",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a4034:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

