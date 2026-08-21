
/* cocos2d::Follow::createWithOffset(cocos2d::Node*, float, float, cocos2d::Rect const&) */

Follow * cocos2d::Follow::createWithOffset(Node *param_1,float param_2,float param_3,Rect *param_4)

{
  Follow *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ecb800 with catch @ 00ecb87c */
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this != (Follow *)0x0) {
                    /* catch() { ... } // from try @ 00ecb7ec with catch @ 00ecb89c */
    Follow(this);
    uVar1 = initWithTargetAndOffset(this,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Follow *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00ecb7d8 with catch @ 00ecb8bc */
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00ecb7c4 with catch @ 00ecb8dc */
  return this;
}

