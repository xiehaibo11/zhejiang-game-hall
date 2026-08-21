
/* cocos2d::TransitionFade::create(float, cocos2d::Scene*) */

TransitionFade * cocos2d::TransitionFade::create(float param_1,Scene *param_2)

{
  TransitionFade *this;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (TransitionFade *)0x0) {
    TransitionFade(this);
  }
  initWithDuration(this,param_1,param_2,(Color3B *)&Color3B::BLACK);
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00f5d2b4 to 0105d2bf has its CatchHandler @ 00f5d5fc */
  return this;
}

