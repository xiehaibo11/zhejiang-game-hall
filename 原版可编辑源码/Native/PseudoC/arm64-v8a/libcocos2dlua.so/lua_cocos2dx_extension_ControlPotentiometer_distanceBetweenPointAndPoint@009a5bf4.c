
/* lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint(lua_State*) */

void lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_58 = 0;
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,
                           "cc.ControlPotentiometer:distanceBetweenPointAndPoint");
    uVar5 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,
                           "cc.ControlPotentiometer:distanceBetweenPointAndPoint");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      fVar6 = (float)cocos2d::extension::ControlPotentiometer::distanceBetweenPointAndPoint
                               (local_50 & 0xffffffff,local_50._4_4_,(undefined4)local_58,
                                local_58._4_4_,uVar3);
      tolua_pushnumber((double)fVar6,param_1);
      uVar3 = 1;
      goto LAB_009a5ce0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlPotentiometer:distanceBetweenPointAndPoint",iVar2 + -1,2);
  }
  uVar3 = 0;
LAB_009a5ce0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

