
undefined8 FUN_008f5ad4(lua_State *param_1)

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
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:scrollLeft");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"fairygui.ScrollPane:scrollLeft");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      fairygui::ScrollPane::scrollLeft(this,(float)local_50,local_54[0]);
      goto LAB_008f5bf0;
    }
LAB_008f5bbc:
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_scrollLeft\'",0);
  }
  else {
    if (iVar2 == 2) {
      uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:scrollLeft");
      if ((uVar3 & 1) == 0) goto LAB_008f5bbc;
      fVar5 = (float)local_50;
    }
    else {
      if (iVar2 + -1 != 0) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "fairygui.ScrollPane:scrollLeft",iVar2 + -1,0);
        goto LAB_008f5bf0;
      }
      fVar5 = 1.0;
    }
    fairygui::ScrollPane::scrollLeft(this,fVar5,false);
  }
LAB_008f5bf0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

