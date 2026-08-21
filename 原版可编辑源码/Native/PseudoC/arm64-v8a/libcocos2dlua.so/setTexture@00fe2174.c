
/* cocos2d::RenderState::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::RenderState::setTexture(RenderState *this,Texture2D *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x58);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Texture2D **)(this + 0x58) = param_1;
    if (param_1 != (Texture2D *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

