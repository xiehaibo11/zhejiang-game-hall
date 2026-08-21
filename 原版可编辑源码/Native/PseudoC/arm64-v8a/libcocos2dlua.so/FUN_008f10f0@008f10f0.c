
void FUN_008f10f0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Window *this;
  ulong uVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Window *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.Window:closeModalWait");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Window_closeModalWait\'",0);
      goto LAB_008f11b8;
    }
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.Window:closeModalWait",iVar2 + -1,0);
LAB_008f11b8:
      uVar5 = 0;
      goto LAB_008f11bc;
    }
    local_3c = 0;
  }
  uVar3 = fairygui::Window::closeModalWait(this,local_3c);
  tolua_pushboolean(param_1,uVar3 & 1);
  uVar5 = 1;
LAB_008f11bc:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

