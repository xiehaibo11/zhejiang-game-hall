
/* lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(lua_State*)
    */

void lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint
               (lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    local_68 = 0;
    local_60 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_60,
                           "cc.ControlPotentiometer:angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint"
                          );
    uVar5 = luaval_to_vec2(param_1,3,(Vec2 *)&local_68,
                           "cc.ControlPotentiometer:angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint"
                          );
    uVar6 = luaval_to_vec2(param_1,4,(Vec2 *)&local_70,
                           "cc.ControlPotentiometer:angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint"
                          );
    uVar7 = luaval_to_vec2(param_1,5,(Vec2 *)&local_78,
                           "cc.ControlPotentiometer:angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint"
                          );
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      fVar8 = (float)cocos2d::extension::ControlPotentiometer::
                     angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint
                               (local_60 & 0xffffffff,local_60._4_4_,(undefined4)local_68,
                                local_68._4_4_,(undefined4)local_70,local_70._4_4_,
                                (undefined4)local_78,local_78._4_4_,uVar3);
      tolua_pushnumber((double)fVar8,param_1);
      uVar3 = 1;
      goto LAB_009a5764;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlPotentiometer:angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint"
               ,iVar2 + -1,4);
  }
  uVar3 = 0;
LAB_009a5764:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

