
/* cocos2d::renderer::Light::destroyShadowMap() */

void __thiscall cocos2d::renderer::Light::destroyShadowMap(Light *this)

{
                    /* catch() { ... } // from try @ 009c09e4 with catch @ 009c0b04 */
                    /* catch() { ... } // from try @ 009c09d8 with catch @ 009c0b08 */
                    /* catch() { ... } // from try @ 009c09b8 with catch @ 009c0b0c */
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 009c09f0 with catch @ 009c0b1c */
    Ref::release(*(Ref **)(this + 0x68));
    *(undefined8 *)(this + 0x68) = 0;
    if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x78));
    }
    *(undefined8 *)(this + 0x78) = 0;
    if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x60));
    }
    *(undefined8 *)(this + 0x60) = 0;
  }
  return;
}

