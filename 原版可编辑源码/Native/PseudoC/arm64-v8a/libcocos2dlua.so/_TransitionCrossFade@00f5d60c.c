
/* cocos2d::TransitionCrossFade::~TransitionCrossFade() */

void __thiscall cocos2d::TransitionCrossFade::~TransitionCrossFade(TransitionCrossFade *this)

{
                    /* catch() { ... } // from try @ 00f5d328 with catch @ 00f5d618 */
                    /* catch() { ... } // from try @ 00f5d30c with catch @ 00f5d61c
                       catch() { ... } // from try @ 00f5d394 with catch @ 00f5d61c */
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

