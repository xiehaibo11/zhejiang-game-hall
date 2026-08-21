
undefined8 FUN_008f57cc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollPane *this;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  bool local_54 [4];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:scrollDown");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"fairygui.ScrollPane:scrollDown");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      fairygui::ScrollPane::scrollDown(this,(float)local_50,local_54[0]);
      goto LAB_008f58e8;
    }
LAB_008f58b4:
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_scrollDown\'",0);
  }
  else {
    if (iVar2 == 2) {
      uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:scrollDown");
      if ((uVar3 & 1) == 0) goto LAB_008f58b4;
      fVar5 = (float)local_50;
    }
    else {
      if (iVar2 + -1 != 0) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "fairygui.ScrollPane:scrollDown",iVar2 + -1,0);
        goto LAB_008f58e8;
      }
      fVar5 = 1.0;
    }
    fairygui::ScrollPane::scrollDown(this,fVar5,false);
  }
LAB_008f58e8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

