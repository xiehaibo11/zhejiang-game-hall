
/* non-virtual thunk to cocos2d::ParticleBatchNode::~ParticleBatchNode() */

void __thiscall cocos2d::ParticleBatchNode::~ParticleBatchNode(ParticleBatchNode *this)

{
                    /* catch() { ... } // from try @ 00f2cc10 with catch @ 00f2ccc4 */
                    /* catch() { ... } // from try @ 00f2cb14 with catch @ 00f2ccc8 */
                    /* catch() { ... } // from try @ 00f2ca08 with catch @ 00f2cccc */
                    /* catch() { ... } // from try @ 00f2c8fc with catch @ 00f2ccd0 */
  *(undefined ***)(this + -0x2f8) = &PTR__ParticleBatchNode_01708450;
                    /* try { // try from 00f2ccec to 0102ce4f has its CatchHandler @ 00f2ccec
                       catch() { ... } // from try @ 00f2ccec with catch @ 00f2ccec
                       catch() { ... } // from try @ 00f2cff0 with catch @ 00f2ccec */
  *(undefined ***)this = &PTR__ParticleBatchNode_017089b0;
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  BatchCommand::~BatchCommand((BatchCommand *)(this + 0x18));
  Node::~Node((Node *)(this + -0x2f8));
  return;
}

