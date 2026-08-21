
void FUN_008b04ec(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ScriptHandlerMgr *pSVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *param_3;
  pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4,*(undefined8 *)(param_1 + 8),2);
  if (iVar2 == 0) {
    return;
  }
  lVar5 = cocos2d::LuaEngine::getInstance();
  plVar7 = *(long **)(lVar5 + 8);
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x90))(plVar7);
    cVar1 = *(char *)(param_1 + 0x10);
  }
  else {
    (**(code **)(*plVar7 + 0x98))(plVar7,lVar8,"cc.Node");
    cVar1 = *(char *)(param_1 + 0x10);
  }
  if (cVar1 != '\0') {
    lua_rawgeti(*(undefined8 *)(param_1 + 0x18),0xffffd8f0,*(undefined4 *)(param_1 + 0x20));
    iVar3 = lua_type(*(undefined8 *)(param_1 + 0x18),0xffffffff);
    if (iVar3 == 5) {
      uVar6 = 2;
      goto LAB_008b05b4;
    }
    lua_settop(*(undefined8 *)(param_1 + 0x18),0xfffffffe);
  }
  uVar6 = 1;
LAB_008b05b4:
  (**(code **)(*plVar7 + 200))(plVar7,iVar2,uVar6);
  if (*(char *)(param_1 + 0x10) != '\0') {
    luaL_unref(*(undefined8 *)(param_1 + 0x18),0xffffd8f0,*(undefined4 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x008b05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x58))(plVar7);
  return;
}

