
/* lua_cocos2dx_ui_TextField_setTouchSize(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setTouchSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *this;
  ulong uVar3;
  undefined4 uVar4;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar3 = luaval_to_size(param_1,2,aSStack_40,"ccui.TextField:setTouchSize");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TextField::setTouchSize(this,aSStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0098298c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_TextField_setTouchSize\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setTouchSize",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0098298c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

