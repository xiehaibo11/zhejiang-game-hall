
/* cocos2d::ProtectedNode::onExitTransitionDidStart() */

void __thiscall cocos2d::ProtectedNode::onExitTransitionDidStart(ProtectedNode *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00f39800 to 01039807 has its CatchHandler @ 00f398d0 */
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,3), (uVar1 & 1) == 0)) {
                    /* try { // try from 00f3982c to 01039867 has its CatchHandler @ 00f398e8 */
    Node::onExitTransitionDidStart((Node *)this);
    puVar2 = *(undefined8 **)(this + 0x300);
    for (puVar3 = *(undefined8 **)(this + 0x2f8); puVar3 != puVar2; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x338))();
    }
  }
  return;
}

