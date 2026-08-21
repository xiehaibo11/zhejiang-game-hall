
/* cocos2d::middleware::SpriteFrame::initWithTexture(cocos2d::middleware::Texture2D*, cocos2d::Rect
   const&, bool, cocos2d::Vec2 const&, cocos2d::Size const&) */

undefined8 __thiscall
cocos2d::middleware::SpriteFrame::initWithTexture
          (SpriteFrame *this,Texture2D *param_1,Rect *param_2,bool param_3,Vec2 *param_4,
          Size *param_5)

{
  *(Texture2D **)(this + 0x38) = param_1;
  if (param_1 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  Rect::operator=((Rect *)(this + 0x14),param_2);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)param_4;
  Size::operator=((Size *)(this + 0x30),param_5);
  this[0x24] = (SpriteFrame)param_3;
  *(undefined8 *)(this + 0xc) = 0x7fc000007fc00000;
  return 1;
}

