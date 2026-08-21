
/* lua_cocos2dx_extension_ControlPotentiometer_setValue(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlPotentiometer_setValue(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ControlPotentiometer *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ControlPotentiometer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.ControlPotentiometer:setValue");
    if ((uVar3 & 1) != 0) {
      cocos2d::extension::ControlPotentiometer::setValue(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009a54ec;
    }
    tolua_error(param_1,&DAT_012e52f6,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlPotentiometer:setValue",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009a54ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

