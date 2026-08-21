
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootContainerSize(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootContainerSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CCBAnimationManager *this;
  ulong uVar3;
  undefined4 uVar4;
  Size aSStack_40 [8];
  long local_38;
  
                    /* try { // try from 0091d9ec to 00a1d9ff has its CatchHandler @ 0091da84 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0091da04 to 00a1da37 has its CatchHandler @ 0091da88 */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
                    /* try { // try from 0091da38 to 00a1dad3 has its CatchHandler @ 0091d900 */
    uVar3 = luaval_to_size(param_1,2,aSStack_40,"cc.CCBAnimationManager:setRootContainerSize");
    if ((uVar3 & 1) != 0) {
      cocosbuilder::CCBAnimationManager::setRootContainerSize(this,aSStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0091daa8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootContainerSize\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 0091d9ec with catch @ 0091da84 */
                    /* catch() { ... } // from try @ 0091da04 with catch @ 0091da88 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:setRootContainerSize",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0091daa8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0091d9b8 with catch @ 0091dab8 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

