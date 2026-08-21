
/* cocos2d::experimental::TMXLayer::create(cocos2d::TMXTilesetInfo*, cocos2d::TMXLayerInfo*,
   cocos2d::TMXMapInfo*) */

TMXLayer *
cocos2d::experimental::TMXLayer::create
          (TMXTilesetInfo *param_1,TMXLayerInfo *param_2,TMXMapInfo *param_3)

{
  TMXLayer *this;
  
  this = operator_new(0x4d0,(nothrow_t *)&std::nothrow);
  if (this != (TMXLayer *)0x0) {
    TMXLayer(this);
  }
  initWithTilesetInfo(this,param_1,param_2,param_3);
  Ref::autorelease((Ref *)this);
  return this;
}

