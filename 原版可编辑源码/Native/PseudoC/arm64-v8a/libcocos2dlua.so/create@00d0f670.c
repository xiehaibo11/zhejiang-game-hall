
/* cocos2d::AttachNode::create(cocos2d::Bone3D*) */

Node * cocos2d::AttachNode::create(Bone3D *param_1)

{
  Node *this;
  
  this = operator_new(0x340,(nothrow_t *)&std::nothrow);
  Node::Node(this);
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined ***)this = &PTR__AttachNode_016d2128;
  Mat4::Mat4((Mat4 *)(this + 0x300));
  *(Bone3D **)(this + 0x2f8) = param_1;
  Ref::autorelease((Ref *)this);
  return this;
}

