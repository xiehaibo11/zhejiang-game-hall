
/* cocos2d::Node::cleanup() */

void __thiscall cocos2d::Node::cleanup(Node *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(this + 0x208) == 1) {
    ScriptEngineManager::sendNodeEventToLua(this,4);
  }
  else if ((*(int *)(this + 0x208) == 2) &&
          (uVar2 = ScriptEngineManager::sendNodeEventToJS(this,4), (uVar2 & 1) != 0)) {
    return;
  }
  (**(code **)(**(long **)(this + 0x1e8) + 0x20))(*(long **)(this + 0x1e8),this);
  Scheduler::unscheduleAllForTarget(*(Scheduler **)(this + 0x1e0),this);
  puVar1 = *(undefined8 **)(this + 0x180);
  for (puVar3 = *(undefined8 **)(this + 0x178); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x340))();
  }
  return;
}

