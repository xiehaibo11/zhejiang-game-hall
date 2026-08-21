
/* cocos2d::SpriteFrame::clone() const */

SpriteFrame * __thiscall cocos2d::SpriteFrame::clone(SpriteFrame *this)

{
  SpriteFrame *this_00;
  
  this_00 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (this_00 != (SpriteFrame *)0x0) {
    SpriteFrame(this_00);
  }
  initWithTexture(this_00,*(Texture2D **)(this + 0x90),this + 0x48,(bool)this[0x58],this + 0x7c,
                  (Size *)(this + 0x84));
  PolygonInfo::operator=((PolygonInfo *)(this_00 + 0xb0),(PolygonInfo *)(this + 0xb0));
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

