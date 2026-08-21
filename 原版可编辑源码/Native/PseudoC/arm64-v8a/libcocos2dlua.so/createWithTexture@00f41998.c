
/* cocos2d::SpriteBatchNode::createWithTexture(cocos2d::Texture2D*, long) */

Node * cocos2d::SpriteBatchNode::createWithTexture(Texture2D *param_1,long param_2)

{
  Node *this;
  ulong uVar1;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined ***)this = &PTR__SpriteBatchNode_01710b20;
    *(undefined ***)(this + 0x2f8) = &PTR__SpriteBatchNode_01711080;
    BatchCommand::BatchCommand((BatchCommand *)(this + 0x310));
    *(undefined8 *)(this + 0x398) = 0;
    *(undefined8 *)(this + 0x390) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    uVar1 = initWithTexture((SpriteBatchNode *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

