
/* cocos2d::ClippingNode::create() */

ClippingNode * cocos2d::ClippingNode::create(void)

{
  ClippingNode *this;
  ulong uVar1;
  
  this = operator_new(0x420,(nothrow_t *)&std::nothrow);
  if (this != (ClippingNode *)0x0) {
    ClippingNode(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
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

