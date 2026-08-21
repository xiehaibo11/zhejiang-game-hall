
/* lua_cocos2dx_ui_LoadingBar_setPercent(lua_State*) */

undefined4 lua_cocos2dx_ui_LoadingBar_setPercent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LoadingBar *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LoadingBar *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LoadingBar:setPercent");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LoadingBar::setPercent(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00977094;
    }
    tolua_error(param_1,0x12d9eb2,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d9e97,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00977094:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

