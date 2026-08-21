
undefined8 FUN_008d8834(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  UIEventDispatcher *this;
  ulong uVar3;
  ulong uVar4;
  ScriptHandlerMgr *pSVar5;
  code *pcVar6;
  ulong uVar7;
  int local_90 [2];
  int local_88;
  int local_84;
  undefined **local_80;
  lua_State *plStack_78;
  ulong local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (UIEventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
                    /* try { // try from 008d8904 to 009d8913 has its CatchHandler @ 008d8c6c */
                    /* try { // try from 008d8918 to 009d8923 has its CatchHandler @ 008d8c14 */
    uVar3 = luaval_to_int32(param_1,2,&local_84,"fairygui.UIEventDispatcher:addEventListener");
                    /* try { // try from 008d8930 to 009d893b has its CatchHandler @ 008d8bc8 */
    uVar7 = toluafix_ref_function(param_1,3,0);
    uVar7 = uVar7 & 0xffffffff;
                    /* try { // try from 008d893c to 009d899f has its CatchHandler @ 008d87c8 */
    uVar4 = luaval_to_int32(param_1,4,&local_88,"fairygui.UIEventDispatcher:addEventListener");
    iVar2 = local_84;
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
LAB_008d89b8:
                    /* try { // try from 008d89bc to 009d89cb has its CatchHandler @ 008d8c1c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_UIEventDispatcher_addEventListener\'"
                  ,0);
      goto LAB_008d8a20;
    }
    local_80 = &PTR_FUN_0169b528;
    local_60 = &local_80;
    plStack_78 = param_1;
    local_70 = uVar7;
    fairygui::EventTag::EventTag((EventTag *)local_90,local_88);
    fairygui::UIEventDispatcher::addEventListener
              (this,iVar2,(function *)&local_80,(EventTag *)local_90);
    fairygui::EventTag::~EventTag((EventTag *)local_90);
                    /* try { // try from 008d89a0 to 009d89ab has its CatchHandler @ 008d8b84 */
    if (&local_80 == local_60) {
      pcVar6 = (code *)(*local_60)[4];
LAB_008d8a08:
      (*pcVar6)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_60)[5];
      goto LAB_008d8a08;
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    local_90[0] = local_84;
  }
  else {
    if (iVar2 != 3) {
                    /* try { // try from 008d89d0 to 009d89db has its CatchHandler @ 008d8c10 */
      luaL_error(param_1,
                 "\'addEventListener\' function of UIEventDispatcher has wrong number of arguments: %d, was expecting 2~3\n"
                 ,iVar2 + -1);
      goto LAB_008d8a20;
    }
    uVar3 = luaval_to_int32(param_1,2,local_90,"fairygui.UIEventDispatcher:addEventListener");
    if ((uVar3 & 1) == 0) goto LAB_008d89b8;
                    /* try { // try from 008d88a0 to 009d88af has its CatchHandler @ 008d8c88 */
    local_70 = toluafix_ref_function(param_1,3,0);
                    /* try { // try from 008d88b4 to 009d88bf has its CatchHandler @ 008d8c18 */
    uVar7 = local_70 & 0xffffffff;
    local_70 = local_70 & 0xffffffff;
    local_80 = &PTR_FUN_0169b498;
                    /* try { // try from 008d88cc to 009d88d7 has its CatchHandler @ 008d8bec */
                    /* try { // try from 008d88d8 to 009d8903 has its CatchHandler @ 008d87c8 */
    plStack_78 = param_1;
    local_60 = &local_80;
    fairygui::UIEventDispatcher::addEventListener
              (this,local_90[0],(function *)&local_80,(EventTag *)&fairygui::EventTag::None);
    if (&local_80 == local_60) {
                    /* try { // try from 008d89e8 to 009d89f3 has its CatchHandler @ 008d8ba4 */
      pcVar6 = (code *)(*local_60)[4];
LAB_008d89f0:
      (*pcVar6)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_60)[5];
      goto LAB_008d89f0;
    }
                    /* try { // try from 008d89f4 to 009d8a37 has its CatchHandler @ 008d87c8 */
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  }
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,this,uVar7,local_90[0]);
LAB_008d8a20:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008d8a38 to 009d8a43 has its CatchHandler @ 008d8b7c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

