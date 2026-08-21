
/* cocos2d::ProtectedNode::create() */

Node * cocos2d::ProtectedNode::create(void)

{
  Node *this;
  ulong uVar1;
  
  this = operator_new(800,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined ***)this = &PTR__ProtectedNode_0170f0d8;
    this[0x310] = (Node)0x0;
    uVar1 = Node::init();
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00f38dac to 01038db3 has its CatchHandler @ 00f38e1c */
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00f38dc8 to 01038dcb has its CatchHandler @ 00f38e80 */
  return this;
}

