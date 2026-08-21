
/* cocos2d::ProtectedNode::onExit() */

void __thiscall cocos2d::ProtectedNode::onExit(ProtectedNode *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00f39868 to 010398fb has its CatchHandler @ 00f39748 */
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) == 0)) {
    Node::onExit((Node *)this);
    puVar2 = *(undefined8 **)(this + 0x300);
    for (puVar3 = *(undefined8 **)(this + 0x2f8); puVar3 != puVar2; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x330))();
    }
  }
  return;
}

