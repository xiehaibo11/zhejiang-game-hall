
undefined8 FUN_008cec9c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GProgressBar *this;
  ulong uVar3;
  ulong uVar4;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GProgressBar *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"fairygui.GProgressBar:tweenValue");
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.GProgressBar:tweenValue");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GProgressBar_tweenValue\'",0
                 );
    }
    else {
      fairygui::GProgressBar::tweenValue(this,dStack_50,(float)local_58);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GProgressBar:tweenValue",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

