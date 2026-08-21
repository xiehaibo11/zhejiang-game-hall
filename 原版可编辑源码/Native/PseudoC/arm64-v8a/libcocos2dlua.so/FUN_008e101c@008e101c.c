
undefined8 FUN_008e101c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ScriptHandlerMgr *pSVar6;
  code *pcVar7;
  undefined **local_80;
  ulong uStack_78;
  lua_State *local_70;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_type(param_1,2);
  if (iVar2 == 0) {
    plVar5 = *(long **)(lVar4 + 0x2d0);
    *(undefined8 *)(lVar4 + 0x2d0) = 0;
    if ((long *)(lVar4 + 0x2b0) == plVar5) {
      pcVar7 = *(code **)(*plVar5 + 0x20);
LAB_008e110c:
      (*pcVar7)();
    }
    else if (plVar5 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar5 + 0x28);
      goto LAB_008e110c;
    }
    pSVar6 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar6,lVar4,1);
    goto LAB_008e1120;
  }
  uVar3 = toluafix_ref_function(param_1,2,0);
  uStack_78 = (ulong)uVar3;
  local_80 = &PTR_FUN_0169b638;
  local_70 = param_1;
  local_60 = (long *)&local_80;
  FUN_008e3b94(&local_80,lVar4 + 0x2b0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar7 = *(code **)(*local_60 + 0x20);
LAB_008e10e8:
    (*pcVar7)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar7 = *(code **)(*local_60 + 0x28);
    goto LAB_008e10e8;
  }
  pSVar6 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar6,lVar4,uVar3,1);
LAB_008e1120:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

