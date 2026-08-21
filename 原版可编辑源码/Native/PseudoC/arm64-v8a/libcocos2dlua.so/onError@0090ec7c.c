
/* LuaWebSocket::onError(cocos2d::network::WebSocket*, cocos2d::network::WebSocket::ErrorCode
   const&) */

void LuaWebSocket::onError(WebSocket *param_1,ErrorCode *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ScriptHandlerMgr *pSVar4;
  undefined8 *puVar5;
  undefined4 local_c8 [2];
  int *local_c0;
  int local_b8 [18];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0090eca8 to 00a0ecd7 has its CatchHandler @ 0090ec04 */
  if ((param_2 != (ErrorCode *)0x0) &&
     (lVar3 = __dynamic_cast(param_2,&cocos2d::network::WebSocket::typeinfo,&typeinfo,0), lVar3 != 0
     )) {
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4,param_1,0x13);
    if (iVar2 != 0) {
                    /* try { // try from 0090ecd8 to 00a0eceb has its CatchHandler @ 0090ed2c */
                    /* try { // try from 0090ecec to 00a0ed47 has its CatchHandler @ 0090ec04 */
      local_70 = 0;
      local_b8[0] = iVar2;
      __strncpy_chk2((ulong)local_b8 | 4,&DAT_013c996e,0x40,0x40,1);
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_30 = 0;
      local_38 = 0;
      uStack_40 = 0;
      local_48 = 0;
      local_c8[0] = 9;
      local_c0 = local_b8;
      puVar5 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
                    /* catch() { ... } // from try @ 0090ec54 with catch @ 0090ed2c
                       catch() { ... } // from try @ 0090ecd8 with catch @ 0090ed2c */
      (**(code **)(*(long *)*puVar5 + 0x78))((long *)*puVar5,local_c8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0090ed48 to 00a0eda3 has its CatchHandler @ 0090ed48
                       catch() { ... } // from try @ 0090ed48 with catch @ 0090ed48
                       catch() { ... } // from try @ 0090ee74 with catch @ 0090ed48 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

