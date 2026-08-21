
/* lua_cocos2dx_studio_DisplayData_changeDisplayToTexture(lua_State*) */

undefined4 lua_cocos2dx_studio_DisplayData_changeDisplayToTexture(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0092c22c to 00a2c25f has its CatchHandler @ 0092c32c */
    auVar6 = luaval_to_std_string
                       (param_1,2,(basic_string *)&local_50,"ccs.DisplayData:changeDisplayToTexture"
                       );
    if ((auVar6._0_8_ & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_DisplayData_changeDisplayToTexture\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      cocostudio::DisplayData::changeDisplayToTexture((DisplayData *)&local_50,auVar6._8_8_);
      uVar1 = (ulong)(local_68[0] >> 1);
      pvVar3 = (void *)((ulong)local_68 | 1);
      if ((local_68[0] & 1) != 0) {
        uVar1 = local_60;
        pvVar3 = local_58;
      }
                    /* try { // try from 0092c260 to 00a2c273 has its CatchHandler @ 0092c2f8 */
      lua_pushlstring(param_1,pvVar3,uVar1);
      if ((local_68[0] & 1) != 0) {
                    /* try { // try from 0092c278 to 00a2c2ab has its CatchHandler @ 0092c2fc */
        operator_delete(local_58);
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.DisplayData:changeDisplayToTexture",iVar4 + -1,1);
    uVar5 = 0;
                    /* try { // try from 0092c2ac to 00a2c347 has its CatchHandler @ 0092c0fc */
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0092c260 with catch @ 0092c2f8 */
                    /* catch() { ... } // from try @ 0092c278 with catch @ 0092c2fc */
  return uVar5;
}

