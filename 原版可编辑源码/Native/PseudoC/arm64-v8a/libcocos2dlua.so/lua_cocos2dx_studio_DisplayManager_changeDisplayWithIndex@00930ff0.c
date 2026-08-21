
/* lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex(lua_State*) */

undefined4 lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DisplayManager *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00931020 to 00a31023 has its CatchHandler @ 009310a4 */
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* try { // try from 00931044 to 00a31047 has its CatchHandler @ 00931094 */
                    /* try { // try from 00931048 to 00a310b7 has its CatchHandler @ 00930fd4 */
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccs.DisplayManager:changeDisplayWithIndex");
    uVar4 = luaval_to_boolean(param_1,3,local_50,"ccs.DisplayManager:changeDisplayWithIndex");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocostudio::DisplayManager::changeDisplayWithIndex(this,local_4c,local_50[0]);
      uVar5 = 1;
                    /* catch() { ... } // from try @ 00931044 with catch @ 00931094 */
      lua_settop(param_1,1);
      goto LAB_009310d4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 00931020 with catch @ 009310a4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:changeDisplayWithIndex",iVar2 + -1,2);
                    /* try { // try from 009310b8 to 00a3116f has its CatchHandler @ 009310b8
                       catch() { ... } // from try @ 009310b8 with catch @ 009310b8
                       catch() { ... } // from try @ 009311f0 with catch @ 009310b8 */
  }
  uVar5 = 0;
LAB_009310d4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

