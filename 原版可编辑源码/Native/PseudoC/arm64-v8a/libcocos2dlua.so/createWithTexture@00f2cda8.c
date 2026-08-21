
/* cocos2d::ParticleBatchNode::createWithTexture(cocos2d::Texture2D*, int) */

Node * cocos2d::ParticleBatchNode::createWithTexture(Texture2D *param_1,int param_2)

{
  Node *this;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined ***)this = &PTR__ParticleBatchNode_01708450;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleBatchNode_017089b0;
    BatchCommand::BatchCommand((BatchCommand *)(this + 0x310));
    initWithTexture((ParticleBatchNode *)this,param_1,param_2);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

