
/* cocos2d::ClippingNode::create(cocos2d::Node*) */

ClippingNode * cocos2d::ClippingNode::create(Node *param_1)

{
  ClippingNode *this;
  ulong uVar1;
  
  this = operator_new(0x420,(nothrow_t *)&std::nothrow);
  if (this != (ClippingNode *)0x0) {
    ClippingNode(this);
    uVar1 = (**(code **)(*(long *)this + 0x538))(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ClippingNode *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

