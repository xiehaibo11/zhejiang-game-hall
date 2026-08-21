
/* lua_cocos2dx_ui_PageView_setIndicatorSelectedIndexOpacity(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_setIndicatorSelectedIndexOpacity(lua_State *param_1)

{
  long lVar1;
  uchar uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  ushort local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_uint16(param_1,2,local_3c,"ccui.PageView:setIndicatorSelectedIndexOpacity");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::PageView::setIndicatorSelectedIndexOpacity(uVar2);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00984178;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_PageView_setIndicatorSelectedIndexOpacity\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:setIndicatorSelectedIndexOpacity",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_00984178:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

