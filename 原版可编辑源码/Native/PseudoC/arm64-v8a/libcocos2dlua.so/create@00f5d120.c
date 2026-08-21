
/* cocos2d::TransitionFade::create(float, cocos2d::Scene*, cocos2d::Color3B const&) */

TransitionFade * cocos2d::TransitionFade::create(float param_1,Scene *param_2,Color3B *param_3)

{
  TransitionFade *this;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (TransitionFade *)0x0) {
    TransitionFade(this);
  }
  initWithDuration(this,param_1,param_2,param_3);
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00f5d17c to 0105d193 has its CatchHandler @ 00f5d570 */
  return this;
}

