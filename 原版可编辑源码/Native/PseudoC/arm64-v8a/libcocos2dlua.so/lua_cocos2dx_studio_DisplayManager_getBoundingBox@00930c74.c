
/* lua_cocos2dx_studio_DisplayManager_getBoundingBox(lua_State*) */

void lua_cocos2dx_studio_DisplayManager_getBoundingBox(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
                    /* try { // try from 00930ce0 to 00a30d97 has its CatchHandler @ 00930ce0
                       catch() { ... } // from try @ 00930ce0 with catch @ 00930ce0
                       catch() { ... } // from try @ 00930e18 with catch @ 00930ce0 */
    cocostudio::DisplayManager::getBoundingBox();
    rect_to_luaval(param_1,aRStack_48);
  }
  else {
                    /* catch() { ... } // from try @ 00930c6c with catch @ 00930cbc */
                    /* catch() { ... } // from try @ 00930c48 with catch @ 00930ccc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:getBoundingBox",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

