
/* lua_cocos2dx_studio_DisplayManager_getAnchorPointInPoints(lua_State*) */

void lua_cocos2dx_studio_DisplayManager_getAnchorPointInPoints(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DisplayManager *this;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00930810 to 00a30813 has its CatchHandler @ 00930894 */
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
                    /* try { // try from 00930834 to 00a30837 has its CatchHandler @ 00930884 */
  if (iVar2 == 0) {
    local_40[0] = cocostudio::DisplayManager::getAnchorPointInPoints(this);
    vec2_to_luaval(param_1,(Vec2 *)local_40);
  }
  else {
                    /* try { // try from 00930838 to 00a308a7 has its CatchHandler @ 009307c4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:getAnchorPointInPoints",iVar2,0);
  }
                    /* catch() { ... } // from try @ 00930834 with catch @ 00930884 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00930810 with catch @ 00930894 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

