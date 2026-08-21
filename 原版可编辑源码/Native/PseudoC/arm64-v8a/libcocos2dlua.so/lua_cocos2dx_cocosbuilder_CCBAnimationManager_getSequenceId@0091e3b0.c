
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceId(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceId(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  CCBAnimationManager *this;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
                    /* try { // try from 0091e3fc to 00a1e42f has its CatchHandler @ 0091e4fc */
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.CCBAnimationManager:getSequenceId");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0091e47c to 00a1e517 has its CatchHandler @ 0091e344 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceId\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
                    /* try { // try from 0091e430 to 00a1e443 has its CatchHandler @ 0091e4c8 */
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      iVar3 = cocosbuilder::CCBAnimationManager::getSequenceId(this,pcVar1);
      tolua_pushnumber((double)iVar3,param_1);
                    /* try { // try from 0091e448 to 00a1e47b has its CatchHandler @ 0091e4cc */
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getSequenceId",iVar3 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0091e430 with catch @ 0091e4c8 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0091e448 with catch @ 0091e4cc */
  __stack_chk_fail();
}

