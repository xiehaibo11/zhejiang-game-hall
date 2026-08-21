
/* lua_cocos2dx_ui_ListView_insertCustomItem(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_insertCustomItem(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  Widget *pWVar4;
  undefined4 uVar5;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar3 & 1) == 0)) {
      luaval_to_ssize(param_1,3,&local_40,"ccui.ListView:insertCustomItem");
    }
    else {
      pWVar4 = (Widget *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_ssize(param_1,3,&local_40,"ccui.ListView:insertCustomItem");
      if ((uVar3 & 1) != 0) {
        cocos2d::ui::ListView::insertCustomItem(this,pWVar4,local_40);
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_0097d9d4;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ListView_insertCustomItem\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:insertCustomItem",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0097d9d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

