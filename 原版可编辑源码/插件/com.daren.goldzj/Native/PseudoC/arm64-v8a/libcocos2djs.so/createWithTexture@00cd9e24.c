
/* cocos2d::middleware::SpriteFrame::createWithTexture(cocos2d::middleware::Texture2D*,
   cocos2d::Rect const&) */

Ref * cocos2d::middleware::SpriteFrame::createWithTexture(Texture2D *param_1,Rect *param_2)

{
  Ref *this;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined ***)this = &PTR__SpriteFrame_01c8e1d0;
    Rect::Rect((Rect *)(this + 0x14));
    this[0x24] = (Ref)0x0;
    *(undefined8 *)(this + 0x28) = 0;
    Size::Size((Size *)(this + 0x30));
    *(undefined8 *)(this + 0x38) = 0;
  }
  *(Texture2D **)(this + 0x38) = param_1;
  if (param_1 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  Rect::operator=((Rect *)(this + 0x14),param_2);
  *(undefined8 *)(this + 0x28) = Vec2::ZERO;
  Size::operator=((Size *)(this + 0x30),(Size *)(param_2 + 8));
  this[0x24] = (Ref)0x0;
  *(undefined8 *)(this + 0xc) = 0x7fc000007fc00000;
  Ref::autorelease(this);
  return this;
}

