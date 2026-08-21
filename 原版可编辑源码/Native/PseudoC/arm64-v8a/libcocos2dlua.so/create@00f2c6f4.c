
/* cocos2d::ParallaxNode::create() */

Node * cocos2d::ParallaxNode::create(void)

{
  Node *this;
  undefined8 uVar1;
  
  this = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x2f8) = 0;
    *(undefined ***)this = &PTR__ParallaxNode_01707ec0;
    uVar1 = ccArrayNew(5);
                    /* try { // try from 00f2c744 to 0102c8fb has its CatchHandler @ 00f2c744
                       catch() { ... } // from try @ 00f2c744 with catch @ 00f2c744
                       catch() { ... } // from try @ 00f2c904 with catch @ 00f2c744
                       catch() { ... } // from try @ 00f2ca10 with catch @ 00f2c744
                       catch() { ... } // from try @ 00f2cb1c with catch @ 00f2c744
                       catch() { ... } // from try @ 00f2cc18 with catch @ 00f2c744 */
    *(undefined8 *)(this + 0x300) = uVar1;
    *(undefined8 *)(this + 0x2f8) = 0xc2c80000c2c80000;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

