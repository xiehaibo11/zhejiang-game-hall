
/* cocos2d::ProtectedNode::onEnterTransitionDidFinish() */

void __thiscall cocos2d::ProtectedNode::onEnterTransitionDidFinish(ProtectedNode *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,2), (uVar1 & 1) == 0)) {
    Node::onEnterTransitionDidFinish((Node *)this);
    puVar2 = *(undefined8 **)(this + 0x300);
    for (puVar3 = *(undefined8 **)(this + 0x2f8); puVar3 != puVar2; puVar3 = puVar3 + 1) {
                    /* try { // try from 00f397e4 to 010397eb has its CatchHandler @ 00f398e4 */
      (**(code **)(*(long *)*puVar3 + 0x328))();
                    /* try { // try from 00f397ec to 010397f7 has its CatchHandler @ 00f398d4 */
    }
  }
  return;
}

