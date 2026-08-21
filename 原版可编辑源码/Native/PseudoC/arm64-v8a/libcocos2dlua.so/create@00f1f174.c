
/* cocos2d::MenuItemSprite::create(cocos2d::Node*, cocos2d::Node*, std::__ndk1::function<void
   (cocos2d::Ref*)> const&) */

Node * cocos2d::MenuItemSprite::create(Node *param_1,Node *param_2,function *param_3)

{
  Node *this;
  
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined ***)this = &PTR__MenuItem_017055a8;
  }
  initWithNormalSprite((MenuItemSprite *)this,param_1,param_2,(Node *)0x0,param_3);
  Ref::autorelease((Ref *)this);
  return this;
}

