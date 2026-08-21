
/* cocos2d::MenuItemLabel::create(cocos2d::Node*, std::__ndk1::function<void (cocos2d::Ref*)>
   const&) */

Node * cocos2d::MenuItemLabel::create(Node *param_1,function *param_2)

{
  Node *this;
  
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined ***)this = &PTR__MenuItem_01705020;
    Color3B::Color3B((Color3B *)(this + 0x330));
    *(undefined4 *)(this + 0x334) = 0;
    Color3B::Color3B((Color3B *)(this + 0x338));
    *(undefined8 *)(this + 0x340) = 0;
  }
  initWithLabel((MenuItemLabel *)this,param_1,param_2);
  Ref::autorelease((Ref *)this);
  return this;
}

