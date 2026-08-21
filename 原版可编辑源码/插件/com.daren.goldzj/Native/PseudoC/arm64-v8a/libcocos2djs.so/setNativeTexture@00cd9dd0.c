
/* cocos2d::middleware::Texture2D::setNativeTexture(cocos2d::renderer::Texture*) */

void __thiscall cocos2d::middleware::Texture2D::setNativeTexture(Texture2D *this,Texture *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x50);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Texture **)(this + 0x50) = param_1;
    if (param_1 != (Texture *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

