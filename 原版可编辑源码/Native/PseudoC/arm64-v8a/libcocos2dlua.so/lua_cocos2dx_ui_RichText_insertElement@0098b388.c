
/* lua_cocos2dx_ui_RichText_insertElement(lua_State*) */

undefined4 lua_cocos2dx_ui_RichText_insertElement(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichText *this;
  ulong uVar3;
  RichElement *pRVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"ccui.RichElement",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"ccui.RichText:insertElement");
    }
    else {
      pRVar4 = (RichElement *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"ccui.RichText:insertElement");
      if ((uVar3 & 1) != 0) {
        cocos2d::ui::RichText::insertElement(this,pRVar4,local_3c);
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_0098b4a4;
      }
    }
    tolua_error(param_1,0x12de9bf,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012de9a3,
               iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0098b4a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

