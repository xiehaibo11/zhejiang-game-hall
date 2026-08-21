
/* lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos(lua_State*) */

void lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_40[0] = (**(code **)(*plVar3 + 0x6e8))(plVar3);
    vec2_to_luaval(param_1,(Vec2 *)local_40);
  }
  else {
                    /* try { // try from 009a40a8 to 00aa40af has its CatchHandler @ 009a4170 */
                    /* try { // try from 009a40b0 to 00aa40b7 has its CatchHandler @ 009a416c */
                    /* try { // try from 009a40b8 to 00aa40f3 has its CatchHandler @ 009a401c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSaturationBrightnessPicker:getStartPos",iVar2,0);
  }
                    /* try { // try from 009a40f4 to 00aa4103 has its CatchHandler @ 009a4168 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

