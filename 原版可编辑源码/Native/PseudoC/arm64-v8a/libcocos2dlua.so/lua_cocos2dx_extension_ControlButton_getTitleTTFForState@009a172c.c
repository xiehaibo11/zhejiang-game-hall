
/* lua_cocos2dx_extension_ControlButton_getTitleTTFForState(lua_State*) */

void lua_cocos2dx_extension_ControlButton_getTitleTTFForState(lua_State *param_1)

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
  
                    /* try { // try from 009a1730 to 00aa1737 has its CatchHandler @ 009a197c */
                    /* try { // try from 009a1738 to 00aa17db has its CatchHandler @ 009a19a4 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar5 = luaval_to_int32(param_1,2,&local_3c,"cc.ControlButton:getTitleTTFForState");
    if ((uVar5 & 1) != 0) {
      pbVar6 = (byte *)(**(code **)(*plVar4 + 0x6f0))(plVar4,local_3c);
      uVar5 = *(ulong *)(pbVar6 + 8);
      pbVar1 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar1 = pbVar6 + 1;
        uVar5 = (ulong)(*pbVar6 >> 1);
      }
      lua_pushlstring(param_1,pbVar1,uVar5);
      uVar7 = 1;
      goto LAB_009a1804;
    }
    tolua_error(param_1,0x12e41a3,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e417e,
               iVar3 + -1,1);
  }
                    /* try { // try from 009a1800 to 00aa181f has its CatchHandler @ 009a1978 */
  uVar7 = 0;
LAB_009a1804:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

