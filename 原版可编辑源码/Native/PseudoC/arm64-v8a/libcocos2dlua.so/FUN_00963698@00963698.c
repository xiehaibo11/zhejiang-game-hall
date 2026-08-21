
undefined8 FUN_00963698(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ScriptHandlerMgr *pSVar5;
  code *pcVar6;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  long *local_50;
  long local_38;
  
                    /* try { // try from 00963698 to 00a636cb has its CatchHandler @ 0096371c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    lVar3 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 009636cc to 00a63767 has its CatchHandler @ 00963594 */
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 1) {
      uVar4 = toluafix_ref_function(param_1,2,0);
      pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar3,uVar4 & 0xffffffff,0x39);
                    /* catch() { ... } // from try @ 00963680 with catch @ 00963718 */
                    /* catch() { ... } // from try @ 00963698 with catch @ 0096371c */
      local_70 = &PTR_FUN_0169df80;
      plStack_68 = param_1;
      local_60 = uVar4 & 0xffffffff;
      local_50 = (long *)&local_70;
      FUN_00963a28(&local_70,lVar3 + 0xa0);
      if (&local_70 == (undefined ***)local_50) {
        pcVar6 = *(code **)(*local_50 + 0x20);
      }
      else {
        if (local_50 == (long *)0x0) goto LAB_0096377c;
        pcVar6 = *(code **)(*local_50 + 0x28);
                    /* catch() { ... } // from try @ 0096364c with catch @ 0096374c */
      }
      (*pcVar6)();
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerFocus:registerScriptHandler",iVar2 + -1,1);
    }
  }
LAB_0096377c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

