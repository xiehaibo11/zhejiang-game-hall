
/* lua_cocos2dx_csloader_CSLoader_createNode(lua_State*) */

void lua_cocos2dx_csloader_CSLoader_createNode(lua_State *param_1)

{
  long lVar1;
  lua_State *plVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  ScriptHandlerMgr *this;
  undefined8 uVar8;
  code *pcVar9;
  undefined **local_98;
  undefined8 local_90;
  lua_State *local_88;
  undefined **local_80;
  ulong local_78;
  lua_State *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 == 2) {
    local_78 = 0;
    local_70 = (lua_State *)0x0;
    local_80 = (undefined **)0x0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"cc.CSLoader:createNode");
    plVar2 = local_70;
    ppuVar3 = local_80;
    if ((uVar6 & 1) == 0) {
joined_r0x009260dc:
      if (((ulong)ppuVar3 & 1) != 0) {
        operator_delete(plVar2);
      }
      goto LAB_009260e8;
    }
    pvVar7 = (void *)cocos2d::CSLoader::createNode((basic_string *)&local_80);
    if (pvVar7 == (void *)0x0) {
                    /* try { // try from 00926110 to 00a2617f has its CatchHandler @ 009260bc */
      lua_pushnil(param_1);
      plVar2 = local_70;
      ppuVar3 = local_80;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,"cc.Node")
      ;
      plVar2 = local_70;
      ppuVar3 = local_80;
    }
  }
  else {
    if (iVar4 != 3) {
LAB_009260e8:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                 "cc.CSLoader:createNode",iVar4 + -1,1);
      uVar8 = 0;
                    /* try { // try from 0092610c to 00a2610f has its CatchHandler @ 0092616c */
      goto LAB_0092616c;
    }
    local_90 = 0;
    local_88 = (lua_State *)0x0;
    local_98 = (undefined **)0x0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_98,"cc.CSLoader:createNode");
    plVar2 = local_88;
    ppuVar3 = local_98;
    if ((uVar6 & 1) == 0) goto joined_r0x009260dc;
    uVar5 = toluafix_ref_function(param_1,3,0);
    local_78 = (ulong)uVar5;
    local_80 = &PTR_FUN_0169cee0;
    local_70 = param_1;
    local_60 = &local_80;
    pvVar7 = (void *)cocos2d::CSLoader::createNode((basic_string *)&local_98,(function *)&local_80);
    if (&local_80 == local_60) {
      pcVar9 = (code *)(*local_60)[4];
LAB_00926124:
      (*pcVar9)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar9 = (code *)(*local_60)[5];
      goto LAB_00926124;
    }
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,pvVar7,uVar5);
    if (pvVar7 == (void *)0x0) {
      lua_pushnil(param_1);
      plVar2 = local_88;
      ppuVar3 = local_98;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,"cc.Node")
      ;
      plVar2 = local_88;
      ppuVar3 = local_98;
    }
  }
                    /* try { // try from 009260bc to 00a2610b has its CatchHandler @ 009260bc
                       catch() { ... } // from try @ 009260bc with catch @ 009260bc
                       catch() { ... } // from try @ 00926110 with catch @ 009260bc */
  if (((ulong)ppuVar3 & 1) != 0) {
    operator_delete(plVar2);
  }
  uVar8 = 1;
LAB_0092616c:
                    /* catch() { ... } // from try @ 0092610c with catch @ 0092616c */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
                    /* try { // try from 00926180 to 00a2624f has its CatchHandler @ 00926180
                       catch() { ... } // from try @ 00926180 with catch @ 00926180
                       catch() { ... } // from try @ 009262d0 with catch @ 00926180 */
  return;
}

