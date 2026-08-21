
/* cocos2d::TMXLayer::create(cocos2d::TMXTilesetInfo*, cocos2d::TMXLayerInfo*, cocos2d::TMXMapInfo*)
    */

TMXLayer *
cocos2d::TMXLayer::create(TMXTilesetInfo *param_1,TMXLayerInfo *param_2,TMXMapInfo *param_3)

{
  TMXLayer *this;
  ulong uVar1;
  
  this = operator_new(0x440,(nothrow_t *)&std::nothrow);
  if (this != (TMXLayer *)0x0) {
    TMXLayer(this);
  }
  uVar1 = initWithTilesetInfo(this,param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    if (this != (TMXLayer *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TMXLayer *)0x0;
    }
  }
  else {
    Ref::autorelease((Ref *)this);
                    /* try { // try from 00f4c0d0 to 0104c0e7 has its CatchHandler @ 00f4d5b4 */
  }
                    /* try { // try from 00f4c0f8 to 0104c0ff has its CatchHandler @ 00f4d4d4 */
  return this;
}

