
/* cocos2d::LayerColor::create(cocos2d::Color4B const&, float, float) */

LayerColor * cocos2d::LayerColor::create(Color4B *param_1,float param_2,float param_3)

{
  LayerColor *this;
  
  this = operator_new(0x410,(nothrow_t *)&std::nothrow);
  if (this != (LayerColor *)0x0) {
    LayerColor(this);
    initWithColor(this,param_1,param_2,param_3);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

