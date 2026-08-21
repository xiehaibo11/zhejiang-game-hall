
undefined8 FUN_008b57fc(lua_State *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  ScriptHandlerMgr *pSVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar2 = lua_gettop();
    if (iVar2 + -1 == 1) {
      uVar3 = toluafix_ref_function(param_1,2,0);
      pvVar4 = (void *)cocos2d::LuaEventListenerAcceleration::create();
      pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,pvVar4,uVar3,0x24);
      piVar1 = (int *)((long)pvVar4 + 0x10);
      if (pvVar4 == (void *)0x0) {
        iVar2 = -1;
        piVar1 = (int *)0x0;
      }
      else {
        iVar2 = *(int *)((long)pvVar4 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar2,piVar1,pvVar4,"cc.EventListenerAcceleration");
      uVar6 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerAcceleration:create",iVar2 + -1,1);
      uVar6 = 0;
    }
  }
  return uVar6;
}

