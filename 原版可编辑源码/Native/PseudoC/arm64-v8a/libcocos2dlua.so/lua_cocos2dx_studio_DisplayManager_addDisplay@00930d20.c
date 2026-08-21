
/* lua_cocos2dx_studio_DisplayManager_addDisplay(lua_State*) */

undefined4 lua_cocos2dx_studio_DisplayManager_addDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  DisplayManager *this;
  ulong uVar4;
  Node *pNVar5;
  DisplayData *pDVar6;
  undefined4 uVar7;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if ((param_1 != (lua_State *)0x0) && (iVar2 + -1 == 2)) {
    iVar3 = lua_gettop(param_1);
                    /* try { // try from 00930d98 to 00a30dcb has its CatchHandler @ 00930e98 */
    if ((1 < iVar3) && (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) != 0)) {
      pNVar5 = (Node *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_4c,"ccs.DisplayManager:addDisplay");
      if ((uVar4 & 1) == 0) goto LAB_00930de0;
                    /* try { // try from 00930dcc to 00a30ddf has its CatchHandler @ 00930e64 */
      cocostudio::DisplayManager::addDisplay(this,pNVar5,local_4c);
LAB_00930e4c:
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_00930e84;
    }
LAB_00930de0:
                    /* try { // try from 00930de4 to 00a30e17 has its CatchHandler @ 00930e68 */
    iVar3 = lua_gettop(param_1);
    if ((1 < iVar3) && (uVar4 = luaval_is_usertype(param_1,2,"ccs.DisplayData",0), (uVar4 & 1) != 0)
       ) {
                    /* try { // try from 00930e18 to 00a30eb3 has its CatchHandler @ 00930ce0 */
      pDVar6 = (DisplayData *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_4c,"ccs.DisplayManager:addDisplay");
      if ((uVar4 & 1) != 0) {
        cocostudio::DisplayManager::addDisplay(this,pDVar6,local_4c);
        goto LAB_00930e4c;
      }
    }
  }
                    /* catch() { ... } // from try @ 00930dcc with catch @ 00930e64 */
                    /* catch() { ... } // from try @ 00930de4 with catch @ 00930e68 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccs.DisplayManager:addDisplay",iVar2 + -1,2);
  uVar7 = 0;
LAB_00930e84:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00930d98 with catch @ 00930e98 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

