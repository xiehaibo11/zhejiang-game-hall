
undefined8 FUN_008dedd0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  GObject *pGVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"fairygui.GComponent:setChildIndex");
    }
    else {
      pGVar4 = (GObject *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"fairygui.GComponent:setChildIndex");
      if ((uVar3 & 1) != 0) {
        fairygui::GComponent::setChildIndex(this,pGVar4,local_3c);
        goto LAB_008deed8;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_setChildIndex\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:setChildIndex",iVar2 + -1,2);
  }
LAB_008deed8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

