
/* GLNode::onDraw(cocos2d::Mat4 const&, unsigned int) */

void __thiscall GLNode::onDraw(GLNode *this,Mat4 *param_1,uint param_2)

{
  int iVar1;
  ScriptHandlerMgr *pSVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar1 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar2,this,0x14);
  if (iVar1 != 0) {
    lVar3 = cocos2d::LuaEngine::getInstance();
    plVar4 = *(long **)(lVar3 + 8);
    lVar3 = plVar4[5];
    lua_createtable(lVar3,0,0);
    uVar5 = 0;
    do {
      (**(code **)(*plVar4 + 0x68))(*(undefined4 *)(param_1 + uVar5 * 4),plVar4);
      uVar5 = uVar5 + 1;
      lua_rawseti(lVar3,0xfffffffe,uVar5 & 0xffffffff);
    } while (uVar5 != 0x10);
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
    (**(code **)(*plVar4 + 200))(plVar4,iVar1,2);
                    /* WARNING: Could not recover jumptable at 0x008bbca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x58))(plVar4);
    return;
  }
  return;
}

