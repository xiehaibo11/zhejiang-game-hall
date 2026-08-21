
/* cocos2d::TransitionMoveInT::~TransitionMoveInT() */

void __thiscall cocos2d::TransitionMoveInT::~TransitionMoveInT(TransitionMoveInT *this)

{
                    /* catch() { ... } // from try @ 00f59624 with catch @ 00f59c24 */
                    /* catch() { ... } // from try @ 00f596a8 with catch @ 00f59c2c
                       catch() { ... } // from try @ 00f597a0 with catch @ 00f59c2c */
                    /* catch() { ... } // from try @ 00f5998c with catch @ 00f59c30 */
                    /* catch() { ... } // from try @ 00f59a4c with catch @ 00f59c38 */
                    /* catch() { ... } // from try @ 00f599c4 with catch @ 00f59c3c */
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
                    /* catch() { ... } // from try @ 00f59944 with catch @ 00f59c40 */
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00f598d8 with catch @ 00f59c44 */
    Ref::release(*(Ref **)(this + 0x370));
  }
                    /* catch() { ... } // from try @ 00f599ac with catch @ 00f59c4c */
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
  operator_delete(this);
  return;
}

