
/* cocos2d::middleware::SpriteFrame::initWithTexture(cocos2d::middleware::Texture2D*, cocos2d::Rect
   const&) */

undefined8 __thiscall
cocos2d::middleware::SpriteFrame::initWithTexture
          (SpriteFrame *this,Texture2D *param_1,Rect *param_2)

{
  *(Texture2D **)(this + 0x38) = param_1;
  if (param_1 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  Rect::operator=((Rect *)(this + 0x14),param_2);
  *(undefined8 *)(this + 0x28) = Vec2::ZERO;
  Size::operator=((Size *)(this + 0x30),(Size *)(param_2 + 8));
  this[0x24] = (SpriteFrame)0x0;
  *(undefined8 *)(this + 0xc) = 0x7fc000007fc00000;
  return 1;
}

