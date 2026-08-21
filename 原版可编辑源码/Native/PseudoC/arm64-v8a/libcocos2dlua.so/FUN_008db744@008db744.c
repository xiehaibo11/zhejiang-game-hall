
void FUN_008db744(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  Rect aRStack_58 [16];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"fairygui.GObject:transformRect");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar5 = luaval_is_usertype(param_1,3,"fairygui.GObject",0), (uVar5 & 1) != 0)) &&
       (tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) {
      fairygui::GObject::transformRect(pRVar3,(GObject *)aRStack_48);
      rect_to_luaval(param_1,aRStack_58);
      uVar6 = 1;
      goto LAB_008db854;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_transformRect\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:transformRect",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_008db854:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

