
/* cocos2d::ClippingRectangleNode::create(cocos2d::Rect const&) */

ClippingRectangleNode * cocos2d::ClippingRectangleNode::create(Rect *param_1)

{
  ClippingRectangleNode *this;
  ulong uVar1;
  
  this = operator_new(0x3b0,(nothrow_t *)&std::nothrow);
  if (this != (ClippingRectangleNode *)0x0) {
    ClippingRectangleNode(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ClippingRectangleNode *)0x0;
    }
    else {
      Rect::operator=((Rect *)(this + 0x2f8),(Rect *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

