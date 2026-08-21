
/* cocos2d::ProtectedNode::~ProtectedNode() */

void __thiscall cocos2d::ProtectedNode::~ProtectedNode(ProtectedNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__ProtectedNode_0170f0d8;
  removeAllProtectedChildrenWithCleanup(this,true);
  puVar1 = *(undefined8 **)(this + 0x2f8);
  puVar2 = *(undefined8 **)(this + 0x300);
  if (puVar1 != puVar2) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
                    /* try { // try from 00f38cc4 to 01038ccb has its CatchHandler @ 00f38e20 */
    puVar1 = *(undefined8 **)(this + 0x2f8);
  }
  *(undefined8 **)(this + 0x300) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x300) = puVar1;
    operator_delete(puVar1);
  }
                    /* try { // try from 00f38cdc to 01038cdf has its CatchHandler @ 00f38e64 */
  Node::~Node((Node *)this);
  return;
}

