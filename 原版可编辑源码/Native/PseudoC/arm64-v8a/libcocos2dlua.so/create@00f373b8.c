
/* cocos2d::ProgressTimer::create(cocos2d::Sprite*) */

Node * cocos2d::ProgressTimer::create(Sprite *param_1)

{
  Node *this;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 800) = 0;
    *(undefined ***)this = &PTR__ProgressTimer_0170eae8;
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined8 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 0x310) = 0;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined4 *)(this + 0x318) = 0;
    CustomCommand::CustomCommand((CustomCommand *)(this + 0x330));
    this[0x380] = (Node)0x0;
    initWithSprite((ProgressTimer *)this,param_1);
    Ref::autorelease((Ref *)this);
  }
                    /* catch() { ... } // from try @ 00f37488 with catch @ 00f37434 */
  return this;
}

