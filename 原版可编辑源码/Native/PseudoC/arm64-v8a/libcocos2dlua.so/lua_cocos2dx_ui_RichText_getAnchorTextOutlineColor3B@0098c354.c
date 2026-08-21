
/* lua_cocos2dx_ui_RichText_getAnchorTextOutlineColor3B(lua_State*) */

void lua_cocos2dx_ui_RichText_getAnchorTextOutlineColor3B(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichText *this;
  undefined8 uVar3;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    uVar3 = cocos2d::ui::RichText::getAnchorTextOutlineColor3B(this);
    local_40 = (undefined2)uVar3;
    local_3e = (undefined1)((ulong)uVar3 >> 0x10);
    color3b_to_luaval(param_1,(Color3B *)&local_40);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:getAnchorTextOutlineColor3B",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

