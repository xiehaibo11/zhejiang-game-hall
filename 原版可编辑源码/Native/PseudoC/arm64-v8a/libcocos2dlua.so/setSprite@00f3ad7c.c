
/* cocos2d::RenderTexture::setSprite(cocos2d::Sprite*) */

void __thiscall cocos2d::RenderTexture::setSprite(RenderTexture *this,Sprite *param_1)

{
  if (param_1 != (Sprite *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x380) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x380));
  }
  *(Sprite **)(this + 0x380) = param_1;
  return;
}

