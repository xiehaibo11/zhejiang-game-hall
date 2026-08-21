
/* cocos2d::LayerRadialGradient::create() */

LayerRadialGradient * cocos2d::LayerRadialGradient::create(void)

{
  LayerRadialGradient *this;
  undefined8 local_28;
  
  this = operator_new(0x3f0);
  LayerRadialGradient(this);
  local_28 = 0;
  initWithColor(this,(Color4B *)&Color4B::BLACK,(Color4B *)&Color4B::BLACK,0.0,(Vec2 *)&local_28,0.0
               );
  Ref::autorelease((Ref *)this);
  return this;
}

