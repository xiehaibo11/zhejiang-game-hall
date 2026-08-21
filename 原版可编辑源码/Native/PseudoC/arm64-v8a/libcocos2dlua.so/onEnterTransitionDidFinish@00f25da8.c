
/* cocos2d::Node::onEnterTransitionDidFinish() */

void __thiscall cocos2d::Node::onEnterTransitionDidFinish(Node *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJS(this,2), (uVar2 & 1) == 0)) {
    if (*(long **)(this + 0x2b0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2b0) + 0x30))();
    }
    puVar3 = *(undefined8 **)(this + 0x178);
    puVar1 = *(undefined8 **)(this + 0x180);
    this[0x1fc] = (Node)0x1;
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x328))();
    }
    if (*(int *)(this + 0x208) == 1) {
      ScriptEngineManager::sendNodeEventToLua(this,2);
      return;
    }
  }
  return;
}

