
/* lua_cocos2dx_studio_DisplayManager_getContentSize(lua_State*) */

void lua_cocos2dx_studio_DisplayManager_getContentSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
                    /* try { // try from 00930bfc to 00a30c47 has its CatchHandler @ 00930bfc
                       catch() { ... } // from try @ 00930bfc with catch @ 00930bfc
                       catch() { ... } // from try @ 00930c70 with catch @ 00930bfc */
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    cocostudio::DisplayManager::getContentSize();
    size_to_luaval(param_1,aSStack_40);
                    /* try { // try from 00930c48 to 00a30c4b has its CatchHandler @ 00930ccc */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:getContentSize",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00930c6c to 00a30c6f has its CatchHandler @ 00930cbc */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00930c70 to 00a30cdf has its CatchHandler @ 00930bfc */
  __stack_chk_fail(iVar2 == 0);
}

