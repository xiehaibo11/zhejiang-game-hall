
undefined8 FUN_008de9ac(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  GComponent *this;
  ulong uVar4;
  ulong uVar5;
  GObject *unaff_x21;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (GObject *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_int32(param_1,3,&iStack_5c,"fairygui.GComponent:childSortingOrderChanged");
    uVar5 = luaval_to_int32(param_1,4,&local_60,"fairygui.GComponent:childSortingOrderChanged");
    if (((bVar2) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      fairygui::GComponent::childSortingOrderChanged(this,unaff_x21,iStack_5c,local_60);
    }
    else {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GComponent_childSortingOrderChanged\'"
                  ,0);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:childSortingOrderChanged",iVar3 + -1,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

