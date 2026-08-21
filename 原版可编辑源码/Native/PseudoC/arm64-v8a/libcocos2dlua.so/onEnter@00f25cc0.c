
/* cocos2d::Node::onEnter() */

void __thiscall cocos2d::Node::onEnter(Node *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ComponentContainer *this_00;
  undefined8 *puVar3;
  
  if (this[0x1f8] == (Node)0x0) {
    __attachedNodeCount = __attachedNodeCount + 1;
  }
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJS(this,0), (uVar2 & 1) == 0)) {
    if (*(long **)(this + 0x250) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x250) + 0x30))();
    }
    this_00 = *(ComponentContainer **)(this + 0x210);
    if ((this_00 != (ComponentContainer *)0x0) && (*(long *)(this_00 + 0x18) != 0)) {
      ComponentContainer::onEnter(this_00);
    }
    puVar3 = *(undefined8 **)(this + 0x178);
    puVar1 = *(undefined8 **)(this + 0x180);
    this[0x1fc] = (Node)0x0;
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 800))();
    }
    (**(code **)(*(long *)this + 0x3c8))(this);
    this[0x1f8] = (Node)0x1;
    if (*(int *)(this + 0x208) == 1) {
      ScriptEngineManager::sendNodeEventToLua(this,0);
      return;
    }
  }
  return;
}

