
/* cocos2d::renderer::Light::setShadowType(cocos2d::renderer::Light::ShadowType) */

void __thiscall cocos2d::renderer::Light::setShadowType(Light *this,int param_2)

{
  if ((param_2 != 0) && (*(int *)(this + 0x58) == 0)) {
    this[0x70] = (Light)0x1;
  }
  *(int *)(this + 0x58) = param_2;
  return;
}

