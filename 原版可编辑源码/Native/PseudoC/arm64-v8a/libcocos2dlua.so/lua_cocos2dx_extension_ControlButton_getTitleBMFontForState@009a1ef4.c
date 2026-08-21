
/* lua_cocos2dx_extension_ControlButton_getTitleBMFontForState(lua_State*) */

void lua_cocos2dx_extension_ControlButton_getTitleBMFontForState(lua_State *param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar5 = luaval_to_int32(param_1,2,&local_3c,"cc.ControlButton:getTitleBMFontForState");
    if ((uVar5 & 1) != 0) {
      pbVar6 = (byte *)(**(code **)(*plVar4 + 0x710))(plVar4,local_3c);
      uVar5 = *(ulong *)(pbVar6 + 8);
      pbVar1 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar1 = pbVar6 + 1;
        uVar5 = (ulong)(*pbVar6 >> 1);
      }
      lua_pushlstring(param_1,pbVar1,uVar5);
      uVar7 = 1;
      goto LAB_009a1fcc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getTitleBMFontForState",iVar3 + -1,1);
  }
  uVar7 = 0;
LAB_009a1fcc:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

