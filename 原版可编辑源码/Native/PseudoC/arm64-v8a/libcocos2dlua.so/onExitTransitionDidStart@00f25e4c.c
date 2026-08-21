
/* cocos2d::Node::onExitTransitionDidStart() */

void __thiscall cocos2d::Node::onExitTransitionDidStart(Node *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJS(this,3), (uVar2 & 1) == 0)) {
    if (*(long **)(this + 0x2e0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2e0) + 0x30))();
    }
    puVar1 = *(undefined8 **)(this + 0x180);
    for (puVar3 = *(undefined8 **)(this + 0x178); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x338))();
    }
    if (*(int *)(this + 0x208) == 1) {
      ScriptEngineManager::sendNodeEventToLua(this,3);
      return;
    }
  }
  return;
}

