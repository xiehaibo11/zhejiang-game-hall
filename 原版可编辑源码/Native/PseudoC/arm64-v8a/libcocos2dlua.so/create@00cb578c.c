
/* cocostudio::timeline::BoneNode::create(int) */

BoneNode * cocostudio::timeline::BoneNode::create(int param_1)

{
  BoneNode *this;
  ulong uVar1;
  
  this = operator_new(0x440,(nothrow_t *)&std::nothrow);
  if (this != (BoneNode *)0x0) {
    BoneNode(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (BoneNode *)0x0;
    }
    else {
      (**(code **)(*(long *)this + 0x5a0))((float)param_1,this);
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

