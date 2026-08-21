
/* lua_cocos2dx_ui_LoadingBar_loadTexture(lua_State*) */

undefined4 lua_cocos2dx_ui_LoadingBar_loadTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  LoadingBar *pLVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pLVar5 = (LoadingBar *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.LoadingBar:loadTexture");
                    /* try { // try from 00977188 to 00a771bf has its CatchHandler @ 00977244 */
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.LoadingBar:loadTexture");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::LoadingBar::loadTexture(pLVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_009771b8;
    }
                    /* try { // try from 00977204 to 00a7725f has its CatchHandler @ 00977138 */
    tolua_error(param_1,&DAT_012d9f14,0);
LAB_00977218:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012d9ef8,
                 iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0097722c;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.LoadingBar:loadTexture");
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 009771f0 to 00a77203 has its CatchHandler @ 00977244 */
      tolua_error(param_1,&DAT_012d9f14,0);
      goto LAB_00977218;
    }
                    /* try { // try from 00977138 to 00a77187 has its CatchHandler @ 00977138
                       catch() { ... } // from try @ 00977138 with catch @ 00977138
                       catch() { ... } // from try @ 009771c0 with catch @ 00977138
                       catch() { ... } // from try @ 00977204 with catch @ 00977138 */
    cocos2d::ui::LoadingBar::loadTexture(pLVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_009771b8:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0097722c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00977188 with catch @ 00977244
                       catch() { ... } // from try @ 009771f0 with catch @ 00977244 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

