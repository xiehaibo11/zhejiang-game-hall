
void FUN_008e9608(undefined1 param_1 [16],undefined4 param_2,lua_State *param_3)

{
  long lVar1;
  int iVar2;
  GRoot *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GRoot *)tolua_tousertype(param_3,1,0);
  iVar2 = lua_gettop(param_3);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_3,2,&local_3c,"fairygui.GRoot:getTouchPosition");
    if ((uVar3 & 1) != 0) {
      local_48 = fairygui::GRoot::getTouchPosition(this,local_3c);
      uStack_44 = param_2;
      vec2_to_luaval(param_3,(Vec2 *)&local_48);
      uVar4 = 1;
      goto LAB_008e96c8;
    }
    tolua_error(param_3,"invalid arguments in function \'lua_fairygui_GRoot_getTouchPosition\'",0);
  }
  else {
    luaL_error(param_3,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:getTouchPosition",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008e96c8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

