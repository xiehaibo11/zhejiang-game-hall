
/* cocos2d::SpriteFrame::createWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&, bool,
   cocos2d::Vec2 const&, cocos2d::Size const&) */

SpriteFrame *
cocos2d::SpriteFrame::createWithTexture
          (Texture2D *param_1,Rect *param_2,bool param_3,Vec2 *param_4,Size *param_5)

{
  SpriteFrame *this;
  
  this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (this != (SpriteFrame *)0x0) {
    SpriteFrame(this);
    initWithTexture(this,param_1,param_2,param_3,param_4,param_5);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

