
/* cocos2d::renderer::Light::getShadowMaxDepth() const */

undefined4 __thiscall cocos2d::renderer::Light::getShadowMaxDepth(Light *this)

{
  if (*(int *)(this + 0xc) != 0) {
    return *(undefined4 *)(this + 0x90);
  }
  return 0x3f800000;
}

