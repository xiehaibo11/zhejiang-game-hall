
/* LuaWebSocket::onOpen(cocos2d::network::WebSocket*) */

void __thiscall LuaWebSocket::onOpen(LuaWebSocket *this,WebSocket *param_1)

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
  if ((param_1 != (WebSocket *)0x0) &&
     (lVar3 = __dynamic_cast(param_1,&cocos2d::network::WebSocket::typeinfo,&typeinfo,0), lVar3 != 0
     )) {
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4,this,0x10);
    if (iVar2 != 0) {
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
      (**(code **)(*(long *)*puVar5 + 0x78))((long *)*puVar5,local_c8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

