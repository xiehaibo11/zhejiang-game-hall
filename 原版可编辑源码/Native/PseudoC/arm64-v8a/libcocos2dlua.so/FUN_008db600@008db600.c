
undefined8 FUN_008db600(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar3 = luaval_to_rect(param_1,2,aRStack_48,"fairygui.GObject:setDragBounds");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setDragBounds\'",0);
    }
    else {
      fairygui::GObject::setDragBounds(this,aRStack_48);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setDragBounds",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

