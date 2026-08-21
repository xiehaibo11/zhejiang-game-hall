
/* cocos2d::Node::onExit() */

void __thiscall cocos2d::Node::onExit(Node *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ComponentContainer *this_00;
  undefined8 *puVar3;
  
  if (this[0x1f8] != (Node)0x0) {
    __attachedNodeCount = __attachedNodeCount + -1;
  }
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJS(this,1), (uVar2 & 1) == 0)) {
    if (*(long **)(this + 0x280) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x280) + 0x30))();
    }
    this_00 = *(ComponentContainer **)(this + 0x210);
    if ((this_00 != (ComponentContainer *)0x0) && (*(long *)(this_00 + 0x18) != 0)) {
      ComponentContainer::onExit(this_00);
    }
    (**(code **)(*(long *)this + 0x3d0))(this);
    puVar3 = *(undefined8 **)(this + 0x178);
    puVar1 = *(undefined8 **)(this + 0x180);
    this[0x1f8] = (Node)0x0;
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x330))();
    }
    if (*(int *)(this + 0x208) == 1) {
      ScriptEngineManager::sendNodeEventToLua(this,1);
      return;
    }
  }
  return;
}

