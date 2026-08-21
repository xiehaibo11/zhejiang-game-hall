
undefined8 FUN_008ec5f8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Transition *pTVar3;
  long *plVar4;
  undefined ***pppuVar5;
  ScriptHandlerMgr *this;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  double local_1b0;
  undefined8 local_1a8;
  int local_19c;
  double local_198;
  undefined **local_190;
  int local_188;
  undefined ***local_170;
  long alStack_160 [4];
  long *local_140;
  undefined **local_130;
  int local_128;
  undefined ***local_110;
  long alStack_100 [4];
  long *local_e0;
  undefined **local_d0;
  int local_c8;
  undefined ***local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pTVar3 = (Transition *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2 + -1) {
  case 0:
    local_80 = (long *)0x0;
    fairygui::Transition::play(pTVar3,alStack_a0);
    plVar4 = local_80;
    if (alStack_a0 != local_80) {
LAB_008ec784:
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x28))();
      }
      goto LAB_008ec9b4;
    }
    break;
  case 1:
    iVar2 = toluafix_ref_function(param_1,2,0);
    if (iVar2 == 0) {
LAB_008ec9a0:
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Transition_play\'",0);
      goto LAB_008ec9b4;
    }
    local_d0 = &PTR_FUN_0169b8c8;
    local_c8 = iVar2;
    local_b0 = &local_d0;
    fairygui::Transition::play(pTVar3,&local_d0);
    pppuVar5 = local_b0;
    if (&local_d0 == local_b0) goto LAB_008ec884;
LAB_008ec7e0:
    if (pppuVar5 != (undefined ***)0x0) {
      pcVar10 = (code *)(*pppuVar5)[5];
      goto LAB_008ec88c;
    }
    goto LAB_008ec890;
  case 2:
    luaval_to_int32(param_1,2,(int *)&local_1a8,"fairygui.Transition:play");
    luaval_to_number(param_1,3,&local_198,"fairygui.Transition:play");
    local_e0 = (long *)0x0;
    fairygui::Transition::play((Transition *)(float)local_198,pTVar3,(int)local_1a8,alStack_100);
    plVar4 = local_e0;
    if (alStack_100 != local_e0) goto LAB_008ec784;
    break;
  case 3:
    uVar6 = luaval_to_int32(param_1,2,(int *)&local_1a8,"fairygui.Transition:play");
    uVar7 = luaval_to_number(param_1,3,&local_198,"fairygui.Transition:play");
    iVar2 = toluafix_ref_function(param_1,4,0);
    if (((iVar2 == 0) || ((uVar6 & 1) == 0)) || ((uVar7 & 1) == 0)) goto LAB_008ec9a0;
    local_130 = &PTR_FUN_0169b948;
    local_128 = iVar2;
    local_110 = &local_130;
    fairygui::Transition::play((Transition *)(float)local_198,pTVar3,(int)local_1a8,&local_130);
    pppuVar5 = local_110;
    if (&local_130 != local_110) goto LAB_008ec7e0;
    goto LAB_008ec884;
  case 4:
    luaval_to_int32(param_1,2,&local_19c,"fairygui.Transition:play");
    luaval_to_number(param_1,3,&local_198,"fairygui.Transition:play");
    luaval_to_number(param_1,4,(double *)&local_1a8,"fairygui.Transition:play");
    luaval_to_number(param_1,5,&local_1b0,"fairygui.Transition:play");
    local_140 = (long *)0x0;
    fairygui::Transition::play
              ((Transition *)(float)local_198,
               (float)(double)CONCAT44(local_1a8._4_4_,(int)local_1a8),(float)local_1b0,pTVar3,
               local_19c,alStack_160);
    plVar4 = local_140;
    if (alStack_160 != local_140) goto LAB_008ec784;
    break;
  case 5:
    uVar6 = luaval_to_int32(param_1,2,&local_19c,"fairygui.Transition:play");
    uVar7 = luaval_to_number(param_1,3,&local_198,"fairygui.Transition:play");
    uVar8 = luaval_to_number(param_1,4,(double *)&local_1a8,"fairygui.Transition:play");
    uVar9 = luaval_to_number(param_1,5,&local_1b0,"fairygui.Transition:play");
    iVar2 = toluafix_ref_function(param_1,6,0);
    if ((((iVar2 == 0) || ((uVar6 & 1) == 0)) || ((uVar7 & 1) == 0)) ||
       (((uVar8 & 1) == 0 || ((uVar9 & 1) == 0)))) goto LAB_008ec9a0;
    local_190 = &PTR_FUN_0169b9c8;
    local_188 = iVar2;
    local_170 = &local_190;
    fairygui::Transition::play
              ((Transition *)(float)local_198,
               (float)(double)CONCAT44(local_1a8._4_4_,(int)local_1a8),(float)local_1b0,pTVar3,
               local_19c,&local_190);
    pppuVar5 = local_170;
    if (&local_190 != local_170) goto LAB_008ec7e0;
LAB_008ec884:
    pcVar10 = (code *)(*pppuVar5)[4];
LAB_008ec88c:
    (*pcVar10)();
LAB_008ec890:
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,pTVar3,iVar2);
    goto LAB_008ec9b4;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:play",iVar2 + -1,0);
    goto LAB_008ec9b4;
  }
  (**(code **)(*plVar4 + 0x20))();
LAB_008ec9b4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

