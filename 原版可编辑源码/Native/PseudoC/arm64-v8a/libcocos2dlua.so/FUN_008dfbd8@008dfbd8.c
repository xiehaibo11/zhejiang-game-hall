
void FUN_008dfbd8(undefined1 param_1 [16],undefined4 param_2,lua_State *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_3,1,0);
  iVar2 = lua_gettop(param_3);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_3,2,(Vec2 *)&local_40,"fairygui.GComponent:getSnappingPosition");
    if ((uVar4 & 1) != 0) {
      local_48 = (**(code **)(*plVar3 + 0xd0))(plVar3,&local_40);
      uStack_44 = param_2;
      vec2_to_luaval(param_3,(Vec2 *)&local_48);
      uVar5 = 1;
      goto LAB_008dfca4;
    }
    tolua_error(param_3,
                "invalid arguments in function \'lua_fairygui_GComponent_getSnappingPosition\'",0);
  }
  else {
    luaL_error(param_3,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getSnappingPosition",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_008dfca4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

