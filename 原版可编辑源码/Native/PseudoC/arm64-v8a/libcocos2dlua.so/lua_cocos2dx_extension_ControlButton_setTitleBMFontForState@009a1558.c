
/* lua_cocos2dx_extension_ControlButton_setTitleBMFontForState(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_setTitleBMFontForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 009a15ac to 00aa15fb has its CatchHandler @ 009a1998 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.ControlButton:setTitleBMFontForState"
                      );
    uVar4 = luaval_to_int32(param_1,3,&local_54,"cc.ControlButton:setTitleBMFontForState");
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
                    /* try { // try from 009a164c to 00aa1653 has its CatchHandler @ 009a1984 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState\'"
                  ,0);
                    /* try { // try from 009a1654 to 00aa16db has its CatchHandler @ 009a19a0 */
    }
    else {
      (**(code **)(*plVar5 + 0x708))(plVar5,&local_50,local_54);
      lua_settop(param_1,1);
                    /* try { // try from 009a1610 to 00aa163b has its CatchHandler @ 009a1994 */
    }
    bVar6 = !bVar6;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setTitleBMFontForState",iVar2 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

