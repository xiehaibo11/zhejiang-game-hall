
/* lua_cocos2dx_ui_RichText_removeElement(lua_State*) */

undefined4 lua_cocos2dx_ui_RichText_removeElement(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  RichText *this;
  ulong uVar4;
  RichElement *pRVar5;
  undefined4 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"ccui.RichElement",0), (uVar4 & 1) == 0)) {
      uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.RichText:removeElement");
      if ((uVar4 & 1) == 0) goto LAB_0098d834;
      cocos2d::ui::RichText::removeElement(this,local_3c);
    }
    else {
      pRVar5 = (RichElement *)tolua_tousertype(param_1,2,0);
      cocos2d::ui::RichText::removeElement(this,pRVar5);
    }
    uVar6 = 1;
    lua_settop(param_1,1);
  }
  else {
LAB_0098d834:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:removeElement",iVar2 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

