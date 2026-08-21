
/* lua_cocos2dx_ui_RichElementImage_setWidth(lua_State*) */

undefined4 lua_cocos2dx_ui_RichElementImage_setWidth(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichElementImage *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichElementImage *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.RichElementImage:setWidth");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::RichElementImage::setWidth(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0098a07c;
    }
    tolua_error(param_1,&DAT_012de680,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichElementImage:setWidth",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0098a07c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

