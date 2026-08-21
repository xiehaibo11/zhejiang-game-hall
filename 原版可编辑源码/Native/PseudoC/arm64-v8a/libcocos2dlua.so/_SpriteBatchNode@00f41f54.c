
/* cocos2d::SpriteBatchNode::~SpriteBatchNode() */

void __thiscall cocos2d::SpriteBatchNode::~SpriteBatchNode(SpriteBatchNode *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__SpriteBatchNode_01710b20;
  *(undefined ***)(this + 0x2f8) = &PTR__SpriteBatchNode_01711080;
  if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x300));
  }
  pvVar1 = *(void **)(this + 0x388);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x390) = pvVar1;
    operator_delete(pvVar1);
  }
  BatchCommand::~BatchCommand((BatchCommand *)(this + 0x310));
  Node::~Node((Node *)this);
  return;
}

