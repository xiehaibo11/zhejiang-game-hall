
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamed(lua_State*) */

undefined4
lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamed(lua_State *param_1)

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
                    /* try { // try from 0091e28c to 00a1e2d7 has its CatchHandler @ 0091e28c
                       catch() { ... } // from try @ 0091e28c with catch @ 0091e28c
                       catch() { ... } // from try @ 0091e2dc with catch @ 0091e28c */
  local_38 = *(long *)(lVar2 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
                    /* try { // try from 0091e2d8 to 00a1e2db has its CatchHandler @ 0091e330 */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "cc.CCBAnimationManager:runAnimationsForSequenceNamed");
                    /* try { // try from 0091e2dc to 00a1e343 has its CatchHandler @ 0091e28c */
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0091e344 to 00a1e3fb has its CatchHandler @ 0091e344
                       catch() { ... } // from try @ 0091e344 with catch @ 0091e344
                       catch() { ... } // from try @ 0091e47c with catch @ 0091e344 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamed\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      cocosbuilder::CCBAnimationManager::runAnimationsForSequenceNamed(this,pcVar1);
      uVar5 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 0091e2d8 with catch @ 0091e330 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:runAnimationsForSequenceNamed",iVar3 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

