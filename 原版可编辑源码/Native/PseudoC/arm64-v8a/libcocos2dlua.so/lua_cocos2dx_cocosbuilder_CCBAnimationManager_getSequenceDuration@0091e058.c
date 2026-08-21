
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceDuration(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceDuration(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  CCBAnimationManager *this;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0091e090 to 00a1e0c3 has its CatchHandler @ 0091e190 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "cc.CCBAnimationManager:getSequenceDuration");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceDuration\'"
                  ,0);
      uVar5 = 0;
    }
    else {
                    /* try { // try from 0091e0c4 to 00a1e0d7 has its CatchHandler @ 0091e15c */
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
                    /* try { // try from 0091e0dc to 00a1e10f has its CatchHandler @ 0091e160 */
      fVar6 = (float)cocosbuilder::CCBAnimationManager::getSequenceDuration(this,pcVar1);
      tolua_pushnumber((double)fVar6,param_1);
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 0091e110 to 00a1e1ab has its CatchHandler @ 0091dfd8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getSequenceDuration",iVar3 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0091e0c4 with catch @ 0091e15c */
                    /* catch() { ... } // from try @ 0091e0dc with catch @ 0091e160 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

