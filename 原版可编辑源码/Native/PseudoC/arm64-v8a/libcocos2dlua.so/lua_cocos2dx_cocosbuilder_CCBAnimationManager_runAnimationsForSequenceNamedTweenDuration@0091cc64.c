
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(lua_State*)
    */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration
               (lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CCBAnimationManager *this;
  bool bVar6;
  ulong local_68;
  undefined8 local_60;
  char *local_58;
  double local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 2) {
    local_60 = 0;
    local_58 = (char *)0x0;
    local_68 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_68,
                       "cc.CCBAnimationManager:runAnimationsForSequenceNamedTweenDuration");
    pcVar1 = (char *)((ulong)&local_68 | 1);
                    /* try { // try from 0091cce8 to 00a1cd1b has its CatchHandler @ 0091cde8 */
    if ((local_68 & 1) != 0) {
      pcVar1 = local_58;
    }
    uVar5 = luaval_to_number(param_1,3,&local_50,
                             "cc.CCBAnimationManager:runAnimationsForSequenceNamedTweenDuration");
    bVar6 = (uVar4 & uVar5 & 1) == 0;
    if (bVar6) {
                    /* try { // try from 0091cd68 to 00a1ce03 has its CatchHandler @ 0091cc30 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration\'"
                  ,0);
    }
    else {
                    /* try { // try from 0091cd1c to 00a1cd2f has its CatchHandler @ 0091cdb4 */
      cocosbuilder::CCBAnimationManager::runAnimationsForSequenceNamedTweenDuration
                (this,pcVar1,(float)local_50);
      lua_settop(param_1,1);
                    /* try { // try from 0091cd34 to 00a1cd67 has its CatchHandler @ 0091cdb8 */
    }
    bVar6 = !bVar6;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:runAnimationsForSequenceNamedTweenDuration",iVar3 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0091cd1c with catch @ 0091cdb4 */
  __stack_chk_fail();
}

