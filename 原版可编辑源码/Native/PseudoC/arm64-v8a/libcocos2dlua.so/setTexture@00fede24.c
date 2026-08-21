
/* cocos2d::TextureAtlas::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::TextureAtlas::setTexture(TextureAtlas *this,Texture2D *param_1)

{
  if (param_1 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fedd64 with catch @ 00fede4c
                        */
    Ref::release(*(Ref **)(this + 0x50));
  }
  *(Texture2D **)(this + 0x50) = param_1;
  return;
}

