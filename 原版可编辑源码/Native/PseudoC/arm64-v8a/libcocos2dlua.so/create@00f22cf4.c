
/* cocos2d::Node::create() */

Node * cocos2d::Node::create(void)

{
  Node *this;
  ulong uVar1;
  
  this = operator_new(0x300,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
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

