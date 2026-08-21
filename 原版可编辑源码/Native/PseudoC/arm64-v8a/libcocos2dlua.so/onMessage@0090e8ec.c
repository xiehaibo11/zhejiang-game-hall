
/* LuaWebSocket::onMessage(cocos2d::network::WebSocket*, cocos2d::network::WebSocket::Data const&)
    */

void __thiscall LuaWebSocket::onMessage(LuaWebSocket *this,WebSocket *param_1,Data *param_2)

{
  Data DVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ScriptHandlerMgr *pSVar5;
  long *plVar6;
  long *****ppppplVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long ****pppplVar9;
  ulong uVar10;
  long *****ppppplVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  LuaValue aLStack_88 [24];
  long ****local_70;
  long ****local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_1 != (WebSocket *)0x0) &&
     (lVar4 = __dynamic_cast(param_1,&cocos2d::network::WebSocket::typeinfo,&typeinfo,0), lVar4 != 0
     )) {
    DVar1 = param_2[0x18];
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar3 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar5,this,0x11);
    if (DVar1 == (Data)0x0) {
      if (iVar3 != 0) {
        lVar4 = cocos2d::LuaEngine::getInstance();
        plVar6 = *(long **)(lVar4 + 8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x88))(plVar6,*(undefined8 *)param_2,*(undefined4 *)(param_2 + 8));
          (**(code **)(*plVar6 + 200))(plVar6,iVar3,1);
        }
      }
    }
    else if (((iVar3 != 0) && (0 < iVar3)) && (pbVar12 = *(byte **)param_2, pbVar12 != (byte *)0x0))
    {
                    /* try { // try from 0090e974 to 00a0e9a7 has its CatchHandler @ 0090ea74 */
      uVar10 = *(ulong *)(param_2 + 8);
      plVar6 = (long *)cocos2d::ScriptEngineManager::getInstance();
      if (*plVar6 != 0) {
        auVar13 = cocos2d::LuaEngine::getInstance();
        uVar8 = auVar13._8_8_;
        plVar6 = *(long **)(auVar13._0_8_ + 8);
        if ((plVar6 != (long *)0x0) && (plVar6[5] != 0)) {
          local_60 = 0;
                    /* try { // try from 0090e9a8 to 00a0e9bb has its CatchHandler @ 0090ea40 */
          local_70 = (long ****)&local_70;
          local_68 = (long ****)&local_70;
          if (0 < (int)uVar10) {
            uVar10 = uVar10 & 0xffffffff;
            do {
              cocos2d::LuaValue::intValue((LuaValue *)(ulong)*pbVar12,(int)uVar8);
                    /* try { // try from 0090e9c0 to 00a0e9f3 has its CatchHandler @ 0090ea44 */
              ppppplVar7 = operator_new(0x28);
              *ppppplVar7 = (long ****)0x0;
              cocos2d::LuaValue::LuaValue((LuaValue *)(ppppplVar7 + 2),aLStack_88);
              *ppppplVar7 = local_70;
              ppppplVar7[1] = (long ****)&local_70;
              local_70[1] = (long ***)ppppplVar7;
              local_60 = local_60 + 1;
              local_70 = (long ****)ppppplVar7;
                    /* try { // try from 0090e9f4 to 00a0ea8f has its CatchHandler @ 0090e668 */
              cocos2d::LuaValue::~LuaValue(aLStack_88);
              uVar10 = uVar10 - 1;
              pbVar12 = pbVar12 + 1;
              uVar8 = extraout_x1;
            } while (uVar10 != 0);
          }
          (**(code **)(*plVar6 + 0xb0))(plVar6,&local_70);
          (**(code **)(*plVar6 + 200))(plVar6,iVar3,1);
          (**(code **)(*plVar6 + 0x58))(plVar6);
                    /* catch() { ... } // from try @ 0090e9a8 with catch @ 0090ea40 */
                    /* catch() { ... } // from try @ 0090e9c0 with catch @ 0090ea44 */
          if (local_60 != 0) {
            pppplVar9 = (long ****)*local_68;
            pppplVar9[1] = local_70[1];
            *local_70[1] = (long **)pppplVar9;
            local_60 = 0;
            ppppplVar7 = (long *****)local_68;
            while (ppppplVar7 != &local_70) {
              ppppplVar11 = (long *****)ppppplVar7[1];
                    /* catch() { ... } // from try @ 0090e974 with catch @ 0090ea74 */
              cocos2d::LuaValue::~LuaValue((LuaValue *)(ppppplVar7 + 2));
              operator_delete(ppppplVar7);
              ppppplVar7 = ppppplVar11;
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0090eae4 to 00a0eb5f has its CatchHandler @ 0090ebe8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

