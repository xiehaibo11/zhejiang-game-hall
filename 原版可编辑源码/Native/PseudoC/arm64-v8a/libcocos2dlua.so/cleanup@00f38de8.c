
/* cocos2d::ProtectedNode::cleanup() */

void __thiscall cocos2d::ProtectedNode::cleanup(ProtectedNode *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,4), (uVar1 & 1) == 0)) {
    Node::cleanup((Node *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38dac with catch @ 00f38e1c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38cc4 with catch @ 00f38e20
                        */
    puVar2 = *(undefined8 **)(this + 0x300);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38d18 with catch @ 00f38e24
                        */
    for (puVar3 = *(undefined8 **)(this + 0x2f8); puVar3 != puVar2; puVar3 = puVar3 + 1) {
                    /* try { // try from 00f38e38 to 01038e3b has its CatchHandler @ 00f38e60 */
      (**(code **)(*(long *)*puVar3 + 0x340))();
                    /* try { // try from 00f38e3c to 01038e93 has its CatchHandler @ 00f38c50 */
    }
  }
  return;
}

