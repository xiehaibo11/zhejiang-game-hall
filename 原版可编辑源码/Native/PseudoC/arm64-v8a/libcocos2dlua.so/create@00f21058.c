
/* cocos2d::MenuItemToggle::create() */

Node * cocos2d::MenuItemToggle::create(void)

{
  Node *this;
  
  this = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
                    /* catch() { ... } // from try @ 00f21180 with catch @ 00f2108c */
    *(undefined4 *)(this + 0x330) = 0;
    *(undefined ***)this = &PTR__MenuItemToggle_017060c8;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
  }
  initWithItem((MenuItemToggle *)this,(MenuItem *)0x0);
  Ref::autorelease((Ref *)this);
  return this;
}

