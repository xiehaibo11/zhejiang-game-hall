
/* cocos2d::TransitionFlipAngular::~TransitionFlipAngular() */

void __thiscall cocos2d::TransitionFlipAngular::~TransitionFlipAngular(TransitionFlipAngular *this)

{
                    /* catch() { ... } // from try @ 00f5be28 with catch @ 00f5bf04 */
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
                    /* catch() { ... } // from try @ 00f5be18 with catch @ 00f5bf24 */
  Scene::~Scene((Scene *)this);
                    /* catch() { ... } // from try @ 00f5be6c with catch @ 00f5bf2c */
  operator_delete(this);
  return;
}

