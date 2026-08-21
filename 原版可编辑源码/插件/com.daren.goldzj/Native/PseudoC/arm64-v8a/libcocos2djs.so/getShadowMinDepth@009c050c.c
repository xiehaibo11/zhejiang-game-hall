
/* cocos2d::renderer::Light::getShadowMinDepth() const */

undefined4 __thiscall cocos2d::renderer::Light::getShadowMinDepth(Light *this)

{
  if (*(int *)(this + 0xc) != 0) {
    return *(undefined4 *)(this + 0x8c);
  }
  return 0x3f800000;
}

