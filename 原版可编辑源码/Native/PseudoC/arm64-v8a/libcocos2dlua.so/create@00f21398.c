
/* cocos2d::MenuItemToggle::create(cocos2d::MenuItem*) */

Node * cocos2d::MenuItemToggle::create(MenuItem *param_1)

{
  Node *this;
  
  this = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined4 *)(this + 0x330) = 0;
    *(undefined ***)this = &PTR__MenuItemToggle_017060c8;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
  }
  initWithItem((MenuItemToggle *)this,param_1);
  Ref::autorelease((Ref *)this);
  return this;
}

