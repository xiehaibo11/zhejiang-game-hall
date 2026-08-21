
void FUN_008e96f0(undefined1 param_1 [16],undefined4 param_2,lua_State *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  uint uVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = tolua_tousertype(param_3,1,0);
  iVar2 = lua_gettop(param_3);
  if (iVar2 + -1 == 3) {
    if (param_3 == (lua_State *)0x0) {
LAB_008e9838:
      luaval_to_int32(param_3,4,&local_4c,"fairygui.GRoot:getPoupPosition");
    }
    else {
      iVar2 = lua_gettop(param_3);
      if ((iVar2 < 2) ||
         (uVar5 = luaval_is_usertype(param_3,2,"fairygui.GObject",0), (uVar5 & 1) == 0)) {
        uVar7 = 0;
      }
      else {
        unaff_x21 = tolua_tousertype(param_3,2,0);
        uVar7 = 1;
      }
      iVar2 = lua_gettop(param_3);
      if ((iVar2 < 3) ||
         (uVar5 = luaval_is_usertype(param_3,3,"fairygui.GObject",0), (uVar5 & 1) == 0))
      goto LAB_008e9838;
      uVar6 = tolua_tousertype(param_3,3,0);
      uVar3 = luaval_to_int32(param_3,4,&local_4c,"fairygui.GRoot:getPoupPosition");
      if ((uVar7 & uVar3) != 0) {
        local_58 = fairygui::GRoot::getPoupPosition(uVar4,unaff_x21,uVar6,local_4c);
        uStack_54 = param_2;
        vec2_to_luaval(param_3,(Vec2 *)&local_58);
        uVar4 = 1;
        goto LAB_008e9868;
      }
    }
    tolua_error(param_3,"invalid arguments in function \'lua_fairygui_GRoot_getPoupPosition\'",0);
  }
  else {
    luaL_error(param_3,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:getPoupPosition",iVar2 + -1,3);
  }
  uVar4 = 0;
LAB_008e9868:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

