
/* cocos2d::SpriteBatchNode::SpriteBatchNode() */

void __thiscall cocos2d::SpriteBatchNode::SpriteBatchNode(SpriteBatchNode *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined ***)this = &PTR__SpriteBatchNode_01710b20;
  *(undefined ***)(this + 0x2f8) = &PTR__SpriteBatchNode_01711080;
  BatchCommand::BatchCommand((BatchCommand *)(this + 0x310));
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  return;
}

