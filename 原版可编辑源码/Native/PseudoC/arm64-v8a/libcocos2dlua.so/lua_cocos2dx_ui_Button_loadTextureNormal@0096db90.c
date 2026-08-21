
/* lua_cocos2dx_ui_Button_loadTextureNormal(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_loadTextureNormal(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Button *pBVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pBVar5 = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Button:loadTextureNormal");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Button:loadTextureNormal");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::Button::loadTextureNormal(pBVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0096dc88;
    }
                    /* try { // try from 0096dcd8 to 00a6dd9b has its CatchHandler @ 0096d914 */
    tolua_error(param_1,0x12d8487,0);
LAB_0096dce8:
    uVar7 = 0;
                    /* catch() { ... } // from try @ 0096da88 with catch @ 0096dcec
                       catch() { ... } // from try @ 0096dcd0 with catch @ 0096dcec */
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8469,
                 iVar2 + -1,1);
      uVar7 = 0;
                    /* try { // try from 0096dcb8 to 00a6dcbf has its CatchHandler @ 0096dd20 */
      goto LAB_0096dcfc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Button:loadTextureNormal");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,0x12d8487,0);
                    /* try { // try from 0096dcd0 to 00a6dcd7 has its CatchHandler @ 0096dcec */
      goto LAB_0096dce8;
    }
    cocos2d::ui::Button::loadTextureNormal(pBVar5,&local_50,0);
                    /* try { // try from 0096dc14 to 00a6dcb7 has its CatchHandler @ 0096d914 */
    lua_settop(param_1,1);
LAB_0096dc88:
    uVar7 = 1;
  }
                    /* catch() { ... } // from try @ 0096da6c with catch @ 0096dcf0 */
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0096dcfc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0096d9c4 with catch @ 0096dd20
                       catch() { ... } // from try @ 0096dcb8 with catch @ 0096dd20 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0096da48 with catch @ 0096dd24 */
  __stack_chk_fail();
}

