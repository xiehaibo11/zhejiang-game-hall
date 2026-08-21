
undefined8 FUN_008ec330(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Transition *pTVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  ScriptHandlerMgr *this;
  code *pcVar8;
  double local_130;
  int local_124;
  undefined **local_120;
  int local_118;
  undefined ***local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined **local_c0;
  int local_b8;
  undefined ***local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pTVar3 = (Transition *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2 + -1) {
  case 0:
    local_70 = (long *)0x0;
    fairygui::Transition::playReverse(pTVar3,alStack_90);
    plVar4 = local_70;
    if (alStack_90 == local_70) goto LAB_008ec424;
LAB_008ec3b8:
    if (plVar4 == (long *)0x0) goto LAB_008ec574;
    pcVar8 = *(code **)(*plVar4 + 0x28);
    break;
  case 1:
    iVar2 = toluafix_ref_function(param_1,2,0);
    if (iVar2 == 0) {
LAB_008ec560:
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Transition_playReverse\'",0)
      ;
      goto LAB_008ec574;
    }
    local_c0 = &PTR_FUN_0169b7c8;
    local_b8 = iVar2;
    local_a0 = &local_c0;
    fairygui::Transition::playReverse(pTVar3,&local_c0);
    pppuVar7 = local_a0;
    if (&local_c0 == local_a0) goto LAB_008ec4c8;
LAB_008ec51c:
    if (pppuVar7 != (undefined ***)0x0) {
      pcVar8 = (code *)(*pppuVar7)[5];
      goto LAB_008ec528;
    }
    goto LAB_008ec52c;
  case 2:
    luaval_to_int32(param_1,2,&local_124,"fairygui.Transition:playReverse");
    luaval_to_number(param_1,3,&local_130,"fairygui.Transition:playReverse");
    local_d0 = (long *)0x0;
    fairygui::Transition::playReverse((Transition *)(float)local_130,pTVar3,local_124,alStack_f0);
    plVar4 = local_d0;
    if (alStack_f0 != local_d0) goto LAB_008ec3b8;
LAB_008ec424:
    pcVar8 = *(code **)(*plVar4 + 0x20);
    break;
  case 3:
    uVar5 = luaval_to_int32(param_1,2,&local_124,"fairygui.Transition:playReverse");
    uVar6 = luaval_to_number(param_1,3,&local_130,"fairygui.Transition:playReverse");
    iVar2 = toluafix_ref_function(param_1,4,0);
    if (((iVar2 == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) goto LAB_008ec560;
    local_120 = &PTR_FUN_0169b848;
    local_118 = iVar2;
    local_100 = &local_120;
    fairygui::Transition::playReverse((Transition *)(float)local_130,pTVar3,local_124,&local_120);
    pppuVar7 = local_100;
    if (&local_120 != local_100) goto LAB_008ec51c;
LAB_008ec4c8:
    pcVar8 = (code *)(*pppuVar7)[4];
LAB_008ec528:
    (*pcVar8)();
LAB_008ec52c:
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,pTVar3,iVar2);
    goto LAB_008ec574;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:playReverse",iVar2 + -1,0);
    goto LAB_008ec574;
  }
  (*pcVar8)();
LAB_008ec574:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

