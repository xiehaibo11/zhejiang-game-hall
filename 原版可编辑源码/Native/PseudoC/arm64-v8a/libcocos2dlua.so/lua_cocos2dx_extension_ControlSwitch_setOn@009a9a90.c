
/* lua_cocos2dx_extension_ControlSwitch_setOn(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlSwitch_setOn(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ControlSwitch *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_44 [4];
  bool local_40 [4];
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ControlSwitch *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_boolean(param_1,2,local_40,"cc.ControlSwitch:setOn");
    if (((uVar3 & 1) == 0) ||
       (uVar3 = luaval_to_boolean(param_1,3,local_44,"cc.ControlSwitch:setOn"), (uVar3 & 1) == 0))
    goto LAB_009a9b68;
    cocos2d::extension::ControlSwitch::setOn(this,local_40[0],local_44[0]);
  }
  else {
    if ((iVar2 != 2) ||
       (uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.ControlSwitch:setOn"), (uVar3 & 1) == 0)) {
LAB_009a9b68:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.ControlSwitch:setOn",iVar2 + -1,2);
      uVar4 = 0;
      goto LAB_009a9b8c;
    }
    cocos2d::extension::ControlSwitch::setOn(this,local_3c[0]);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_009a9b8c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

