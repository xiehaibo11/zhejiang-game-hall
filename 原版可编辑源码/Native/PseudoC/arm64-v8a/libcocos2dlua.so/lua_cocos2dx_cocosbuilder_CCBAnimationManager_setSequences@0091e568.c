
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_setSequences(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_setSequences(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  CCBAnimationManager *this;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar5 = lua_gettop(param_1);
  if (iVar5 + -1 == 1) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_50 = (undefined8 *)0x0;
    bVar4 = luaval_to_ccvector<cocosbuilder::CCBSequence*>
                      (param_1,2,(Vector *)&local_50,"cc.CCBAnimationManager:setSequences");
    if (!bVar4) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_setSequences\'"
                  ,0);
    }
    else {
      cocosbuilder::CCBAnimationManager::setSequences(this,(Vector *)&local_50);
      lua_settop(param_1,1);
    }
    puVar3 = local_48;
    bVar4 = bVar4;
    for (puVar1 = local_50; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
                    /* try { // try from 0091e644 to 00a1e647 has its CatchHandler @ 0091e69c */
                    /* try { // try from 0091e648 to 00a1e6af has its CatchHandler @ 0091e5f8 */
    }
    local_48 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      operator_delete(local_50);
    }
  }
  else {
                    /* try { // try from 0091e5f8 to 00a1e643 has its CatchHandler @ 0091e5f8
                       catch() { ... } // from try @ 0091e5f8 with catch @ 0091e5f8
                       catch() { ... } // from try @ 0091e648 with catch @ 0091e5f8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:setSequences",iVar5 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

