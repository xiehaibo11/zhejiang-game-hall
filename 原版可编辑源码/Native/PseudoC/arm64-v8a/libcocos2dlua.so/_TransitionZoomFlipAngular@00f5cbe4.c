
/* cocos2d::TransitionZoomFlipAngular::~TransitionZoomFlipAngular() */

void __thiscall
cocos2d::TransitionZoomFlipAngular::~TransitionZoomFlipAngular(TransitionZoomFlipAngular *this)

{
                    /* catch() { ... } // from try @ 00f5c838 with catch @ 00f5cbe4 */
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
  operator_delete(this);
  return;
}

