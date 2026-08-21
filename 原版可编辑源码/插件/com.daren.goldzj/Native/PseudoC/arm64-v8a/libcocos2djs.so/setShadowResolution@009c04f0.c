
/* cocos2d::renderer::Light::setShadowResolution(unsigned int) */

void __thiscall cocos2d::renderer::Light::setShadowResolution(Light *this,uint param_1)

{
  if (*(uint *)(this + 0x80) != param_1) {
    this[0x70] = (Light)0x1;
                    /* try { // try from 009c0504 to 00ac05e7 has its CatchHandler @ 009c035c */
    *(uint *)(this + 0x80) = param_1;
  }
  return;
}

