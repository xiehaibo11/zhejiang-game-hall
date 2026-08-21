
/* lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState(lua_State*) */

void lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.ControlButton:getTitleTTFSizeForState");
    if ((uVar4 & 1) != 0) {
      fVar6 = (float)(**(code **)(*plVar3 + 0x700))(plVar3,local_3c);
      tolua_pushnumber((double)fVar6,param_1);
      uVar5 = 1;
      goto LAB_009a0b40;
    }
    tolua_error(param_1,&DAT_012e3c1f,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getTitleTTFSizeForState",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009a0b40:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

