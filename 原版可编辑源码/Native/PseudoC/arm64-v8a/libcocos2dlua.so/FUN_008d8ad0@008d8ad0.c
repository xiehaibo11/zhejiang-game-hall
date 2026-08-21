
undefined8 FUN_008d8ad0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  UIEventDispatcher *this;
  ulong uVar3;
  ScriptHandlerMgr *pSVar4;
  ulong uVar5;
  int local_58 [2];
  int local_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (UIEventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.UIEventDispatcher:removeEventListener");
                    /* catch() { ... } // from try @ 008d8a38 with catch @ 008d8b7c */
                    /* catch() { ... } // from try @ 008d8b28 with catch @ 008d8b80 */
                    /* catch() { ... } // from try @ 008d89a0 with catch @ 008d8b84 */
    uVar5 = luaval_to_int32(param_1,3,&local_50,"fairygui.UIEventDispatcher:removeEventListener");
    iVar2 = local_4c;
                    /* catch() { ... } // from try @ 008d8b18 with catch @ 008d8b90 */
    if (((uVar3 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_008d8bd0:
                    /* catch() { ... } // from try @ 008d8a94 with catch @ 008d8bd4 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_UIEventDispatcher_removeEventListener\'"
                  ,0);
      goto LAB_008d8bfc;
    }
    fairygui::EventTag::EventTag((EventTag *)local_58,local_50);
                    /* catch() { ... } // from try @ 008d89e8 with catch @ 008d8ba4 */
                    /* catch() { ... } // from try @ 008d8ab8 with catch @ 008d8bb0 */
    fairygui::UIEventDispatcher::removeEventListener(this,iVar2,(EventTag *)local_58);
    fairygui::EventTag::~EventTag((EventTag *)local_58);
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    local_58[0] = local_4c;
  }
  else {
                    /* try { // try from 008d8b18 to 009d8b23 has its CatchHandler @ 008d8b90 */
    if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 008d88cc with catch @ 008d8bec */
                    /* catch() { ... } // from try @ 008d8a50 with catch @ 008d8bf8 */
      luaL_error(param_1,
                 "\'removeEventListener\' function of UIEventDispatcher has wrong number of arguments: %d, was expecting 1~2\n"
                 ,iVar2 + -1);
      goto LAB_008d8bfc;
    }
                    /* try { // try from 008d8b28 to 009d8b33 has its CatchHandler @ 008d8b80 */
                    /* try { // try from 008d8b34 to 009d8ccf has its CatchHandler @ 008d87c8 */
    uVar3 = luaval_to_int32(param_1,2,local_58,"fairygui.UIEventDispatcher:removeEventListener");
    if ((uVar3 & 1) == 0) goto LAB_008d8bd0;
    fairygui::UIEventDispatcher::removeEventListener
              (this,local_58[0],(EventTag *)&fairygui::EventTag::None);
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  }
                    /* catch() { ... } // from try @ 008d8930 with catch @ 008d8bc8 */
  cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar4,this,local_58[0]);
LAB_008d8bfc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 008d89d0 with catch @ 008d8c10 */
                    /* catch() { ... } // from try @ 008d8918 with catch @ 008d8c14 */
                    /* catch() { ... } // from try @ 008d88b4 with catch @ 008d8c18 */
                    /* catch() { ... } // from try @ 008d89bc with catch @ 008d8c1c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

