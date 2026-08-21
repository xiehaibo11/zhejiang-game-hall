
/* cocos2d::ParticleBatchNode::~ParticleBatchNode() */

void __thiscall cocos2d::ParticleBatchNode::~ParticleBatchNode(ParticleBatchNode *this)

{
  *(undefined ***)this = &PTR__ParticleBatchNode_01708450;
  *(undefined ***)(this + 0x2f8) = &PTR__ParticleBatchNode_017089b0;
  if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x300));
  }
  BatchCommand::~BatchCommand((BatchCommand *)(this + 0x310));
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

