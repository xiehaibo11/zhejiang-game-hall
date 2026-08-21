
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0099d458(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ScriptHandlerMgr *pSVar4;
  uint uVar5;
  double dVar6;
  
  if (param_1 != (lua_State *)0x0) {
    uVar3 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 2) {
      uVar2 = toluafix_ref_function(param_1,2,0);
      dVar6 = (double)tolua_tonumber(0,param_1,3);
      uVar5 = (uint)dVar6;
      if ((uVar5 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,7);
      }
      if ((uVar5 >> 1 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,8);
      }
      if ((uVar5 >> 2 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,9);
      }
      if ((uVar5 >> 3 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,10);
      }
      if ((uVar5 >> 4 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,0xb);
      }
      if ((uVar5 >> 5 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,0xc);
      }
      if ((uVar5 >> 6 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,0xd);
      }
      if ((uVar5 >> 7 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,0xe);
      }
      if ((uVar5 >> 8 & 1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,0xf);
      }
    }
    else {
      luaL_error(param_1,&DAT_012e2c79,0x12e2cc5,iVar1 + -1,2);
    }
  }
  return 0;
}

