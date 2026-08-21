
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getLastCompletedSequenceName(lua_State*) */

void lua_cocos2dx_cocosbuilder_CCBAnimationManager_getLastCompletedSequenceName(lua_State *param_1)

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
  
                    /* catch() { ... } // from try @ 0091c99c with catch @ 0091ca9c */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocosbuilder::CCBAnimationManager::getLastCompletedSequenceName();
    uVar1 = (ulong)(local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
    lua_pushlstring(param_1,pvVar3,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getLastCompletedSequenceName",iVar4 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

