
/* cocos2d::AmbientLight::create(cocos2d::Color3B const&) */

Node * cocos2d::AmbientLight::create(Color3B *param_1)

{
  Node *this;
  
  this = operator_new(0x310,(nothrow_t *)&std::nothrow);
  Node::Node(this);
  *(undefined8 *)(this + 0x2f8) = 0x13f800000;
  this[0x300] = (Node)0x1;
  *(undefined ***)this = &PTR__AmbientLight_017037a8;
  Node::setColor(this,param_1);
  Ref::autorelease((Ref *)this);
  return this;
}

