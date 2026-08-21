
/* cocos2d::ProtectedNode::ProtectedNode() */

void __thiscall cocos2d::ProtectedNode::ProtectedNode(ProtectedNode *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0;
                    /* try { // try from 00f38c50 to 01038cc3 has its CatchHandler @ 00f38c50
                       catch(type#1 @ 00000000) { ... } // from try @ 00f38c50 with catch @ 00f38c50
                       catch(type#1 @ 00000000) { ... } // from try @ 00f38dcc with catch @ 00f38c50
                       catch(type#1 @ 00000000) { ... } // from try @ 00f38e3c with catch @ 00f38c50
                        */
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined ***)this = &PTR__ProtectedNode_0170f0d8;
  this[0x310] = (ProtectedNode)0x0;
  return;
}

