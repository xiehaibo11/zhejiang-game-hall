
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_setDocumentControllerName(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_setDocumentControllerName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CCBAnimationManager *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "cc.CCBAnimationManager:setDocumentControllerName");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
                    /* try { // try from 0091d2e0 to 00a1d313 has its CatchHandler @ 0091d3e0 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_setDocumentControllerName\'"
                  ,0);
    }
    else {
      cocosbuilder::CCBAnimationManager::setDocumentControllerName(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:setDocumentControllerName",iVar2 + -1,1);
    bVar4 = false;
  }
                    /* try { // try from 0091d314 to 00a1d327 has its CatchHandler @ 0091d3ac */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0091d32c to 00a1d35f has its CatchHandler @ 0091d3b0 */
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

