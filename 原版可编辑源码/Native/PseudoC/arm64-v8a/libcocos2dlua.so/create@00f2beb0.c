
/* cocos2d::NodeGrid::create(cocos2d::Rect const&) */

NodeGrid * cocos2d::NodeGrid::create(Rect *param_1)

{
  NodeGrid *this;
  ulong uVar1;
  
  this = operator_new(0x3e0,(nothrow_t *)&std::nothrow);
  if (this != (NodeGrid *)0x0) {
    NodeGrid(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (NodeGrid *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
      Rect::operator=((Rect *)(this + 0x3d0),(Rect *)param_1);
    }
  }
  return this;
}

