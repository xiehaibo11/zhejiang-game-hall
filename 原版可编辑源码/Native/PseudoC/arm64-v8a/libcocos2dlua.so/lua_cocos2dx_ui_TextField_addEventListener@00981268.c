
/* lua_cocos2dx_ui_TextField_addEventListener(lua_State*) */

void lua_cocos2dx_ui_TextField_addEventListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *this;
  undefined8 uVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:addEventListener",iVar2 + -1,1);
    uVar3 = 0;
    goto LAB_00981324;
  }
  local_50 = (long *)0x0;
  cocos2d::ui::TextField::addEventListener(this,(function *)alStack_70);
  lua_settop(param_1,1);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_0098131c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_0098131c;
  }
  uVar3 = 1;
LAB_00981324:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

