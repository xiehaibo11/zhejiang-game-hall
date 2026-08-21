
/* cocostudio::timeline::SkeletonNode::create() */

SkeletonNode * cocostudio::timeline::SkeletonNode::create(void)

{
  SkeletonNode *this;
  ulong uVar1;
  
  this = operator_new(0x650,(nothrow_t *)&std::nothrow);
  if (this != (SkeletonNode *)0x0) {
    SkeletonNode(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (SkeletonNode *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

