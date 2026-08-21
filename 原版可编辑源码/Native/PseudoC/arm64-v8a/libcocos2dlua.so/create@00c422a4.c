
/* cocostudio::BatchNode::create() */

Node * cocostudio::BatchNode::create(void)

{
  Node *this;
  ulong uVar1;
  
  this = operator_new(0x300,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    cocos2d::Node::Node(this);
    *(undefined8 *)(this + 0x2f8) = 0;
    *(undefined ***)this = &PTR__BatchNode_016c9028;
    uVar1 = init((BatchNode *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

