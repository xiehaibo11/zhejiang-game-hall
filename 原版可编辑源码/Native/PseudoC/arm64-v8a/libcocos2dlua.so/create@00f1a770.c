
/* cocos2d::PointLight::create(cocos2d::Vec3 const&, cocos2d::Color3B const&, float) */

Node * cocos2d::PointLight::create(Vec3 *param_1,Color3B *param_2,float param_3)

{
  Node *this;
  
  this = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x2f8) = 0x13f800000;
    this[0x300] = (Node)0x1;
    *(undefined ***)this = &PTR__AmbientLight_01702d18;
  }
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  (**(code **)(*(long *)this + 0x4c0))(this,param_2);
  *(float *)(this + 0x304) = param_3;
  Ref::autorelease((Ref *)this);
  return this;
}

