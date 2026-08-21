
/* cocos2d::LayerRadialGradient::create(cocos2d::Color4B const&, cocos2d::Color4B const&, float,
   cocos2d::Vec2 const&, float) */

LayerRadialGradient *
cocos2d::LayerRadialGradient::create
          (Color4B *param_1,Color4B *param_2,float param_3,Vec2 *param_4,float param_5)

{
  LayerRadialGradient *this;
  
  this = operator_new(0x3f0);
  LayerRadialGradient(this);
  initWithColor(this,param_1,param_2,param_3,param_4,param_5);
  Ref::autorelease((Ref *)this);
  return this;
}

