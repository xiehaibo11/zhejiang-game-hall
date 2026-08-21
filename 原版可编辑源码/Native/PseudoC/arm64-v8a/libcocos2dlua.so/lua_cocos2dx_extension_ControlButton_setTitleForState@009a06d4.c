
/* lua_cocos2dx_extension_ControlButton_setTitleForState(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_setTitleForState(lua_State *param_1)

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
  
                    /* try { // try from 009a06d8 to 00aa06ef has its CatchHandler @ 009a091c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a06f8 to 00aa070f has its CatchHandler @ 009a0914 */
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 009a0720 to 00aa074f has its CatchHandler @ 009a0910 */
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.ControlButton:setTitleForState");
                    /* try { // try from 009a0750 to 00aa08ab has its CatchHandler @ 009a0408 */
    uVar4 = luaval_to_int32(param_1,3,&local_54,"cc.ControlButton:setTitleForState");
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setTitleForState\'"
                  ,0);
    }
    else {
      (**(code **)(*plVar5 + 0x6c0))(plVar5,&local_50,local_54);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e3a53,
               iVar2 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

