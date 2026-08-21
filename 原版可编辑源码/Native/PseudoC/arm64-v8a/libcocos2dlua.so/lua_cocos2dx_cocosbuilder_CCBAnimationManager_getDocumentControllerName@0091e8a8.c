
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentControllerName(lua_State*) */

void lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentControllerName(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocosbuilder::CCBAnimationManager::getDocumentControllerName();
    uVar1 = (ulong)(local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
                    /* try { // try from 0091e93c to 00a1e94f has its CatchHandler @ 0091e9d4 */
    lua_pushlstring(param_1,pvVar3,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
                    /* try { // try from 0091e954 to 00a1e987 has its CatchHandler @ 0091e9d8 */
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getDocumentControllerName",iVar4 + -1,0);
                    /* try { // try from 0091e908 to 00a1e93b has its CatchHandler @ 0091ea08 */
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

