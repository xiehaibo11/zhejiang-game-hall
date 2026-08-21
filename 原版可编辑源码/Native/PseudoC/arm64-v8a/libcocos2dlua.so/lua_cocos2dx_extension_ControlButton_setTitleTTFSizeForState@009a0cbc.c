
/* lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  int local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.ControlButton:setTitleTTFSizeForState");
    uVar5 = luaval_to_int32(param_1,3,&local_54,"cc.ControlButton:setTitleTTFSizeForState");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x6f8))((float)local_50,plVar3,local_54);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009a0dac;
    }
    tolua_error(param_1,&DAT_012e3d23,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setTitleTTFSizeForState",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a0dac:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

