
void FUN_008dfccc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  GObject *pGVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"fairygui.GComponent:setChildIndexBefore");
    }
    else {
      pGVar4 = (GObject *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"fairygui.GComponent:setChildIndexBefore");
      if ((uVar3 & 1) != 0) {
        iVar2 = fairygui::GComponent::setChildIndexBefore(this,pGVar4,local_3c);
        tolua_pushnumber((double)iVar2,param_1);
        uVar5 = 1;
        goto LAB_008dfde8;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_fairygui_GComponent_setChildIndexBefore\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:setChildIndexBefore",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_008dfde8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

