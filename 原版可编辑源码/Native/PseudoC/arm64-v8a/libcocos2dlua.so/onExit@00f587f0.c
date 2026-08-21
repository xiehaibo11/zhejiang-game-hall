
/* cocos2d::TransitionScene::onExit() */

void __thiscall cocos2d::TransitionScene::onExit(TransitionScene *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) == 0)) {
    Node::onExit((Node *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),true);
    (**(code **)(**(long **)(this + 0x378) + 0x330))();
    (**(code **)(**(long **)(this + 0x370) + 0x328))();
    plVar2 = (long *)ScriptEngineManager::getInstance();
    if (*plVar2 != 0) {
      puVar3 = (undefined8 *)ScriptEngineManager::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00f58874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*puVar3 + 0xb8))();
      return;
    }
  }
  return;
}

