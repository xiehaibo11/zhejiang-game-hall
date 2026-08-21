
/* cocos2d::ProtectedNode::onEnter() */

void __thiscall cocos2d::ProtectedNode::onEnter(ProtectedNode *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00f39748 to 010397e3 has its CatchHandler @ 00f39748
                       catch() { ... } // from try @ 00f39748 with catch @ 00f39748
                       catch() { ... } // from try @ 00f39868 with catch @ 00f39748 */
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) == 0)) {
    Node::onEnter((Node *)this);
    puVar2 = *(undefined8 **)(this + 0x300);
    for (puVar3 = *(undefined8 **)(this + 0x2f8); puVar3 != puVar2; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 800))();
    }
  }
  return;
}

