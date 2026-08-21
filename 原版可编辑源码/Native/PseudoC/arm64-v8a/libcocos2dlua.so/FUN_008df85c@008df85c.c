
void FUN_008df85c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GComponent:getTransitionAt");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)fairygui::GComponent::getTransitionAt(this,local_3c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "fairygui.Transition");
        uVar5 = 1;
      }
      goto LAB_008df92c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_getTransitionAt\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getTransitionAt",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_008df92c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

