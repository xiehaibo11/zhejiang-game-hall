
/* cocos2d::RenderTexture::setVirtualViewport(cocos2d::Vec2 const&, cocos2d::Rect const&,
   cocos2d::Rect const&) */

void __thiscall
cocos2d::RenderTexture::setVirtualViewport
          (RenderTexture *this,Vec2 *param_1,Rect *param_2,Rect *param_3)

{
  *(undefined8 *)(this + 0x2fc) = *(undefined8 *)param_1;
  Rect::operator=((Rect *)(this + 0x30c),(Rect *)param_2);
  Rect::operator=((Rect *)(this + 0x31c),(Rect *)param_3);
  return;
}

