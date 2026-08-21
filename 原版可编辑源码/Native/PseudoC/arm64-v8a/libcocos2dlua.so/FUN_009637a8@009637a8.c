
void FUN_009637a8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  ScriptHandlerMgr *pSVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined **local_80;
  int local_78;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_009638dc;
  lVar4 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.EventListenerFocus:clone",iVar2 + -1,0);
    uVar5 = 0;
    goto LAB_009638dc;
  }
  pvVar6 = (void *)cocos2d::EventListenerFocus::create();
  uVar5 = 0;
  if (pvVar6 == (void *)0x0) goto LAB_009638dc;
  if (lVar4 != 0) {
    pSVar7 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar7,lVar4,0x39);
    if (iVar2 != 0) {
      puVar8 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
      uVar3 = (**(code **)(*(long *)*puVar8 + 0x58))((long *)*puVar8,iVar2);
      pSVar7 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar7,pvVar6,uVar3,0x39);
      local_80 = &PTR_FUN_0169e010;
      local_78 = iVar2;
      local_60 = (long *)&local_80;
      FUN_00963a28(&local_80,(long)pvVar6 + 0xa0);
      if (&local_80 == (undefined ***)local_60) {
        pcVar9 = *(code **)(*local_60 + 0x20);
      }
      else {
                    /* try { // try from 009638a0 to 00a638eb has its CatchHandler @ 009638a0
                       catch() { ... } // from try @ 009638a0 with catch @ 009638a0
                       catch() { ... } // from try @ 009638f0 with catch @ 009638a0 */
        if (local_60 == (long *)0x0) goto LAB_009638bc;
        pcVar9 = *(code **)(*local_60 + 0x28);
      }
      (*pcVar9)();
    }
  }
LAB_009638bc:
  toluafix_pushusertype_ccobject
            (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
             "cc.EventListenerFocus");
  uVar5 = 1;
LAB_009638dc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009638ec to 00a638ef has its CatchHandler @ 00963934 */
                    /* try { // try from 009638f0 to 00a63947 has its CatchHandler @ 009638a0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

