
/* cocos2d::SpriteBatchNode::init() */

void __thiscall cocos2d::SpriteBatchNode::init(SpriteBatchNode *this)

{
  Texture2D *this_00;
  
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this_00 != (Texture2D *)0x0) {
    Texture2D::Texture2D(this_00);
  }
  Ref::autorelease((Ref *)this_00);
  initWithTexture(this,this_00,0);
  return;
}

