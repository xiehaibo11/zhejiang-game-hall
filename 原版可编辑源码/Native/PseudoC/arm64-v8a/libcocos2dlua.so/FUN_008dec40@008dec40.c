
undefined8 FUN_008dec40(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  Node *pNVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) == 0)) {
      luaval_to_boolean(param_1,3,local_3c,"fairygui.GComponent:setMask");
    }
    else {
      pNVar4 = (Node *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_boolean(param_1,3,local_3c,"fairygui.GComponent:setMask");
      if ((uVar3 & 1) != 0) {
        fairygui::GComponent::setMask(this,pNVar4,local_3c[0]);
        goto LAB_008deda4;
      }
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GComponent:setMask",iVar2 + -1,1);
      goto LAB_008deda4;
    }
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
      pNVar4 = (Node *)tolua_tousertype(param_1,2,0);
      fairygui::GComponent::setMask(this,pNVar4,false);
      goto LAB_008deda4;
    }
  }
  tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_setMask\'",0);
LAB_008deda4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

